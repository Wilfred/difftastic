#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 4
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
  anon_sym_DOT = 23,
  aux_sym_float_literal_token1 = 24,
  aux_sym__numeric_literal_token1 = 25,
  aux_sym__numeric_literal_token2 = 26,
  aux_sym__numeric_literal_token3 = 27,
  sym__decimal_literal = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_u = 30,
  anon_sym_U = 31,
  aux_sym__integer_literal_suffix_token1 = 32,
  anon_sym_d = 33,
  anon_sym_D = 34,
  aux_sym__float_literal_suffix_token1 = 35,
  sym__indent = 36,
  sym__indent_any = 37,
  sym__dedent = 38,
  sym__eol = 39,
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
  sym__literal = 62,
  sym_boolean_literal = 63,
  sym_integer_literal = 64,
  sym_float_literal = 65,
  sym_tuple = 66,
  sym__numeric_literal = 67,
  sym__integer_literal_suffix = 68,
  sym__float_literal_suffix = 69,
  sym__type_identifier = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_const_section_repeat1 = 72,
  aux_sym_type_section_repeat1 = 73,
  aux_sym_variable_declaration_repeat1 = 74,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 75,
  aux_sym_field_declaration_list_repeat1 = 76,
  aux_sym_field_declaration_list_repeat2 = 77,
  aux_sym_field_declaration_repeat1 = 78,
  aux_sym_tuple_repeat1 = 79,
  alias_sym_type_identifier = 80,
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
  [anon_sym_DOT] = ".",
  [aux_sym_float_literal_token1] = "float_literal_token1",
  [aux_sym__numeric_literal_token1] = "_numeric_literal_token1",
  [aux_sym__numeric_literal_token2] = "_numeric_literal_token2",
  [aux_sym__numeric_literal_token3] = "_numeric_literal_token3",
  [sym__decimal_literal] = "_decimal_literal",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_u] = "u",
  [anon_sym_U] = "U",
  [aux_sym__integer_literal_suffix_token1] = "_integer_literal_suffix_token1",
  [anon_sym_d] = "d",
  [anon_sym_D] = "D",
  [aux_sym__float_literal_suffix_token1] = "_float_literal_suffix_token1",
  [sym__indent] = "_indent",
  [sym__indent_any] = "_indent_any",
  [sym__dedent] = "_dedent",
  [sym__eol] = "_eol",
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
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_tuple] = "tuple",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__integer_literal_suffix] = "_integer_literal_suffix",
  [sym__float_literal_suffix] = "_float_literal_suffix",
  [sym__type_identifier] = "_type_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_const_section_repeat1] = "const_section_repeat1",
  [aux_sym_type_section_repeat1] = "type_section_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_tuple_deconstruct_declaration_repeat1] = "tuple_deconstruct_declaration_repeat1",
  [aux_sym_field_declaration_list_repeat1] = "field_declaration_list_repeat1",
  [aux_sym_field_declaration_list_repeat2] = "field_declaration_list_repeat2",
  [aux_sym_field_declaration_repeat1] = "field_declaration_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_float_literal_token1] = aux_sym_float_literal_token1,
  [aux_sym__numeric_literal_token1] = aux_sym__numeric_literal_token1,
  [aux_sym__numeric_literal_token2] = aux_sym__numeric_literal_token2,
  [aux_sym__numeric_literal_token3] = aux_sym__numeric_literal_token3,
  [sym__decimal_literal] = sym__decimal_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_U] = anon_sym_U,
  [aux_sym__integer_literal_suffix_token1] = aux_sym__integer_literal_suffix_token1,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_D] = anon_sym_D,
  [aux_sym__float_literal_suffix_token1] = aux_sym__float_literal_suffix_token1,
  [sym__indent] = sym__indent,
  [sym__indent_any] = sym__indent_any,
  [sym__dedent] = sym__dedent,
  [sym__eol] = sym__eol,
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
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_tuple] = sym_tuple,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__integer_literal_suffix] = sym__integer_literal_suffix,
  [sym__float_literal_suffix] = sym__float_literal_suffix,
  [sym__type_identifier] = sym__type_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_const_section_repeat1] = aux_sym_const_section_repeat1,
  [aux_sym_type_section_repeat1] = aux_sym_type_section_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
  [aux_sym_tuple_deconstruct_declaration_repeat1] = aux_sym_tuple_deconstruct_declaration_repeat1,
  [aux_sym_field_declaration_list_repeat1] = aux_sym_field_declaration_list_repeat1,
  [aux_sym_field_declaration_list_repeat2] = aux_sym_field_declaration_list_repeat2,
  [aux_sym_field_declaration_repeat1] = aux_sym_field_declaration_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__decimal_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__integer_literal_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__float_literal_suffix_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_any] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
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
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_literal_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__float_literal_suffix] = {
    .visible = false,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(39);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(51);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(49);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(24);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '0') ADVANCE(34);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_field_declaration_list_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__integer_literal_suffix_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__integer_literal_suffix_token1);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '3') ADVANCE(54);
      if (lookahead == '6') ADVANCE(56);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      if (lookahead == '1') ADVANCE(3);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '6') ADVANCE(55);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(58);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(50);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(50);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
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
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 10, .external_lex_state = 2},
  [34] = {.lex_state = 10, .external_lex_state = 2},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 16, .external_lex_state = 3},
  [37] = {.lex_state = 10, .external_lex_state = 2},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 16, .external_lex_state = 3},
  [41] = {.lex_state = 16, .external_lex_state = 3},
  [42] = {.lex_state = 16, .external_lex_state = 3},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 16, .external_lex_state = 2},
  [46] = {.lex_state = 16, .external_lex_state = 2},
  [47] = {.lex_state = 10, .external_lex_state = 2},
  [48] = {.lex_state = 16, .external_lex_state = 2},
  [49] = {.lex_state = 16, .external_lex_state = 3},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10, .external_lex_state = 2},
  [52] = {.lex_state = 16, .external_lex_state = 3},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16, .external_lex_state = 3},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16, .external_lex_state = 2},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16, .external_lex_state = 2},
  [59] = {.lex_state = 16, .external_lex_state = 2},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 11, .external_lex_state = 2},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16, .external_lex_state = 2},
  [65] = {.lex_state = 16, .external_lex_state = 3},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16, .external_lex_state = 2},
  [69] = {.lex_state = 16, .external_lex_state = 2},
  [70] = {.lex_state = 16, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 16, .external_lex_state = 3},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 16, .external_lex_state = 2},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16, .external_lex_state = 3},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 16, .external_lex_state = 3},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 16},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 16},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 16},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 16},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 16},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__indent_any = 1,
  ts_external_token__dedent = 2,
  ts_external_token__eol = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__indent_any] = sym__indent_any,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__eol] = sym__eol,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_any] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eol] = true,
  },
  [2] = {
    [ts_external_token__eol] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
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
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_float_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token1] = ACTIONS(1),
    [aux_sym__numeric_literal_token2] = ACTIONS(1),
    [aux_sym__numeric_literal_token3] = ACTIONS(1),
    [sym__decimal_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [aux_sym__integer_literal_suffix_token1] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [aux_sym__float_literal_suffix_token1] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_any] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(143),
    [sym__statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_const_section] = STATE(3),
    [sym_var_section] = STATE(3),
    [sym_let_section] = STATE(3),
    [sym_type_section] = STATE(3),
    [sym_expression] = STATE(142),
    [sym__literal] = STATE(138),
    [sym_boolean_literal] = STATE(138),
    [sym_integer_literal] = STATE(138),
    [sym_float_literal] = STATE(138),
    [sym_tuple] = STATE(138),
    [sym__numeric_literal] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_const_section_token1] = ACTIONS(5),
    [aux_sym_var_section_token1] = ACTIONS(7),
    [aux_sym_let_section_token1] = ACTIONS(9),
    [aux_sym_type_section_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [aux_sym_boolean_literal_token1] = ACTIONS(15),
    [aux_sym_boolean_literal_token2] = ACTIONS(15),
    [aux_sym_boolean_literal_token3] = ACTIONS(15),
    [aux_sym_boolean_literal_token4] = ACTIONS(15),
    [aux_sym__numeric_literal_token1] = ACTIONS(17),
    [aux_sym__numeric_literal_token2] = ACTIONS(17),
    [aux_sym__numeric_literal_token3] = ACTIONS(17),
    [sym__decimal_literal] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_const_section_token1,
    ACTIONS(26), 1,
      aux_sym_var_section_token1,
    ACTIONS(29), 1,
      aux_sym_let_section_token1,
    ACTIONS(32), 1,
      aux_sym_type_section_token1,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym__decimal_literal,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(142), 1,
      sym_expression,
    ACTIONS(41), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(38), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(2), 8,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
      aux_sym_source_file_repeat1,
  [56] = 13,
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
      sym__decimal_literal,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(142), 1,
      sym_expression,
    ACTIONS(17), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(2), 8,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
      aux_sym_source_file_repeat1,
  [112] = 7,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(78), 1,
      sym_expression,
    ACTIONS(53), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(129), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [143] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(163), 1,
      sym_expression,
    ACTIONS(17), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [174] = 7,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(89), 1,
      sym_expression,
    ACTIONS(53), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(129), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [205] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(151), 1,
      sym_expression,
    ACTIONS(17), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [236] = 7,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(122), 1,
      sym_expression,
    ACTIONS(53), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(129), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [267] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(147), 1,
      sym_expression,
    ACTIONS(17), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [298] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(34), 1,
      sym__numeric_literal,
    STATE(141), 1,
      sym_expression,
    ACTIONS(17), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(138), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [329] = 2,
    ACTIONS(59), 1,
      sym__decimal_literal,
    ACTIONS(57), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [348] = 2,
    ACTIONS(63), 1,
      sym__decimal_literal,
    ACTIONS(61), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [367] = 2,
    ACTIONS(67), 1,
      sym__decimal_literal,
    ACTIONS(65), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [386] = 2,
    ACTIONS(71), 1,
      sym__decimal_literal,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [405] = 2,
    ACTIONS(75), 1,
      sym__decimal_literal,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [424] = 2,
    ACTIONS(79), 1,
      sym__decimal_literal,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [443] = 2,
    ACTIONS(83), 1,
      sym__decimal_literal,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [462] = 2,
    ACTIONS(87), 1,
      sym__decimal_literal,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [481] = 2,
    ACTIONS(91), 1,
      sym__decimal_literal,
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_type_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [500] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(107), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [524] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(107), 1,
      aux_sym_object_type_token1,
    ACTIONS(109), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(111), 1,
      aux_sym_ref_type_token1,
    STATE(100), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [548] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(107), 1,
      aux_sym_object_type_token1,
    ACTIONS(109), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(111), 1,
      aux_sym_ref_type_token1,
    STATE(124), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [572] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(159), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [596] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(157), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [620] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(158), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [644] = 4,
    ACTIONS(115), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      aux_sym_float_literal_token1,
    ACTIONS(119), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(113), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [664] = 7,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(130), 1,
      sym__integer_literal_suffix,
    STATE(131), 1,
      sym__float_literal_suffix,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(125), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(129), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [690] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(128), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [714] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(110), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [738] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(107), 1,
      aux_sym_object_type_token1,
    ACTIONS(109), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(111), 1,
      aux_sym_ref_type_token1,
    STATE(126), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [762] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(95), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(97), 1,
      aux_sym_object_type_token1,
    ACTIONS(99), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(101), 1,
      aux_sym_ref_type_token1,
    STATE(112), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [786] = 6,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(107), 1,
      aux_sym_object_type_token1,
    ACTIONS(109), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(111), 1,
      aux_sym_ref_type_token1,
    STATE(106), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [810] = 4,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(133), 1,
      aux_sym_float_literal_token1,
    ACTIONS(119), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(113), 6,
      sym__eol,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [829] = 7,
    ACTIONS(121), 1,
      sym__eol,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(170), 1,
      sym__float_literal_suffix,
    STATE(171), 1,
      sym__integer_literal_suffix,
    ACTIONS(137), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(141), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [854] = 5,
    ACTIONS(145), 1,
      aux_sym_float_literal_token1,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym__float_literal_suffix,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(149), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [873] = 6,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [893] = 5,
    ACTIONS(143), 1,
      sym__eol,
    ACTIONS(159), 1,
      aux_sym_float_literal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym__float_literal_suffix,
    ACTIONS(163), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [911] = 4,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym__float_literal_suffix,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(149), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [927] = 4,
    ACTIONS(147), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym__float_literal_suffix,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(167), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [943] = 6,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [963] = 6,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [983] = 6,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(177), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1003] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1020] = 3,
    ACTIONS(181), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(179), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(183), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1033] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym__eol,
    STATE(150), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1050] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      sym__eol,
    STATE(140), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1067] = 4,
    ACTIONS(143), 1,
      sym__eol,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    STATE(154), 1,
      sym__float_literal_suffix,
    ACTIONS(163), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1082] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym__eol,
    STATE(148), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1099] = 5,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(194), 1,
      sym__dedent,
    STATE(49), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(136), 1,
      sym_field_declaration,
    STATE(92), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1116] = 3,
    ACTIONS(198), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(196), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(200), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1129] = 4,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym__eol,
    STATE(135), 1,
      sym__float_literal_suffix,
    ACTIONS(202), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1144] = 5,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(206), 1,
      sym__dedent,
    STATE(49), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(136), 1,
      sym_field_declaration,
    STATE(92), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1161] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1178] = 5,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(49), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(136), 1,
      sym_field_declaration,
    STATE(92), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1195] = 5,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      aux_sym_const_section_repeat1,
    STATE(165), 1,
      sym_variable_declaration,
    STATE(58), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1212] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      anon_sym_EQ,
    ACTIONS(216), 1,
      sym__eol,
    STATE(59), 1,
      aux_sym_variable_declaration_repeat1,
  [1228] = 4,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(54), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(136), 1,
      sym_field_declaration,
    STATE(92), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1242] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_EQ,
    ACTIONS(222), 1,
      sym__eol,
    STATE(56), 1,
      aux_sym_variable_declaration_repeat1,
  [1258] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(227), 3,
      sym__eol,
      anon_sym_COLON,
      anon_sym_EQ,
  [1270] = 4,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_field_declaration_list_repeat2,
    STATE(136), 1,
      sym_field_declaration,
    STATE(92), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1284] = 4,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym__eol,
    STATE(105), 1,
      sym_field_declaration_list,
    ACTIONS(231), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1298] = 3,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(70), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1309] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(121), 1,
      sym_field_declaration,
    STATE(95), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1320] = 1,
    ACTIONS(235), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1327] = 4,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym__dedent,
    STATE(65), 1,
      aux_sym_type_section_repeat1,
    STATE(160), 1,
      sym_type_declaration,
  [1340] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(99), 1,
      sym_field_declaration,
    STATE(95), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1351] = 3,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(96), 1,
      sym_field_declaration,
    STATE(95), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1362] = 1,
    ACTIONS(242), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1369] = 1,
    ACTIONS(244), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1376] = 1,
    ACTIONS(246), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1383] = 4,
    ACTIONS(231), 1,
      anon_sym_EQ,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      sym__eol,
    STATE(114), 1,
      sym_field_declaration_list,
  [1396] = 4,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(255), 1,
      sym__dedent,
    STATE(65), 1,
      aux_sym_type_section_repeat1,
    STATE(160), 1,
      sym_type_declaration,
  [1409] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1419] = 3,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 1,
      sym__eol,
    STATE(104), 1,
      sym_field_declaration_list,
  [1429] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      sym__eol,
    STATE(115), 1,
      sym_field_declaration_list,
  [1439] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_field_declaration_repeat1,
  [1449] = 3,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_field_declaration_repeat1,
  [1459] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_tuple_repeat1,
  [1469] = 3,
    ACTIONS(277), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_field_declaration_list_repeat1,
  [1479] = 3,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      aux_sym_field_declaration_list_token1,
    STATE(79), 1,
      aux_sym_field_declaration_list_repeat1,
  [1489] = 3,
    ACTIONS(253), 1,
      sym_identifier,
    ACTIONS(284), 1,
      sym__eol,
    STATE(174), 1,
      sym_type_declaration,
  [1499] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_repeat1,
  [1509] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_COLON,
    STATE(77), 1,
      aux_sym_field_declaration_repeat1,
  [1519] = 1,
    ACTIONS(200), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1525] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1535] = 1,
    ACTIONS(157), 3,
      sym__dedent,
      anon_sym_LPAREN,
      sym_identifier,
  [1541] = 2,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(123), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1549] = 3,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1559] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_tuple_repeat1,
  [1569] = 3,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      aux_sym_field_declaration_list_token1,
    STATE(79), 1,
      aux_sym_field_declaration_list_repeat1,
  [1579] = 3,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(72), 1,
      aux_sym_type_section_repeat1,
    STATE(160), 1,
      sym_type_declaration,
  [1589] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym_field_declaration_repeat1,
  [1599] = 1,
    ACTIONS(183), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1605] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_repeat1,
  [1615] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_field_declaration_repeat1,
  [1625] = 3,
    ACTIONS(282), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_field_declaration_list_repeat1,
  [1635] = 2,
    ACTIONS(311), 1,
      anon_sym_STAR,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1643] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_repeat1,
  [1653] = 3,
    ACTIONS(282), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym_field_declaration_list_repeat1,
  [1663] = 1,
    ACTIONS(317), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1668] = 1,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1673] = 1,
    ACTIONS(321), 2,
      sym__eol,
      anon_sym_EQ,
  [1678] = 1,
    ACTIONS(240), 2,
      sym__dedent,
      sym_identifier,
  [1683] = 1,
    ACTIONS(323), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1688] = 1,
    ACTIONS(325), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1693] = 1,
    ACTIONS(327), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1698] = 2,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      sym__eol,
  [1705] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1710] = 1,
    ACTIONS(321), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1715] = 1,
    ACTIONS(317), 2,
      sym__eol,
      anon_sym_EQ,
  [1720] = 1,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1725] = 1,
    ACTIONS(327), 2,
      sym__eol,
      anon_sym_EQ,
  [1730] = 1,
    ACTIONS(337), 2,
      sym__eol,
      anon_sym_EQ,
  [1735] = 1,
    ACTIONS(325), 2,
      sym__eol,
      anon_sym_EQ,
  [1740] = 1,
    ACTIONS(323), 2,
      sym__eol,
      anon_sym_EQ,
  [1745] = 1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1750] = 1,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1755] = 1,
    ACTIONS(194), 2,
      sym__dedent,
      sym_identifier,
  [1760] = 1,
    ACTIONS(343), 2,
      sym__eol,
      anon_sym_EQ,
  [1765] = 1,
    ACTIONS(337), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1770] = 1,
    ACTIONS(280), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1775] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1780] = 1,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1785] = 1,
    ACTIONS(347), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1790] = 1,
    ACTIONS(343), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1795] = 1,
    ACTIONS(349), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1800] = 1,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1805] = 2,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      sym__eol,
  [1812] = 1,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1817] = 1,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1822] = 1,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1827] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1832] = 1,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1837] = 1,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1842] = 1,
    ACTIONS(319), 1,
      sym__eol,
  [1846] = 1,
    ACTIONS(369), 1,
      sym__eol,
  [1850] = 1,
    ACTIONS(371), 1,
      sym__indent,
  [1854] = 1,
    ACTIONS(357), 1,
      sym__eol,
  [1858] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1862] = 1,
    ACTIONS(375), 1,
      sym__eol,
  [1866] = 1,
    ACTIONS(377), 1,
      sym__eol,
  [1870] = 1,
    ACTIONS(379), 1,
      sym__eol,
  [1874] = 1,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [1878] = 1,
    ACTIONS(383), 1,
      anon_sym_EQ,
  [1882] = 1,
    ACTIONS(385), 1,
      sym__indent,
  [1886] = 1,
    ACTIONS(387), 1,
      sym__indent,
  [1890] = 1,
    ACTIONS(389), 1,
      sym__eol,
  [1894] = 1,
    ACTIONS(391), 1,
      sym__eol,
  [1898] = 1,
    ACTIONS(393), 1,
      sym__indent,
  [1902] = 1,
    ACTIONS(395), 1,
      sym__eol,
  [1906] = 1,
    ACTIONS(397), 1,
      sym__eol,
  [1910] = 1,
    ACTIONS(351), 1,
      sym__eol,
  [1914] = 1,
    ACTIONS(399), 1,
      sym__indent,
  [1918] = 1,
    ACTIONS(341), 1,
      sym__eol,
  [1922] = 1,
    ACTIONS(401), 1,
      sym__decimal_literal,
  [1926] = 1,
    ACTIONS(333), 1,
      sym__eol,
  [1930] = 1,
    ACTIONS(347), 1,
      sym__eol,
  [1934] = 1,
    ACTIONS(403), 1,
      sym__eol,
  [1938] = 1,
    ACTIONS(349), 1,
      sym__eol,
  [1942] = 1,
    ACTIONS(405), 1,
      sym__eol,
  [1946] = 1,
    ACTIONS(407), 1,
      sym__decimal_literal,
  [1950] = 1,
    ACTIONS(409), 1,
      sym__decimal_literal,
  [1954] = 1,
    ACTIONS(411), 1,
      sym__eol,
  [1958] = 1,
    ACTIONS(413), 1,
      sym_identifier,
  [1962] = 1,
    ACTIONS(415), 1,
      sym__eol,
  [1966] = 1,
    ACTIONS(417), 1,
      sym__decimal_literal,
  [1970] = 1,
    ACTIONS(367), 1,
      sym__eol,
  [1974] = 1,
    ACTIONS(365), 1,
      sym__eol,
  [1978] = 1,
    ACTIONS(363), 1,
      sym__eol,
  [1982] = 1,
    ACTIONS(361), 1,
      sym__eol,
  [1986] = 1,
    ACTIONS(359), 1,
      sym__eol,
  [1990] = 1,
    ACTIONS(419), 1,
      sym__decimal_literal,
  [1994] = 1,
    ACTIONS(421), 1,
      sym__decimal_literal,
  [1998] = 1,
    ACTIONS(423), 1,
      sym__eol,
  [2002] = 1,
    ACTIONS(425), 1,
      sym__indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 298,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 367,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 424,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 462,
  [SMALL_STATE(19)] = 481,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 524,
  [SMALL_STATE(22)] = 548,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 596,
  [SMALL_STATE(25)] = 620,
  [SMALL_STATE(26)] = 644,
  [SMALL_STATE(27)] = 664,
  [SMALL_STATE(28)] = 690,
  [SMALL_STATE(29)] = 714,
  [SMALL_STATE(30)] = 738,
  [SMALL_STATE(31)] = 762,
  [SMALL_STATE(32)] = 786,
  [SMALL_STATE(33)] = 810,
  [SMALL_STATE(34)] = 829,
  [SMALL_STATE(35)] = 854,
  [SMALL_STATE(36)] = 873,
  [SMALL_STATE(37)] = 893,
  [SMALL_STATE(38)] = 911,
  [SMALL_STATE(39)] = 927,
  [SMALL_STATE(40)] = 943,
  [SMALL_STATE(41)] = 963,
  [SMALL_STATE(42)] = 983,
  [SMALL_STATE(43)] = 1003,
  [SMALL_STATE(44)] = 1020,
  [SMALL_STATE(45)] = 1033,
  [SMALL_STATE(46)] = 1050,
  [SMALL_STATE(47)] = 1067,
  [SMALL_STATE(48)] = 1082,
  [SMALL_STATE(49)] = 1099,
  [SMALL_STATE(50)] = 1116,
  [SMALL_STATE(51)] = 1129,
  [SMALL_STATE(52)] = 1144,
  [SMALL_STATE(53)] = 1161,
  [SMALL_STATE(54)] = 1178,
  [SMALL_STATE(55)] = 1195,
  [SMALL_STATE(56)] = 1212,
  [SMALL_STATE(57)] = 1228,
  [SMALL_STATE(58)] = 1242,
  [SMALL_STATE(59)] = 1258,
  [SMALL_STATE(60)] = 1270,
  [SMALL_STATE(61)] = 1284,
  [SMALL_STATE(62)] = 1298,
  [SMALL_STATE(63)] = 1309,
  [SMALL_STATE(64)] = 1320,
  [SMALL_STATE(65)] = 1327,
  [SMALL_STATE(66)] = 1340,
  [SMALL_STATE(67)] = 1351,
  [SMALL_STATE(68)] = 1362,
  [SMALL_STATE(69)] = 1369,
  [SMALL_STATE(70)] = 1376,
  [SMALL_STATE(71)] = 1383,
  [SMALL_STATE(72)] = 1396,
  [SMALL_STATE(73)] = 1409,
  [SMALL_STATE(74)] = 1419,
  [SMALL_STATE(75)] = 1429,
  [SMALL_STATE(76)] = 1439,
  [SMALL_STATE(77)] = 1449,
  [SMALL_STATE(78)] = 1459,
  [SMALL_STATE(79)] = 1469,
  [SMALL_STATE(80)] = 1479,
  [SMALL_STATE(81)] = 1489,
  [SMALL_STATE(82)] = 1499,
  [SMALL_STATE(83)] = 1509,
  [SMALL_STATE(84)] = 1519,
  [SMALL_STATE(85)] = 1525,
  [SMALL_STATE(86)] = 1535,
  [SMALL_STATE(87)] = 1541,
  [SMALL_STATE(88)] = 1549,
  [SMALL_STATE(89)] = 1559,
  [SMALL_STATE(90)] = 1569,
  [SMALL_STATE(91)] = 1579,
  [SMALL_STATE(92)] = 1589,
  [SMALL_STATE(93)] = 1599,
  [SMALL_STATE(94)] = 1605,
  [SMALL_STATE(95)] = 1615,
  [SMALL_STATE(96)] = 1625,
  [SMALL_STATE(97)] = 1635,
  [SMALL_STATE(98)] = 1643,
  [SMALL_STATE(99)] = 1653,
  [SMALL_STATE(100)] = 1663,
  [SMALL_STATE(101)] = 1668,
  [SMALL_STATE(102)] = 1673,
  [SMALL_STATE(103)] = 1678,
  [SMALL_STATE(104)] = 1683,
  [SMALL_STATE(105)] = 1688,
  [SMALL_STATE(106)] = 1693,
  [SMALL_STATE(107)] = 1698,
  [SMALL_STATE(108)] = 1705,
  [SMALL_STATE(109)] = 1710,
  [SMALL_STATE(110)] = 1715,
  [SMALL_STATE(111)] = 1720,
  [SMALL_STATE(112)] = 1725,
  [SMALL_STATE(113)] = 1730,
  [SMALL_STATE(114)] = 1735,
  [SMALL_STATE(115)] = 1740,
  [SMALL_STATE(116)] = 1745,
  [SMALL_STATE(117)] = 1750,
  [SMALL_STATE(118)] = 1755,
  [SMALL_STATE(119)] = 1760,
  [SMALL_STATE(120)] = 1765,
  [SMALL_STATE(121)] = 1770,
  [SMALL_STATE(122)] = 1775,
  [SMALL_STATE(123)] = 1780,
  [SMALL_STATE(124)] = 1785,
  [SMALL_STATE(125)] = 1790,
  [SMALL_STATE(126)] = 1795,
  [SMALL_STATE(127)] = 1800,
  [SMALL_STATE(128)] = 1805,
  [SMALL_STATE(129)] = 1812,
  [SMALL_STATE(130)] = 1817,
  [SMALL_STATE(131)] = 1822,
  [SMALL_STATE(132)] = 1827,
  [SMALL_STATE(133)] = 1832,
  [SMALL_STATE(134)] = 1837,
  [SMALL_STATE(135)] = 1842,
  [SMALL_STATE(136)] = 1846,
  [SMALL_STATE(137)] = 1850,
  [SMALL_STATE(138)] = 1854,
  [SMALL_STATE(139)] = 1858,
  [SMALL_STATE(140)] = 1862,
  [SMALL_STATE(141)] = 1866,
  [SMALL_STATE(142)] = 1870,
  [SMALL_STATE(143)] = 1874,
  [SMALL_STATE(144)] = 1878,
  [SMALL_STATE(145)] = 1882,
  [SMALL_STATE(146)] = 1886,
  [SMALL_STATE(147)] = 1890,
  [SMALL_STATE(148)] = 1894,
  [SMALL_STATE(149)] = 1898,
  [SMALL_STATE(150)] = 1902,
  [SMALL_STATE(151)] = 1906,
  [SMALL_STATE(152)] = 1910,
  [SMALL_STATE(153)] = 1914,
  [SMALL_STATE(154)] = 1918,
  [SMALL_STATE(155)] = 1922,
  [SMALL_STATE(156)] = 1926,
  [SMALL_STATE(157)] = 1930,
  [SMALL_STATE(158)] = 1934,
  [SMALL_STATE(159)] = 1938,
  [SMALL_STATE(160)] = 1942,
  [SMALL_STATE(161)] = 1946,
  [SMALL_STATE(162)] = 1950,
  [SMALL_STATE(163)] = 1954,
  [SMALL_STATE(164)] = 1958,
  [SMALL_STATE(165)] = 1962,
  [SMALL_STATE(166)] = 1966,
  [SMALL_STATE(167)] = 1970,
  [SMALL_STATE(168)] = 1974,
  [SMALL_STATE(169)] = 1978,
  [SMALL_STATE(170)] = 1982,
  [SMALL_STATE(171)] = 1986,
  [SMALL_STATE(172)] = 1990,
  [SMALL_STATE(173)] = 1994,
  [SMALL_STATE(174)] = 1998,
  [SMALL_STATE(175)] = 2002,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_section, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_section, 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_literal, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(64),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(139),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(97),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(62),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1, .dynamic_precedence = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(144),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_object_type, 1, .dynamic_precedence = 1), SHIFT(153),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(164),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(87),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(63),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(8),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2, .dynamic_precedence = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal_suffix, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal_suffix, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
