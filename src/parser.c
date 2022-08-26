#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 245
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
  sym__indent_start = 36,
  sym__indent = 37,
  sym__indent_eq = 38,
  sym__dedent = 39,
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
  [sym__indent_start] = "_indent_start",
  [sym__indent] = "_indent",
  [sym__indent_eq] = "_indent_eq",
  [sym__dedent] = "_dedent",
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
  [sym__indent_start] = sym__indent_start,
  [sym__indent] = sym__indent,
  [sym__indent_eq] = sym__indent_eq,
  [sym__dedent] = sym__dedent,
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
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(24);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(32);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
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
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (lookahead == '_') ADVANCE(11);
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
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(12);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
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
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(58);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(50);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(42);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(50);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(50);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(14);
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
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 16, .external_lex_state = 3},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 16, .external_lex_state = 3},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 16, .external_lex_state = 4},
  [28] = {.lex_state = 16, .external_lex_state = 4},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16, .external_lex_state = 4},
  [40] = {.lex_state = 16, .external_lex_state = 3},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16, .external_lex_state = 3},
  [43] = {.lex_state = 16, .external_lex_state = 4},
  [44] = {.lex_state = 16, .external_lex_state = 4},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16, .external_lex_state = 3},
  [47] = {.lex_state = 15, .external_lex_state = 4},
  [48] = {.lex_state = 15, .external_lex_state = 5},
  [49] = {.lex_state = 15, .external_lex_state = 4},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 7},
  [53] = {.lex_state = 15, .external_lex_state = 3},
  [54] = {.lex_state = 15, .external_lex_state = 4},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 15, .external_lex_state = 3},
  [58] = {.lex_state = 15, .external_lex_state = 5},
  [59] = {.lex_state = 15, .external_lex_state = 3},
  [60] = {.lex_state = 15, .external_lex_state = 5},
  [61] = {.lex_state = 15, .external_lex_state = 3},
  [62] = {.lex_state = 15, .external_lex_state = 4},
  [63] = {.lex_state = 15, .external_lex_state = 3},
  [64] = {.lex_state = 15, .external_lex_state = 4},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15, .external_lex_state = 4},
  [67] = {.lex_state = 15, .external_lex_state = 4},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 15, .external_lex_state = 3},
  [70] = {.lex_state = 15, .external_lex_state = 3},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 10, .external_lex_state = 5},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 15},
  [76] = {.lex_state = 15},
  [77] = {.lex_state = 15},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 15},
  [80] = {.lex_state = 15},
  [81] = {.lex_state = 15},
  [82] = {.lex_state = 15},
  [83] = {.lex_state = 15},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 15, .external_lex_state = 5},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 15},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 15},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 0, .external_lex_state = 5},
  [120] = {.lex_state = 15},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 15},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 5},
  [132] = {.lex_state = 15},
  [133] = {.lex_state = 16},
  [134] = {.lex_state = 15},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 16},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 15},
  [159] = {.lex_state = 0, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 4},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0, .external_lex_state = 4},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 0, .external_lex_state = 4},
  [186] = {.lex_state = 0, .external_lex_state = 4},
  [187] = {.lex_state = 0, .external_lex_state = 4},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 4},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 0, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 0, .external_lex_state = 4},
  [197] = {.lex_state = 15},
  [198] = {.lex_state = 0, .external_lex_state = 4},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 0, .external_lex_state = 4},
  [201] = {.lex_state = 15},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 0, .external_lex_state = 3},
  [204] = {.lex_state = 0, .external_lex_state = 4},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 0, .external_lex_state = 4},
  [208] = {.lex_state = 0, .external_lex_state = 3},
  [209] = {.lex_state = 0, .external_lex_state = 3},
  [210] = {.lex_state = 15},
  [211] = {.lex_state = 0, .external_lex_state = 4},
  [212] = {.lex_state = 0, .external_lex_state = 3},
  [213] = {.lex_state = 0, .external_lex_state = 3},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 0, .external_lex_state = 3},
  [216] = {.lex_state = 0, .external_lex_state = 3},
  [217] = {.lex_state = 15},
  [218] = {.lex_state = 0, .external_lex_state = 3},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 0, .external_lex_state = 3},
  [221] = {.lex_state = 0, .external_lex_state = 3},
  [222] = {.lex_state = 0, .external_lex_state = 3},
  [223] = {.lex_state = 0, .external_lex_state = 3},
  [224] = {.lex_state = 0, .external_lex_state = 3},
  [225] = {.lex_state = 0, .external_lex_state = 3},
  [226] = {.lex_state = 0, .external_lex_state = 3},
  [227] = {.lex_state = 15},
  [228] = {.lex_state = 0, .external_lex_state = 3},
  [229] = {.lex_state = 0, .external_lex_state = 4},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 15},
  [236] = {.lex_state = 15},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 15},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
};

enum {
  ts_external_token__indent_start = 0,
  ts_external_token__indent = 1,
  ts_external_token__indent_eq = 2,
  ts_external_token__dedent = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent_start] = sym__indent_start,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__indent_eq] = sym__indent_eq,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent_start] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__indent_eq] = true,
    [ts_external_token__dedent] = true,
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
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(241),
    [sym__indent_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
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
    STATE(18), 1,
      sym__numeric_literal,
    STATE(223), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(176), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [52] = 12,
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
    STATE(18), 1,
      sym__numeric_literal,
    STATE(223), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(102), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [104] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__decimal_literal,
    STATE(30), 1,
      sym__numeric_literal,
    STATE(109), 1,
      sym_expression,
    ACTIONS(25), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(23), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(172), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [135] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(18), 1,
      sym__numeric_literal,
    STATE(224), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [166] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(18), 1,
      sym__numeric_literal,
    STATE(213), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [197] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__decimal_literal,
    STATE(30), 1,
      sym__numeric_literal,
    STATE(132), 1,
      sym_expression,
    ACTIONS(25), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(23), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(172), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [228] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__decimal_literal,
    STATE(30), 1,
      sym__numeric_literal,
    STATE(140), 1,
      sym_expression,
    ACTIONS(25), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(23), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(172), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [259] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(18), 1,
      sym__numeric_literal,
    STATE(216), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [290] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__decimal_literal,
    STATE(30), 1,
      sym__numeric_literal,
    STATE(217), 1,
      sym_expression,
    ACTIONS(25), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(23), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(172), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [321] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(200), 1,
      sym_expression,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(183), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [352] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym__decimal_literal,
    STATE(18), 1,
      sym__numeric_literal,
    STATE(189), 1,
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
    STATE(221), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [383] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(177), 1,
      sym_expression,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(183), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [414] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(171), 1,
      sym_expression,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(183), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [445] = 7,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym__decimal_literal,
    STATE(27), 1,
      sym__numeric_literal,
    STATE(173), 1,
      sym_expression,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(31), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(183), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [476] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(153), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [500] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(192), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [524] = 7,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(157), 1,
      sym__integer_literal_suffix,
    STATE(178), 1,
      sym__float_literal_suffix,
    ACTIONS(47), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(55), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [550] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(61), 1,
      aux_sym_object_type_token1,
    ACTIONS(63), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(65), 1,
      aux_sym_ref_type_token1,
    STATE(108), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [574] = 4,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      aux_sym_float_literal_token1,
    ACTIONS(73), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(67), 7,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [594] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(207), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [618] = 6,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(79), 1,
      aux_sym_object_type_token1,
    ACTIONS(81), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(83), 1,
      aux_sym_ref_type_token1,
    STATE(202), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [642] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(61), 1,
      aux_sym_object_type_token1,
    ACTIONS(63), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(65), 1,
      aux_sym_ref_type_token1,
    STATE(107), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [666] = 6,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(79), 1,
      aux_sym_object_type_token1,
    ACTIONS(81), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(83), 1,
      aux_sym_ref_type_token1,
    STATE(184), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [690] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(61), 1,
      aux_sym_object_type_token1,
    ACTIONS(63), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(65), 1,
      aux_sym_ref_type_token1,
    STATE(106), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [714] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(160), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [738] = 7,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(185), 1,
      sym__integer_literal_suffix,
    STATE(186), 1,
      sym__float_literal_suffix,
    ACTIONS(47), 2,
      sym__indent_eq,
      sym__dedent,
    ACTIONS(87), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(91), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [764] = 4,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      aux_sym_float_literal_token1,
    ACTIONS(73), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(67), 7,
      sym__indent_eq,
      sym__dedent,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [784] = 4,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      aux_sym_float_literal_token1,
    ACTIONS(73), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(67), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [804] = 7,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(167), 1,
      sym__float_literal_suffix,
    STATE(168), 1,
      sym__integer_literal_suffix,
    ACTIONS(47), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(107), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [830] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(142), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [854] = 6,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(79), 1,
      aux_sym_object_type_token1,
    ACTIONS(81), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(83), 1,
      aux_sym_ref_type_token1,
    STATE(180), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [878] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(143), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [902] = 6,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(41), 1,
      aux_sym_object_type_token1,
    ACTIONS(43), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(45), 1,
      aux_sym_ref_type_token1,
    STATE(144), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [926] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(61), 1,
      aux_sym_object_type_token1,
    ACTIONS(63), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(65), 1,
      aux_sym_ref_type_token1,
    STATE(209), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [950] = 6,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(79), 1,
      aux_sym_object_type_token1,
    ACTIONS(81), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(83), 1,
      aux_sym_ref_type_token1,
    STATE(179), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [974] = 6,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(61), 1,
      aux_sym_object_type_token1,
    ACTIONS(63), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(65), 1,
      aux_sym_ref_type_token1,
    STATE(137), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [998] = 5,
    ACTIONS(111), 1,
      aux_sym_float_literal_token1,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1017] = 5,
    ACTIONS(117), 1,
      aux_sym_float_literal_token1,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      sym__indent_eq,
      sym__dedent,
    ACTIONS(121), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1036] = 5,
    ACTIONS(123), 1,
      aux_sym_float_literal_token1,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
    ACTIONS(127), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1055] = 4,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    STATE(175), 1,
      sym__float_literal_suffix,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(131), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1071] = 4,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym__float_literal_suffix,
    ACTIONS(129), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
    ACTIONS(133), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1087] = 4,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    STATE(204), 1,
      sym__float_literal_suffix,
    ACTIONS(129), 2,
      sym__indent_eq,
      sym__dedent,
    ACTIONS(135), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1103] = 4,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    STATE(198), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      sym__indent_eq,
      sym__dedent,
    ACTIONS(121), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1119] = 4,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(115), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1135] = 4,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym__float_literal_suffix,
    ACTIONS(109), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
    ACTIONS(127), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1151] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(143), 2,
      sym__indent_eq,
      sym__dedent,
  [1168] = 5,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym__indent,
    STATE(203), 1,
      sym_variable_declaration,
    STATE(53), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1185] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(154), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [1198] = 3,
    ACTIONS(158), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(156), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(160), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1211] = 4,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym__indent,
    STATE(105), 1,
      sym_field_declaration_list,
    ACTIONS(162), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1226] = 4,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      sym__indent,
    STATE(85), 1,
      sym_field_declaration_list,
    ACTIONS(162), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1241] = 5,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(143), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1258] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(180), 1,
      anon_sym_EQ,
    STATE(49), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(182), 2,
      sym__indent_eq,
      sym__dedent,
  [1275] = 3,
    ACTIONS(186), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(184), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(188), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1288] = 3,
    ACTIONS(192), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(190), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(194), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1301] = 5,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(198), 1,
      anon_sym_EQ,
    STATE(59), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(182), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1318] = 5,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(200), 1,
      sym__indent,
    STATE(188), 1,
      sym_variable_declaration,
    STATE(53), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1335] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(154), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [1348] = 5,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym__indent,
    STATE(193), 1,
      sym_variable_declaration,
    STATE(53), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1365] = 1,
    ACTIONS(207), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1373] = 1,
    ACTIONS(209), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1381] = 1,
    ACTIONS(209), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1389] = 1,
    ACTIONS(211), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1397] = 4,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_variable_declaration,
    STATE(47), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1411] = 1,
    ACTIONS(217), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1419] = 1,
    ACTIONS(207), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1427] = 4,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_variable_declaration,
    STATE(47), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1441] = 1,
    ACTIONS(217), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1449] = 1,
    ACTIONS(211), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1457] = 4,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_variable_declaration,
    STATE(47), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1471] = 4,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym__indent,
    STATE(194), 1,
      sym_field_declaration_list,
    ACTIONS(162), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1485] = 4,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_variable_declaration,
    STATE(47), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1499] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(113), 1,
      sym_field_declaration,
    STATE(117), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1510] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(116), 1,
      sym_field_declaration,
    STATE(117), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1521] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(118), 1,
      sym_field_declaration,
    STATE(90), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1532] = 3,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    STATE(61), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1543] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(96), 1,
      sym_field_declaration,
    STATE(90), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1554] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(156), 1,
      sym_field_declaration,
    STATE(90), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1565] = 3,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(67), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1576] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(211), 1,
      sym_field_declaration,
    STATE(117), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1587] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(112), 1,
      sym_field_declaration,
    STATE(90), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1598] = 3,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(98), 1,
      sym_field_declaration,
    STATE(117), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1609] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(227), 1,
      sym__dedent,
    STATE(92), 1,
      aux_sym_const_section_repeat1,
  [1619] = 1,
    ACTIONS(229), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1625] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_const_section_repeat1,
  [1635] = 3,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym__indent,
    STATE(174), 1,
      sym_type_declaration,
  [1645] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(237), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_const_section_repeat1,
  [1655] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym_field_declaration_repeat1,
  [1665] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_field_declaration_repeat1,
  [1675] = 3,
    ACTIONS(245), 1,
      sym__indent_eq,
    ACTIONS(247), 1,
      sym__dedent,
    STATE(114), 1,
      aux_sym_type_section_repeat1,
  [1685] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(249), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_const_section_repeat1,
  [1695] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_field_declaration_list_repeat1,
  [1705] = 3,
    ACTIONS(253), 1,
      sym__dedent,
    ACTIONS(255), 1,
      sym__indent_eq,
    STATE(130), 1,
      aux_sym_field_declaration_list_repeat2,
  [1715] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_tuple_repeat1,
  [1725] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_field_declaration_list_repeat1,
  [1735] = 1,
    ACTIONS(160), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1741] = 3,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(262), 1,
      sym__dedent,
    STATE(94), 1,
      aux_sym_field_declaration_list_repeat2,
  [1751] = 3,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym__indent,
    STATE(155), 1,
      sym_field_declaration_list,
  [1761] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_tuple_repeat1,
  [1771] = 3,
    ACTIONS(268), 1,
      sym__indent_eq,
    ACTIONS(271), 1,
      sym__dedent,
    STATE(101), 1,
      aux_sym_const_section_repeat1,
  [1781] = 3,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      sym__indent_eq,
    STATE(150), 1,
      aux_sym_source_file_repeat1,
  [1791] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1801] = 1,
    ACTIONS(282), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1807] = 1,
    ACTIONS(229), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1813] = 1,
    ACTIONS(284), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1819] = 1,
    ACTIONS(286), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1825] = 2,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1833] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_tuple_repeat1,
  [1843] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_field_declaration_list_repeat1,
  [1853] = 3,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(294), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym_field_declaration_list_repeat2,
  [1863] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym_field_declaration_list_repeat1,
  [1873] = 3,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(296), 1,
      sym__dedent,
    STATE(111), 1,
      aux_sym_field_declaration_list_repeat2,
  [1883] = 3,
    ACTIONS(298), 1,
      sym__indent_eq,
    ACTIONS(301), 1,
      sym__dedent,
    STATE(114), 1,
      aux_sym_type_section_repeat1,
  [1893] = 2,
    ACTIONS(305), 1,
      anon_sym_STAR,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1901] = 3,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(123), 1,
      aux_sym_field_declaration_list_repeat2,
  [1911] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      anon_sym_COLON,
    STATE(125), 1,
      aux_sym_field_declaration_repeat1,
  [1921] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      aux_sym_field_declaration_list_repeat1,
  [1931] = 3,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 1,
      sym__indent,
    STATE(147), 1,
      sym_field_declaration_list,
  [1941] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1951] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_tuple_repeat1,
  [1961] = 1,
    ACTIONS(317), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1967] = 3,
    ACTIONS(255), 1,
      sym__indent_eq,
    ACTIONS(319), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym_field_declaration_list_repeat2,
  [1977] = 2,
    ACTIONS(223), 1,
      sym_identifier,
    STATE(210), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1985] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym_field_declaration_repeat1,
  [1995] = 3,
    ACTIONS(251), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_field_declaration_list_repeat1,
  [2005] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2015] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2025] = 1,
    ACTIONS(327), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2031] = 3,
    ACTIONS(329), 1,
      sym__indent_eq,
    ACTIONS(332), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym_field_declaration_list_repeat2,
  [2041] = 3,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym__indent,
    STATE(104), 1,
      sym_field_declaration_list,
  [2051] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_tuple_repeat1,
  [2061] = 1,
    ACTIONS(194), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [2067] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(134), 1,
      aux_sym_field_declaration_repeat1,
  [2077] = 1,
    ACTIONS(341), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [2083] = 3,
    ACTIONS(343), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_field_declaration_list_repeat1,
  [2093] = 2,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(348), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2101] = 1,
    ACTIONS(327), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2107] = 1,
    ACTIONS(317), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2113] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_tuple_repeat1,
  [2123] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_tuple_repeat1,
  [2133] = 2,
    ACTIONS(356), 1,
      anon_sym_EQ,
    ACTIONS(288), 2,
      sym__indent_eq,
      sym__dedent,
  [2141] = 1,
    ACTIONS(286), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2147] = 1,
    ACTIONS(284), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2153] = 3,
    ACTIONS(245), 1,
      sym__indent_eq,
    ACTIONS(358), 1,
      sym__dedent,
    STATE(91), 1,
      aux_sym_type_section_repeat1,
  [2163] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(360), 1,
      sym__dedent,
    STATE(88), 1,
      aux_sym_const_section_repeat1,
  [2173] = 1,
    ACTIONS(282), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2179] = 3,
    ACTIONS(225), 1,
      sym__indent_eq,
    ACTIONS(362), 1,
      sym__dedent,
    STATE(86), 1,
      aux_sym_const_section_repeat1,
  [2189] = 1,
    ACTIONS(188), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [2195] = 3,
    ACTIONS(275), 1,
      sym__indent_eq,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      aux_sym_source_file_repeat1,
  [2205] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [2215] = 3,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(370), 1,
      sym__indent_eq,
    STATE(152), 1,
      aux_sym_source_file_repeat1,
  [2225] = 2,
    ACTIONS(373), 1,
      anon_sym_EQ,
    ACTIONS(348), 2,
      sym__indent_eq,
      sym__dedent,
  [2233] = 1,
    ACTIONS(341), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [2239] = 1,
    ACTIONS(282), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2244] = 1,
    ACTIONS(346), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2249] = 1,
    ACTIONS(375), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2254] = 1,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2259] = 1,
    ACTIONS(377), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2264] = 1,
    ACTIONS(379), 2,
      sym__indent_eq,
      sym__dedent,
  [2269] = 1,
    ACTIONS(381), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2274] = 1,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2279] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2284] = 1,
    ACTIONS(383), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2289] = 1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2294] = 1,
    ACTIONS(389), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2299] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2304] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2309] = 1,
    ACTIONS(393), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2314] = 1,
    ACTIONS(387), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2319] = 1,
    ACTIONS(395), 2,
      sym__indent_eq,
      sym__dedent,
  [2324] = 1,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2329] = 1,
    ACTIONS(399), 2,
      sym__indent_eq,
      sym__dedent,
  [2334] = 1,
    ACTIONS(401), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2339] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2344] = 1,
    ACTIONS(368), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2349] = 1,
    ACTIONS(405), 2,
      sym__indent_eq,
      sym__dedent,
  [2354] = 1,
    ACTIONS(391), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2359] = 1,
    ACTIONS(407), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2364] = 1,
    ACTIONS(409), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2369] = 1,
    ACTIONS(411), 2,
      sym__indent_eq,
      sym__dedent,
  [2374] = 1,
    ACTIONS(413), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2379] = 1,
    ACTIONS(397), 2,
      sym__indent_eq,
      sym__dedent,
  [2384] = 1,
    ACTIONS(284), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2389] = 1,
    ACTIONS(375), 2,
      sym__indent_eq,
      sym__dedent,
  [2394] = 1,
    ACTIONS(391), 2,
      sym__indent_eq,
      sym__dedent,
  [2399] = 1,
    ACTIONS(387), 2,
      sym__indent_eq,
      sym__dedent,
  [2404] = 1,
    ACTIONS(415), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2409] = 1,
    ACTIONS(417), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2414] = 1,
    ACTIONS(383), 2,
      sym__indent_eq,
      sym__dedent,
  [2419] = 1,
    ACTIONS(377), 2,
      sym__indent_eq,
      sym__dedent,
  [2424] = 1,
    ACTIONS(409), 2,
      sym__indent_eq,
      sym__dedent,
  [2429] = 1,
    ACTIONS(419), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2434] = 1,
    ACTIONS(229), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2439] = 1,
    ACTIONS(341), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2444] = 1,
    ACTIONS(381), 2,
      sym__indent_eq,
      sym__dedent,
  [2449] = 2,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(219), 1,
      sym_type_declaration,
  [2456] = 1,
    ACTIONS(385), 2,
      sym__indent_eq,
      sym__dedent,
  [2461] = 1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2466] = 1,
    ACTIONS(417), 2,
      sym__indent_eq,
      sym__dedent,
  [2471] = 2,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(145), 1,
      sym_type_declaration,
  [2478] = 1,
    ACTIONS(286), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2483] = 1,
    ACTIONS(423), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2488] = 1,
    ACTIONS(403), 2,
      sym__indent_eq,
      sym__dedent,
  [2493] = 1,
    ACTIONS(317), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2498] = 1,
    ACTIONS(327), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [2503] = 1,
    ACTIONS(407), 2,
      sym__indent_eq,
      sym__dedent,
  [2508] = 1,
    ACTIONS(425), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2513] = 1,
    ACTIONS(379), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2518] = 1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2523] = 1,
    ACTIONS(332), 2,
      sym__indent_eq,
      sym__dedent,
  [2528] = 1,
    ACTIONS(411), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2533] = 1,
    ACTIONS(405), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2538] = 1,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [2543] = 1,
    ACTIONS(403), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2548] = 1,
    ACTIONS(399), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2553] = 1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2558] = 1,
    ACTIONS(431), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2563] = 1,
    ACTIONS(301), 2,
      sym__indent_eq,
      sym__dedent,
  [2568] = 1,
    ACTIONS(433), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2573] = 1,
    ACTIONS(397), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2578] = 1,
    ACTIONS(435), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2583] = 1,
    ACTIONS(437), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2588] = 1,
    ACTIONS(395), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2593] = 1,
    ACTIONS(381), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2598] = 1,
    ACTIONS(385), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2603] = 1,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2608] = 1,
    ACTIONS(441), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2613] = 1,
    ACTIONS(271), 2,
      sym__indent_eq,
      sym__dedent,
  [2618] = 1,
    ACTIONS(443), 1,
      sym__decimal_literal,
  [2622] = 1,
    ACTIONS(445), 1,
      sym__decimal_literal,
  [2626] = 1,
    ACTIONS(447), 1,
      sym__decimal_literal,
  [2630] = 1,
    ACTIONS(449), 1,
      sym__decimal_literal,
  [2634] = 1,
    ACTIONS(451), 1,
      sym__decimal_literal,
  [2638] = 1,
    ACTIONS(453), 1,
      sym_identifier,
  [2642] = 1,
    ACTIONS(455), 1,
      sym_identifier,
  [2646] = 1,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [2650] = 1,
    ACTIONS(459), 1,
      sym_identifier,
  [2654] = 1,
    ACTIONS(461), 1,
      sym__decimal_literal,
  [2658] = 1,
    ACTIONS(463), 1,
      sym__decimal_literal,
  [2662] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [2666] = 1,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [2670] = 1,
    ACTIONS(469), 1,
      sym__decimal_literal,
  [2674] = 1,
    ACTIONS(471), 1,
      sym__decimal_literal,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 259,
  [SMALL_STATE(10)] = 290,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 383,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 476,
  [SMALL_STATE(17)] = 500,
  [SMALL_STATE(18)] = 524,
  [SMALL_STATE(19)] = 550,
  [SMALL_STATE(20)] = 574,
  [SMALL_STATE(21)] = 594,
  [SMALL_STATE(22)] = 618,
  [SMALL_STATE(23)] = 642,
  [SMALL_STATE(24)] = 666,
  [SMALL_STATE(25)] = 690,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 738,
  [SMALL_STATE(28)] = 764,
  [SMALL_STATE(29)] = 784,
  [SMALL_STATE(30)] = 804,
  [SMALL_STATE(31)] = 830,
  [SMALL_STATE(32)] = 854,
  [SMALL_STATE(33)] = 878,
  [SMALL_STATE(34)] = 902,
  [SMALL_STATE(35)] = 926,
  [SMALL_STATE(36)] = 950,
  [SMALL_STATE(37)] = 974,
  [SMALL_STATE(38)] = 998,
  [SMALL_STATE(39)] = 1017,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1071,
  [SMALL_STATE(43)] = 1087,
  [SMALL_STATE(44)] = 1103,
  [SMALL_STATE(45)] = 1119,
  [SMALL_STATE(46)] = 1135,
  [SMALL_STATE(47)] = 1151,
  [SMALL_STATE(48)] = 1168,
  [SMALL_STATE(49)] = 1185,
  [SMALL_STATE(50)] = 1198,
  [SMALL_STATE(51)] = 1211,
  [SMALL_STATE(52)] = 1226,
  [SMALL_STATE(53)] = 1241,
  [SMALL_STATE(54)] = 1258,
  [SMALL_STATE(55)] = 1275,
  [SMALL_STATE(56)] = 1288,
  [SMALL_STATE(57)] = 1301,
  [SMALL_STATE(58)] = 1318,
  [SMALL_STATE(59)] = 1335,
  [SMALL_STATE(60)] = 1348,
  [SMALL_STATE(61)] = 1365,
  [SMALL_STATE(62)] = 1373,
  [SMALL_STATE(63)] = 1381,
  [SMALL_STATE(64)] = 1389,
  [SMALL_STATE(65)] = 1397,
  [SMALL_STATE(66)] = 1411,
  [SMALL_STATE(67)] = 1419,
  [SMALL_STATE(68)] = 1427,
  [SMALL_STATE(69)] = 1441,
  [SMALL_STATE(70)] = 1449,
  [SMALL_STATE(71)] = 1457,
  [SMALL_STATE(72)] = 1471,
  [SMALL_STATE(73)] = 1485,
  [SMALL_STATE(74)] = 1499,
  [SMALL_STATE(75)] = 1510,
  [SMALL_STATE(76)] = 1521,
  [SMALL_STATE(77)] = 1532,
  [SMALL_STATE(78)] = 1543,
  [SMALL_STATE(79)] = 1554,
  [SMALL_STATE(80)] = 1565,
  [SMALL_STATE(81)] = 1576,
  [SMALL_STATE(82)] = 1587,
  [SMALL_STATE(83)] = 1598,
  [SMALL_STATE(84)] = 1609,
  [SMALL_STATE(85)] = 1619,
  [SMALL_STATE(86)] = 1625,
  [SMALL_STATE(87)] = 1635,
  [SMALL_STATE(88)] = 1645,
  [SMALL_STATE(89)] = 1655,
  [SMALL_STATE(90)] = 1665,
  [SMALL_STATE(91)] = 1675,
  [SMALL_STATE(92)] = 1685,
  [SMALL_STATE(93)] = 1695,
  [SMALL_STATE(94)] = 1705,
  [SMALL_STATE(95)] = 1715,
  [SMALL_STATE(96)] = 1725,
  [SMALL_STATE(97)] = 1735,
  [SMALL_STATE(98)] = 1741,
  [SMALL_STATE(99)] = 1751,
  [SMALL_STATE(100)] = 1761,
  [SMALL_STATE(101)] = 1771,
  [SMALL_STATE(102)] = 1781,
  [SMALL_STATE(103)] = 1791,
  [SMALL_STATE(104)] = 1801,
  [SMALL_STATE(105)] = 1807,
  [SMALL_STATE(106)] = 1813,
  [SMALL_STATE(107)] = 1819,
  [SMALL_STATE(108)] = 1825,
  [SMALL_STATE(109)] = 1833,
  [SMALL_STATE(110)] = 1843,
  [SMALL_STATE(111)] = 1853,
  [SMALL_STATE(112)] = 1863,
  [SMALL_STATE(113)] = 1873,
  [SMALL_STATE(114)] = 1883,
  [SMALL_STATE(115)] = 1893,
  [SMALL_STATE(116)] = 1901,
  [SMALL_STATE(117)] = 1911,
  [SMALL_STATE(118)] = 1921,
  [SMALL_STATE(119)] = 1931,
  [SMALL_STATE(120)] = 1941,
  [SMALL_STATE(121)] = 1951,
  [SMALL_STATE(122)] = 1961,
  [SMALL_STATE(123)] = 1967,
  [SMALL_STATE(124)] = 1977,
  [SMALL_STATE(125)] = 1985,
  [SMALL_STATE(126)] = 1995,
  [SMALL_STATE(127)] = 2005,
  [SMALL_STATE(128)] = 2015,
  [SMALL_STATE(129)] = 2025,
  [SMALL_STATE(130)] = 2031,
  [SMALL_STATE(131)] = 2041,
  [SMALL_STATE(132)] = 2051,
  [SMALL_STATE(133)] = 2061,
  [SMALL_STATE(134)] = 2067,
  [SMALL_STATE(135)] = 2077,
  [SMALL_STATE(136)] = 2083,
  [SMALL_STATE(137)] = 2093,
  [SMALL_STATE(138)] = 2101,
  [SMALL_STATE(139)] = 2107,
  [SMALL_STATE(140)] = 2113,
  [SMALL_STATE(141)] = 2123,
  [SMALL_STATE(142)] = 2133,
  [SMALL_STATE(143)] = 2141,
  [SMALL_STATE(144)] = 2147,
  [SMALL_STATE(145)] = 2153,
  [SMALL_STATE(146)] = 2163,
  [SMALL_STATE(147)] = 2173,
  [SMALL_STATE(148)] = 2179,
  [SMALL_STATE(149)] = 2189,
  [SMALL_STATE(150)] = 2195,
  [SMALL_STATE(151)] = 2205,
  [SMALL_STATE(152)] = 2215,
  [SMALL_STATE(153)] = 2225,
  [SMALL_STATE(154)] = 2233,
  [SMALL_STATE(155)] = 2239,
  [SMALL_STATE(156)] = 2244,
  [SMALL_STATE(157)] = 2249,
  [SMALL_STATE(158)] = 2254,
  [SMALL_STATE(159)] = 2259,
  [SMALL_STATE(160)] = 2264,
  [SMALL_STATE(161)] = 2269,
  [SMALL_STATE(162)] = 2274,
  [SMALL_STATE(163)] = 2279,
  [SMALL_STATE(164)] = 2284,
  [SMALL_STATE(165)] = 2289,
  [SMALL_STATE(166)] = 2294,
  [SMALL_STATE(167)] = 2299,
  [SMALL_STATE(168)] = 2304,
  [SMALL_STATE(169)] = 2309,
  [SMALL_STATE(170)] = 2314,
  [SMALL_STATE(171)] = 2319,
  [SMALL_STATE(172)] = 2324,
  [SMALL_STATE(173)] = 2329,
  [SMALL_STATE(174)] = 2334,
  [SMALL_STATE(175)] = 2339,
  [SMALL_STATE(176)] = 2344,
  [SMALL_STATE(177)] = 2349,
  [SMALL_STATE(178)] = 2354,
  [SMALL_STATE(179)] = 2359,
  [SMALL_STATE(180)] = 2364,
  [SMALL_STATE(181)] = 2369,
  [SMALL_STATE(182)] = 2374,
  [SMALL_STATE(183)] = 2379,
  [SMALL_STATE(184)] = 2384,
  [SMALL_STATE(185)] = 2389,
  [SMALL_STATE(186)] = 2394,
  [SMALL_STATE(187)] = 2399,
  [SMALL_STATE(188)] = 2404,
  [SMALL_STATE(189)] = 2409,
  [SMALL_STATE(190)] = 2414,
  [SMALL_STATE(191)] = 2419,
  [SMALL_STATE(192)] = 2424,
  [SMALL_STATE(193)] = 2429,
  [SMALL_STATE(194)] = 2434,
  [SMALL_STATE(195)] = 2439,
  [SMALL_STATE(196)] = 2444,
  [SMALL_STATE(197)] = 2449,
  [SMALL_STATE(198)] = 2456,
  [SMALL_STATE(199)] = 2461,
  [SMALL_STATE(200)] = 2466,
  [SMALL_STATE(201)] = 2471,
  [SMALL_STATE(202)] = 2478,
  [SMALL_STATE(203)] = 2483,
  [SMALL_STATE(204)] = 2488,
  [SMALL_STATE(205)] = 2493,
  [SMALL_STATE(206)] = 2498,
  [SMALL_STATE(207)] = 2503,
  [SMALL_STATE(208)] = 2508,
  [SMALL_STATE(209)] = 2513,
  [SMALL_STATE(210)] = 2518,
  [SMALL_STATE(211)] = 2523,
  [SMALL_STATE(212)] = 2528,
  [SMALL_STATE(213)] = 2533,
  [SMALL_STATE(214)] = 2538,
  [SMALL_STATE(215)] = 2543,
  [SMALL_STATE(216)] = 2548,
  [SMALL_STATE(217)] = 2553,
  [SMALL_STATE(218)] = 2558,
  [SMALL_STATE(219)] = 2563,
  [SMALL_STATE(220)] = 2568,
  [SMALL_STATE(221)] = 2573,
  [SMALL_STATE(222)] = 2578,
  [SMALL_STATE(223)] = 2583,
  [SMALL_STATE(224)] = 2588,
  [SMALL_STATE(225)] = 2593,
  [SMALL_STATE(226)] = 2598,
  [SMALL_STATE(227)] = 2603,
  [SMALL_STATE(228)] = 2608,
  [SMALL_STATE(229)] = 2613,
  [SMALL_STATE(230)] = 2618,
  [SMALL_STATE(231)] = 2622,
  [SMALL_STATE(232)] = 2626,
  [SMALL_STATE(233)] = 2630,
  [SMALL_STATE(234)] = 2634,
  [SMALL_STATE(235)] = 2638,
  [SMALL_STATE(236)] = 2642,
  [SMALL_STATE(237)] = 2646,
  [SMALL_STATE(238)] = 2650,
  [SMALL_STATE(239)] = 2654,
  [SMALL_STATE(240)] = 2658,
  [SMALL_STATE(241)] = 2662,
  [SMALL_STATE(242)] = 2666,
  [SMALL_STATE(243)] = 2670,
  [SMALL_STATE(244)] = 2674,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_literal, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(80),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(10),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(65),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(238),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(197),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(81),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(124),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(79),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal_suffix, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal_suffix, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
