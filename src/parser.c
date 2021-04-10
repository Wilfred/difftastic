#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_space = 1,
  sym_newline = 2,
  sym_identifier = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym__unquoted_argument = 6,
  sym_source_file = 7,
  sym_line_ending = 8,
  sym_argument = 9,
  sym_seperation = 10,
  sym_arguments = 11,
  sym__seperated_arguments = 12,
  sym_command_invocation = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_arguments_repeat1 = 15,
  aux_sym__seperated_arguments_repeat1 = 16,
  aux_sym_command_invocation_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_space] = "space",
  [sym_newline] = "newline",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__unquoted_argument] = "_unquoted_argument",
  [sym_source_file] = "source_file",
  [sym_line_ending] = "line_ending",
  [sym_argument] = "argument",
  [sym_seperation] = "seperation",
  [sym_arguments] = "arguments",
  [sym__seperated_arguments] = "_seperated_arguments",
  [sym_command_invocation] = "command_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__seperated_arguments_repeat1] = "_seperated_arguments_repeat1",
  [aux_sym_command_invocation_repeat1] = "command_invocation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_space] = sym_space,
  [sym_newline] = sym_newline,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__unquoted_argument] = sym__unquoted_argument,
  [sym_source_file] = sym_source_file,
  [sym_line_ending] = sym_line_ending,
  [sym_argument] = sym_argument,
  [sym_seperation] = sym_seperation,
  [sym_arguments] = sym_arguments,
  [sym__seperated_arguments] = sym__seperated_arguments,
  [sym_command_invocation] = sym_command_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__seperated_arguments_repeat1] = aux_sym__seperated_arguments_repeat1,
  [aux_sym_command_invocation_repeat1] = aux_sym_command_invocation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_ending] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_seperation] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__seperated_arguments] = {
    .visible = false,
    .named = true,
  },
  [sym_command_invocation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__seperated_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_invocation_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') SKIP(2)
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\t') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_argument);
      if (lookahead == '\t') ADVANCE(5);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_argument);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_space] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_command_invocation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_command_invocation_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_space] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(34), 1,
      sym_arguments,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [26] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(32), 1,
      sym_arguments,
    STATE(2), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [52] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(32), 1,
      sym_arguments,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [78] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(31), 1,
      sym_arguments,
    STATE(7), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [104] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(30), 1,
      sym_arguments,
    STATE(4), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [130] = 8,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(30), 1,
      sym_arguments,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [156] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_line_ending,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    STATE(11), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
  [177] = 6,
    ACTIONS(25), 1,
      sym_space,
    ACTIONS(28), 1,
      sym_newline,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_line_ending,
    STATE(9), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [198] = 5,
    ACTIONS(15), 1,
      sym__unquoted_argument,
    STATE(17), 1,
      sym_line_ending,
    STATE(26), 1,
      sym_argument,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
    ACTIONS(33), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [217] = 6,
    ACTIONS(9), 1,
      sym_space,
    ACTIONS(11), 1,
      sym_newline,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_line_ending,
    STATE(9), 2,
      sym__seperated_arguments,
      aux_sym_arguments_repeat1,
    STATE(10), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [238] = 5,
    ACTIONS(37), 1,
      sym_space,
    ACTIONS(40), 1,
      sym_newline,
    STATE(17), 1,
      sym_line_ending,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      sym__unquoted_argument,
    STATE(12), 2,
      sym_seperation,
      aux_sym__seperated_arguments_repeat1,
  [256] = 5,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_space,
    ACTIONS(50), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_command_invocation_repeat1,
    STATE(13), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [273] = 5,
    ACTIONS(5), 1,
      sym_space,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_command_invocation_repeat1,
    STATE(13), 2,
      sym_command_invocation,
      aux_sym_source_file_repeat1,
  [290] = 1,
    ACTIONS(55), 4,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
      sym__unquoted_argument,
  [297] = 3,
    ACTIONS(57), 1,
      sym_space,
    STATE(16), 1,
      aux_sym_command_invocation_repeat1,
    ACTIONS(60), 2,
      sym_identifier,
      anon_sym_LPAREN,
  [308] = 1,
    ACTIONS(62), 4,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
      sym__unquoted_argument,
  [315] = 3,
    ACTIONS(64), 1,
      sym_space,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_command_invocation_repeat1,
  [325] = 3,
    ACTIONS(68), 1,
      sym_space,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      aux_sym_command_invocation_repeat1,
  [335] = 3,
    ACTIONS(72), 1,
      sym_space,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym_command_invocation_repeat1,
  [345] = 1,
    ACTIONS(76), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [351] = 2,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_space,
  [359] = 2,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_space,
  [367] = 3,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      sym_space,
    STATE(16), 1,
      aux_sym_command_invocation_repeat1,
  [377] = 3,
    ACTIONS(72), 1,
      sym_space,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(16), 1,
      aux_sym_command_invocation_repeat1,
  [387] = 1,
    ACTIONS(88), 3,
      sym_space,
      sym_newline,
      anon_sym_RPAREN,
  [393] = 2,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      sym_space,
  [401] = 2,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_space,
  [409] = 2,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_space,
  [417] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [421] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [425] = 1,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
  [429] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [433] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 273,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 325,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 345,
  [SMALL_STATE(22)] = 351,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 377,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 401,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 421,
  [SMALL_STATE(32)] = 425,
  [SMALL_STATE(33)] = 429,
  [SMALL_STATE(34)] = 433,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 1),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(17),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__seperated_arguments_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_ending, 1),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_invocation_repeat1, 2), SHIFT_REPEAT(16),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_invocation_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seperation, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__seperated_arguments, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 6),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_invocation, 7),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_invocation, 7),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_CMake(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
