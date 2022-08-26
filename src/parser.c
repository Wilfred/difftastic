#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
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
  sym_integer_literal = 23,
  sym_float_literal = 24,
  sym__indent_start = 25,
  sym__indent = 26,
  sym__indent_eq = 27,
  sym__dedent = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_expression_statement = 31,
  sym__declaration = 32,
  sym_const_section = 33,
  sym_var_section = 34,
  sym_let_section = 35,
  sym_type_section = 36,
  sym_variable_declaration = 37,
  sym__variable_name_declaration = 38,
  sym_tuple_deconstruct_declaration = 39,
  sym_type_declaration = 40,
  sym__type = 41,
  sym_tuple_type = 42,
  sym_object_type = 43,
  sym_field_declaration_list = 44,
  sym_field_declaration = 45,
  sym__symbol_declaration = 46,
  sym_exported_symbol = 47,
  sym_distinct_type = 48,
  sym_ref_type = 49,
  sym_expression = 50,
  sym__literal = 51,
  sym_boolean_literal = 52,
  sym_tuple = 53,
  sym__type_identifier = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_const_section_repeat1 = 56,
  aux_sym_type_section_repeat1 = 57,
  aux_sym_variable_declaration_repeat1 = 58,
  aux_sym_tuple_deconstruct_declaration_repeat1 = 59,
  aux_sym_field_declaration_list_repeat1 = 60,
  aux_sym_field_declaration_list_repeat2 = 61,
  aux_sym_field_declaration_repeat1 = 62,
  aux_sym_tuple_repeat1 = 63,
  alias_sym_type_identifier = 64,
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
      if (eof) ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '8') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == ',' ||
          lookahead == ';') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(48);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_field_declaration_list_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '1') ADVANCE(37);
      if (lookahead == '3') ADVANCE(36);
      if (lookahead == '6') ADVANCE(38);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '2') ADVANCE(42);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '4') ADVANCE(42);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '8') ADVANCE(42);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float_literal);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '1') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(48);
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
  [32] = {.lex_state = 21, .external_lex_state = 3},
  [33] = {.lex_state = 21, .external_lex_state = 4},
  [34] = {.lex_state = 0, .external_lex_state = 5},
  [35] = {.lex_state = 0, .external_lex_state = 5},
  [36] = {.lex_state = 21, .external_lex_state = 4},
  [37] = {.lex_state = 21, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 0, .external_lex_state = 7},
  [41] = {.lex_state = 21, .external_lex_state = 4},
  [42] = {.lex_state = 21, .external_lex_state = 3},
  [43] = {.lex_state = 21, .external_lex_state = 3},
  [44] = {.lex_state = 13, .external_lex_state = 5},
  [45] = {.lex_state = 21, .external_lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 21, .external_lex_state = 3},
  [49] = {.lex_state = 21, .external_lex_state = 3},
  [50] = {.lex_state = 21, .external_lex_state = 4},
  [51] = {.lex_state = 21, .external_lex_state = 4},
  [52] = {.lex_state = 21, .external_lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 21, .external_lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0, .external_lex_state = 4},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 0, .external_lex_state = 4},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 21},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 21},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 5},
  [121] = {.lex_state = 21},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 21},
  [129] = {.lex_state = 21},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 21},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 21},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 21},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 13},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 21},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 0, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 4},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 21},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 0, .external_lex_state = 4},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 0, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 3},
  [188] = {.lex_state = 21},
  [189] = {.lex_state = 0, .external_lex_state = 3},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
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
    [sym_integer_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym__indent_start] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_eq] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(194),
    [sym__indent_start] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
    STATE(189), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(71), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [43] = 10,
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
    STATE(189), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
    STATE(140), 7,
      sym__statement,
      sym_expression_statement,
      sym__declaration,
      sym_const_section,
      sym_var_section,
      sym_let_section,
      sym_type_section,
  [86] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(23), 1,
      aux_sym_object_type_token1,
    ACTIONS(25), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(27), 1,
      aux_sym_ref_type_token1,
    STATE(150), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [110] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [132] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(33), 1,
      aux_sym_object_type_token1,
    ACTIONS(35), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(37), 1,
      aux_sym_ref_type_token1,
    STATE(87), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [156] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(155), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [180] = 5,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_expression,
    ACTIONS(53), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(143), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [202] = 5,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_expression,
    ACTIONS(53), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(143), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [224] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(147), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [248] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(33), 1,
      aux_sym_object_type_token1,
    ACTIONS(35), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(37), 1,
      aux_sym_ref_type_token1,
    STATE(86), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [272] = 5,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_expression,
    ACTIONS(53), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(143), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [294] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(33), 1,
      aux_sym_object_type_token1,
    ACTIONS(35), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(37), 1,
      aux_sym_ref_type_token1,
    STATE(85), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [318] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(23), 1,
      aux_sym_object_type_token1,
    ACTIONS(25), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(27), 1,
      aux_sym_ref_type_token1,
    STATE(151), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [342] = 5,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_expression,
    ACTIONS(59), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(153), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(57), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [364] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [386] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(180), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [408] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(124), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [432] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(136), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [456] = 5,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_expression,
    ACTIONS(53), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(143), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(51), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [478] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(131), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [502] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(23), 1,
      aux_sym_object_type_token1,
    ACTIONS(25), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(27), 1,
      aux_sym_ref_type_token1,
    STATE(162), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [526] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(23), 1,
      aux_sym_object_type_token1,
    ACTIONS(25), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(27), 1,
      aux_sym_ref_type_token1,
    STATE(161), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [550] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(33), 1,
      aux_sym_object_type_token1,
    ACTIONS(35), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(37), 1,
      aux_sym_ref_type_token1,
    STATE(187), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [574] = 5,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_expression,
    ACTIONS(59), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(153), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(57), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [596] = 5,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(190), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(15), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [618] = 5,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_expression,
    ACTIONS(59), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(153), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(57), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [640] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(122), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [664] = 6,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(43), 1,
      aux_sym_object_type_token1,
    ACTIONS(45), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(47), 1,
      aux_sym_ref_type_token1,
    STATE(117), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [688] = 5,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_expression,
    ACTIONS(59), 2,
      sym_integer_literal,
      sym_float_literal,
    STATE(153), 3,
      sym__literal,
      sym_boolean_literal,
      sym_tuple,
    ACTIONS(57), 4,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
      aux_sym_boolean_literal_token3,
      aux_sym_boolean_literal_token4,
  [710] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      aux_sym_tuple_type_token1,
    ACTIONS(33), 1,
      aux_sym_object_type_token1,
    ACTIONS(35), 1,
      aux_sym_distinct_type_token1,
    ACTIONS(37), 1,
      aux_sym_ref_type_token1,
    STATE(112), 6,
      sym__type,
      sym_tuple_type,
      sym_object_type,
      sym_distinct_type,
      sym_ref_type,
      sym__type_identifier,
  [734] = 5,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_EQ,
    STATE(42), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(61), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [751] = 5,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(73), 1,
      anon_sym_EQ,
    STATE(41), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(61), 2,
      sym__indent_eq,
      sym__dedent,
  [768] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      sym__indent,
    STATE(177), 1,
      sym_variable_declaration,
    STATE(32), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [785] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      sym__indent,
    STATE(175), 1,
      sym_variable_declaration,
    STATE(32), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [802] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(86), 4,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COLON,
      anon_sym_EQ,
  [815] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(86), 4,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_EQ,
  [828] = 5,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym__indent,
    STATE(168), 1,
      sym_variable_declaration,
    STATE(32), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [845] = 4,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      sym__indent,
    STATE(84), 1,
      sym_field_declaration_list,
    ACTIONS(93), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [860] = 4,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym__indent,
    STATE(125), 1,
      sym_field_declaration_list,
    ACTIONS(93), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [875] = 5,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_COLON,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(36), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(107), 2,
      sym__indent_eq,
      sym__dedent,
  [892] = 5,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(111), 1,
      anon_sym_EQ,
    STATE(37), 1,
      aux_sym_variable_declaration_repeat1,
    ACTIONS(107), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [909] = 1,
    ACTIONS(113), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [917] = 4,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      sym__indent,
    STATE(160), 1,
      sym_field_declaration_list,
    ACTIONS(93), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [931] = 1,
    ACTIONS(119), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [939] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [953] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [967] = 1,
    ACTIONS(125), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [975] = 1,
    ACTIONS(119), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [983] = 1,
    ACTIONS(127), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [991] = 1,
    ACTIONS(125), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [999] = 1,
    ACTIONS(127), 5,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1007] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1021] = 1,
    ACTIONS(113), 5,
      sym__indent_eq,
      sym__dedent,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [1029] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_variable_declaration,
    STATE(33), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1043] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(92), 1,
      sym_field_declaration,
    STATE(74), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1054] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(79), 1,
      sym_field_declaration,
    STATE(96), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1065] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(149), 1,
      sym_field_declaration,
    STATE(74), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1076] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(98), 1,
      sym_field_declaration,
    STATE(96), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1087] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(78), 1,
      sym_field_declaration,
    STATE(74), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1098] = 3,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1109] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(166), 1,
      sym_field_declaration,
    STATE(96), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1120] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(95), 1,
      sym_field_declaration,
    STATE(96), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1131] = 3,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(97), 1,
      sym_field_declaration,
    STATE(74), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1142] = 3,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(43), 2,
      sym__variable_name_declaration,
      sym_tuple_deconstruct_declaration,
  [1153] = 1,
    ACTIONS(131), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1159] = 3,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      sym__indent,
    STATE(127), 1,
      sym_field_declaration_list,
  [1169] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(135), 1,
      sym__dedent,
    STATE(80), 1,
      aux_sym_const_section_repeat1,
  [1179] = 3,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym__indent,
    STATE(156), 1,
      sym_type_declaration,
  [1189] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(141), 1,
      sym__dedent,
    STATE(80), 1,
      aux_sym_const_section_repeat1,
  [1199] = 3,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym__indent_eq,
    STATE(116), 1,
      aux_sym_source_file_repeat1,
  [1209] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_field_declaration_repeat1,
  [1219] = 3,
    ACTIONS(151), 1,
      sym__indent_eq,
    ACTIONS(153), 1,
      sym__dedent,
    STATE(93), 1,
      aux_sym_type_section_repeat1,
  [1229] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(155), 1,
      anon_sym_COLON,
    STATE(72), 1,
      aux_sym_field_declaration_repeat1,
  [1239] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_field_declaration_list_repeat1,
  [1249] = 3,
    ACTIONS(159), 1,
      sym__dedent,
    ACTIONS(161), 1,
      sym__indent_eq,
    STATE(109), 1,
      aux_sym_field_declaration_list_repeat2,
  [1259] = 3,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_tuple_repeat1,
  [1269] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_field_declaration_list_repeat1,
  [1279] = 3,
    ACTIONS(161), 1,
      sym__indent_eq,
    ACTIONS(168), 1,
      sym__dedent,
    STATE(76), 1,
      aux_sym_field_declaration_list_repeat2,
  [1289] = 3,
    ACTIONS(170), 1,
      sym__indent_eq,
    ACTIONS(173), 1,
      sym__dedent,
    STATE(80), 1,
      aux_sym_const_section_repeat1,
  [1299] = 3,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    ACTIONS(117), 1,
      sym__indent,
    STATE(159), 1,
      sym_field_declaration_list,
  [1309] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1319] = 1,
    ACTIONS(180), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1325] = 1,
    ACTIONS(182), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1331] = 1,
    ACTIONS(184), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1337] = 1,
    ACTIONS(186), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1343] = 2,
    ACTIONS(190), 1,
      anon_sym_EQ,
    ACTIONS(188), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1351] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_tuple_repeat1,
  [1361] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_tuple_repeat1,
  [1371] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_field_declaration_list_repeat1,
  [1381] = 3,
    ACTIONS(161), 1,
      sym__indent_eq,
    ACTIONS(198), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_field_declaration_list_repeat2,
  [1391] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_field_declaration_list_repeat1,
  [1401] = 3,
    ACTIONS(202), 1,
      sym__indent_eq,
    ACTIONS(205), 1,
      sym__dedent,
    STATE(93), 1,
      aux_sym_type_section_repeat1,
  [1411] = 2,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1419] = 3,
    ACTIONS(161), 1,
      sym__indent_eq,
    ACTIONS(211), 1,
      sym__dedent,
    STATE(100), 1,
      aux_sym_field_declaration_list_repeat2,
  [1429] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(103), 1,
      aux_sym_field_declaration_repeat1,
  [1439] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_field_declaration_list_repeat1,
  [1449] = 3,
    ACTIONS(161), 1,
      sym__indent_eq,
    ACTIONS(200), 1,
      sym__dedent,
    STATE(91), 1,
      aux_sym_field_declaration_list_repeat2,
  [1459] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(215), 1,
      sym__dedent,
    STATE(70), 1,
      aux_sym_const_section_repeat1,
  [1469] = 3,
    ACTIONS(161), 1,
      sym__indent_eq,
    ACTIONS(217), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_field_declaration_list_repeat2,
  [1479] = 2,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(135), 2,
      sym__symbol_declaration,
      sym_exported_symbol,
  [1487] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1497] = 3,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_field_declaration_repeat1,
  [1507] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_tuple_repeat1,
  [1517] = 3,
    ACTIONS(157), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_field_declaration_list_repeat1,
  [1527] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1537] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_tuple_repeat1,
  [1547] = 1,
    ACTIONS(231), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1553] = 3,
    ACTIONS(233), 1,
      sym__indent_eq,
    ACTIONS(236), 1,
      sym__dedent,
    STATE(109), 1,
      aux_sym_field_declaration_list_repeat2,
  [1563] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_tuple_repeat1,
  [1573] = 1,
    ACTIONS(231), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1579] = 2,
    ACTIONS(242), 1,
      anon_sym_EQ,
    ACTIONS(240), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1587] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(113), 1,
      aux_sym_field_declaration_repeat1,
  [1597] = 1,
    ACTIONS(131), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1603] = 3,
    ACTIONS(249), 1,
      aux_sym_field_declaration_list_token1,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_field_declaration_list_repeat1,
  [1613] = 3,
    ACTIONS(145), 1,
      sym__indent_eq,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      aux_sym_source_file_repeat1,
  [1623] = 2,
    ACTIONS(256), 1,
      anon_sym_EQ,
    ACTIONS(188), 2,
      sym__indent_eq,
      sym__dedent,
  [1631] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(258), 1,
      sym__dedent,
    STATE(123), 1,
      aux_sym_const_section_repeat1,
  [1641] = 1,
    ACTIONS(260), 3,
      sym__indent_eq,
      ts_builtin_sym_end,
      anon_sym_EQ,
  [1647] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      sym__indent,
    STATE(83), 1,
      sym_field_declaration_list,
  [1657] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1667] = 1,
    ACTIONS(186), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1673] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(264), 1,
      sym__dedent,
    STATE(80), 1,
      aux_sym_const_section_repeat1,
  [1683] = 1,
    ACTIONS(184), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1689] = 1,
    ACTIONS(182), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1695] = 3,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym__indent_eq,
    STATE(126), 1,
      aux_sym_source_file_repeat1,
  [1705] = 1,
    ACTIONS(180), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1711] = 3,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_tuple_repeat1,
  [1721] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_tuple_deconstruct_declaration_repeat1,
  [1731] = 1,
    ACTIONS(260), 3,
      sym__indent_eq,
      sym__dedent,
      anon_sym_EQ,
  [1737] = 2,
    ACTIONS(275), 1,
      anon_sym_EQ,
    ACTIONS(240), 2,
      sym__indent_eq,
      sym__dedent,
  [1745] = 3,
    ACTIONS(133), 1,
      sym__indent_eq,
    ACTIONS(277), 1,
      sym__dedent,
    STATE(68), 1,
      aux_sym_const_section_repeat1,
  [1755] = 3,
    ACTIONS(151), 1,
      sym__indent_eq,
    ACTIONS(279), 1,
      sym__dedent,
    STATE(73), 1,
      aux_sym_type_section_repeat1,
  [1765] = 1,
    ACTIONS(281), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1770] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1775] = 1,
    ACTIONS(285), 2,
      sym__indent_eq,
      sym__dedent,
  [1780] = 1,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1785] = 1,
    ACTIONS(289), 2,
      sym__indent_eq,
      sym__dedent,
  [1790] = 1,
    ACTIONS(291), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1795] = 1,
    ACTIONS(266), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1800] = 1,
    ACTIONS(293), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1805] = 1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1810] = 1,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1815] = 1,
    ACTIONS(297), 2,
      sym__indent_eq,
      sym__dedent,
  [1820] = 1,
    ACTIONS(281), 2,
      sym__indent_eq,
      sym__dedent,
  [1825] = 1,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1830] = 1,
    ACTIONS(301), 2,
      sym__indent_eq,
      sym__dedent,
  [1835] = 1,
    ACTIONS(303), 2,
      sym__indent_eq,
      sym__dedent,
  [1840] = 1,
    ACTIONS(252), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1845] = 1,
    ACTIONS(305), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1850] = 1,
    ACTIONS(301), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1855] = 1,
    ACTIONS(299), 2,
      sym__indent_eq,
      sym__dedent,
  [1860] = 1,
    ACTIONS(295), 2,
      sym__indent_eq,
      sym__dedent,
  [1865] = 1,
    ACTIONS(291), 2,
      sym__indent_eq,
      sym__dedent,
  [1870] = 1,
    ACTIONS(305), 2,
      sym__indent_eq,
      sym__dedent,
  [1875] = 1,
    ACTIONS(307), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1880] = 1,
    ACTIONS(260), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1885] = 1,
    ACTIONS(287), 2,
      sym__indent_eq,
      sym__dedent,
  [1890] = 1,
    ACTIONS(180), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1895] = 1,
    ACTIONS(182), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1900] = 1,
    ACTIONS(184), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1905] = 1,
    ACTIONS(186), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1910] = 1,
    ACTIONS(131), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1915] = 1,
    ACTIONS(231), 2,
      aux_sym_field_declaration_list_token1,
      anon_sym_RBRACK,
  [1920] = 1,
    ACTIONS(309), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1925] = 1,
    ACTIONS(236), 2,
      sym__indent_eq,
      sym__dedent,
  [1930] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(133), 1,
      sym_type_declaration,
  [1937] = 1,
    ACTIONS(313), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1942] = 1,
    ACTIONS(303), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1947] = 1,
    ACTIONS(289), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1952] = 1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_COLON,
  [1957] = 1,
    ACTIONS(317), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1962] = 2,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(176), 1,
      sym_type_declaration,
  [1969] = 1,
    ACTIONS(319), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1974] = 1,
    ACTIONS(321), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1979] = 1,
    ACTIONS(205), 2,
      sym__indent_eq,
      sym__dedent,
  [1984] = 1,
    ACTIONS(323), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1989] = 1,
    ACTIONS(325), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1994] = 1,
    ACTIONS(327), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [1999] = 1,
    ACTIONS(297), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2004] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2009] = 1,
    ACTIONS(331), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2014] = 1,
    ACTIONS(173), 2,
      sym__indent_eq,
      sym__dedent,
  [2019] = 1,
    ACTIONS(287), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2024] = 1,
    ACTIONS(299), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2029] = 1,
    ACTIONS(333), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2034] = 1,
    ACTIONS(285), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2039] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2044] = 1,
    ACTIONS(335), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2049] = 1,
    ACTIONS(295), 2,
      sym__indent_eq,
      ts_builtin_sym_end,
  [2054] = 1,
    ACTIONS(337), 1,
      anon_sym_EQ,
  [2058] = 1,
    ACTIONS(339), 1,
      sym_identifier,
  [2062] = 1,
    ACTIONS(341), 1,
      sym_identifier,
  [2066] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [2070] = 1,
    ACTIONS(345), 1,
      anon_sym_EQ,
  [2074] = 1,
    ACTIONS(347), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 224,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 456,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 502,
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 550,
  [SMALL_STATE(25)] = 574,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 618,
  [SMALL_STATE(28)] = 640,
  [SMALL_STATE(29)] = 664,
  [SMALL_STATE(30)] = 688,
  [SMALL_STATE(31)] = 710,
  [SMALL_STATE(32)] = 734,
  [SMALL_STATE(33)] = 751,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 785,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 815,
  [SMALL_STATE(38)] = 828,
  [SMALL_STATE(39)] = 845,
  [SMALL_STATE(40)] = 860,
  [SMALL_STATE(41)] = 875,
  [SMALL_STATE(42)] = 892,
  [SMALL_STATE(43)] = 909,
  [SMALL_STATE(44)] = 917,
  [SMALL_STATE(45)] = 931,
  [SMALL_STATE(46)] = 939,
  [SMALL_STATE(47)] = 953,
  [SMALL_STATE(48)] = 967,
  [SMALL_STATE(49)] = 975,
  [SMALL_STATE(50)] = 983,
  [SMALL_STATE(51)] = 991,
  [SMALL_STATE(52)] = 999,
  [SMALL_STATE(53)] = 1007,
  [SMALL_STATE(54)] = 1021,
  [SMALL_STATE(55)] = 1029,
  [SMALL_STATE(56)] = 1043,
  [SMALL_STATE(57)] = 1054,
  [SMALL_STATE(58)] = 1065,
  [SMALL_STATE(59)] = 1076,
  [SMALL_STATE(60)] = 1087,
  [SMALL_STATE(61)] = 1098,
  [SMALL_STATE(62)] = 1109,
  [SMALL_STATE(63)] = 1120,
  [SMALL_STATE(64)] = 1131,
  [SMALL_STATE(65)] = 1142,
  [SMALL_STATE(66)] = 1153,
  [SMALL_STATE(67)] = 1159,
  [SMALL_STATE(68)] = 1169,
  [SMALL_STATE(69)] = 1179,
  [SMALL_STATE(70)] = 1189,
  [SMALL_STATE(71)] = 1199,
  [SMALL_STATE(72)] = 1209,
  [SMALL_STATE(73)] = 1219,
  [SMALL_STATE(74)] = 1229,
  [SMALL_STATE(75)] = 1239,
  [SMALL_STATE(76)] = 1249,
  [SMALL_STATE(77)] = 1259,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1279,
  [SMALL_STATE(80)] = 1289,
  [SMALL_STATE(81)] = 1299,
  [SMALL_STATE(82)] = 1309,
  [SMALL_STATE(83)] = 1319,
  [SMALL_STATE(84)] = 1325,
  [SMALL_STATE(85)] = 1331,
  [SMALL_STATE(86)] = 1337,
  [SMALL_STATE(87)] = 1343,
  [SMALL_STATE(88)] = 1351,
  [SMALL_STATE(89)] = 1361,
  [SMALL_STATE(90)] = 1371,
  [SMALL_STATE(91)] = 1381,
  [SMALL_STATE(92)] = 1391,
  [SMALL_STATE(93)] = 1401,
  [SMALL_STATE(94)] = 1411,
  [SMALL_STATE(95)] = 1419,
  [SMALL_STATE(96)] = 1429,
  [SMALL_STATE(97)] = 1439,
  [SMALL_STATE(98)] = 1449,
  [SMALL_STATE(99)] = 1459,
  [SMALL_STATE(100)] = 1469,
  [SMALL_STATE(101)] = 1479,
  [SMALL_STATE(102)] = 1487,
  [SMALL_STATE(103)] = 1497,
  [SMALL_STATE(104)] = 1507,
  [SMALL_STATE(105)] = 1517,
  [SMALL_STATE(106)] = 1527,
  [SMALL_STATE(107)] = 1537,
  [SMALL_STATE(108)] = 1547,
  [SMALL_STATE(109)] = 1553,
  [SMALL_STATE(110)] = 1563,
  [SMALL_STATE(111)] = 1573,
  [SMALL_STATE(112)] = 1579,
  [SMALL_STATE(113)] = 1587,
  [SMALL_STATE(114)] = 1597,
  [SMALL_STATE(115)] = 1603,
  [SMALL_STATE(116)] = 1613,
  [SMALL_STATE(117)] = 1623,
  [SMALL_STATE(118)] = 1631,
  [SMALL_STATE(119)] = 1641,
  [SMALL_STATE(120)] = 1647,
  [SMALL_STATE(121)] = 1657,
  [SMALL_STATE(122)] = 1667,
  [SMALL_STATE(123)] = 1673,
  [SMALL_STATE(124)] = 1683,
  [SMALL_STATE(125)] = 1689,
  [SMALL_STATE(126)] = 1695,
  [SMALL_STATE(127)] = 1705,
  [SMALL_STATE(128)] = 1711,
  [SMALL_STATE(129)] = 1721,
  [SMALL_STATE(130)] = 1731,
  [SMALL_STATE(131)] = 1737,
  [SMALL_STATE(132)] = 1745,
  [SMALL_STATE(133)] = 1755,
  [SMALL_STATE(134)] = 1765,
  [SMALL_STATE(135)] = 1770,
  [SMALL_STATE(136)] = 1775,
  [SMALL_STATE(137)] = 1780,
  [SMALL_STATE(138)] = 1785,
  [SMALL_STATE(139)] = 1790,
  [SMALL_STATE(140)] = 1795,
  [SMALL_STATE(141)] = 1800,
  [SMALL_STATE(142)] = 1805,
  [SMALL_STATE(143)] = 1810,
  [SMALL_STATE(144)] = 1815,
  [SMALL_STATE(145)] = 1820,
  [SMALL_STATE(146)] = 1825,
  [SMALL_STATE(147)] = 1830,
  [SMALL_STATE(148)] = 1835,
  [SMALL_STATE(149)] = 1840,
  [SMALL_STATE(150)] = 1845,
  [SMALL_STATE(151)] = 1850,
  [SMALL_STATE(152)] = 1855,
  [SMALL_STATE(153)] = 1860,
  [SMALL_STATE(154)] = 1865,
  [SMALL_STATE(155)] = 1870,
  [SMALL_STATE(156)] = 1875,
  [SMALL_STATE(157)] = 1880,
  [SMALL_STATE(158)] = 1885,
  [SMALL_STATE(159)] = 1890,
  [SMALL_STATE(160)] = 1895,
  [SMALL_STATE(161)] = 1900,
  [SMALL_STATE(162)] = 1905,
  [SMALL_STATE(163)] = 1910,
  [SMALL_STATE(164)] = 1915,
  [SMALL_STATE(165)] = 1920,
  [SMALL_STATE(166)] = 1925,
  [SMALL_STATE(167)] = 1930,
  [SMALL_STATE(168)] = 1937,
  [SMALL_STATE(169)] = 1942,
  [SMALL_STATE(170)] = 1947,
  [SMALL_STATE(171)] = 1952,
  [SMALL_STATE(172)] = 1957,
  [SMALL_STATE(173)] = 1962,
  [SMALL_STATE(174)] = 1969,
  [SMALL_STATE(175)] = 1974,
  [SMALL_STATE(176)] = 1979,
  [SMALL_STATE(177)] = 1984,
  [SMALL_STATE(178)] = 1989,
  [SMALL_STATE(179)] = 1994,
  [SMALL_STATE(180)] = 1999,
  [SMALL_STATE(181)] = 2004,
  [SMALL_STATE(182)] = 2009,
  [SMALL_STATE(183)] = 2014,
  [SMALL_STATE(184)] = 2019,
  [SMALL_STATE(185)] = 2024,
  [SMALL_STATE(186)] = 2029,
  [SMALL_STATE(187)] = 2034,
  [SMALL_STATE(188)] = 2039,
  [SMALL_STATE(189)] = 2044,
  [SMALL_STATE(190)] = 2049,
  [SMALL_STATE(191)] = 2054,
  [SMALL_STATE(192)] = 2058,
  [SMALL_STATE(193)] = 2062,
  [SMALL_STATE(194)] = 2066,
  [SMALL_STATE(195)] = 2070,
  [SMALL_STATE(196)] = 2074,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(61),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_declaration_repeat1, 2, .production_id = 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 3, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_deconstruct_declaration, 4, .production_id = 10),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name_declaration, 1, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(20),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_repeat1, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2), SHIFT_REPEAT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_section_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(196),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple_type, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_type, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_distinct_type, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_type, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 11),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2), SHIFT_REPEAT(173),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_section_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__symbol_declaration, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration_list, 4),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2), SHIFT_REPEAT(62),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat2, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3), SHIFT_REPEAT(101),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 3),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2), SHIFT_REPEAT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_list_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 13),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2, .production_id = 5),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 3, .production_id = 9),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, .production_id = 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 12),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, .production_id = 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 14),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, .production_id = 7),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exported_symbol, 2, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_section, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_section, 5),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuple_deconstruct_declaration_repeat1, 2, .production_id = 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_section, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_section, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
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
