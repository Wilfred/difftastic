#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_EQ = 1,
  anon_sym_if = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_my = 5,
  anon_sym_sub = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_return = 9,
  sym_identifier = 10,
  sym__semi_colon = 11,
  sym_string_single_quoted = 12,
  sym_number = 13,
  sym_boolean = 14,
  sym_scalar_variable = 15,
  sym_array_variable = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym_assignment_statement = 19,
  sym_if_statement = 20,
  sym__declaration = 21,
  sym_array_declaration = 22,
  sym_scalar_declaration = 23,
  sym_scope = 24,
  sym_function_definition = 25,
  sym_block = 26,
  sym_return_statement = 27,
  sym__expression = 28,
  aux_sym_source_file_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym__declaration] = "_declaration",
  [sym_array_declaration] = "array_declaration",
  [sym_scalar_declaration] = "scalar_declaration",
  [sym_scope] = "scope",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym__declaration] = sym__declaration,
  [sym_array_declaration] = sym_array_declaration,
  [sym_scalar_declaration] = sym_scalar_declaration,
  [sym_scope] = sym_scope,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
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
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_declaration] = {
    .visible = true,
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
};

enum {
  field_body = 1,
  field_name = 2,
  field_variable_name = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_variable_name, 1},
  [3] =
    {field_body, 4},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 18:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 19:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_my);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__semi_colon);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string_single_quoted);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_scalar_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_array_variable);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
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
  [29] = {.lex_state = 17},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__statement] = STATE(3),
    [sym_assignment_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym__declaration] = STATE(3),
    [sym_array_declaration] = STATE(3),
    [sym_scalar_declaration] = STATE(7),
    [sym_scope] = STATE(20),
    [sym_function_definition] = STATE(3),
    [sym_return_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_my] = ACTIONS(7),
    [anon_sym_sub] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_assignment_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym__declaration] = STATE(2),
    [sym_array_declaration] = STATE(2),
    [sym_scalar_declaration] = STATE(7),
    [sym_scope] = STATE(20),
    [sym_function_definition] = STATE(2),
    [sym_return_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_my] = ACTIONS(18),
    [anon_sym_sub] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(24),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_my,
    ACTIONS(9), 1,
      anon_sym_sub,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_scalar_declaration,
    STATE(20), 1,
      sym_scope,
    STATE(2), 8,
      sym__statement,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_array_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [32] = 8,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_my,
    ACTIONS(9), 1,
      anon_sym_sub,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_scalar_declaration,
    STATE(20), 1,
      sym_scope,
    STATE(5), 8,
      sym__statement,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_array_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [64] = 8,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_my,
    ACTIONS(9), 1,
      anon_sym_sub,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_scalar_declaration,
    STATE(20), 1,
      sym_scope,
    STATE(2), 8,
      sym__statement,
      sym_assignment_statement,
      sym_if_statement,
      sym__declaration,
      sym_array_declaration,
      sym_function_definition,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [96] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [106] = 2,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [118] = 1,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [127] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [136] = 1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [145] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [154] = 1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [163] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [172] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_my,
      anon_sym_sub,
      anon_sym_RBRACE,
      anon_sym_return,
  [181] = 2,
    STATE(27), 1,
      sym__expression,
    ACTIONS(53), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [190] = 2,
    STATE(23), 1,
      sym__expression,
    ACTIONS(55), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [199] = 2,
    STATE(24), 1,
      sym__expression,
    ACTIONS(57), 3,
      sym_string_single_quoted,
      sym_number,
      sym_boolean,
  [208] = 1,
    ACTIONS(59), 2,
      sym_scalar_variable,
      sym_array_variable,
  [213] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [220] = 2,
    ACTIONS(63), 1,
      sym_scalar_variable,
    ACTIONS(65), 1,
      sym_array_variable,
  [227] = 2,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [234] = 1,
    ACTIONS(67), 1,
      sym__semi_colon,
  [238] = 1,
    ACTIONS(69), 1,
      sym__semi_colon,
  [242] = 1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [246] = 1,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
  [250] = 1,
    ACTIONS(75), 1,
      sym__semi_colon,
  [254] = 1,
    ACTIONS(77), 1,
      sym__semi_colon,
  [258] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [262] = 1,
    ACTIONS(81), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 127,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 154,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 208,
  [SMALL_STATE(19)] = 213,
  [SMALL_STATE(20)] = 220,
  [SMALL_STATE(21)] = 227,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 246,
  [SMALL_STATE(26)] = 250,
  [SMALL_STATE(27)] = 254,
  [SMALL_STATE(28)] = 258,
  [SMALL_STATE(29)] = 262,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_declaration, 3, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
