#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_EQ = 1,
  anon_sym_if = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_our = 6,
  anon_sym_my = 7,
  anon_sym_sub = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_return = 11,
  sym_integer = 12,
  sym_floating_point = 13,
  sym_scientific_notation = 14,
  sym_hexadecimal = 15,
  sym_octal = 16,
  sym_identifier = 17,
  sym__semi_colon = 18,
  sym_string_single_quoted = 19,
  sym_string_double_quoted = 20,
  sym_boolean = 21,
  sym_scalar_variable = 22,
  sym_array_variable = 23,
  sym_single_line_comment = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym__comments = 27,
  sym_assignment_statement = 28,
  sym_if_statement = 29,
  sym__declaration = 30,
  sym_variable_declaration = 31,
  sym_multi_var_declaration = 32,
  sym_single_var_declaration = 33,
  sym_variable_declarator = 34,
  sym__initializer = 35,
  sym_scope = 36,
  sym_function_definition = 37,
  sym_block = 38,
  sym_return_statement = 39,
  sym__expression = 40,
  sym__numeric_literals = 41,
  aux_sym_source_file_repeat1 = 42,
  aux_sym_multi_var_declaration_repeat1 = 43,
  aux_sym__initializer_repeat1 = 44,
  anon_alias_sym_single_var_declaration = 45,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_our] = "our",
  [anon_sym_my] = "my",
  [anon_sym_sub] = "sub",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_integer] = "integer",
  [sym_floating_point] = "floating_point",
  [sym_scientific_notation] = "scientific_notation",
  [sym_hexadecimal] = "hexadecimal",
  [sym_octal] = "octal",
  [sym_identifier] = "identifier",
  [sym__semi_colon] = "_semi_colon",
  [sym_string_single_quoted] = "string_single_quoted",
  [sym_string_double_quoted] = "string_double_quoted",
  [sym_boolean] = "boolean",
  [sym_scalar_variable] = "scalar_variable",
  [sym_array_variable] = "array_variable",
  [sym_single_line_comment] = "single_line_comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__comments] = "_comments",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_multi_var_declaration] = "multi_var_declaration",
  [sym_single_var_declaration] = "single_var_declaration",
  [sym_variable_declarator] = "variable_declarator",
  [sym__initializer] = "_initializer",
  [sym_scope] = "scope",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__numeric_literals] = "_numeric_literals",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_multi_var_declaration_repeat1] = "multi_var_declaration_repeat1",
  [aux_sym__initializer_repeat1] = "_initializer_repeat1",
  [anon_alias_sym_single_var_declaration] = "single_var_declaration",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_our] = anon_sym_our,
  [anon_sym_my] = anon_sym_my,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_integer] = sym_integer,
  [sym_floating_point] = sym_floating_point,
  [sym_scientific_notation] = sym_scientific_notation,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_octal] = sym_octal,
  [sym_identifier] = sym_identifier,
  [sym__semi_colon] = sym__semi_colon,
  [sym_string_single_quoted] = sym_string_single_quoted,
  [sym_string_double_quoted] = sym_string_double_quoted,
  [sym_boolean] = sym_boolean,
  [sym_scalar_variable] = sym_scalar_variable,
  [sym_array_variable] = sym_array_variable,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__comments] = sym__comments,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_multi_var_declaration] = sym_multi_var_declaration,
  [sym_single_var_declaration] = sym_single_var_declaration,
  [sym_variable_declarator] = sym_variable_declarator,
  [sym__initializer] = sym__initializer,
  [sym_scope] = sym_scope,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__numeric_literals] = sym__numeric_literals,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_multi_var_declaration_repeat1] = aux_sym_multi_var_declaration_repeat1,
  [aux_sym__initializer_repeat1] = aux_sym__initializer_repeat1,
  [anon_alias_sym_single_var_declaration] = anon_alias_sym_single_var_declaration,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_our] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_my] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
    .visible = true,
    .named = true,
  },
  [sym_scientific_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__semi_colon] = {
    .visible = false,
    .named = true,
  },
  [sym_string_single_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_array_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
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
  [sym__comments] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_single_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym__initializer] = {
    .visible = false,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_literals] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_var_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__initializer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_single_var_declaration] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
  field_value = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[9] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_body, 2},
    {field_name, 1},
  [3] =
    {field_name, 0},
    {field_value, 1, .inherited = true},
  [5] =
    {field_value, 1},
  [6] =
    {field_body, 4},
  [7] =
    {field_value, 2},
  [8] =
    {field_value, 2},
    {field_value, 3},
};

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = anon_alias_sym_single_var_declaration,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(7);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 28:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_our);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == '0' ||
          lookahead == '8' ||
          lookahead == '9') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_floating_point);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_scientific_notation);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_double_quoted);
      if (lookahead == '"') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_scalar_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_array_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
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
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_our] = ACTIONS(1),
    [anon_sym_my] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_floating_point] = ACTIONS(1),
    [sym_scientific_notation] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym__semi_colon] = ACTIONS(1),
    [sym_string_single_quoted] = ACTIONS(1),
    [sym_string_double_quoted] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_scalar_variable] = ACTIONS(1),
    [sym_array_variable] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym__statement] = STATE(4),
    [sym__comments] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym__declaration] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_scope] = STATE(19),
    [sym_function_definition] = STATE(4),
    [sym_return_statement] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_our] = ACTIONS(9),
    [anon_sym_my] = ACTIONS(9),
    [anon_sym_sub] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [sym_single_line_comment] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      anon_sym_if,
    ACTIONS(28), 1,
      anon_sym_sub,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(34), 1,
      sym_single_line_comment,
    STATE(19), 1,
      sym_scope,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [38] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_single_line_comment,
    STATE(19), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(5), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [75] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_single_line_comment,
    STATE(19), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [112] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      sym_single_line_comment,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(2), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [149] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(22), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(49), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(51), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [169] = 3,
    STATE(42), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(53), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(55), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [186] = 3,
    STATE(37), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(57), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(59), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [203] = 3,
    STATE(44), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(61), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(63), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [220] = 3,
    STATE(30), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(65), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(67), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [237] = 3,
    STATE(45), 2,
      sym__expression,
      sym__numeric_literals,
    ACTIONS(69), 4,
      sym_integer,
      sym_floating_point,
      sym_scientific_notation,
      sym_octal,
    ACTIONS(71), 4,
      sym_hexadecimal,
      sym_string_single_quoted,
      sym_string_double_quoted,
      sym_boolean,
  [254] = 1,
    ACTIONS(73), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [266] = 1,
    ACTIONS(75), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [278] = 1,
    ACTIONS(77), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [290] = 1,
    ACTIONS(79), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [302] = 1,
    ACTIONS(81), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [314] = 1,
    ACTIONS(83), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [326] = 1,
    ACTIONS(85), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [338] = 4,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_variable_declarator,
    ACTIONS(89), 2,
      sym_scalar_variable,
      sym_array_variable,
    STATE(46), 2,
      sym_multi_var_declaration,
      sym_single_var_declaration,
  [353] = 3,
    ACTIONS(91), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym__initializer,
    ACTIONS(93), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [365] = 3,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_multi_var_declaration_repeat1,
  [375] = 1,
    ACTIONS(99), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [381] = 3,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__initializer_repeat1,
  [391] = 1,
    ACTIONS(106), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [397] = 3,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__initializer_repeat1,
  [407] = 1,
    ACTIONS(112), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [413] = 2,
    STATE(21), 1,
      sym_variable_declarator,
    ACTIONS(89), 2,
      sym_scalar_variable,
      sym_array_variable,
  [421] = 1,
    ACTIONS(114), 3,
      anon_sym_LPAREN,
      sym_scalar_variable,
      sym_array_variable,
  [427] = 1,
    ACTIONS(116), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [433] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym__initializer_repeat1,
  [443] = 3,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_multi_var_declaration_repeat1,
  [453] = 2,
    STATE(35), 1,
      sym_variable_declarator,
    ACTIONS(89), 2,
      sym_scalar_variable,
      sym_array_variable,
  [461] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_multi_var_declaration_repeat1,
  [471] = 2,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [478] = 1,
    ACTIONS(120), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [483] = 2,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block,
  [490] = 1,
    ACTIONS(101), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [495] = 1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
  [499] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [503] = 1,
    ACTIONS(133), 1,
      sym_identifier,
  [507] = 1,
    ACTIONS(135), 1,
      sym__semi_colon,
  [511] = 1,
    ACTIONS(137), 1,
      sym__semi_colon,
  [515] = 1,
    ACTIONS(139), 1,
      sym__semi_colon,
  [519] = 1,
    ACTIONS(141), 1,
      sym__semi_colon,
  [523] = 1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [527] = 1,
    ACTIONS(145), 1,
      sym__semi_colon,
  [531] = 1,
    ACTIONS(147), 1,
      sym__semi_colon,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 266,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 302,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 375,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 397,
  [SMALL_STATE(26)] = 407,
  [SMALL_STATE(27)] = 413,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 427,
  [SMALL_STATE(30)] = 433,
  [SMALL_STATE(31)] = 443,
  [SMALL_STATE(32)] = 453,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 478,
  [SMALL_STATE(36)] = 483,
  [SMALL_STATE(37)] = 490,
  [SMALL_STATE(38)] = 495,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 503,
  [SMALL_STATE(41)] = 507,
  [SMALL_STATE(42)] = 511,
  [SMALL_STATE(43)] = 515,
  [SMALL_STATE(44)] = 519,
  [SMALL_STATE(45)] = 523,
  [SMALL_STATE(46)] = 527,
  [SMALL_STATE(47)] = 531,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2), SHIFT_REPEAT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 5, .production_id = 8),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 4, .production_id = 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_var_declaration, 1, .production_id = 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_perl(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
