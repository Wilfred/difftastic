#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 12
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_comment = 7,
  sym_program = 8,
  sym__statement = 9,
  sym__literal = 10,
  sym_integer_literal = 11,
  sym_floating_point_literal = 12,
  aux_sym_program_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [aux_sym_program_repeat1] = "program_repeat1",
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
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
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
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
      if (lookahead == '.')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '_')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 7:
      if (lookahead == '*')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == 'B')
        ADVANCE(13);
      if (lookahead == 'O')
        ADVANCE(15);
      if (lookahead == 'X')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '_')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '_')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == '_')
        ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(21);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(22);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '_')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '/')
        ADVANCE(7);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 26},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_decimal_integer_literal] = ACTIONS(3),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_binary_integer_literal] = ACTIONS(3),
    [sym_decimal_floating_point_literal] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym__statement] = STATE(5),
    [sym__literal] = STATE(6),
    [sym_integer_literal] = STATE(7),
    [sym_floating_point_literal] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(8),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(16),
    [sym_comment] = ACTIONS(14),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(18),
    [sym_comment] = ACTIONS(14),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [anon_sym_SEMI] = ACTIONS(22),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(24),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(26),
    [sym_comment] = ACTIONS(14),
  },
  [8] = {
    [sym__statement] = STATE(10),
    [sym__literal] = STATE(6),
    [sym_integer_literal] = STATE(7),
    [sym_floating_point_literal] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_decimal_integer_literal] = ACTIONS(10),
    [sym_hex_integer_literal] = ACTIONS(10),
    [sym_octal_integer_literal] = ACTIONS(10),
    [sym_binary_integer_literal] = ACTIONS(10),
    [sym_decimal_floating_point_literal] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_decimal_integer_literal] = ACTIONS(32),
    [sym_hex_integer_literal] = ACTIONS(32),
    [sym_octal_integer_literal] = ACTIONS(32),
    [sym_binary_integer_literal] = ACTIONS(32),
    [sym_decimal_floating_point_literal] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_decimal_integer_literal] = ACTIONS(38),
    [sym_hex_integer_literal] = ACTIONS(38),
    [sym_octal_integer_literal] = ACTIONS(38),
    [sym_binary_integer_literal] = ACTIONS(38),
    [sym_decimal_floating_point_literal] = ACTIONS(38),
    [sym_comment] = ACTIONS(14),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
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
