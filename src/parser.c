#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
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
  sym_identifier = 12,
  sym__semi_colon = 13,
  sym_string_single_quoted = 14,
  sym_number = 15,
  sym_boolean = 16,
  sym_scalar_variable = 17,
  sym_array_variable = 18,
  sym_single_line_comment = 19,
  sym_source_file = 20,
  sym__statement = 21,
  sym__comments = 22,
  sym_assignment_statement = 23,
  sym_if_statement = 24,
  sym__declaration = 25,
  sym_variable_declaration = 26,
  sym_multi_var_declaration = 27,
  sym_single_var_declaration = 28,
  sym_variable_declarator = 29,
  sym__initializer = 30,
  sym_scope = 31,
  sym_function_definition = 32,
  sym_block = 33,
  sym_return_statement = 34,
  sym__expression = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_multi_var_declaration_repeat1 = 37,
  aux_sym__initializer_repeat1 = 38,
  anon_alias_sym_single_var_declaration = 39,
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
  [sym_identifier] = "identifier",
  [sym__semi_colon] = "_semi_colon",
  [sym_string_single_quoted] = "string_single_quoted",
  [sym_number] = "number",
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
  [sym_identifier] = sym_identifier,
  [sym__semi_colon] = sym__semi_colon,
  [sym_string_single_quoted] = sym_string_single_quoted,
  [sym_number] = sym_number,
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
  [sym_number] = {
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
      if (eof) ADVANCE(22);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ';') ADVANCE(35);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 21:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_our);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_scalar_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_array_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
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
  [40] = {.lex_state = 19},
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
    [sym__semi_colon] = ACTIONS(1),
    [sym_string_single_quoted] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_scalar_variable] = ACTIONS(1),
    [sym_array_variable] = ACTIONS(1),
    [sym_single_line_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym__statement] = STATE(3),
    [sym__comments] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_scope] = STATE(13),
    [sym_function_definition] = STATE(3),
    [sym_return_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    STATE(13), 1,
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
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_single_line_comment,
    STATE(13), 1,
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
  [75] = 9,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_sub,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(39), 1,
      sym_single_line_comment,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
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
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_single_line_comment,
    STATE(13), 1,
      sym_scope,
    ACTIONS(9), 2,
      anon_sym_our,
      anon_sym_my,
    STATE(4), 9,
      sym__statement,
      sym__comments,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_variable_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [149] = 1,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [161] = 1,
    ACTIONS(49), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [173] = 1,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [185] = 1,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [197] = 1,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [209] = 1,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [221] = 1,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_our,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
      sym_single_line_comment,
  [233] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_variable_declarator,
    ACTIONS(63), 2,
      sym_scalar_variable,
      sym_array_variable,
    STATE(46), 2,
      sym_multi_var_declaration,
      sym_single_var_declaration,
  [248] = 3,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym__expression,
    ACTIONS(67), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [260] = 3,
    ACTIONS(69), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym__initializer,
    ACTIONS(71), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [272] = 2,
    STATE(44), 1,
      sym__expression,
    ACTIONS(73), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [281] = 2,
    STATE(30), 1,
      sym__expression,
    ACTIONS(75), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [290] = 2,
    STATE(42), 1,
      sym__expression,
    ACTIONS(77), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [299] = 2,
    STATE(45), 1,
      sym__expression,
    ACTIONS(79), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [308] = 2,
    STATE(37), 1,
      sym__expression,
    ACTIONS(81), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [317] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_multi_var_declaration_repeat1,
  [327] = 1,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [333] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__initializer_repeat1,
  [343] = 1,
    ACTIONS(94), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [349] = 3,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__initializer_repeat1,
  [359] = 1,
    ACTIONS(100), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [365] = 2,
    STATE(21), 1,
      sym_variable_declarator,
    ACTIONS(63), 2,
      sym_scalar_variable,
      sym_array_variable,
  [373] = 1,
    ACTIONS(102), 3,
      anon_sym_LPAREN,
      sym_scalar_variable,
      sym_array_variable,
  [379] = 1,
    ACTIONS(104), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym__semi_colon,
  [385] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym__initializer_repeat1,
  [395] = 3,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_multi_var_declaration_repeat1,
  [405] = 2,
    STATE(35), 1,
      sym_variable_declarator,
    ACTIONS(63), 2,
      sym_scalar_variable,
      sym_array_variable,
  [413] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_multi_var_declaration_repeat1,
  [423] = 2,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_block,
  [430] = 1,
    ACTIONS(108), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [435] = 2,
    ACTIONS(115), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [442] = 1,
    ACTIONS(89), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [447] = 1,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
  [451] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [455] = 1,
    ACTIONS(121), 1,
      sym_identifier,
  [459] = 1,
    ACTIONS(123), 1,
      sym__semi_colon,
  [463] = 1,
    ACTIONS(125), 1,
      sym__semi_colon,
  [467] = 1,
    ACTIONS(127), 1,
      sym__semi_colon,
  [471] = 1,
    ACTIONS(129), 1,
      sym__semi_colon,
  [475] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [479] = 1,
    ACTIONS(133), 1,
      sym__semi_colon,
  [483] = 1,
    ACTIONS(135), 1,
      sym__semi_colon,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 197,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 327,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 349,
  [SMALL_STATE(26)] = 359,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 379,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 395,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 413,
  [SMALL_STATE(34)] = 423,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 435,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 447,
  [SMALL_STATE(39)] = 451,
  [SMALL_STATE(40)] = 455,
  [SMALL_STATE(41)] = 459,
  [SMALL_STATE(42)] = 463,
  [SMALL_STATE(43)] = 467,
  [SMALL_STATE(44)] = 471,
  [SMALL_STATE(45)] = 475,
  [SMALL_STATE(46)] = 479,
  [SMALL_STATE(47)] = 483,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 2, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__initializer_repeat1, 2), SHIFT_REPEAT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 5, .production_id = 8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declarator, 2, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__initializer, 4, .production_id = 7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_var_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_var_declaration, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_var_declaration, 1, .production_id = 2),
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
