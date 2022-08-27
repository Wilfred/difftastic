#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 244
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 39
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
  sym_comment = 33,
  sym__indent_start = 34,
  sym__indent = 35,
  sym__indent_eq = 36,
  sym__dedent = 37,
  sym__long_string_content = 38,
  sym_source_file = 39,
  sym__statement = 40,
  sym_expression_statement = 41,
  sym__declaration = 42,
  sym_const_section = 43,
  sym_var_section = 44,
  sym_let_section = 45,
  sym_type_section = 46,
  sym_variable_declaration = 47,
  sym__variable_name_declaration = 48,
  sym_tuple_deconstruct_declaration = 49,
  sym_type_declaration = 50,
  sym__type = 51,
  sym_tuple_type = 52,
  sym_object_type = 53,
  sym_field_declaration_list = 54,
  sym_field_declaration = 55,
  sym__symbol_declaration = 56,
  sym_exported_symbol = 57,
  sym_distinct_type = 58,
  sym_ref_type = 59,
  sym_expression = 60,
  sym__literal = 61,
  sym_boolean_literal = 62,
  sym_string_literal = 63,
  sym__long_string_literal = 64,
  sym__raw_string_literal = 65,
  sym__interpreted_string_literal = 66,
  sym__escaped_double_quote = 67,
  sym_tuple = 68,
  sym__type_identifier = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_const_section_repeat1 = 71,
  aux_sym_type_section_repeat1 = 72,
  aux_sym_variable_declaration_repeat1 = 73,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 74,
  aux_sym_field_declaration_list_repeat1 = 75,
  aux_sym_field_declaration_list_repeat2 = 76,
  aux_sym_field_declaration_repeat1 = 77,
  aux_sym__long_string_literal_repeat1 = 78,
  aux_sym__raw_string_literal_repeat1 = 79,
  aux_sym__interpreted_string_literal_repeat1 = 80,
  aux_sym_tuple_repeat1 = 81,
  alias_sym_type_identifier = 82,
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
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(81);
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
      if (lookahead == 'r') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
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
      if (lookahead == '}') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(73);
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
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(81);
      END_STATE();
    case 20:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(81);
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
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(75);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
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
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(81);
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
      if (lookahead == 'r') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
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
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__raw_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      if (lookahead == '"') ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(81);
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
    [sym_comment] = ACTIONS(3),
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__long_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(243),
    [sym_comment] = ACTIONS(3),
    [sym__indent_start] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      aux_sym_const_section_token1,
    ACTIONS(11), 1,
      aux_sym_var_section_token1,
    ACTIONS(13), 1,
      aux_sym_let_section_token1,
    ACTIONS(15), 1,
      aux_sym_type_section_token1,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
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
  [64] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_const_section_token1,
    ACTIONS(11), 1,
      aux_sym_var_section_token1,
    ACTIONS(13), 1,
      aux_sym_let_section_token1,
    ACTIONS(15), 1,
      aux_sym_type_section_token1,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
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
  [125] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [165] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [205] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [245] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [285] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [325] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(49), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_expression,
    ACTIONS(45), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(43), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [365] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(49), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_expression,
    ACTIONS(45), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(43), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [405] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(131), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [445] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(49), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_expression,
    ACTIONS(45), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(43), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [485] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(37), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(174), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(173), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [525] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(49), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_expression,
    ACTIONS(45), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(181), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(43), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(180), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [565] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      aux_sym__long_string_literal_token1,
    ACTIONS(25), 1,
      anon_sym_r_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(229), 3,
      sym__long_string_literal,
      sym__raw_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(19), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(222), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [605] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(57), 1,
      aux_sym_object_type_token1,
    ACTIONS(59), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(61), 1,
      aux_sym_ref_type_token1,
    STATE(197), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [632] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(57), 1,
      aux_sym_object_type_token1,
    ACTIONS(59), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(61), 1,
      aux_sym_ref_type_token1,
    STATE(196), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [659] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(141), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [686] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(161), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [713] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(176), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [740] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(57), 1,
      aux_sym_object_type_token1,
    ACTIONS(59), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(61), 1,
      aux_sym_ref_type_token1,
    STATE(177), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [767] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(77), 1,
      aux_sym_object_type_token1,
    ACTIONS(79), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(81), 1,
      aux_sym_ref_type_token1,
    STATE(213), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [794] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(169), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [821] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(148), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [848] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(57), 1,
      aux_sym_object_type_token1,
    ACTIONS(59), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(61), 1,
      aux_sym_ref_type_token1,
    STATE(178), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [875] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(77), 1,
      aux_sym_object_type_token1,
    ACTIONS(79), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(81), 1,
      aux_sym_ref_type_token1,
    STATE(100), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [902] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(77), 1,
      aux_sym_object_type_token1,
    ACTIONS(79), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(81), 1,
      aux_sym_ref_type_token1,
    STATE(101), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [929] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(77), 1,
      aux_sym_object_type_token1,
    ACTIONS(79), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(81), 1,
      aux_sym_ref_type_token1,
    STATE(82), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [956] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(149), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [983] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(77), 1,
      aux_sym_object_type_token1,
    ACTIONS(79), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(81), 1,
      aux_sym_ref_type_token1,
    STATE(103), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1010] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(67), 1,
      aux_sym_object_type_token1,
    ACTIONS(69), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(71), 1,
      aux_sym_ref_type_token1,
    STATE(151), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(83), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [1053] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(94), 2,
      sym__indent_eq,
      sym__dedent,
  [1073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(96), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1093] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym__indent,
    STATE(233), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(94), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym__indent,
    STATE(232), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1153] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym__indent,
    STATE(99), 1,
      sym_field_declaration_list,
    ACTIONS(116), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(83), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [1187] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym__indent,
    STATE(231), 1,
      sym_variable_declaration,
    STATE(34), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      sym__indent,
    STATE(147), 1,
      sym_field_declaration_list,
    ACTIONS(116), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1225] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      anon_sym_EQ,
    STATE(33), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(96), 2,
      sym__indent_eq,
      sym__dedent,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1295] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      sym__indent,
    STATE(195), 1,
      sym_field_declaration_list,
    ACTIONS(116), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(139), 1,
      sym_variable_declaration,
    STATE(42), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1418] = 5,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(157), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(150), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(44), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(145), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1476] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1508] = 5,
    ACTIONS(153), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1524] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(173), 1,
      sym_escape_sequence,
    STATE(66), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1570] = 5,
    ACTIONS(153), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(155), 1,
      sym_escape_sequence,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(160), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1616] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(185), 1,
      sym_escape_sequence,
    STATE(62), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1632] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(192), 1,
      sym_escape_sequence,
    STATE(70), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(159), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(87), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1676] = 5,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      aux_sym__interpreted_string_literal_token1,
    ACTIONS(199), 1,
      sym_escape_sequence,
    STATE(56), 1,
      aux_sym__interpreted_string_literal_repeat1,
  [1692] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(88), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_DQUOTE_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__raw_string_literal_repeat1,
    STATE(239), 1,
      sym__escaped_double_quote,
  [1754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(111), 1,
      sym_field_declaration,
    STATE(112), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(113), 1,
      sym_field_declaration,
    STATE(116), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(212), 1,
      sym__long_string_content,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [1795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym__indent_eq,
    STATE(81), 1,
      aux_sym_source_file_repeat1,
  [1808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(219), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(229), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(231), 1,
      sym__indent_eq,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(233), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_field_declaration_list_repeat1,
  [1884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__indent_eq,
    ACTIONS(235), 1,
      sym__dedent,
    STATE(85), 1,
      aux_sym_field_declaration_list_repeat2,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__indent_eq,
    ACTIONS(239), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_type_section_repeat1,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      sym__indent,
    STATE(146), 1,
      sym_field_declaration_list,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [1949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [1962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__indent_eq,
    ACTIONS(259), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [1988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [2001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [2063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(278), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym__indent,
    STATE(98), 1,
      sym_field_declaration_list,
  [2087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_tuple_repeat1,
  [2113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(290), 1,
      sym__long_string_content,
    STATE(80), 1,
      aux_sym__long_string_literal_repeat1,
  [2139] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__indent_eq,
    ACTIONS(295), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_type_section_repeat1,
  [2152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_STAR,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2163] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__indent_eq,
    ACTIONS(301), 1,
      sym__dedent,
    STATE(119), 1,
      aux_sym_field_declaration_list_repeat2,
  [2176] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(122), 1,
      aux_sym_field_declaration_repeat1,
  [2189] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_field_declaration_list_repeat1,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym_const_section_repeat1,
  [2215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(309), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_const_section_repeat1,
  [2228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_field_declaration_repeat1,
  [2241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__indent_eq,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [2272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(164), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [2283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [2296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [2309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(325), 1,
      sym__long_string_content,
    STATE(132), 1,
      aux_sym__long_string_literal_repeat1,
  [2322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [2335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__indent_eq,
    ACTIONS(332), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [2357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
    ACTIONS(336), 1,
      sym__indent_eq,
    STATE(130), 1,
      aux_sym_source_file_repeat1,
  [2370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_COLON,
    STATE(128), 1,
      aux_sym_field_declaration_repeat1,
  [2383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_field_declaration_list_repeat1,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym__indent_eq,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      aux_sym_source_file_repeat1,
  [2409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_tuple_repeat1,
  [2422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__long_string_content,
    ACTIONS(352), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(356), 1,
      sym__long_string_content,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      aux_sym_tuple_repeat1,
  [2474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__long_string_content,
    ACTIONS(363), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(133), 1,
      aux_sym__long_string_literal_repeat1,
  [2487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__indent_eq,
    ACTIONS(365), 1,
      sym__dedent,
    STATE(89), 1,
      aux_sym_type_section_repeat1,
  [2500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(369), 1,
      sym__long_string_content,
    STATE(136), 1,
      aux_sym__long_string_literal_repeat1,
  [2513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__indent_eq,
    ACTIONS(371), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym_const_section_repeat1,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(219), 2,
      sym__indent_eq,
      sym__dedent,
  [2546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
    ACTIONS(377), 1,
      sym__indent,
    STATE(228), 1,
      sym_type_declaration,
  [2559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_tuple_repeat1,
  [2572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      sym__indent,
    STATE(194), 1,
      sym_field_declaration_list,
  [2585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__indent_eq,
    ACTIONS(381), 1,
      sym__dedent,
    STATE(152), 1,
      aux_sym_field_declaration_list_repeat2,
  [2598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      aux_sym_field_declaration_list_repeat1,
  [2647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_EQ,
    ACTIONS(278), 2,
      sym__indent_eq,
      sym__dedent,
  [2658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__indent_eq,
    ACTIONS(261), 1,
      sym__dedent,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat2,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      sym__indent_eq,
      sym__dedent,
  [2713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      sym__indent_eq,
      sym__dedent,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      sym__indent_eq,
      sym__dedent,
  [2745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      sym__indent_eq,
      sym__dedent,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      sym__indent_eq,
      sym__dedent,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      sym__indent_eq,
      sym__dedent,
  [2833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym__indent_eq,
      sym__dedent,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      sym__indent_eq,
      sym__dedent,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__indent_eq,
      sym__dedent,
  [2889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym__indent_eq,
      sym__dedent,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym__indent_eq,
      sym__dedent,
  [2905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym__indent_eq,
      sym__dedent,
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym__indent_eq,
      sym__dedent,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      sym__indent_eq,
      sym__dedent,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym__indent_eq,
      sym__dedent,
  [2937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      sym__indent_eq,
      sym__dedent,
  [2945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      sym__indent_eq,
      sym__dedent,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym__indent_eq,
      sym__dedent,
  [2993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym__indent_eq,
      sym__dedent,
  [3001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [3049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym__indent_eq,
      sym__dedent,
  [3073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym__indent_eq,
      sym__dedent,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3129] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      anon_sym_DQUOTE_DQUOTE,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(202), 1,
      sym_type_declaration,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(137), 1,
      sym_type_declaration,
  [3303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [3327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_EQ,
  [3341] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(461), 1,
      aux_sym__raw_string_literal_token1,
  [3348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_identifier,
  [3355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [3362] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym__raw_string_literal_token1,
  [3369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [3376] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym__raw_string_literal_token1,
  [3383] = 2,
    ACTIONS(157), 1,
      sym_comment,
    ACTIONS(473), 1,
      aux_sym__raw_string_literal_token1,
  [3390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 125,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 365,
  [SMALL_STATE(11)] = 405,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 565,
  [SMALL_STATE(16)] = 605,
  [SMALL_STATE(17)] = 632,
  [SMALL_STATE(18)] = 659,
  [SMALL_STATE(19)] = 686,
  [SMALL_STATE(20)] = 713,
  [SMALL_STATE(21)] = 740,
  [SMALL_STATE(22)] = 767,
  [SMALL_STATE(23)] = 794,
  [SMALL_STATE(24)] = 821,
  [SMALL_STATE(25)] = 848,
  [SMALL_STATE(26)] = 875,
  [SMALL_STATE(27)] = 902,
  [SMALL_STATE(28)] = 929,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 983,
  [SMALL_STATE(31)] = 1010,
  [SMALL_STATE(32)] = 1037,
  [SMALL_STATE(33)] = 1053,
  [SMALL_STATE(34)] = 1073,
  [SMALL_STATE(35)] = 1093,
  [SMALL_STATE(36)] = 1113,
  [SMALL_STATE(37)] = 1133,
  [SMALL_STATE(38)] = 1153,
  [SMALL_STATE(39)] = 1171,
  [SMALL_STATE(40)] = 1187,
  [SMALL_STATE(41)] = 1207,
  [SMALL_STATE(42)] = 1225,
  [SMALL_STATE(43)] = 1245,
  [SMALL_STATE(44)] = 1256,
  [SMALL_STATE(45)] = 1267,
  [SMALL_STATE(46)] = 1284,
  [SMALL_STATE(47)] = 1295,
  [SMALL_STATE(48)] = 1312,
  [SMALL_STATE(49)] = 1323,
  [SMALL_STATE(50)] = 1334,
  [SMALL_STATE(51)] = 1345,
  [SMALL_STATE(52)] = 1356,
  [SMALL_STATE(53)] = 1373,
  [SMALL_STATE(54)] = 1390,
  [SMALL_STATE(55)] = 1401,
  [SMALL_STATE(56)] = 1418,
  [SMALL_STATE(57)] = 1434,
  [SMALL_STATE(58)] = 1448,
  [SMALL_STATE(59)] = 1462,
  [SMALL_STATE(60)] = 1476,
  [SMALL_STATE(61)] = 1492,
  [SMALL_STATE(62)] = 1508,
  [SMALL_STATE(63)] = 1524,
  [SMALL_STATE(64)] = 1540,
  [SMALL_STATE(65)] = 1556,
  [SMALL_STATE(66)] = 1570,
  [SMALL_STATE(67)] = 1586,
  [SMALL_STATE(68)] = 1600,
  [SMALL_STATE(69)] = 1616,
  [SMALL_STATE(70)] = 1632,
  [SMALL_STATE(71)] = 1648,
  [SMALL_STATE(72)] = 1662,
  [SMALL_STATE(73)] = 1676,
  [SMALL_STATE(74)] = 1692,
  [SMALL_STATE(75)] = 1708,
  [SMALL_STATE(76)] = 1722,
  [SMALL_STATE(77)] = 1738,
  [SMALL_STATE(78)] = 1754,
  [SMALL_STATE(79)] = 1768,
  [SMALL_STATE(80)] = 1782,
  [SMALL_STATE(81)] = 1795,
  [SMALL_STATE(82)] = 1808,
  [SMALL_STATE(83)] = 1819,
  [SMALL_STATE(84)] = 1832,
  [SMALL_STATE(85)] = 1845,
  [SMALL_STATE(86)] = 1858,
  [SMALL_STATE(87)] = 1871,
  [SMALL_STATE(88)] = 1884,
  [SMALL_STATE(89)] = 1897,
  [SMALL_STATE(90)] = 1910,
  [SMALL_STATE(91)] = 1923,
  [SMALL_STATE(92)] = 1936,
  [SMALL_STATE(93)] = 1949,
  [SMALL_STATE(94)] = 1962,
  [SMALL_STATE(95)] = 1975,
  [SMALL_STATE(96)] = 1988,
  [SMALL_STATE(97)] = 2001,
  [SMALL_STATE(98)] = 2014,
  [SMALL_STATE(99)] = 2023,
  [SMALL_STATE(100)] = 2032,
  [SMALL_STATE(101)] = 2041,
  [SMALL_STATE(102)] = 2050,
  [SMALL_STATE(103)] = 2063,
  [SMALL_STATE(104)] = 2074,
  [SMALL_STATE(105)] = 2087,
  [SMALL_STATE(106)] = 2100,
  [SMALL_STATE(107)] = 2113,
  [SMALL_STATE(108)] = 2126,
  [SMALL_STATE(109)] = 2139,
  [SMALL_STATE(110)] = 2152,
  [SMALL_STATE(111)] = 2163,
  [SMALL_STATE(112)] = 2176,
  [SMALL_STATE(113)] = 2189,
  [SMALL_STATE(114)] = 2202,
  [SMALL_STATE(115)] = 2215,
  [SMALL_STATE(116)] = 2228,
  [SMALL_STATE(117)] = 2241,
  [SMALL_STATE(118)] = 2250,
  [SMALL_STATE(119)] = 2259,
  [SMALL_STATE(120)] = 2272,
  [SMALL_STATE(121)] = 2283,
  [SMALL_STATE(122)] = 2296,
  [SMALL_STATE(123)] = 2309,
  [SMALL_STATE(124)] = 2322,
  [SMALL_STATE(125)] = 2335,
  [SMALL_STATE(126)] = 2344,
  [SMALL_STATE(127)] = 2357,
  [SMALL_STATE(128)] = 2370,
  [SMALL_STATE(129)] = 2383,
  [SMALL_STATE(130)] = 2396,
  [SMALL_STATE(131)] = 2409,
  [SMALL_STATE(132)] = 2422,
  [SMALL_STATE(133)] = 2435,
  [SMALL_STATE(134)] = 2448,
  [SMALL_STATE(135)] = 2461,
  [SMALL_STATE(136)] = 2474,
  [SMALL_STATE(137)] = 2487,
  [SMALL_STATE(138)] = 2500,
  [SMALL_STATE(139)] = 2513,
  [SMALL_STATE(140)] = 2526,
  [SMALL_STATE(141)] = 2535,
  [SMALL_STATE(142)] = 2546,
  [SMALL_STATE(143)] = 2559,
  [SMALL_STATE(144)] = 2572,
  [SMALL_STATE(145)] = 2585,
  [SMALL_STATE(146)] = 2598,
  [SMALL_STATE(147)] = 2607,
  [SMALL_STATE(148)] = 2616,
  [SMALL_STATE(149)] = 2625,
  [SMALL_STATE(150)] = 2634,
  [SMALL_STATE(151)] = 2647,
  [SMALL_STATE(152)] = 2658,
  [SMALL_STATE(153)] = 2671,
  [SMALL_STATE(154)] = 2680,
  [SMALL_STATE(155)] = 2689,
  [SMALL_STATE(156)] = 2697,
  [SMALL_STATE(157)] = 2705,
  [SMALL_STATE(158)] = 2713,
  [SMALL_STATE(159)] = 2721,
  [SMALL_STATE(160)] = 2729,
  [SMALL_STATE(161)] = 2737,
  [SMALL_STATE(162)] = 2745,
  [SMALL_STATE(163)] = 2753,
  [SMALL_STATE(164)] = 2761,
  [SMALL_STATE(165)] = 2769,
  [SMALL_STATE(166)] = 2777,
  [SMALL_STATE(167)] = 2785,
  [SMALL_STATE(168)] = 2793,
  [SMALL_STATE(169)] = 2801,
  [SMALL_STATE(170)] = 2809,
  [SMALL_STATE(171)] = 2817,
  [SMALL_STATE(172)] = 2825,
  [SMALL_STATE(173)] = 2833,
  [SMALL_STATE(174)] = 2841,
  [SMALL_STATE(175)] = 2849,
  [SMALL_STATE(176)] = 2857,
  [SMALL_STATE(177)] = 2865,
  [SMALL_STATE(178)] = 2873,
  [SMALL_STATE(179)] = 2881,
  [SMALL_STATE(180)] = 2889,
  [SMALL_STATE(181)] = 2897,
  [SMALL_STATE(182)] = 2905,
  [SMALL_STATE(183)] = 2913,
  [SMALL_STATE(184)] = 2921,
  [SMALL_STATE(185)] = 2929,
  [SMALL_STATE(186)] = 2937,
  [SMALL_STATE(187)] = 2945,
  [SMALL_STATE(188)] = 2953,
  [SMALL_STATE(189)] = 2961,
  [SMALL_STATE(190)] = 2969,
  [SMALL_STATE(191)] = 2977,
  [SMALL_STATE(192)] = 2985,
  [SMALL_STATE(193)] = 2993,
  [SMALL_STATE(194)] = 3001,
  [SMALL_STATE(195)] = 3009,
  [SMALL_STATE(196)] = 3017,
  [SMALL_STATE(197)] = 3025,
  [SMALL_STATE(198)] = 3033,
  [SMALL_STATE(199)] = 3041,
  [SMALL_STATE(200)] = 3049,
  [SMALL_STATE(201)] = 3057,
  [SMALL_STATE(202)] = 3065,
  [SMALL_STATE(203)] = 3073,
  [SMALL_STATE(204)] = 3081,
  [SMALL_STATE(205)] = 3089,
  [SMALL_STATE(206)] = 3097,
  [SMALL_STATE(207)] = 3105,
  [SMALL_STATE(208)] = 3113,
  [SMALL_STATE(209)] = 3121,
  [SMALL_STATE(210)] = 3129,
  [SMALL_STATE(211)] = 3139,
  [SMALL_STATE(212)] = 3147,
  [SMALL_STATE(213)] = 3155,
  [SMALL_STATE(214)] = 3163,
  [SMALL_STATE(215)] = 3171,
  [SMALL_STATE(216)] = 3181,
  [SMALL_STATE(217)] = 3189,
  [SMALL_STATE(218)] = 3197,
  [SMALL_STATE(219)] = 3205,
  [SMALL_STATE(220)] = 3213,
  [SMALL_STATE(221)] = 3221,
  [SMALL_STATE(222)] = 3229,
  [SMALL_STATE(223)] = 3237,
  [SMALL_STATE(224)] = 3245,
  [SMALL_STATE(225)] = 3253,
  [SMALL_STATE(226)] = 3261,
  [SMALL_STATE(227)] = 3269,
  [SMALL_STATE(228)] = 3277,
  [SMALL_STATE(229)] = 3285,
  [SMALL_STATE(230)] = 3293,
  [SMALL_STATE(231)] = 3303,
  [SMALL_STATE(232)] = 3311,
  [SMALL_STATE(233)] = 3319,
  [SMALL_STATE(234)] = 3327,
  [SMALL_STATE(235)] = 3334,
  [SMALL_STATE(236)] = 3341,
  [SMALL_STATE(237)] = 3348,
  [SMALL_STATE(238)] = 3355,
  [SMALL_STATE(239)] = 3362,
  [SMALL_STATE(240)] = 3369,
  [SMALL_STATE(241)] = 3376,
  [SMALL_STATE(242)] = 3383,
  [SMALL_STATE(243)] = 3390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(70),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(70),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2), SHIFT_REPEAT(239),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(52),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(240),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(215),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(71),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(120),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(67),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(133),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__raw_string_literal, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__raw_string_literal_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [475] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
