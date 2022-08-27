#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
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
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 25,
  sym__raw_string_literal = 26,
  anon_sym_DQUOTE = 27,
  aux_sym__interpreted_string_literal_token1 = 28,
  sym_escape_sequence = 29,
  sym__indent_start = 30,
  sym__indent = 31,
  sym__indent_eq = 32,
  sym__dedent = 33,
  sym__long_string_content = 34,
  sym_source_file = 35,
  sym__statement = 36,
  sym_expression_statement = 37,
  sym__declaration = 38,
  sym_const_section = 39,
  sym_var_section = 40,
  sym_let_section = 41,
  sym_type_section = 42,
  sym_variable_declaration = 43,
  sym__variable_name_declaration = 44,
  sym_tuple_deconstruct_declaration = 45,
  sym_type_declaration = 46,
  sym__type = 47,
  sym_tuple_type = 48,
  sym_object_type = 49,
  sym_field_declaration_list = 50,
  sym_field_declaration = 51,
  sym__symbol_declaration = 52,
  sym_exported_symbol = 53,
  sym_distinct_type = 54,
  sym_ref_type = 55,
  sym_expression = 56,
  sym__literal = 57,
  sym_boolean_literal = 58,
  sym_string_literal = 59,
  sym__long_string_literal = 60,
  sym__interpreted_string_literal = 61,
  sym_tuple = 62,
  sym__type_identifier = 63,
  aux_sym_source_file_repeat1 = 64,
  aux_sym_const_section_repeat1 = 65,
  aux_sym_type_section_repeat1 = 66,
  aux_sym_variable_declaration_repeat1 = 67,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 68,
  aux_sym_field_declaration_list_repeat1 = 69,
  aux_sym_field_declaration_list_repeat2 = 70,
  aux_sym_field_declaration_repeat1 = 71,
  aux_sym__long_string_literal_repeat1 = 72,
  aux_sym__interpreted_string_literal_repeat1 = 73,
  aux_sym_tuple_repeat1 = 74,
  alias_sym_type_identifier = 75,
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym__raw_string_literal] = "_raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpreted_string_literal_token1] = "_interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
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
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpreted_string_literal_token1] = aux_sym__interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
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
  [sym__interpreted_string_literal] = {
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
      if (eof) ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '"') ADVANCE(62);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 25:
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(65);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(67);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_field_declaration_list_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '1') ADVANCE(49);
      if (lookahead == '3') ADVANCE(48);
      if (lookahead == '6') ADVANCE(50);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '4') ADVANCE(54);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '8') ADVANCE(54);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(44);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(20);
      if (lookahead == '_') ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__interpreted_string_literal_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(68);
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33, .external_lex_state = 3},
  [33] = {.lex_state = 33, .external_lex_state = 4},
  [34] = {.lex_state = 33, .external_lex_state = 5},
  [35] = {.lex_state = 33, .external_lex_state = 5},
  [36] = {.lex_state = 33, .external_lex_state = 3},
  [37] = {.lex_state = 33, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 0, .external_lex_state = 7},
  [40] = {.lex_state = 33, .external_lex_state = 4},
  [41] = {.lex_state = 33, .external_lex_state = 4},
  [42] = {.lex_state = 33, .external_lex_state = 3},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33, .external_lex_state = 4},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33, .external_lex_state = 4},
  [47] = {.lex_state = 33, .external_lex_state = 3},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33, .external_lex_state = 3},
  [50] = {.lex_state = 18, .external_lex_state = 5},
  [51] = {.lex_state = 33, .external_lex_state = 4},
  [52] = {.lex_state = 33, .external_lex_state = 4},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33, .external_lex_state = 3},
  [55] = {.lex_state = 33, .external_lex_state = 3},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 0, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33, .external_lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 0, .external_lex_state = 8},
  [98] = {.lex_state = 0, .external_lex_state = 8},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 18},
  [106] = {.lex_state = 0, .external_lex_state = 8},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 33},
  [113] = {.lex_state = 0, .external_lex_state = 8},
  [114] = {.lex_state = 33},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 33},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 33},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 33},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 18},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 8},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 18},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 33},
  [154] = {.lex_state = 33},
  [155] = {.lex_state = 33},
  [156] = {.lex_state = 33},
  [157] = {.lex_state = 33},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 33},
  [160] = {.lex_state = 33},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 33},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 18},
  [168] = {.lex_state = 18},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 33},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 4},
  [180] = {.lex_state = 18},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 18},
  [183] = {.lex_state = 18},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 18},
  [186] = {.lex_state = 18},
  [187] = {.lex_state = 33},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 0, .external_lex_state = 4},
  [190] = {.lex_state = 0, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 4},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 33},
  [196] = {.lex_state = 0, .external_lex_state = 4},
  [197] = {.lex_state = 0, .external_lex_state = 3},
  [198] = {.lex_state = 0, .external_lex_state = 4},
  [199] = {.lex_state = 33},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 0, .external_lex_state = 4},
  [202] = {.lex_state = 33},
  [203] = {.lex_state = 0, .external_lex_state = 4},
  [204] = {.lex_state = 0, .external_lex_state = 4},
  [205] = {.lex_state = 0, .external_lex_state = 4},
  [206] = {.lex_state = 0, .external_lex_state = 4},
  [207] = {.lex_state = 0, .external_lex_state = 4},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 4},
  [211] = {.lex_state = 0, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 4},
  [213] = {.lex_state = 0, .external_lex_state = 4},
  [214] = {.lex_state = 0, .external_lex_state = 4},
  [215] = {.lex_state = 33},
  [216] = {.lex_state = 0, .external_lex_state = 4},
  [217] = {.lex_state = 0, .external_lex_state = 4},
  [218] = {.lex_state = 0, .external_lex_state = 4},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 33},
  [222] = {.lex_state = 33},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 33},
  [225] = {.lex_state = 0},
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
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent_eq] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
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
    [aux_sym_boolean_literal_token1] = ACTIONS(1),
    [aux_sym_boolean_literal_token2] = ACTIONS(1),
    [aux_sym_boolean_literal_token3] = ACTIONS(1),
    [aux_sym_boolean_literal_token4] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__long_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(225),
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(144), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [57] = 14,
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
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
    STATE(207), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [114] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(160), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(163), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [150] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [186] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__raw_string_literal,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(170), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(171), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [222] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(189), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [258] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(130), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(160), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(163), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [294] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(160), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(163), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [330] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__raw_string_literal,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(170), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(171), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [366] = 9,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      sym__raw_string_literal,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_expression,
    ACTIONS(29), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(160), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(27), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(163), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [402] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [438] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__raw_string_literal,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(162), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(170), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(171), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [474] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(21), 1,
      sym__raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(206), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(217), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [510] = 9,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__raw_string_literal,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(170), 2,
      sym__long_string_literal,
      sym__interpreted_string_literal,
    ACTIONS(39), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(171), 4,
      sym__literal,
      sym_boolean_literal,
      sym_string_literal,
      sym_tuple,
  [546] = 6,
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
    STATE(167), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [570] = 6,
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
    STATE(93), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [594] = 6,
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
    STATE(200), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [618] = 6,
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
    STATE(164), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [642] = 6,
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
    STATE(158), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [666] = 6,
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
    STATE(92), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [690] = 6,
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
    STATE(185), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [714] = 6,
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
    STATE(86), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [738] = 6,
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
    STATE(152), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [762] = 6,
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
    STATE(143), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [786] = 6,
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
    STATE(141), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [810] = 6,
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
    STATE(140), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [834] = 6,
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
    STATE(133), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [858] = 6,
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
    STATE(168), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [882] = 6,
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
    STATE(95), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [906] = 6,
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
    STATE(184), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [930] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(82), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [943] = 5,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(90), 1,
      anon_sym_EQ,
    STATE(40), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(84), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [960] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      sym__indent,
    STATE(219), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [977] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      sym__indent,
    STATE(218), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [994] = 5,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(104), 1,
      anon_sym_EQ,
    STATE(42), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(84), 2,
      sym__indent_eq,
      sym__dedent,
  [1011] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      sym__indent,
    STATE(216), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1028] = 4,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym__indent,
    STATE(139), 1,
      sym_field_declaration_list,
    ACTIONS(108), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1043] = 4,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym__indent,
    STATE(91), 1,
      sym_field_declaration_list,
    ACTIONS(108), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1058] = 5,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      anon_sym_EQ,
    STATE(41), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(118), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1075] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(82), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [1088] = 5,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      anon_sym_EQ,
    STATE(32), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(118), 2,
      sym__indent_eq,
      sym__dedent,
  [1105] = 4,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_variable_declaration,
    STATE(36), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1119] = 1,
    ACTIONS(135), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1127] = 4,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_variable_declaration,
    STATE(36), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1141] = 1,
    ACTIONS(137), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1149] = 1,
    ACTIONS(137), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1157] = 4,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_variable_declaration,
    STATE(36), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1171] = 1,
    ACTIONS(135), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1179] = 4,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym__indent,
    STATE(183), 1,
      sym_field_declaration_list,
    ACTIONS(108), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1193] = 1,
    ACTIONS(143), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1201] = 1,
    ACTIONS(145), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1209] = 4,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_variable_declaration,
    STATE(36), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1223] = 1,
    ACTIONS(145), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1231] = 1,
    ACTIONS(143), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1239] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(76), 1,
      sym_field_declaration,
    STATE(137), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1250] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(151), 1,
      sym_field_declaration,
    STATE(137), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1261] = 3,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(151), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1272] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(105), 1,
      sym_field_declaration,
    STATE(137), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1283] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(64), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(156), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1294] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(103), 1,
      sym_field_declaration,
    STATE(104), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1305] = 3,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(160), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1316] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(150), 1,
      sym_field_declaration,
    STATE(104), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1327] = 3,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(164), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1338] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(164), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1349] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(134), 1,
      sym_field_declaration,
    STATE(137), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1360] = 3,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1371] = 3,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1382] = 3,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(164), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1393] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(78), 1,
      sym_field_declaration,
    STATE(104), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1404] = 3,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(172), 2,
      aux_sym__interpreted_string_literal_token1,
      sym_escape_sequence,
  [1415] = 3,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(131), 1,
      sym_field_declaration,
    STATE(104), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1426] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(176), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [1436] = 1,
    ACTIONS(178), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1442] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(182), 1,
      sym__dedent,
    STATE(118), 1,
      aux_sym_field_declaration_list_repeat2,
  [1452] = 3,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_field_declaration_list_repeat1,
  [1462] = 3,
    ACTIONS(188), 1,
      sym__indent_eq,
    ACTIONS(190), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_type_section_repeat1,
  [1472] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(186), 1,
      sym__dedent,
    STATE(75), 1,
      aux_sym_field_declaration_list_repeat2,
  [1482] = 3,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym__indent,
    STATE(138), 1,
      sym_field_declaration_list,
  [1492] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1502] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_tuple_repeat1,
  [1512] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_tuple_repeat1,
  [1522] = 3,
    ACTIONS(205), 1,
      sym_identifier,
    ACTIONS(207), 1,
      sym__indent,
    STATE(213), 1,
      sym_type_declaration,
  [1532] = 3,
    ACTIONS(209), 1,
      sym__indent_eq,
    ACTIONS(212), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [1542] = 3,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    STATE(121), 1,
      aux_sym_field_declaration_list_repeat1,
  [1552] = 2,
    ACTIONS(216), 1,
      anon_sym_EQ,
    ACTIONS(214), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1560] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1570] = 1,
    ACTIONS(223), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1576] = 3,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    ACTIONS(116), 1,
      sym__indent,
    STATE(90), 1,
      sym_field_declaration_list,
  [1586] = 1,
    ACTIONS(225), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1592] = 1,
    ACTIONS(227), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1598] = 1,
    ACTIONS(229), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1604] = 1,
    ACTIONS(231), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1610] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1620] = 2,
    ACTIONS(237), 1,
      anon_sym_EQ,
    ACTIONS(235), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1628] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1638] = 3,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      sym__long_string_content,
    STATE(113), 1,
      aux_sym__long_string_literal_repeat1,
  [1648] = 3,
    ACTIONS(245), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(247), 1,
      sym__long_string_content,
    STATE(109), 1,
      aux_sym__long_string_literal_repeat1,
  [1658] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_repeat1,
  [1668] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(251), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [1678] = 3,
    ACTIONS(253), 1,
      sym__indent_eq,
    ACTIONS(256), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_type_section_repeat1,
  [1688] = 2,
    ACTIONS(260), 1,
      anon_sym_STAR,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1696] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(111), 1,
      aux_sym_field_declaration_list_repeat2,
  [1706] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(114), 1,
      aux_sym_field_declaration_repeat1,
  [1716] = 3,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym_field_declaration_list_repeat1,
  [1726] = 3,
    ACTIONS(268), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(270), 1,
      sym__long_string_content,
    STATE(98), 1,
      aux_sym__long_string_literal_repeat1,
  [1736] = 3,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 1,
      sym__indent_eq,
    STATE(107), 1,
      aux_sym_source_file_repeat1,
  [1746] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_tuple_repeat1,
  [1756] = 3,
    ACTIONS(279), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(281), 1,
      sym__long_string_content,
    STATE(109), 1,
      aux_sym__long_string_literal_repeat1,
  [1766] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(284), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym_const_section_repeat1,
  [1776] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(286), 1,
      sym__dedent,
    STATE(118), 1,
      aux_sym_field_declaration_list_repeat2,
  [1786] = 2,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(154), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1794] = 3,
    ACTIONS(247), 1,
      sym__long_string_content,
    ACTIONS(288), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(109), 1,
      aux_sym__long_string_literal_repeat1,
  [1804] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_COLON,
    STATE(120), 1,
      aux_sym_field_declaration_repeat1,
  [1814] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_tuple_repeat1,
  [1824] = 3,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_field_declaration_list_repeat1,
  [1834] = 1,
    ACTIONS(294), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1840] = 3,
    ACTIONS(296), 1,
      sym__indent_eq,
    ACTIONS(299), 1,
      sym__dedent,
    STATE(118), 1,
      aux_sym_field_declaration_list_repeat2,
  [1850] = 3,
    ACTIONS(188), 1,
      sym__indent_eq,
    ACTIONS(301), 1,
      sym__dedent,
    STATE(77), 1,
      aux_sym_type_section_repeat1,
  [1860] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(306), 1,
      anon_sym_COLON,
    STATE(120), 1,
      aux_sym_field_declaration_repeat1,
  [1870] = 3,
    ACTIONS(308), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_field_declaration_list_repeat1,
  [1880] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(313), 1,
      sym__dedent,
    STATE(73), 1,
      aux_sym_const_section_repeat1,
  [1890] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(315), 1,
      sym__dedent,
    STATE(110), 1,
      aux_sym_const_section_repeat1,
  [1900] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1910] = 3,
    ACTIONS(174), 1,
      sym__indent_eq,
    ACTIONS(319), 1,
      sym__dedent,
    STATE(100), 1,
      aux_sym_const_section_repeat1,
  [1920] = 3,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(323), 1,
      sym__indent_eq,
    STATE(107), 1,
      aux_sym_source_file_repeat1,
  [1930] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_tuple_repeat1,
  [1940] = 3,
    ACTIONS(247), 1,
      sym__long_string_content,
    ACTIONS(327), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(109), 1,
      aux_sym__long_string_literal_repeat1,
  [1950] = 3,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      sym__indent,
    STATE(182), 1,
      sym_field_declaration_list,
  [1960] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_tuple_repeat1,
  [1970] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(331), 1,
      sym__dedent,
    STATE(135), 1,
      aux_sym_field_declaration_list_repeat2,
  [1980] = 1,
    ACTIONS(223), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1986] = 2,
    ACTIONS(333), 1,
      anon_sym_EQ,
    ACTIONS(214), 2,
      sym__indent_eq,
      sym__dedent,
  [1994] = 3,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_field_declaration_list_repeat1,
  [2004] = 3,
    ACTIONS(180), 1,
      sym__indent_eq,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(118), 1,
      aux_sym_field_declaration_list_repeat2,
  [2014] = 3,
    ACTIONS(184), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_field_declaration_list_repeat1,
  [2024] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_COLON,
    STATE(142), 1,
      aux_sym_field_declaration_repeat1,
  [2034] = 1,
    ACTIONS(225), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2040] = 1,
    ACTIONS(227), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2046] = 1,
    ACTIONS(229), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2052] = 1,
    ACTIONS(231), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2058] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(120), 1,
      aux_sym_field_declaration_repeat1,
  [2068] = 2,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(235), 2,
      sym__indent_eq,
      sym__dedent,
  [2076] = 3,
    ACTIONS(323), 1,
      sym__indent_eq,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      aux_sym_source_file_repeat1,
  [2086] = 1,
    ACTIONS(178), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2092] = 1,
    ACTIONS(294), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2098] = 3,
    ACTIONS(345), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(347), 1,
      sym__long_string_content,
    STATE(128), 1,
      aux_sym__long_string_literal_repeat1,
  [2108] = 1,
    ACTIONS(349), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2113] = 1,
    ACTIONS(294), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2118] = 1,
    ACTIONS(299), 2,
      sym__indent_eq,
      sym__dedent,
  [2123] = 1,
    ACTIONS(311), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2128] = 1,
    ACTIONS(351), 2,
      sym__indent_eq,
      sym__dedent,
  [2133] = 1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2138] = 1,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2143] = 1,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2148] = 1,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2153] = 1,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2158] = 1,
    ACTIONS(363), 2,
      sym__indent_eq,
      sym__dedent,
  [2163] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2168] = 1,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2173] = 1,
    ACTIONS(369), 2,
      sym__indent_eq,
      sym__dedent,
  [2178] = 1,
    ACTIONS(371), 2,
      sym__indent_eq,
      sym__dedent,
  [2183] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2188] = 1,
    ACTIONS(375), 2,
      sym__indent_eq,
      sym__dedent,
  [2193] = 1,
    ACTIONS(377), 2,
      sym__indent_eq,
      sym__dedent,
  [2198] = 1,
    ACTIONS(377), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2203] = 1,
    ACTIONS(375), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2208] = 1,
    ACTIONS(363), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2213] = 1,
    ACTIONS(365), 2,
      sym__indent_eq,
      sym__dedent,
  [2218] = 1,
    ACTIONS(367), 2,
      sym__indent_eq,
      sym__dedent,
  [2223] = 1,
    ACTIONS(373), 2,
      sym__indent_eq,
      sym__dedent,
  [2228] = 1,
    ACTIONS(379), 2,
      sym__indent_eq,
      sym__dedent,
  [2233] = 1,
    ACTIONS(381), 2,
      sym__indent_eq,
      sym__dedent,
  [2238] = 1,
    ACTIONS(357), 2,
      sym__indent_eq,
      sym__dedent,
  [2243] = 1,
    ACTIONS(359), 2,
      sym__indent_eq,
      sym__dedent,
  [2248] = 1,
    ACTIONS(361), 2,
      sym__indent_eq,
      sym__dedent,
  [2253] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2258] = 1,
    ACTIONS(383), 2,
      sym__indent_eq,
      sym__dedent,
  [2263] = 1,
    ACTIONS(365), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2268] = 1,
    ACTIONS(223), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2273] = 1,
    ACTIONS(353), 2,
      sym__indent_eq,
      sym__dedent,
  [2278] = 1,
    ACTIONS(225), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2283] = 1,
    ACTIONS(227), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2288] = 1,
    ACTIONS(229), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2293] = 1,
    ACTIONS(231), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2298] = 1,
    ACTIONS(178), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2303] = 1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2308] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2313] = 1,
    ACTIONS(371), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2318] = 1,
    ACTIONS(387), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2323] = 1,
    ACTIONS(256), 2,
      sym__indent_eq,
      sym__dedent,
  [2328] = 1,
    ACTIONS(389), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2333] = 1,
    ACTIONS(391), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2338] = 1,
    ACTIONS(369), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2343] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2348] = 1,
    ACTIONS(395), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2353] = 1,
    ACTIONS(212), 2,
      sym__indent_eq,
      sym__dedent,
  [2358] = 1,
    ACTIONS(353), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2363] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2368] = 1,
    ACTIONS(351), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2373] = 1,
    ACTIONS(397), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2378] = 2,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(191), 1,
      sym_type_declaration,
  [2385] = 1,
    ACTIONS(401), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2390] = 1,
    ACTIONS(403), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2395] = 1,
    ACTIONS(383), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2400] = 1,
    ACTIONS(367), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2405] = 1,
    ACTIONS(272), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2410] = 1,
    ACTIONS(361), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2415] = 1,
    ACTIONS(359), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2420] = 1,
    ACTIONS(357), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2425] = 1,
    ACTIONS(381), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2430] = 1,
    ACTIONS(379), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2435] = 1,
    ACTIONS(405), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2440] = 1,
    ACTIONS(407), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2445] = 2,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(119), 1,
      sym_type_declaration,
  [2452] = 1,
    ACTIONS(409), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2457] = 1,
    ACTIONS(373), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2462] = 1,
    ACTIONS(411), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2467] = 1,
    ACTIONS(413), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2472] = 1,
    ACTIONS(415), 1,
      anon_sym_EQ,
  [2476] = 1,
    ACTIONS(417), 1,
      sym_identifier,
  [2480] = 1,
    ACTIONS(419), 1,
      sym_identifier,
  [2484] = 1,
    ACTIONS(421), 1,
      anon_sym_EQ,
  [2488] = 1,
    ACTIONS(423), 1,
      sym_identifier,
  [2492] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 114,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 258,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 366,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 438,
  [SMALL_STATE(14)] = 474,
  [SMALL_STATE(15)] = 510,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 594,
  [SMALL_STATE(19)] = 618,
  [SMALL_STATE(20)] = 642,
  [SMALL_STATE(21)] = 666,
  [SMALL_STATE(22)] = 690,
  [SMALL_STATE(23)] = 714,
  [SMALL_STATE(24)] = 738,
  [SMALL_STATE(25)] = 762,
  [SMALL_STATE(26)] = 786,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 882,
  [SMALL_STATE(31)] = 906,
  [SMALL_STATE(32)] = 930,
  [SMALL_STATE(33)] = 943,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 977,
  [SMALL_STATE(36)] = 994,
  [SMALL_STATE(37)] = 1011,
  [SMALL_STATE(38)] = 1028,
  [SMALL_STATE(39)] = 1043,
  [SMALL_STATE(40)] = 1058,
  [SMALL_STATE(41)] = 1075,
  [SMALL_STATE(42)] = 1088,
  [SMALL_STATE(43)] = 1105,
  [SMALL_STATE(44)] = 1119,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1141,
  [SMALL_STATE(47)] = 1149,
  [SMALL_STATE(48)] = 1157,
  [SMALL_STATE(49)] = 1171,
  [SMALL_STATE(50)] = 1179,
  [SMALL_STATE(51)] = 1193,
  [SMALL_STATE(52)] = 1201,
  [SMALL_STATE(53)] = 1209,
  [SMALL_STATE(54)] = 1223,
  [SMALL_STATE(55)] = 1231,
  [SMALL_STATE(56)] = 1239,
  [SMALL_STATE(57)] = 1250,
  [SMALL_STATE(58)] = 1261,
  [SMALL_STATE(59)] = 1272,
  [SMALL_STATE(60)] = 1283,
  [SMALL_STATE(61)] = 1294,
  [SMALL_STATE(62)] = 1305,
  [SMALL_STATE(63)] = 1316,
  [SMALL_STATE(64)] = 1327,
  [SMALL_STATE(65)] = 1338,
  [SMALL_STATE(66)] = 1349,
  [SMALL_STATE(67)] = 1360,
  [SMALL_STATE(68)] = 1371,
  [SMALL_STATE(69)] = 1382,
  [SMALL_STATE(70)] = 1393,
  [SMALL_STATE(71)] = 1404,
  [SMALL_STATE(72)] = 1415,
  [SMALL_STATE(73)] = 1426,
  [SMALL_STATE(74)] = 1436,
  [SMALL_STATE(75)] = 1442,
  [SMALL_STATE(76)] = 1452,
  [SMALL_STATE(77)] = 1462,
  [SMALL_STATE(78)] = 1472,
  [SMALL_STATE(79)] = 1482,
  [SMALL_STATE(80)] = 1492,
  [SMALL_STATE(81)] = 1502,
  [SMALL_STATE(82)] = 1512,
  [SMALL_STATE(83)] = 1522,
  [SMALL_STATE(84)] = 1532,
  [SMALL_STATE(85)] = 1542,
  [SMALL_STATE(86)] = 1552,
  [SMALL_STATE(87)] = 1560,
  [SMALL_STATE(88)] = 1570,
  [SMALL_STATE(89)] = 1576,
  [SMALL_STATE(90)] = 1586,
  [SMALL_STATE(91)] = 1592,
  [SMALL_STATE(92)] = 1598,
  [SMALL_STATE(93)] = 1604,
  [SMALL_STATE(94)] = 1610,
  [SMALL_STATE(95)] = 1620,
  [SMALL_STATE(96)] = 1628,
  [SMALL_STATE(97)] = 1638,
  [SMALL_STATE(98)] = 1648,
  [SMALL_STATE(99)] = 1658,
  [SMALL_STATE(100)] = 1668,
  [SMALL_STATE(101)] = 1678,
  [SMALL_STATE(102)] = 1688,
  [SMALL_STATE(103)] = 1696,
  [SMALL_STATE(104)] = 1706,
  [SMALL_STATE(105)] = 1716,
  [SMALL_STATE(106)] = 1726,
  [SMALL_STATE(107)] = 1736,
  [SMALL_STATE(108)] = 1746,
  [SMALL_STATE(109)] = 1756,
  [SMALL_STATE(110)] = 1766,
  [SMALL_STATE(111)] = 1776,
  [SMALL_STATE(112)] = 1786,
  [SMALL_STATE(113)] = 1794,
  [SMALL_STATE(114)] = 1804,
  [SMALL_STATE(115)] = 1814,
  [SMALL_STATE(116)] = 1824,
  [SMALL_STATE(117)] = 1834,
  [SMALL_STATE(118)] = 1840,
  [SMALL_STATE(119)] = 1850,
  [SMALL_STATE(120)] = 1860,
  [SMALL_STATE(121)] = 1870,
  [SMALL_STATE(122)] = 1880,
  [SMALL_STATE(123)] = 1890,
  [SMALL_STATE(124)] = 1900,
  [SMALL_STATE(125)] = 1910,
  [SMALL_STATE(126)] = 1920,
  [SMALL_STATE(127)] = 1930,
  [SMALL_STATE(128)] = 1940,
  [SMALL_STATE(129)] = 1950,
  [SMALL_STATE(130)] = 1960,
  [SMALL_STATE(131)] = 1970,
  [SMALL_STATE(132)] = 1980,
  [SMALL_STATE(133)] = 1986,
  [SMALL_STATE(134)] = 1994,
  [SMALL_STATE(135)] = 2004,
  [SMALL_STATE(136)] = 2014,
  [SMALL_STATE(137)] = 2024,
  [SMALL_STATE(138)] = 2034,
  [SMALL_STATE(139)] = 2040,
  [SMALL_STATE(140)] = 2046,
  [SMALL_STATE(141)] = 2052,
  [SMALL_STATE(142)] = 2058,
  [SMALL_STATE(143)] = 2068,
  [SMALL_STATE(144)] = 2076,
  [SMALL_STATE(145)] = 2086,
  [SMALL_STATE(146)] = 2092,
  [SMALL_STATE(147)] = 2098,
  [SMALL_STATE(148)] = 2108,
  [SMALL_STATE(149)] = 2113,
  [SMALL_STATE(150)] = 2118,
  [SMALL_STATE(151)] = 2123,
  [SMALL_STATE(152)] = 2128,
  [SMALL_STATE(153)] = 2133,
  [SMALL_STATE(154)] = 2138,
  [SMALL_STATE(155)] = 2143,
  [SMALL_STATE(156)] = 2148,
  [SMALL_STATE(157)] = 2153,
  [SMALL_STATE(158)] = 2158,
  [SMALL_STATE(159)] = 2163,
  [SMALL_STATE(160)] = 2168,
  [SMALL_STATE(161)] = 2173,
  [SMALL_STATE(162)] = 2178,
  [SMALL_STATE(163)] = 2183,
  [SMALL_STATE(164)] = 2188,
  [SMALL_STATE(165)] = 2193,
  [SMALL_STATE(166)] = 2198,
  [SMALL_STATE(167)] = 2203,
  [SMALL_STATE(168)] = 2208,
  [SMALL_STATE(169)] = 2213,
  [SMALL_STATE(170)] = 2218,
  [SMALL_STATE(171)] = 2223,
  [SMALL_STATE(172)] = 2228,
  [SMALL_STATE(173)] = 2233,
  [SMALL_STATE(174)] = 2238,
  [SMALL_STATE(175)] = 2243,
  [SMALL_STATE(176)] = 2248,
  [SMALL_STATE(177)] = 2253,
  [SMALL_STATE(178)] = 2258,
  [SMALL_STATE(179)] = 2263,
  [SMALL_STATE(180)] = 2268,
  [SMALL_STATE(181)] = 2273,
  [SMALL_STATE(182)] = 2278,
  [SMALL_STATE(183)] = 2283,
  [SMALL_STATE(184)] = 2288,
  [SMALL_STATE(185)] = 2293,
  [SMALL_STATE(186)] = 2298,
  [SMALL_STATE(187)] = 2303,
  [SMALL_STATE(188)] = 2308,
  [SMALL_STATE(189)] = 2313,
  [SMALL_STATE(190)] = 2318,
  [SMALL_STATE(191)] = 2323,
  [SMALL_STATE(192)] = 2328,
  [SMALL_STATE(193)] = 2333,
  [SMALL_STATE(194)] = 2338,
  [SMALL_STATE(195)] = 2343,
  [SMALL_STATE(196)] = 2348,
  [SMALL_STATE(197)] = 2353,
  [SMALL_STATE(198)] = 2358,
  [SMALL_STATE(199)] = 2363,
  [SMALL_STATE(200)] = 2368,
  [SMALL_STATE(201)] = 2373,
  [SMALL_STATE(202)] = 2378,
  [SMALL_STATE(203)] = 2385,
  [SMALL_STATE(204)] = 2390,
  [SMALL_STATE(205)] = 2395,
  [SMALL_STATE(206)] = 2400,
  [SMALL_STATE(207)] = 2405,
  [SMALL_STATE(208)] = 2410,
  [SMALL_STATE(209)] = 2415,
  [SMALL_STATE(210)] = 2420,
  [SMALL_STATE(211)] = 2425,
  [SMALL_STATE(212)] = 2430,
  [SMALL_STATE(213)] = 2435,
  [SMALL_STATE(214)] = 2440,
  [SMALL_STATE(215)] = 2445,
  [SMALL_STATE(216)] = 2452,
  [SMALL_STATE(217)] = 2457,
  [SMALL_STATE(218)] = 2462,
  [SMALL_STATE(219)] = 2467,
  [SMALL_STATE(220)] = 2472,
  [SMALL_STATE(221)] = 2476,
  [SMALL_STATE(222)] = 2480,
  [SMALL_STATE(223)] = 2484,
  [SMALL_STATE(224)] = 2488,
  [SMALL_STATE(225)] = 2492,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(68),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(67),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(58),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(48),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(224),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(202),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__long_string_literal_repeat1, 2), SHIFT_REPEAT(109),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(63),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(112),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(57),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_string_literal, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [425] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
