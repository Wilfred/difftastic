#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  sym_identifier = 1,
  aux_sym_const_section_token1 = 2,
  aux_sym_var_section_token1 = 3,
  aux_sym_let_section_token1 = 4,
  anon_sym_COMMA = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_boolean_literal_token1 = 10,
  aux_sym_boolean_literal_token2 = 11,
  aux_sym_boolean_literal_token3 = 12,
  aux_sym_boolean_literal_token4 = 13,
  anon_sym_DOT = 14,
  aux_sym_float_literal_token1 = 15,
  aux_sym__numeric_literal_token1 = 16,
  aux_sym__numeric_literal_token2 = 17,
  aux_sym__numeric_literal_token3 = 18,
  sym__decimal_literal = 19,
  anon_sym_SQUOTE = 20,
  anon_sym_u = 21,
  anon_sym_U = 22,
  aux_sym__integer_literal_suffix_token1 = 23,
  anon_sym_d = 24,
  anon_sym_D = 25,
  aux_sym__float_literal_suffix_token1 = 26,
  sym__indent = 27,
  sym__indent_any = 28,
  sym__dedent = 29,
  sym__eol = 30,
  sym_source_file = 31,
  sym__statement = 32,
  sym_expression_statement = 33,
  sym__declaration = 34,
  sym_const_section = 35,
  sym_var_section = 36,
  sym_let_section = 37,
  sym_variable_declaration = 38,
  sym__variable_name_declaration = 39,
  sym_tuple_deconstruct_declaration = 40,
  sym__type = 41,
  sym__type_identifier = 42,
  sym_expression = 43,
  sym__literal = 44,
  sym_boolean_literal = 45,
  sym_integer_literal = 46,
  sym_float_literal = 47,
  sym_tuple = 48,
  sym__numeric_literal = 49,
  sym__integer_literal_suffix = 50,
  sym__float_literal_suffix = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_const_section_repeat1 = 53,
  aux_sym_variable_declaration_repeat1 = 54,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 55,
  aux_sym_tuple_repeat1 = 56,
  alias_sym_type_identifier = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_const_section_token1] = "const_section_token1",
  [aux_sym_var_section_token1] = "var_section_token1",
  [aux_sym_let_section_token1] = "let_section_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_variable_declaration] = "variable_declaration",
  [sym__variable_name_declaration] = "_variable_name_declaration",
  [sym_tuple_deconstruct_declaration] = "tuple_deconstruct_declaration",
  [sym__type] = "_type",
  [sym__type_identifier] = "_type_identifier",
  [sym_expression] = "expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_tuple] = "tuple",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__integer_literal_suffix] = "_integer_literal_suffix",
  [sym__float_literal_suffix] = "_float_literal_suffix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_const_section_repeat1] = "const_section_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_tuple_deconstruct_declaration_repeat1] = "tuple_deconstruct_declaration_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_const_section_token1] = aux_sym_const_section_token1,
  [aux_sym_var_section_token1] = aux_sym_var_section_token1,
  [aux_sym_let_section_token1] = aux_sym_let_section_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__variable_name_declaration] = sym__variable_name_declaration,
  [sym_tuple_deconstruct_declaration] = sym_tuple_deconstruct_declaration,
  [sym__type] = sym__type,
  [sym__type_identifier] = sym__type_identifier,
  [sym_expression] = sym_expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_tuple] = sym_tuple,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__integer_literal_suffix] = sym__integer_literal_suffix,
  [sym__float_literal_suffix] = sym__float_literal_suffix,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_const_section_repeat1] = aux_sym_const_section_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
  [aux_sym_tuple_deconstruct_declaration_repeat1] = aux_sym_tuple_deconstruct_declaration_repeat1,
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
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_section_repeat1] = {
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
  [10] = {.index = 12, .length = 3},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 4},
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
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [12] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [15] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
    {field_value, 3},
  [18] =
    {field_name, 0, .inherited = true},
    {field_type, 2},
    {field_value, 4},
  [21] =
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
      if (eof) ADVANCE(67);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'F') ADVANCE(79);
      if (lookahead == 'U') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == 'v') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == 'U') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '8') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(105);
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 48:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(24);
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(22);
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_const_section_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_const_section_token1);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_var_section_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_var_section_token1);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_let_section_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_let_section_token1);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == '8') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(88);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(92);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(90);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token3);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == '8') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(85);
      if (lookahead == '3') ADVANCE(82);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == '8') ADVANCE(88);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__integer_literal_suffix_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(88);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      if (lookahead == '1') ADVANCE(5);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 66},
  [3] = {.lex_state = 66},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 66},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 66},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 66},
  [14] = {.lex_state = 66},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 66},
  [17] = {.lex_state = 66},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 2, .external_lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2, .external_lex_state = 2},
  [32] = {.lex_state = 2, .external_lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2, .external_lex_state = 3},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(87),
    [sym__statement] = STATE(3),
    [sym_expression_statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_const_section] = STATE(3),
    [sym_var_section] = STATE(3),
    [sym_let_section] = STATE(3),
    [sym_expression] = STATE(77),
    [sym__literal] = STATE(85),
    [sym_boolean_literal] = STATE(85),
    [sym_integer_literal] = STATE(85),
    [sym_float_literal] = STATE(85),
    [sym_tuple] = STATE(85),
    [sym__numeric_literal] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_const_section_token1] = ACTIONS(5),
    [aux_sym_var_section_token1] = ACTIONS(7),
    [aux_sym_let_section_token1] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [aux_sym_boolean_literal_token1] = ACTIONS(13),
    [aux_sym_boolean_literal_token2] = ACTIONS(13),
    [aux_sym_boolean_literal_token3] = ACTIONS(13),
    [aux_sym_boolean_literal_token4] = ACTIONS(13),
    [aux_sym__numeric_literal_token1] = ACTIONS(15),
    [aux_sym__numeric_literal_token2] = ACTIONS(15),
    [aux_sym__numeric_literal_token3] = ACTIONS(15),
    [sym__decimal_literal] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_const_section_token1,
    ACTIONS(24), 1,
      aux_sym_var_section_token1,
    ACTIONS(27), 1,
      aux_sym_let_section_token1,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(77), 1,
      sym_expression,
    ACTIONS(36), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(33), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      aux_sym_source_file_repeat1,
  [52] = 12,
    ACTIONS(5), 1,
      aux_sym_const_section_token1,
    ACTIONS(7), 1,
      aux_sym_var_section_token1,
    ACTIONS(9), 1,
      aux_sym_let_section_token1,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__decimal_literal,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(77), 1,
      sym_expression,
    ACTIONS(15), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(13), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
    STATE(2), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      aux_sym_source_file_repeat1,
  [104] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(80), 1,
      sym_expression,
    ACTIONS(15), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(13), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [135] = 7,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym__decimal_literal,
    STATE(19), 1,
      sym__numeric_literal,
    STATE(58), 1,
      sym_expression,
    ACTIONS(48), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(46), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(74), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [166] = 7,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym__decimal_literal,
    STATE(19), 1,
      sym__numeric_literal,
    STATE(65), 1,
      sym_expression,
    ACTIONS(48), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(46), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(74), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [197] = 7,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym__decimal_literal,
    STATE(19), 1,
      sym__numeric_literal,
    STATE(51), 1,
      sym_expression,
    ACTIONS(48), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(46), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(74), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [228] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(84), 1,
      sym_expression,
    ACTIONS(15), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(13), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [259] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(106), 1,
      sym_expression,
    ACTIONS(15), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(13), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [290] = 7,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym__decimal_literal,
    STATE(20), 1,
      sym__numeric_literal,
    STATE(83), 1,
      sym_expression,
    ACTIONS(15), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(13), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(85), 5,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
      sym_tuple,
  [321] = 2,
    ACTIONS(54), 1,
      sym__decimal_literal,
    ACTIONS(52), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [339] = 2,
    ACTIONS(58), 1,
      sym__decimal_literal,
    ACTIONS(56), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [357] = 2,
    ACTIONS(62), 1,
      sym__decimal_literal,
    ACTIONS(60), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [375] = 2,
    ACTIONS(66), 1,
      sym__decimal_literal,
    ACTIONS(64), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [393] = 2,
    ACTIONS(70), 1,
      sym__decimal_literal,
    ACTIONS(68), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [411] = 2,
    ACTIONS(74), 1,
      sym__decimal_literal,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [429] = 2,
    ACTIONS(78), 1,
      sym__decimal_literal,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      anon_sym_LPAREN,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [447] = 4,
    ACTIONS(82), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      aux_sym_float_literal_token1,
    ACTIONS(86), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(80), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [467] = 7,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(61), 1,
      sym__float_literal_suffix,
    STATE(70), 1,
      sym__integer_literal_suffix,
    ACTIONS(88), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(92), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(96), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [493] = 7,
    ACTIONS(88), 1,
      sym__eol,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym__integer_literal_suffix_token1,
    STATE(103), 1,
      sym__float_literal_suffix,
    STATE(104), 1,
      sym__integer_literal_suffix,
    ACTIONS(100), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(104), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [518] = 4,
    ACTIONS(106), 1,
      anon_sym_DOT,
    ACTIONS(108), 1,
      aux_sym_float_literal_token1,
    ACTIONS(86), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(80), 6,
      sym__eol,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [537] = 5,
    ACTIONS(112), 1,
      aux_sym_float_literal_token1,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__float_literal_suffix,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(116), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [556] = 6,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [576] = 6,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [596] = 6,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [616] = 4,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym__float_literal_suffix,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(136), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [632] = 5,
    ACTIONS(110), 1,
      sym__eol,
    ACTIONS(138), 1,
      aux_sym_float_literal_token1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym__float_literal_suffix,
    ACTIONS(142), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [650] = 6,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [670] = 4,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym__float_literal_suffix,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(116), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [686] = 3,
    ACTIONS(148), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(146), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(150), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [699] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      sym__eol,
    STATE(97), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [716] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym__eol,
    STATE(86), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [733] = 3,
    ACTIONS(158), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(156), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(160), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [746] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [763] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [780] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      aux_sym_const_section_repeat1,
    STATE(79), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [797] = 5,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      sym__eol,
    STATE(92), 1,
      sym_variable_declaration,
    STATE(41), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [814] = 4,
    ACTIONS(110), 1,
      sym__eol,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      sym__float_literal_suffix,
    ACTIONS(142), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [829] = 4,
    ACTIONS(134), 1,
      sym__eol,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym__float_literal_suffix,
    ACTIONS(164), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [844] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(169), 3,
      sym__eol,
      anon_sym_COLON,
      anon_sym_EQ,
  [856] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      sym__eol,
    STATE(42), 1,
      aux_sym_variable_declaration_repeat1,
  [872] = 5,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      sym__eol,
    STATE(40), 1,
      aux_sym_variable_declaration_repeat1,
  [888] = 1,
    ACTIONS(185), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [895] = 1,
    ACTIONS(187), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [902] = 3,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [913] = 1,
    ACTIONS(189), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [920] = 1,
    ACTIONS(191), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [927] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_repeat1,
  [937] = 1,
    ACTIONS(160), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [943] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [953] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_tuple_repeat1,
  [963] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [973] = 3,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_repeat1,
  [983] = 2,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(72), 2,
      sym__type,
      sym__type_identifier,
  [991] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1001] = 1,
    ACTIONS(124), 3,
      sym__dedent,
      anon_sym_LPAREN,
      sym_identifier,
  [1007] = 2,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(75), 2,
      sym__type,
      sym__type_identifier,
  [1015] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_tuple_repeat1,
  [1025] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_tuple_repeat1,
  [1035] = 1,
    ACTIONS(150), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [1041] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1046] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1051] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1056] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1061] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1066] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1071] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1076] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1081] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1086] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1091] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1096] = 2,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(243), 1,
      sym__eol,
  [1103] = 1,
    ACTIONS(245), 2,
      sym__eol,
      anon_sym_EQ,
  [1108] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1113] = 2,
    ACTIONS(249), 1,
      anon_sym_EQ,
    ACTIONS(251), 1,
      sym__eol,
  [1120] = 1,
    ACTIONS(253), 1,
      sym__indent,
  [1124] = 1,
    ACTIONS(255), 1,
      sym__eol,
  [1128] = 1,
    ACTIONS(257), 1,
      sym_identifier,
  [1132] = 1,
    ACTIONS(259), 1,
      sym__eol,
  [1136] = 1,
    ACTIONS(261), 1,
      sym__eol,
  [1140] = 1,
    ACTIONS(263), 1,
      sym__indent,
  [1144] = 1,
    ACTIONS(225), 1,
      sym__eol,
  [1148] = 1,
    ACTIONS(265), 1,
      sym__eol,
  [1152] = 1,
    ACTIONS(267), 1,
      sym__eol,
  [1156] = 1,
    ACTIONS(247), 1,
      sym__eol,
  [1160] = 1,
    ACTIONS(269), 1,
      sym__eol,
  [1164] = 1,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
  [1168] = 1,
    ACTIONS(273), 1,
      sym__decimal_literal,
  [1172] = 1,
    ACTIONS(223), 1,
      sym__eol,
  [1176] = 1,
    ACTIONS(275), 1,
      sym__decimal_literal,
  [1180] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1184] = 1,
    ACTIONS(279), 1,
      sym__eol,
  [1188] = 1,
    ACTIONS(227), 1,
      sym__eol,
  [1192] = 1,
    ACTIONS(281), 1,
      sym__decimal_literal,
  [1196] = 1,
    ACTIONS(229), 1,
      sym__eol,
  [1200] = 1,
    ACTIONS(231), 1,
      sym__eol,
  [1204] = 1,
    ACTIONS(283), 1,
      sym__eol,
  [1208] = 1,
    ACTIONS(233), 1,
      sym__eol,
  [1212] = 1,
    ACTIONS(285), 1,
      sym__indent,
  [1216] = 1,
    ACTIONS(235), 1,
      sym__eol,
  [1220] = 1,
    ACTIONS(287), 1,
      sym__decimal_literal,
  [1224] = 1,
    ACTIONS(289), 1,
      sym__decimal_literal,
  [1228] = 1,
    ACTIONS(221), 1,
      sym__eol,
  [1232] = 1,
    ACTIONS(237), 1,
      sym__eol,
  [1236] = 1,
    ACTIONS(291), 1,
      sym__decimal_literal,
  [1240] = 1,
    ACTIONS(293), 1,
      sym__eol,
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
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 357,
  [SMALL_STATE(14)] = 375,
  [SMALL_STATE(15)] = 393,
  [SMALL_STATE(16)] = 411,
  [SMALL_STATE(17)] = 429,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 518,
  [SMALL_STATE(22)] = 537,
  [SMALL_STATE(23)] = 556,
  [SMALL_STATE(24)] = 576,
  [SMALL_STATE(25)] = 596,
  [SMALL_STATE(26)] = 616,
  [SMALL_STATE(27)] = 632,
  [SMALL_STATE(28)] = 650,
  [SMALL_STATE(29)] = 670,
  [SMALL_STATE(30)] = 686,
  [SMALL_STATE(31)] = 699,
  [SMALL_STATE(32)] = 716,
  [SMALL_STATE(33)] = 733,
  [SMALL_STATE(34)] = 746,
  [SMALL_STATE(35)] = 763,
  [SMALL_STATE(36)] = 780,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 814,
  [SMALL_STATE(39)] = 829,
  [SMALL_STATE(40)] = 844,
  [SMALL_STATE(41)] = 856,
  [SMALL_STATE(42)] = 872,
  [SMALL_STATE(43)] = 888,
  [SMALL_STATE(44)] = 895,
  [SMALL_STATE(45)] = 902,
  [SMALL_STATE(46)] = 913,
  [SMALL_STATE(47)] = 920,
  [SMALL_STATE(48)] = 927,
  [SMALL_STATE(49)] = 937,
  [SMALL_STATE(50)] = 943,
  [SMALL_STATE(51)] = 953,
  [SMALL_STATE(52)] = 963,
  [SMALL_STATE(53)] = 973,
  [SMALL_STATE(54)] = 983,
  [SMALL_STATE(55)] = 991,
  [SMALL_STATE(56)] = 1001,
  [SMALL_STATE(57)] = 1007,
  [SMALL_STATE(58)] = 1015,
  [SMALL_STATE(59)] = 1025,
  [SMALL_STATE(60)] = 1035,
  [SMALL_STATE(61)] = 1041,
  [SMALL_STATE(62)] = 1046,
  [SMALL_STATE(63)] = 1051,
  [SMALL_STATE(64)] = 1056,
  [SMALL_STATE(65)] = 1061,
  [SMALL_STATE(66)] = 1066,
  [SMALL_STATE(67)] = 1071,
  [SMALL_STATE(68)] = 1076,
  [SMALL_STATE(69)] = 1081,
  [SMALL_STATE(70)] = 1086,
  [SMALL_STATE(71)] = 1091,
  [SMALL_STATE(72)] = 1096,
  [SMALL_STATE(73)] = 1103,
  [SMALL_STATE(74)] = 1108,
  [SMALL_STATE(75)] = 1113,
  [SMALL_STATE(76)] = 1120,
  [SMALL_STATE(77)] = 1124,
  [SMALL_STATE(78)] = 1128,
  [SMALL_STATE(79)] = 1132,
  [SMALL_STATE(80)] = 1136,
  [SMALL_STATE(81)] = 1140,
  [SMALL_STATE(82)] = 1144,
  [SMALL_STATE(83)] = 1148,
  [SMALL_STATE(84)] = 1152,
  [SMALL_STATE(85)] = 1156,
  [SMALL_STATE(86)] = 1160,
  [SMALL_STATE(87)] = 1164,
  [SMALL_STATE(88)] = 1168,
  [SMALL_STATE(89)] = 1172,
  [SMALL_STATE(90)] = 1176,
  [SMALL_STATE(91)] = 1180,
  [SMALL_STATE(92)] = 1184,
  [SMALL_STATE(93)] = 1188,
  [SMALL_STATE(94)] = 1192,
  [SMALL_STATE(95)] = 1196,
  [SMALL_STATE(96)] = 1200,
  [SMALL_STATE(97)] = 1204,
  [SMALL_STATE(98)] = 1208,
  [SMALL_STATE(99)] = 1212,
  [SMALL_STATE(100)] = 1216,
  [SMALL_STATE(101)] = 1220,
  [SMALL_STATE(102)] = 1224,
  [SMALL_STATE(103)] = 1228,
  [SMALL_STATE(104)] = 1232,
  [SMALL_STATE(105)] = 1236,
  [SMALL_STATE(106)] = 1240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(43),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(78),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(91),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal_suffix, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal_suffix, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 12),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
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
