#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym__whitespace = 1,
  sym__newline = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_POUND_SEMI = 4,
  anon_sym_POUND_BANG = 5,
  anon_sym_POUND_BANG_SLASH = 6,
  aux_sym_comment_token2 = 7,
  anon_sym_BSLASH = 8,
  anon_sym_POUND_PIPE = 9,
  aux_sym__block_comment_token1 = 10,
  anon_sym_PIPE_POUND = 11,
  sym__simple_datum = 12,
  sym__compound_datum = 13,
  sym_program = 14,
  sym__datum = 15,
  sym__skip = 16,
  sym_comment = 17,
  sym__block_comment = 18,
  aux_sym_program_repeat1 = 19,
  aux_sym_comment_repeat1 = 20,
  aux_sym_comment_repeat2 = 21,
  aux_sym__block_comment_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym__newline] = "_newline",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_SEMI] = "#;",
  [anon_sym_POUND_BANG] = "#! ",
  [anon_sym_POUND_BANG_SLASH] = "#!/",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym__block_comment_token1] = "_block_comment_token1",
  [anon_sym_PIPE_POUND] = "|#",
  [sym__simple_datum] = "_simple_datum",
  [sym__compound_datum] = "_compound_datum",
  [sym_program] = "program",
  [sym__datum] = "_datum",
  [sym__skip] = "_skip",
  [sym_comment] = "comment",
  [sym__block_comment] = "_block_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_comment_repeat2] = "comment_repeat2",
  [aux_sym__block_comment_repeat1] = "_block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym__newline] = sym__newline,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_SEMI] = anon_sym_POUND_SEMI,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_POUND_BANG_SLASH] = anon_sym_POUND_BANG_SLASH,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym__block_comment_token1] = aux_sym__block_comment_token1,
  [anon_sym_PIPE_POUND] = anon_sym_PIPE_POUND,
  [sym__simple_datum] = sym__simple_datum,
  [sym__compound_datum] = sym__compound_datum,
  [sym_program] = sym_program,
  [sym__datum] = sym__datum,
  [sym__skip] = sym__skip,
  [sym_comment] = sym_comment,
  [sym__block_comment] = sym__block_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_comment_repeat2] = aux_sym_comment_repeat2,
  [aux_sym__block_comment_repeat1] = aux_sym__block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_BANG_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__simple_datum] = {
    .visible = false,
    .named = true,
  },
  [sym__compound_datum] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__datum] = {
    .visible = false,
    .named = true,
  },
  [sym__skip] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__whitespace_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\r')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '|') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(8);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '1') ADVANCE(21);
      if (lookahead == ';') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_BANG_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '#') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '|') ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__simple_datum);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__compound_datum);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND_PIPE] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(1),
    [anon_sym_PIPE_POUND] = ACTIONS(1),
    [sym__simple_datum] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(24),
    [sym__datum] = STATE(3),
    [sym__skip] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__block_comment] = STATE(13),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym__simple_datum] = ACTIONS(5),
    [sym__compound_datum] = ACTIONS(5),
  },
  [2] = {
    [sym__datum] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(13),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__whitespace] = ACTIONS(17),
    [aux_sym_comment_token1] = ACTIONS(20),
    [anon_sym_POUND_SEMI] = ACTIONS(23),
    [anon_sym_POUND_BANG] = ACTIONS(26),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(26),
    [anon_sym_POUND_PIPE] = ACTIONS(29),
    [sym__simple_datum] = ACTIONS(17),
    [sym__compound_datum] = ACTIONS(17),
  },
  [3] = {
    [sym__datum] = STATE(2),
    [sym__skip] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__block_comment] = STATE(13),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym__whitespace] = ACTIONS(34),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym__simple_datum] = ACTIONS(34),
    [sym__compound_datum] = ACTIONS(34),
  },
  [4] = {
    [sym__datum] = STATE(9),
    [sym__skip] = STATE(5),
    [sym_comment] = STATE(5),
    [sym__block_comment] = STATE(13),
    [aux_sym_comment_repeat1] = STATE(5),
    [sym__whitespace] = ACTIONS(36),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym__simple_datum] = ACTIONS(38),
    [sym__compound_datum] = ACTIONS(38),
  },
  [5] = {
    [sym__datum] = STATE(11),
    [sym__skip] = STATE(6),
    [sym_comment] = STATE(6),
    [sym__block_comment] = STATE(13),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__whitespace] = ACTIONS(40),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_POUND_SEMI] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(13),
    [sym__simple_datum] = ACTIONS(42),
    [sym__compound_datum] = ACTIONS(42),
  },
  [6] = {
    [sym__skip] = STATE(6),
    [sym_comment] = STATE(6),
    [sym__block_comment] = STATE(13),
    [aux_sym_comment_repeat1] = STATE(6),
    [sym__whitespace] = ACTIONS(44),
    [aux_sym_comment_token1] = ACTIONS(47),
    [anon_sym_POUND_SEMI] = ACTIONS(50),
    [anon_sym_POUND_BANG] = ACTIONS(53),
    [anon_sym_POUND_BANG_SLASH] = ACTIONS(53),
    [anon_sym_POUND_PIPE] = ACTIONS(56),
    [sym__simple_datum] = ACTIONS(59),
    [sym__compound_datum] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(63), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [15] = 2,
    ACTIONS(63), 1,
      anon_sym_BSLASH,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [30] = 1,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [42] = 1,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [54] = 1,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [66] = 1,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [78] = 1,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      sym__whitespace,
      aux_sym_comment_token1,
      anon_sym_POUND_SEMI,
      anon_sym_POUND_BANG,
      anon_sym_POUND_BANG_SLASH,
      anon_sym_POUND_PIPE,
      sym__simple_datum,
      sym__compound_datum,
  [90] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(75), 1,
      aux_sym__block_comment_token1,
    ACTIONS(77), 1,
      anon_sym_PIPE_POUND,
    STATE(15), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [104] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(79), 1,
      aux_sym__block_comment_token1,
    ACTIONS(81), 1,
      anon_sym_PIPE_POUND,
    STATE(17), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [118] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(79), 1,
      aux_sym__block_comment_token1,
    ACTIONS(83), 1,
      anon_sym_PIPE_POUND,
    STATE(17), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [132] = 4,
    ACTIONS(85), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(88), 1,
      aux_sym__block_comment_token1,
    ACTIONS(91), 1,
      anon_sym_PIPE_POUND,
    STATE(17), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [146] = 4,
    ACTIONS(73), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(93), 1,
      aux_sym__block_comment_token1,
    ACTIONS(95), 1,
      anon_sym_PIPE_POUND,
    STATE(16), 2,
      sym__block_comment,
      aux_sym__block_comment_repeat1,
  [160] = 2,
    ACTIONS(97), 1,
      aux_sym__block_comment_token1,
    ACTIONS(67), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [168] = 2,
    ACTIONS(99), 1,
      aux_sym__block_comment_token1,
    ACTIONS(69), 2,
      anon_sym_POUND_PIPE,
      anon_sym_PIPE_POUND,
  [176] = 2,
    ACTIONS(101), 1,
      aux_sym_comment_token2,
    STATE(23), 1,
      aux_sym_comment_repeat2,
  [183] = 2,
    ACTIONS(103), 1,
      aux_sym_comment_token2,
    STATE(21), 1,
      aux_sym_comment_repeat2,
  [190] = 2,
    ACTIONS(105), 1,
      aux_sym_comment_token2,
    STATE(23), 1,
      aux_sym_comment_repeat2,
  [197] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [201] = 1,
    ACTIONS(110), 1,
      sym__newline,
  [205] = 1,
    ACTIONS(112), 1,
      aux_sym_comment_token2,
  [209] = 1,
    ACTIONS(63), 1,
      anon_sym_BSLASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 15,
  [SMALL_STATE(9)] = 30,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 54,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 78,
  [SMALL_STATE(14)] = 90,
  [SMALL_STATE(15)] = 104,
  [SMALL_STATE(16)] = 118,
  [SMALL_STATE(17)] = 132,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 160,
  [SMALL_STATE(20)] = 168,
  [SMALL_STATE(21)] = 176,
  [SMALL_STATE(22)] = 183,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 197,
  [SMALL_STATE(25)] = 201,
  [SMALL_STATE(26)] = 205,
  [SMALL_STATE(27)] = 209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(22),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_comment_repeat1, 2), SHIFT_REPEAT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_comment_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 2), SHIFT_REPEAT(27),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat2, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_racket(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
