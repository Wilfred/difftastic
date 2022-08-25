#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

enum {
  sym_identifier = 1,
  aux_sym_const_section_token1 = 2,
  aux_sym_var_section_token1 = 3,
  aux_sym_let_section_token1 = 4,
  anon_sym_COMMA = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  aux_sym_boolean_literal_token1 = 8,
  aux_sym_boolean_literal_token2 = 9,
  aux_sym_boolean_literal_token3 = 10,
  aux_sym_boolean_literal_token4 = 11,
  anon_sym_DOT = 12,
  aux_sym_float_literal_token1 = 13,
  aux_sym__numeric_literal_token1 = 14,
  aux_sym__numeric_literal_token2 = 15,
  aux_sym__numeric_literal_token3 = 16,
  sym__decimal_literal = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_u = 19,
  anon_sym_U = 20,
  aux_sym__integer_literal_suffix_token1 = 21,
  anon_sym_d = 22,
  anon_sym_D = 23,
  aux_sym__float_literal_suffix_token1 = 24,
  sym__indent = 25,
  sym__indent_any = 26,
  sym__dedent = 27,
  sym__eol = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_expression_statement = 31,
  sym__declaration = 32,
  sym_const_section = 33,
  sym_var_section = 34,
  sym_let_section = 35,
  sym_variable_declaration = 36,
  sym__type = 37,
  sym__type_identifier = 38,
  sym_expression = 39,
  sym__literal = 40,
  sym_boolean_literal = 41,
  sym_integer_literal = 42,
  sym_float_literal = 43,
  sym__numeric_literal = 44,
  sym__integer_literal_suffix = 45,
  sym__float_literal_suffix = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_const_section_repeat1 = 48,
  aux_sym_variable_declaration_repeat1 = 49,
  alias_sym_type_identifier = 50,
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
  [sym__type] = "_type",
  [sym__type_identifier] = "_type_identifier",
  [sym_expression] = "expression",
  [sym__literal] = "_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym__numeric_literal] = "_numeric_literal",
  [sym__integer_literal_suffix] = "_integer_literal_suffix",
  [sym__float_literal_suffix] = "_float_literal_suffix",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_const_section_repeat1] = "const_section_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
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
  [sym__type] = sym__type,
  [sym__type_identifier] = sym__type_identifier,
  [sym_expression] = sym_expression,
  [sym__literal] = sym__literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_float_literal] = sym_float_literal,
  [sym__numeric_literal] = sym__numeric_literal,
  [sym__integer_literal_suffix] = sym__integer_literal_suffix,
  [sym__float_literal_suffix] = sym__float_literal_suffix,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_const_section_repeat1] = aux_sym_const_section_repeat1,
  [aux_sym_variable_declaration_repeat1] = aux_sym_variable_declaration_repeat1,
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_type, 2},
  [6] =
    {field_name, 0},
    {field_value, 2},
  [8] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [10] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
    {field_type, 3},
  [13] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
    {field_value, 3},
  [16] =
    {field_name, 0},
    {field_type, 2},
    {field_value, 4},
  [19] =
    {field_name, 0},
    {field_name, 1, .inherited = true},
    {field_type, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
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
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(123);
      if (lookahead == 'F') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(125);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == '8') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(44);
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(29);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(103);
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(21);
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(113);
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
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
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
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
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
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(99);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(86);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token3);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token4);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_float_literal_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token1);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token2);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__numeric_literal_token3);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(60);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__decimal_literal);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(82);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_U);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__integer_literal_suffix_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(86);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__float_literal_suffix_token1);
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
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
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 61, .external_lex_state = 3},
  [26] = {.lex_state = 61, .external_lex_state = 3},
  [27] = {.lex_state = 61, .external_lex_state = 3},
  [28] = {.lex_state = 61, .external_lex_state = 3},
  [29] = {.lex_state = 61, .external_lex_state = 2},
  [30] = {.lex_state = 61, .external_lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 61},
  [33] = {.lex_state = 61},
  [34] = {.lex_state = 61},
  [35] = {.lex_state = 61, .external_lex_state = 2},
  [36] = {.lex_state = 61},
  [37] = {.lex_state = 61},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 61, .external_lex_state = 3},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_source_file] = STATE(60),
    [sym__statement] = STATE(2),
    [sym_expression_statement] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_const_section] = STATE(2),
    [sym_var_section] = STATE(2),
    [sym_let_section] = STATE(2),
    [sym_expression] = STATE(57),
    [sym__literal] = STATE(43),
    [sym_boolean_literal] = STATE(43),
    [sym_integer_literal] = STATE(43),
    [sym_float_literal] = STATE(43),
    [sym__numeric_literal] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_const_section_token1] = ACTIONS(5),
    [aux_sym_var_section_token1] = ACTIONS(7),
    [aux_sym_let_section_token1] = ACTIONS(9),
    [aux_sym_boolean_literal_token1] = ACTIONS(11),
    [aux_sym_boolean_literal_token2] = ACTIONS(11),
    [aux_sym_boolean_literal_token3] = ACTIONS(11),
    [aux_sym_boolean_literal_token4] = ACTIONS(11),
    [aux_sym__numeric_literal_token1] = ACTIONS(13),
    [aux_sym__numeric_literal_token2] = ACTIONS(13),
    [aux_sym__numeric_literal_token3] = ACTIONS(13),
    [sym__decimal_literal] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      aux_sym_const_section_token1,
    ACTIONS(7), 1,
      aux_sym_var_section_token1,
    ACTIONS(9), 1,
      aux_sym_let_section_token1,
    ACTIONS(15), 1,
      sym__decimal_literal,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(57), 1,
      sym_expression,
    ACTIONS(13), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(11), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
    STATE(3), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      aux_sym_source_file_repeat1,
  [48] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_const_section_token1,
    ACTIONS(24), 1,
      aux_sym_var_section_token1,
    ACTIONS(27), 1,
      aux_sym_let_section_token1,
    ACTIONS(36), 1,
      sym__decimal_literal,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(57), 1,
      sym_expression,
    ACTIONS(33), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(30), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
    STATE(3), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      aux_sym_source_file_repeat1,
  [96] = 6,
    ACTIONS(15), 1,
      sym__decimal_literal,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(66), 1,
      sym_expression,
    ACTIONS(13), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(11), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
  [123] = 6,
    ACTIONS(15), 1,
      sym__decimal_literal,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(45), 1,
      sym_expression,
    ACTIONS(13), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(11), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
  [150] = 6,
    ACTIONS(15), 1,
      sym__decimal_literal,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(59), 1,
      sym_expression,
    ACTIONS(13), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(11), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
  [177] = 6,
    ACTIONS(15), 1,
      sym__decimal_literal,
    STATE(16), 1,
      sym__numeric_literal,
    STATE(63), 1,
      sym_expression,
    ACTIONS(13), 3,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
    ACTIONS(11), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(43), 4,
      sym__literal,
      sym_boolean_literal,
      sym_integer_literal,
      sym_float_literal,
  [204] = 2,
    ACTIONS(41), 1,
      sym__decimal_literal,
    ACTIONS(39), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [221] = 2,
    ACTIONS(45), 1,
      sym__decimal_literal,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [238] = 2,
    ACTIONS(49), 1,
      sym__decimal_literal,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [255] = 2,
    ACTIONS(53), 1,
      sym__decimal_literal,
    ACTIONS(51), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [272] = 2,
    ACTIONS(57), 1,
      sym__decimal_literal,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [289] = 2,
    ACTIONS(61), 1,
      sym__decimal_literal,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [306] = 2,
    ACTIONS(65), 1,
      sym__decimal_literal,
    ACTIONS(63), 11,
      ts_builtin_sym_end,
      aux_sym_const_section_token1,
      aux_sym_var_section_token1,
      aux_sym_let_section_token1,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
      aux_sym__numeric_literal_token1,
      aux_sym__numeric_literal_token2,
      aux_sym__numeric_literal_token3,
  [323] = 4,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      aux_sym_float_literal_token1,
    ACTIONS(73), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(71), 6,
      sym__eol,
      anon_sym_SQUOTE,
      aux_sym__integer_literal_suffix_token1,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [342] = 7,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(83), 1,
      sym__eol,
    STATE(52), 1,
      sym__float_literal_suffix,
    STATE(56), 1,
      sym__integer_literal_suffix,
    ACTIONS(77), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(81), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [367] = 5,
    ACTIONS(85), 1,
      aux_sym_float_literal_token1,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(42), 1,
      sym__float_literal_suffix,
    ACTIONS(89), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [385] = 4,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym__eol,
    STATE(65), 1,
      sym__float_literal_suffix,
    ACTIONS(93), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [400] = 4,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      sym__eol,
    STATE(42), 1,
      sym__float_literal_suffix,
    ACTIONS(89), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [415] = 3,
    ACTIONS(99), 1,
      aux_sym__integer_literal_suffix_token1,
    ACTIONS(97), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(101), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [428] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(106), 3,
      sym__eol,
      anon_sym_COLON,
      anon_sym_EQ,
  [440] = 5,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      sym__eol,
    STATE(21), 1,
      aux_sym_variable_declaration_repeat1,
  [456] = 5,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      sym__eol,
    STATE(22), 1,
      aux_sym_variable_declaration_repeat1,
  [472] = 1,
    ACTIONS(122), 4,
      sym__eol,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [479] = 4,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [492] = 4,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [505] = 4,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [518] = 4,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym__dedent,
    STATE(25), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [531] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym__eol,
    STATE(49), 1,
      sym_variable_declaration,
  [541] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym__eol,
    STATE(46), 1,
      sym_variable_declaration,
  [551] = 1,
    ACTIONS(101), 3,
      anon_sym_d,
      anon_sym_D,
      aux_sym__float_literal_suffix_token1,
  [557] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [567] = 2,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(38), 2,
      sym__type,
      sym__type_identifier,
  [575] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [585] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym__eol,
    STATE(53), 1,
      sym_variable_declaration,
  [595] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(26), 1,
      aux_sym_const_section_repeat1,
    STATE(55), 1,
      sym_variable_declaration,
  [605] = 2,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(40), 2,
      sym__type,
      sym__type_identifier,
  [613] = 2,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      sym__eol,
  [620] = 1,
    ACTIONS(149), 2,
      sym__eol,
      anon_sym_EQ,
  [625] = 2,
    ACTIONS(151), 1,
      anon_sym_EQ,
    ACTIONS(153), 1,
      sym__eol,
  [632] = 1,
    ACTIONS(127), 2,
      sym__dedent,
      sym_identifier,
  [637] = 1,
    ACTIONS(155), 1,
      sym__eol,
  [641] = 1,
    ACTIONS(157), 1,
      sym__eol,
  [645] = 1,
    ACTIONS(159), 1,
      sym__indent,
  [649] = 1,
    ACTIONS(161), 1,
      sym__eol,
  [653] = 1,
    ACTIONS(163), 1,
      sym__eol,
  [657] = 1,
    ACTIONS(165), 1,
      sym__indent,
  [661] = 1,
    ACTIONS(167), 1,
      sym__indent,
  [665] = 1,
    ACTIONS(169), 1,
      sym__eol,
  [669] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [673] = 1,
    ACTIONS(173), 1,
      sym__decimal_literal,
  [677] = 1,
    ACTIONS(175), 1,
      sym__eol,
  [681] = 1,
    ACTIONS(177), 1,
      sym__eol,
  [685] = 1,
    ACTIONS(179), 1,
      sym__eol,
  [689] = 1,
    ACTIONS(181), 1,
      sym__eol,
  [693] = 1,
    ACTIONS(183), 1,
      sym__eol,
  [697] = 1,
    ACTIONS(185), 1,
      sym__eol,
  [701] = 1,
    ACTIONS(187), 1,
      sym__eol,
  [705] = 1,
    ACTIONS(189), 1,
      sym__eol,
  [709] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [713] = 1,
    ACTIONS(193), 1,
      sym__eol,
  [717] = 1,
    ACTIONS(195), 1,
      sym__decimal_literal,
  [721] = 1,
    ACTIONS(197), 1,
      sym__eol,
  [725] = 1,
    ACTIONS(199), 1,
      sym__decimal_literal,
  [729] = 1,
    ACTIONS(201), 1,
      sym__eol,
  [733] = 1,
    ACTIONS(203), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 150,
  [SMALL_STATE(7)] = 177,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 238,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 400,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 440,
  [SMALL_STATE(23)] = 456,
  [SMALL_STATE(24)] = 472,
  [SMALL_STATE(25)] = 479,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 505,
  [SMALL_STATE(28)] = 518,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 541,
  [SMALL_STATE(31)] = 551,
  [SMALL_STATE(32)] = 557,
  [SMALL_STATE(33)] = 567,
  [SMALL_STATE(34)] = 575,
  [SMALL_STATE(35)] = 585,
  [SMALL_STATE(36)] = 595,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 613,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 632,
  [SMALL_STATE(42)] = 637,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 645,
  [SMALL_STATE(45)] = 649,
  [SMALL_STATE(46)] = 653,
  [SMALL_STATE(47)] = 657,
  [SMALL_STATE(48)] = 661,
  [SMALL_STATE(49)] = 665,
  [SMALL_STATE(50)] = 669,
  [SMALL_STATE(51)] = 673,
  [SMALL_STATE(52)] = 677,
  [SMALL_STATE(53)] = 681,
  [SMALL_STATE(54)] = 685,
  [SMALL_STATE(55)] = 689,
  [SMALL_STATE(56)] = 693,
  [SMALL_STATE(57)] = 697,
  [SMALL_STATE(58)] = 701,
  [SMALL_STATE(59)] = 705,
  [SMALL_STATE(60)] = 709,
  [SMALL_STATE(61)] = 713,
  [SMALL_STATE(62)] = 717,
  [SMALL_STATE(63)] = 721,
  [SMALL_STATE(64)] = 725,
  [SMALL_STATE(65)] = 729,
  [SMALL_STATE(66)] = 733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_section, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_section, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_section, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_literal, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 7), SHIFT_REPEAT(50),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__integer_literal_suffix, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float_literal_suffix, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 11),
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
