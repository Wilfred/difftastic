#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 244
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

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
  aux_sym_boolean_literal_token1 = 19,
  aux_sym_boolean_literal_token2 = 20,
  aux_sym_boolean_literal_token3 = 21,
  aux_sym_boolean_literal_token4 = 22,
  sym_integer_literal = 23,
  sym_float_literal = 24,
  aux_sym__long_string_literal_token1 = 25,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 26,
  anon_sym_r_DQUOTE = 27,
  aux_sym__raw_string_literal_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym__interpreted_string_literal_token1 = 30,
  sym_escape_sequence = 31,
  anon_sym_DQUOTE_DQUOTE = 32,
  sym__indent_start = 33,
  sym__indent = 34,
  sym__indent_eq = 35,
  sym__dedent = 36,
  sym__long_string_content = 37,
  sym_source_file = 38,
  sym__statement = 39,
  sym_expression_statement = 40,
  sym__declaration = 41,
  sym_const_section = 42,
  sym_var_section = 43,
  sym_let_section = 44,
  sym_type_section = 45,
  sym_variable_declaration = 46,
  sym__variable_name_declaration = 47,
  sym_tuple_deconstruct_declaration = 48,
  sym_type_declaration = 49,
  sym__type = 50,
  sym_tuple_type = 51,
  sym_object_type = 52,
  sym_field_declaration_list = 53,
  sym_field_declaration = 54,
  sym__symbol_declaration = 55,
  sym_exported_symbol = 56,
  sym_distinct_type = 57,
  sym_ref_type = 58,
  sym_expression = 59,
  sym__literal = 60,
  sym_boolean_literal = 61,
  sym_string_literal = 62,
  sym__long_string_literal = 63,
  sym__raw_string_literal = 64,
  sym__interpreted_string_literal = 65,
  sym__escaped_double_quote = 66,
  sym_tuple = 67,
  sym__type_identifier = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_const_section_repeat1 = 70,
  aux_sym_type_section_repeat1 = 71,
  aux_sym_variable_declaration_repeat1 = 72,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 73,
  aux_sym_field_declaration_list_repeat1 = 74,
  aux_sym_field_declaration_list_repeat2 = 75,
  aux_sym_field_declaration_repeat1 = 76,
  aux_sym__long_string_literal_repeat1 = 77,
  aux_sym__raw_string_literal_repeat1 = 78,
  aux_sym__interpreted_string_literal_repeat1 = 79,
  aux_sym_tuple_repeat1 = 80,
  alias_sym_type_identifier = 81,
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
  [aux_sym__long_string_literal_repeat1] = "_long_string_literal_repeat1",
  [aux_sym__raw_string_literal_repeat1] = "_raw_string_literal_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [aux_sym__long_string_literal_repeat1] = aux_sym__long_string_literal_repeat1,
  [aux_sym__raw_string_literal_repeat1] = aux_sym__raw_string_literal_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
  [aux_sym_tuple_repeat1] = aux_sym_tuple_repeat1,
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
  [aux_sym_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
  field_type = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [4] =
    {field_name, 1},
  [5] =
    {field_name, 1, .inherited = true},
  [6] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
  [8] =
    {field_name, 0, .inherited = true},
    {field_value, 2},
  [10] =
    {field_name, 0},
    {field_type, 2},
  [12] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [14] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [17] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 3},
  [20] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
    {field_value, 4},
  [23] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(59);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '{') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '"') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 28:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(72);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(76);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_field_declaration_list_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '6') ADVANCE(53);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '2') ADVANCE(57);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '4') ADVANCE(57);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '8') ADVANCE(57);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(56);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__long_string_literal_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_r_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(77);
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
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 36, .external_lex_state = 3},
  [33] = {.lex_state = 36, .external_lex_state = 4},
  [34] = {.lex_state = 36, .external_lex_state = 3},
  [35] = {.lex_state = 21, .external_lex_state = 5},
  [36] = {.lex_state = 36, .external_lex_state = 3},
  [37] = {.lex_state = 21, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 36, .external_lex_state = 4},
  [40] = {.lex_state = 21, .external_lex_state = 5},
  [41] = {.lex_state = 0, .external_lex_state = 7},
  [42] = {.lex_state = 36, .external_lex_state = 4},
  [43] = {.lex_state = 36, .external_lex_state = 4},
  [44] = {.lex_state = 36, .external_lex_state = 3},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 36, .external_lex_state = 4},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 36, .external_lex_state = 3},
  [49] = {.lex_state = 36, .external_lex_state = 3},
  [50] = {.lex_state = 36, .external_lex_state = 4},
  [51] = {.lex_state = 36, .external_lex_state = 4},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21, .external_lex_state = 5},
  [54] = {.lex_state = 36, .external_lex_state = 3},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 22, .external_lex_state = 8},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 5},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 36},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 36},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 5},
  [105] = {.lex_state = 36},
  [106] = {.lex_state = 36},
  [107] = {.lex_state = 36},
  [108] = {.lex_state = 22, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 36},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 36},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 36},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 22, .external_lex_state = 8},
  [124] = {.lex_state = 21},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 36},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 22, .external_lex_state = 8},
  [133] = {.lex_state = 22, .external_lex_state = 8},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 36},
  [136] = {.lex_state = 22, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 22, .external_lex_state = 8},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 21, .external_lex_state = 5},
  [143] = {.lex_state = 36},
  [144] = {.lex_state = 0, .external_lex_state = 5},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 21},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 36},
  [163] = {.lex_state = 36},
  [164] = {.lex_state = 36},
  [165] = {.lex_state = 36},
  [166] = {.lex_state = 36},
  [167] = {.lex_state = 36},
  [168] = {.lex_state = 36},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 36},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 36},
  [174] = {.lex_state = 36},
  [175] = {.lex_state = 0, .external_lex_state = 4},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 21},
  [178] = {.lex_state = 21},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 0, .external_lex_state = 4},
  [181] = {.lex_state = 0, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 4},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 4},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 4},
  [187] = {.lex_state = 0, .external_lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 36},
  [191] = {.lex_state = 21},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 4},
  [194] = {.lex_state = 21},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 21},
  [198] = {.lex_state = 21},
  [199] = {.lex_state = 21},
  [200] = {.lex_state = 36},
  [201] = {.lex_state = 0, .external_lex_state = 3},
  [202] = {.lex_state = 0, .external_lex_state = 4},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 3},
  [205] = {.lex_state = 0, .external_lex_state = 3},
  [206] = {.lex_state = 36},
  [207] = {.lex_state = 0, .external_lex_state = 3},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 21},
  [211] = {.lex_state = 0, .external_lex_state = 3},
  [212] = {.lex_state = 36},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 0, .external_lex_state = 3},
  [215] = {.lex_state = 21},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 0, .external_lex_state = 3},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 0, .external_lex_state = 3},
  [220] = {.lex_state = 0, .external_lex_state = 3},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 3},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 3},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 3},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0, .external_lex_state = 3},
  [230] = {.lex_state = 21},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 0, .external_lex_state = 3},
  [233] = {.lex_state = 0, .external_lex_state = 3},
  [234] = {.lex_state = 21},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 66},
  [237] = {.lex_state = 21},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 66},
  [240] = {.lex_state = 21},
  [241] = {.lex_state = 66},
  [242] = {.lex_state = 66},
  [243] = {.lex_state = 0},
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
    [ts_external_token__indent_eq] = true,
  },
  [4] = {
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
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
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__long_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(243),
    [sym__indent_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      aux_sym_const_section_token1,
    ACTIONS(7), 1,
      aux_sym_var_section_token1,
    ACTIONS(9), 1,
      aux_sym_let_section_token1,
    ACTIONS(11), 1,
      aux_sym_type_section_token1,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(220), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [58] = 14,
    ACTIONS(5), 1,
      aux_sym_const_section_token1,
    ACTIONS(7), 1,
      aux_sym_var_section_token1,
    ACTIONS(9), 1,
      aux_sym_let_section_token1,
    ACTIONS(11), 1,
      aux_sym_type_section_token1,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(127), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [116] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [153] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [190] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [227] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [264] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [301] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(45), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [338] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(45), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [375] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [412] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(45), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [449] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(33), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [486] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(45), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [523] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(21), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [560] = 6,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(53), 1,
      aux_sym_object_type_token1,
    ACTIONS(55), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(57), 1,
      aux_sym_ref_type_token1,
    STATE(197), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [584] = 6,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(53), 1,
      aux_sym_object_type_token1,
    ACTIONS(55), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(57), 1,
      aux_sym_ref_type_token1,
    STATE(196), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [608] = 6,
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
    STATE(141), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [632] = 6,
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
    STATE(161), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [656] = 6,
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
    STATE(176), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [680] = 6,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(53), 1,
      aux_sym_object_type_token1,
    ACTIONS(55), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(57), 1,
      aux_sym_ref_type_token1,
    STATE(177), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [704] = 6,
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
    STATE(213), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [728] = 6,
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
    STATE(169), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [752] = 6,
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
    STATE(148), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [776] = 6,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(53), 1,
      aux_sym_object_type_token1,
    ACTIONS(55), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(57), 1,
      aux_sym_ref_type_token1,
    STATE(178), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [800] = 6,
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
    STATE(100), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [824] = 6,
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
    STATE(101), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [848] = 6,
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
    STATE(82), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [872] = 6,
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
    STATE(149), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [896] = 6,
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
    STATE(103), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [920] = 6,
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
    STATE(151), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [944] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(79), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [957] = 5,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_COLON,
    ACTIONS(88), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(90), 2,
      sym__indent_eq,
      sym__dedent,
  [974] = 5,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_COLON,
    ACTIONS(98), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(92), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [991] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym__indent,
    STATE(233), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1008] = 5,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(108), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(90), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1025] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      sym__indent,
    STATE(232), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1042] = 4,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym__indent,
    STATE(99), 1,
      sym_field_declaration_list,
    ACTIONS(112), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1057] = 3,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(79), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [1070] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      sym__indent,
    STATE(231), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1087] = 4,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym__indent,
    STATE(147), 1,
      sym_field_declaration_list,
    ACTIONS(112), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1102] = 5,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(92), 2,
      sym__indent_eq,
      sym__dedent,
  [1119] = 1,
    ACTIONS(131), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1127] = 1,
    ACTIONS(133), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1135] = 4,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1149] = 1,
    ACTIONS(139), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1157] = 4,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1171] = 1,
    ACTIONS(141), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1179] = 1,
    ACTIONS(139), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1187] = 1,
    ACTIONS(133), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1195] = 1,
    ACTIONS(141), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1203] = 4,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1217] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym__indent,
    STATE(195), 1,
      sym_field_declaration_list,
    ACTIONS(112), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1231] = 1,
    ACTIONS(131), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1239] = 4,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1253] = 3,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(149), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1264] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(150), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1275] = 3,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(44), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1286] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(145), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1297] = 4,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1310] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1323] = 3,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(149), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1334] = 3,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(163), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1345] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1358] = 3,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1369] = 3,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(149), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1380] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(160), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1391] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1404] = 3,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(173), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1415] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(177), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1426] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(159), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1437] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(87), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1448] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(182), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1459] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1472] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(88), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1483] = 4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1496] = 4,
    ACTIONS(155), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1509] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(111), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1520] = 3,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(113), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1531] = 3,
    ACTIONS(193), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(195), 1,
      sym__long_string_content,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [1541] = 3,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      sym__indent_eq,
    STATE(81), 1,
      aux_sym_source_file_repeat1,
  [1551] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(202), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1559] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [1569] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(212), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1579] = 3,
    ACTIONS(208), 1,
      sym__dedent,
    ACTIONS(214), 1,
      sym__indent_eq,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [1589] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(216), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1599] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_field_declaration_list_repeat1,
  [1609] = 3,
    ACTIONS(214), 1,
      sym__indent_eq,
    ACTIONS(218), 1,
      sym__dedent,
    STATE(85), 1,
      aux_sym_field_declaration_list_repeat2,
  [1619] = 3,
    ACTIONS(220), 1,
      sym__indent_eq,
    ACTIONS(222), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_type_section_repeat1,
  [1629] = 3,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym__indent,
    STATE(146), 1,
      sym_field_declaration_list,
  [1639] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1649] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [1659] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [1669] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1679] = 3,
    ACTIONS(239), 1,
      sym__indent_eq,
    ACTIONS(242), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1689] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [1699] = 3,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1709] = 1,
    ACTIONS(251), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1715] = 1,
    ACTIONS(253), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1721] = 1,
    ACTIONS(255), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1727] = 1,
    ACTIONS(257), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1733] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(259), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [1743] = 2,
    ACTIONS(263), 1,
      anon_sym_EQ,
    ACTIONS(261), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1751] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym__indent,
    STATE(98), 1,
      sym_field_declaration_list,
  [1761] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1771] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_tuple_repeat1,
  [1781] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1791] = 3,
    ACTIONS(271), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(273), 1,
      sym__long_string_content,
    STATE(80), 1,
      aux_sym__long_string_literal_repeat1,
  [1801] = 3,
    ACTIONS(275), 1,
      sym__indent_eq,
    ACTIONS(278), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_type_section_repeat1,
  [1811] = 2,
    ACTIONS(282), 1,
      anon_sym_STAR,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1819] = 3,
    ACTIONS(214), 1,
      sym__indent_eq,
    ACTIONS(284), 1,
      sym__dedent,
    STATE(119), 1,
      aux_sym_field_declaration_list_repeat2,
  [1829] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_field_declaration_repeat1,
  [1839] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_field_declaration_list_repeat1,
  [1849] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(290), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym_const_section_repeat1,
  [1859] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(292), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1869] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_field_declaration_repeat1,
  [1879] = 1,
    ACTIONS(296), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1885] = 1,
    ACTIONS(298), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1891] = 3,
    ACTIONS(214), 1,
      sym__indent_eq,
    ACTIONS(300), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [1901] = 2,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(164), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1909] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [1919] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [1929] = 3,
    ACTIONS(306), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(308), 1,
      sym__long_string_content,
    STATE(132), 1,
      aux_sym__long_string_literal_repeat1,
  [1939] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [1949] = 1,
    ACTIONS(310), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1955] = 3,
    ACTIONS(312), 1,
      sym__indent_eq,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [1965] = 3,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      sym__indent_eq,
    STATE(130), 1,
      aux_sym_source_file_repeat1,
  [1975] = 3,
    ACTIONS(321), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [1985] = 3,
    ACTIONS(326), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [1995] = 3,
    ACTIONS(319), 1,
      sym__indent_eq,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      aux_sym_source_file_repeat1,
  [2005] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_tuple_repeat1,
  [2015] = 3,
    ACTIONS(195), 1,
      sym__long_string_content,
    ACTIONS(335), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2025] = 3,
    ACTIONS(337), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(339), 1,
      sym__long_string_content,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2035] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [2045] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [2055] = 3,
    ACTIONS(195), 1,
      sym__long_string_content,
    ACTIONS(346), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2065] = 3,
    ACTIONS(220), 1,
      sym__indent_eq,
    ACTIONS(348), 1,
      sym__dedent,
    STATE(89), 1,
      aux_sym_type_section_repeat1,
  [2075] = 3,
    ACTIONS(350), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(352), 1,
      sym__long_string_content,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2085] = 3,
    ACTIONS(210), 1,
      sym__indent_eq,
    ACTIONS(354), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym_const_section_repeat1,
  [2095] = 1,
    ACTIONS(296), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2101] = 2,
    ACTIONS(356), 1,
      anon_sym_EQ,
    ACTIONS(202), 2,
      sym__indent_eq,
      sym__dedent,
  [2109] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      sym__indent,
    STATE(228), 1,
      sym_type_declaration,
  [2119] = 3,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_tuple_repeat1,
  [2129] = 3,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym__indent,
    STATE(194), 1,
      sym_field_declaration_list,
  [2139] = 3,
    ACTIONS(214), 1,
      sym__indent_eq,
    ACTIONS(364), 1,
      sym__dedent,
    STATE(152), 1,
      aux_sym_field_declaration_list_repeat2,
  [2149] = 1,
    ACTIONS(251), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2155] = 1,
    ACTIONS(253), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2161] = 1,
    ACTIONS(255), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2167] = 1,
    ACTIONS(257), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2173] = 3,
    ACTIONS(206), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_field_declaration_list_repeat1,
  [2183] = 2,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(261), 2,
      sym__indent_eq,
      sym__dedent,
  [2191] = 3,
    ACTIONS(214), 1,
      sym__indent_eq,
    ACTIONS(244), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [2201] = 1,
    ACTIONS(298), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2207] = 1,
    ACTIONS(310), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2213] = 1,
    ACTIONS(368), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2218] = 1,
    ACTIONS(370), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2223] = 1,
    ACTIONS(372), 2,
      sym__indent_eq,
      sym__dedent,
  [2228] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2233] = 1,
    ACTIONS(315), 2,
      sym__indent_eq,
      sym__dedent,
  [2238] = 1,
    ACTIONS(329), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2243] = 1,
    ACTIONS(376), 2,
      sym__indent_eq,
      sym__dedent,
  [2248] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2253] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2258] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2263] = 1,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2268] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2273] = 1,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2278] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2283] = 1,
    ACTIONS(392), 2,
      sym__indent_eq,
      sym__dedent,
  [2288] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2293] = 1,
    ACTIONS(396), 2,
      sym__indent_eq,
      sym__dedent,
  [2298] = 1,
    ACTIONS(370), 2,
      sym__indent_eq,
      sym__dedent,
  [2303] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2308] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2313] = 1,
    ACTIONS(402), 2,
      sym__indent_eq,
      sym__dedent,
  [2318] = 1,
    ACTIONS(404), 2,
      sym__indent_eq,
      sym__dedent,
  [2323] = 1,
    ACTIONS(404), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2328] = 1,
    ACTIONS(392), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2333] = 1,
    ACTIONS(394), 2,
      sym__indent_eq,
      sym__dedent,
  [2338] = 1,
    ACTIONS(398), 2,
      sym__indent_eq,
      sym__dedent,
  [2343] = 1,
    ACTIONS(400), 2,
      sym__indent_eq,
      sym__dedent,
  [2348] = 1,
    ACTIONS(406), 2,
      sym__indent_eq,
      sym__dedent,
  [2353] = 1,
    ACTIONS(374), 2,
      sym__indent_eq,
      sym__dedent,
  [2358] = 1,
    ACTIONS(384), 2,
      sym__indent_eq,
      sym__dedent,
  [2363] = 1,
    ACTIONS(386), 2,
      sym__indent_eq,
      sym__dedent,
  [2368] = 1,
    ACTIONS(388), 2,
      sym__indent_eq,
      sym__dedent,
  [2373] = 1,
    ACTIONS(390), 2,
      sym__indent_eq,
      sym__dedent,
  [2378] = 1,
    ACTIONS(402), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2383] = 1,
    ACTIONS(394), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2388] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2393] = 1,
    ACTIONS(296), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2398] = 1,
    ACTIONS(378), 2,
      sym__indent_eq,
      sym__dedent,
  [2403] = 1,
    ACTIONS(380), 2,
      sym__indent_eq,
      sym__dedent,
  [2408] = 1,
    ACTIONS(251), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2413] = 1,
    ACTIONS(253), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2418] = 1,
    ACTIONS(255), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2423] = 1,
    ACTIONS(257), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2428] = 1,
    ACTIONS(298), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2433] = 1,
    ACTIONS(310), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2438] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2443] = 1,
    ACTIONS(410), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2448] = 1,
    ACTIONS(278), 2,
      sym__indent_eq,
      sym__dedent,
  [2453] = 1,
    ACTIONS(412), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2458] = 1,
    ACTIONS(414), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2463] = 1,
    ACTIONS(396), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2468] = 1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2473] = 1,
    ACTIONS(418), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2478] = 1,
    ACTIONS(242), 2,
      sym__indent_eq,
      sym__dedent,
  [2483] = 1,
    ACTIONS(380), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2488] = 2,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(420), 1,
      anon_sym_DQUOTE_DQUOTE,
  [2495] = 1,
    ACTIONS(378), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2500] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2505] = 1,
    ACTIONS(376), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2510] = 1,
    ACTIONS(422), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2515] = 2,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type_declaration,
  [2522] = 1,
    ACTIONS(426), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2527] = 1,
    ACTIONS(428), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2532] = 1,
    ACTIONS(372), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2537] = 1,
    ACTIONS(430), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2542] = 1,
    ACTIONS(197), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2547] = 1,
    ACTIONS(390), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2552] = 1,
    ACTIONS(398), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2557] = 1,
    ACTIONS(388), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2562] = 1,
    ACTIONS(386), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2567] = 1,
    ACTIONS(384), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2572] = 1,
    ACTIONS(374), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2577] = 1,
    ACTIONS(406), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2582] = 1,
    ACTIONS(432), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2587] = 1,
    ACTIONS(400), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2592] = 2,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type_declaration,
  [2599] = 1,
    ACTIONS(434), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2604] = 1,
    ACTIONS(436), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2609] = 1,
    ACTIONS(438), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2614] = 1,
    ACTIONS(440), 1,
      sym_identifier,
  [2618] = 1,
    ACTIONS(442), 1,
      anon_sym_EQ,
  [2622] = 1,
    ACTIONS(444), 1,
      aux_sym__raw_string_literal_token1,
  [2626] = 1,
    ACTIONS(446), 1,
      sym_identifier,
  [2630] = 1,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [2634] = 1,
    ACTIONS(450), 1,
      aux_sym__raw_string_literal_token1,
  [2638] = 1,
    ACTIONS(452), 1,
      sym_identifier,
  [2642] = 1,
    ACTIONS(454), 1,
      aux_sym__raw_string_literal_token1,
  [2646] = 1,
    ACTIONS(456), 1,
      aux_sym__raw_string_literal_token1,
  [2650] = 1,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 486,
  [SMALL_STATE(15)] = 523,
  [SMALL_STATE(16)] = 560,
  [SMALL_STATE(17)] = 584,
  [SMALL_STATE(18)] = 608,
  [SMALL_STATE(19)] = 632,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 728,
  [SMALL_STATE(24)] = 752,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 800,
  [SMALL_STATE(27)] = 824,
  [SMALL_STATE(28)] = 848,
  [SMALL_STATE(29)] = 872,
  [SMALL_STATE(30)] = 896,
  [SMALL_STATE(31)] = 920,
  [SMALL_STATE(32)] = 944,
  [SMALL_STATE(33)] = 957,
  [SMALL_STATE(34)] = 974,
  [SMALL_STATE(35)] = 991,
  [SMALL_STATE(36)] = 1008,
  [SMALL_STATE(37)] = 1025,
  [SMALL_STATE(38)] = 1042,
  [SMALL_STATE(39)] = 1057,
  [SMALL_STATE(40)] = 1070,
  [SMALL_STATE(41)] = 1087,
  [SMALL_STATE(42)] = 1102,
  [SMALL_STATE(43)] = 1119,
  [SMALL_STATE(44)] = 1127,
  [SMALL_STATE(45)] = 1135,
  [SMALL_STATE(46)] = 1149,
  [SMALL_STATE(47)] = 1157,
  [SMALL_STATE(48)] = 1171,
  [SMALL_STATE(49)] = 1179,
  [SMALL_STATE(50)] = 1187,
  [SMALL_STATE(51)] = 1195,
  [SMALL_STATE(52)] = 1203,
  [SMALL_STATE(53)] = 1217,
  [SMALL_STATE(54)] = 1231,
  [SMALL_STATE(55)] = 1239,
  [SMALL_STATE(56)] = 1253,
  [SMALL_STATE(57)] = 1264,
  [SMALL_STATE(58)] = 1275,
  [SMALL_STATE(59)] = 1286,
  [SMALL_STATE(60)] = 1297,
  [SMALL_STATE(61)] = 1310,
  [SMALL_STATE(62)] = 1323,
  [SMALL_STATE(63)] = 1334,
  [SMALL_STATE(64)] = 1345,
  [SMALL_STATE(65)] = 1358,
  [SMALL_STATE(66)] = 1369,
  [SMALL_STATE(67)] = 1380,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1404,
  [SMALL_STATE(70)] = 1415,
  [SMALL_STATE(71)] = 1426,
  [SMALL_STATE(72)] = 1437,
  [SMALL_STATE(73)] = 1448,
  [SMALL_STATE(74)] = 1459,
  [SMALL_STATE(75)] = 1472,
  [SMALL_STATE(76)] = 1483,
  [SMALL_STATE(77)] = 1496,
  [SMALL_STATE(78)] = 1509,
  [SMALL_STATE(79)] = 1520,
  [SMALL_STATE(80)] = 1531,
  [SMALL_STATE(81)] = 1541,
  [SMALL_STATE(82)] = 1551,
  [SMALL_STATE(83)] = 1559,
  [SMALL_STATE(84)] = 1569,
  [SMALL_STATE(85)] = 1579,
  [SMALL_STATE(86)] = 1589,
  [SMALL_STATE(87)] = 1599,
  [SMALL_STATE(88)] = 1609,
  [SMALL_STATE(89)] = 1619,
  [SMALL_STATE(90)] = 1629,
  [SMALL_STATE(91)] = 1639,
  [SMALL_STATE(92)] = 1649,
  [SMALL_STATE(93)] = 1659,
  [SMALL_STATE(94)] = 1669,
  [SMALL_STATE(95)] = 1679,
  [SMALL_STATE(96)] = 1689,
  [SMALL_STATE(97)] = 1699,
  [SMALL_STATE(98)] = 1709,
  [SMALL_STATE(99)] = 1715,
  [SMALL_STATE(100)] = 1721,
  [SMALL_STATE(101)] = 1727,
  [SMALL_STATE(102)] = 1733,
  [SMALL_STATE(103)] = 1743,
  [SMALL_STATE(104)] = 1751,
  [SMALL_STATE(105)] = 1761,
  [SMALL_STATE(106)] = 1771,
  [SMALL_STATE(107)] = 1781,
  [SMALL_STATE(108)] = 1791,
  [SMALL_STATE(109)] = 1801,
  [SMALL_STATE(110)] = 1811,
  [SMALL_STATE(111)] = 1819,
  [SMALL_STATE(112)] = 1829,
  [SMALL_STATE(113)] = 1839,
  [SMALL_STATE(114)] = 1849,
  [SMALL_STATE(115)] = 1859,
  [SMALL_STATE(116)] = 1869,
  [SMALL_STATE(117)] = 1879,
  [SMALL_STATE(118)] = 1885,
  [SMALL_STATE(119)] = 1891,
  [SMALL_STATE(120)] = 1901,
  [SMALL_STATE(121)] = 1909,
  [SMALL_STATE(122)] = 1919,
  [SMALL_STATE(123)] = 1929,
  [SMALL_STATE(124)] = 1939,
  [SMALL_STATE(125)] = 1949,
  [SMALL_STATE(126)] = 1955,
  [SMALL_STATE(127)] = 1965,
  [SMALL_STATE(128)] = 1975,
  [SMALL_STATE(129)] = 1985,
  [SMALL_STATE(130)] = 1995,
  [SMALL_STATE(131)] = 2005,
  [SMALL_STATE(132)] = 2015,
  [SMALL_STATE(133)] = 2025,
  [SMALL_STATE(134)] = 2035,
  [SMALL_STATE(135)] = 2045,
  [SMALL_STATE(136)] = 2055,
  [SMALL_STATE(137)] = 2065,
  [SMALL_STATE(138)] = 2075,
  [SMALL_STATE(139)] = 2085,
  [SMALL_STATE(140)] = 2095,
  [SMALL_STATE(141)] = 2101,
  [SMALL_STATE(142)] = 2109,
  [SMALL_STATE(143)] = 2119,
  [SMALL_STATE(144)] = 2129,
  [SMALL_STATE(145)] = 2139,
  [SMALL_STATE(146)] = 2149,
  [SMALL_STATE(147)] = 2155,
  [SMALL_STATE(148)] = 2161,
  [SMALL_STATE(149)] = 2167,
  [SMALL_STATE(150)] = 2173,
  [SMALL_STATE(151)] = 2183,
  [SMALL_STATE(152)] = 2191,
  [SMALL_STATE(153)] = 2201,
  [SMALL_STATE(154)] = 2207,
  [SMALL_STATE(155)] = 2213,
  [SMALL_STATE(156)] = 2218,
  [SMALL_STATE(157)] = 2223,
  [SMALL_STATE(158)] = 2228,
  [SMALL_STATE(159)] = 2233,
  [SMALL_STATE(160)] = 2238,
  [SMALL_STATE(161)] = 2243,
  [SMALL_STATE(162)] = 2248,
  [SMALL_STATE(163)] = 2253,
  [SMALL_STATE(164)] = 2258,
  [SMALL_STATE(165)] = 2263,
  [SMALL_STATE(166)] = 2268,
  [SMALL_STATE(167)] = 2273,
  [SMALL_STATE(168)] = 2278,
  [SMALL_STATE(169)] = 2283,
  [SMALL_STATE(170)] = 2288,
  [SMALL_STATE(171)] = 2293,
  [SMALL_STATE(172)] = 2298,
  [SMALL_STATE(173)] = 2303,
  [SMALL_STATE(174)] = 2308,
  [SMALL_STATE(175)] = 2313,
  [SMALL_STATE(176)] = 2318,
  [SMALL_STATE(177)] = 2323,
  [SMALL_STATE(178)] = 2328,
  [SMALL_STATE(179)] = 2333,
  [SMALL_STATE(180)] = 2338,
  [SMALL_STATE(181)] = 2343,
  [SMALL_STATE(182)] = 2348,
  [SMALL_STATE(183)] = 2353,
  [SMALL_STATE(184)] = 2358,
  [SMALL_STATE(185)] = 2363,
  [SMALL_STATE(186)] = 2368,
  [SMALL_STATE(187)] = 2373,
  [SMALL_STATE(188)] = 2378,
  [SMALL_STATE(189)] = 2383,
  [SMALL_STATE(190)] = 2388,
  [SMALL_STATE(191)] = 2393,
  [SMALL_STATE(192)] = 2398,
  [SMALL_STATE(193)] = 2403,
  [SMALL_STATE(194)] = 2408,
  [SMALL_STATE(195)] = 2413,
  [SMALL_STATE(196)] = 2418,
  [SMALL_STATE(197)] = 2423,
  [SMALL_STATE(198)] = 2428,
  [SMALL_STATE(199)] = 2433,
  [SMALL_STATE(200)] = 2438,
  [SMALL_STATE(201)] = 2443,
  [SMALL_STATE(202)] = 2448,
  [SMALL_STATE(203)] = 2453,
  [SMALL_STATE(204)] = 2458,
  [SMALL_STATE(205)] = 2463,
  [SMALL_STATE(206)] = 2468,
  [SMALL_STATE(207)] = 2473,
  [SMALL_STATE(208)] = 2478,
  [SMALL_STATE(209)] = 2483,
  [SMALL_STATE(210)] = 2488,
  [SMALL_STATE(211)] = 2495,
  [SMALL_STATE(212)] = 2500,
  [SMALL_STATE(213)] = 2505,
  [SMALL_STATE(214)] = 2510,
  [SMALL_STATE(215)] = 2515,
  [SMALL_STATE(216)] = 2522,
  [SMALL_STATE(217)] = 2527,
  [SMALL_STATE(218)] = 2532,
  [SMALL_STATE(219)] = 2537,
  [SMALL_STATE(220)] = 2542,
  [SMALL_STATE(221)] = 2547,
  [SMALL_STATE(222)] = 2552,
  [SMALL_STATE(223)] = 2557,
  [SMALL_STATE(224)] = 2562,
  [SMALL_STATE(225)] = 2567,
  [SMALL_STATE(226)] = 2572,
  [SMALL_STATE(227)] = 2577,
  [SMALL_STATE(228)] = 2582,
  [SMALL_STATE(229)] = 2587,
  [SMALL_STATE(230)] = 2592,
  [SMALL_STATE(231)] = 2599,
  [SMALL_STATE(232)] = 2604,
  [SMALL_STATE(233)] = 2609,
  [SMALL_STATE(234)] = 2614,
  [SMALL_STATE(235)] = 2618,
  [SMALL_STATE(236)] = 2622,
  [SMALL_STATE(237)] = 2626,
  [SMALL_STATE(238)] = 2630,
  [SMALL_STATE(239)] = 2634,
  [SMALL_STATE(240)] = 2638,
  [SMALL_STATE(241)] = 2642,
  [SMALL_STATE(242)] = 2646,
  [SMALL_STATE(243)] = 2650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(70),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(239),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(52),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(240),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(215),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(71),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(133),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [458] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
