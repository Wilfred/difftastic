#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 25
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH = 2,
  anon_sym_0x = 3,
  anon_sym_0X = 4,
  aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH = 5,
  anon_sym_0o = 6,
  anon_sym_0O = 7,
  aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH = 8,
  anon_sym_0b = 9,
  anon_sym_0B = 10,
  aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH = 11,
  sym_comment = 12,
  sym_program = 13,
  sym__statement = 14,
  sym_integer_literal = 15,
  sym_decimal_integer_literal = 16,
  sym_hex_integer_literal = 17,
  sym_octal_integer_literal = 18,
  sym_binary_integer_literal = 19,
  aux_sym_program_repeat1 = 20,
  aux_sym_decimal_integer_literal_repeat1 = 21,
  aux_sym_hex_integer_literal_repeat1 = 22,
  aux_sym_octal_integer_literal_repeat1 = 23,
  aux_sym_binary_integer_literal_repeat1 = 24,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = "/[0-9]+_?/",
  [anon_sym_0x] = "0x",
  [anon_sym_0X] = "0X",
  [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = "/_?[A-Fa-f0-9]+/",
  [anon_sym_0o] = "0o",
  [anon_sym_0O] = "0O",
  [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = "/_?[0-7]+/",
  [anon_sym_0b] = "0b",
  [anon_sym_0B] = "0B",
  [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = "/_?[01]+/",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_integer_literal] = "integer_literal",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_decimal_integer_literal_repeat1] = "decimal_integer_literal_repeat1",
  [aux_sym_hex_integer_literal_repeat1] = "hex_integer_literal_repeat1",
  [aux_sym_octal_integer_literal_repeat1] = "octal_integer_literal_repeat1",
  [aux_sym_binary_integer_literal_repeat1] = "binary_integer_literal_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0O] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0B] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_integer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_integer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_integer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_integer_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(6);
      if (lookahead == '1')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '*')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH);
      if (lookahead == 'O')
        ADVANCE(7);
      if (lookahead == 'X')
        ADVANCE(8);
      if (lookahead == 'o')
        ADVANCE(9);
      if (lookahead == 'x')
        ADVANCE(10);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_0O);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_0X);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'O')
        ADVANCE(7);
      if (lookahead == 'X')
        ADVANCE(8);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == 'b')
        ADVANCE(18);
      if (lookahead == 'o')
        ADVANCE(9);
      if (lookahead == 'x')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_0B);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH);
      if (lookahead == '_')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(25);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [anon_sym_0X] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [anon_sym_0O] = ACTIONS(1),
    [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__statement] = STATE(7),
    [sym_integer_literal] = STATE(8),
    [sym_decimal_integer_literal] = STATE(9),
    [sym_hex_integer_literal] = STATE(9),
    [sym_octal_integer_literal] = STATE(9),
    [sym_binary_integer_literal] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [aux_sym_decimal_integer_literal_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(8),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(10),
    [anon_sym_0x] = ACTIONS(12),
    [anon_sym_0X] = ACTIONS(12),
    [anon_sym_0o] = ACTIONS(14),
    [anon_sym_0O] = ACTIONS(14),
    [anon_sym_0b] = ACTIONS(16),
    [anon_sym_0B] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(18),
  },
  [3] = {
    [aux_sym_hex_integer_literal_repeat1] = STATE(13),
    [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
  },
  [4] = {
    [aux_sym_octal_integer_literal_repeat1] = STATE(15),
    [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(18),
  },
  [5] = {
    [aux_sym_binary_integer_literal_repeat1] = STATE(17),
    [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(28),
    [sym_comment] = ACTIONS(18),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_comment] = ACTIONS(18),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(32),
    [sym_comment] = ACTIONS(18),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_comment] = ACTIONS(18),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_comment] = ACTIONS(18),
  },
  [10] = {
    [sym__statement] = STATE(19),
    [sym_integer_literal] = STATE(8),
    [sym_decimal_integer_literal] = STATE(9),
    [sym_hex_integer_literal] = STATE(9),
    [sym_octal_integer_literal] = STATE(9),
    [sym_binary_integer_literal] = STATE(9),
    [aux_sym_decimal_integer_literal_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(38),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(10),
    [anon_sym_0x] = ACTIONS(12),
    [anon_sym_0X] = ACTIONS(12),
    [anon_sym_0o] = ACTIONS(14),
    [anon_sym_0O] = ACTIONS(14),
    [anon_sym_0b] = ACTIONS(16),
    [anon_sym_0B] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(18),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(18),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(18),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(52),
    [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(18),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(56),
    [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(18),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(60),
    [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(18),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(64),
    [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(18),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(70),
    [anon_sym_0x] = ACTIONS(68),
    [anon_sym_0X] = ACTIONS(68),
    [anon_sym_0o] = ACTIONS(68),
    [anon_sym_0O] = ACTIONS(68),
    [anon_sym_0b] = ACTIONS(68),
    [anon_sym_0B] = ACTIONS(68),
    [sym_comment] = ACTIONS(18),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(72),
    [sym_comment] = ACTIONS(18),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(18),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(78),
    [aux_sym_SLASH_QMARK_LBRACKA_DASHFa_DASHf0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(18),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(82),
    [aux_sym_SLASH_QMARK_LBRACK0_DASH7_RBRACK_PLUS_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(18),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(86),
    [aux_sym_SLASH_QMARK_LBRACK01_RBRACK_PLUS_SLASH] = ACTIONS(88),
    [sym_comment] = ACTIONS(18),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_QMARK_SLASH] = ACTIONS(92),
    [anon_sym_0x] = ACTIONS(90),
    [anon_sym_0X] = ACTIONS(90),
    [anon_sym_0o] = ACTIONS(90),
    [anon_sym_0O] = ACTIONS(90),
    [anon_sym_0b] = ACTIONS(90),
    [anon_sym_0B] = ACTIONS(90),
    [sym_comment] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decimal_integer_literal_repeat1, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_decimal_integer_literal_repeat1, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_decimal_integer_literal, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_hex_integer_literal_repeat1, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_hex_integer_literal_repeat1, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_hex_integer_literal, 2),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_octal_integer_literal_repeat1, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_octal_integer_literal_repeat1, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_octal_integer_literal, 2),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_binary_integer_literal_repeat1, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_binary_integer_literal_repeat1, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_integer_literal, 2),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_decimal_integer_literal_repeat1, 2),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_decimal_integer_literal_repeat1, 2),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_hex_integer_literal_repeat1, 2),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_hex_integer_literal_repeat1, 2),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_octal_integer_literal_repeat1, 2),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_octal_integer_literal_repeat1, 2),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_binary_integer_literal_repeat1, 2),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_binary_integer_literal_repeat1, 2),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
