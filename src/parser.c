#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 12
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  sym_comment = 8,
  sym_program = 9,
  sym__statement = 10,
  sym__literal = 11,
  sym_integer_literal = 12,
  sym_floating_point_literal = 13,
  aux_sym_program_repeat1 = 14,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
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
  [sym_hex_floating_point_literal] = {
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
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
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
        ADVANCE(9);
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
      if (lookahead == '+')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(8);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '_')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 10:
      if (lookahead == '*')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'O')
        ADVANCE(18);
      if (lookahead == 'X')
        ADVANCE(20);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == 'b')
        ADVANCE(16);
      if (lookahead == 'o')
        ADVANCE(18);
      if (lookahead == 'x')
        ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.')
        ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '+')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(29);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(24);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(5);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '.')
        ADVANCE(2);
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == '/')
        ADVANCE(10);
      if (lookahead == ';')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 40},
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
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym__statement] = STATE(5),
    [sym__literal] = STATE(6),
    [sym_integer_literal] = STATE(7),
    [sym_floating_point_literal] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(20),
    [sym_comment] = ACTIONS(18),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(22),
    [sym_comment] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(18),
  },
  [5] = {
    [anon_sym_SEMI] = ACTIONS(26),
    [sym_comment] = ACTIONS(18),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(28),
    [sym_comment] = ACTIONS(18),
  },
  [7] = {
    [anon_sym_SEMI] = ACTIONS(30),
    [sym_comment] = ACTIONS(18),
  },
  [8] = {
    [sym__statement] = STATE(10),
    [sym__literal] = STATE(6),
    [sym_integer_literal] = STATE(7),
    [sym_floating_point_literal] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_decimal_integer_literal] = ACTIONS(36),
    [sym_hex_integer_literal] = ACTIONS(36),
    [sym_octal_integer_literal] = ACTIONS(36),
    [sym_binary_integer_literal] = ACTIONS(36),
    [sym_decimal_floating_point_literal] = ACTIONS(36),
    [sym_hex_floating_point_literal] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_decimal_integer_literal] = ACTIONS(44),
    [sym_hex_integer_literal] = ACTIONS(44),
    [sym_octal_integer_literal] = ACTIONS(44),
    [sym_binary_integer_literal] = ACTIONS(44),
    [sym_decimal_floating_point_literal] = ACTIONS(44),
    [sym_hex_floating_point_literal] = ACTIONS(46),
    [sym_comment] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
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
