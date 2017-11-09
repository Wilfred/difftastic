#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 18
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LT_QMARKphp = 1,
  anon_sym_LT_QMARK_EQ = 2,
  anon_sym_QMARK_GT = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 7,
  aux_sym_SLASH_BSLASHd_SLASH = 8,
  sym_comment = 9,
  sym_program = 10,
  sym_statement = 11,
  sym_compound_statement = 12,
  sym_named_label_statement = 13,
  sym_name = 14,
  aux_sym_program_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_QMARKphp] = "<?php",
  [anon_sym_LT_QMARK_EQ] = "<?=",
  [anon_sym_QMARK_GT] = "?>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = "/[_a-zA-Z-ÿ]/",
  [aux_sym_SLASH_BSLASHd_SLASH] = "/\\d/",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_compound_statement] = "compound_statement",
  [sym_named_label_statement] = "named_label_statement",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_QMARKphp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHd_SLASH] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_named_label_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '*')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*')
        ADVANCE(4);
      if (lookahead == '/')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      if (lookahead == '?')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '=')
        ADVANCE(10);
      if (lookahead == 'p')
        ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 11:
      if (lookahead == 'h')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'p')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 14:
      if (lookahead == '>')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 19:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '<')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == '?')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(16);
      if (lookahead == '}')
        ADVANCE(17);
      if (lookahead == 160)
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 22:
      if (lookahead == '/')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(7);
      if (lookahead == 160)
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARKphp] = ACTIONS(1),
    [anon_sym_LT_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(3),
    [anon_sym_LT_QMARKphp] = ACTIONS(6),
    [anon_sym_LT_QMARK_EQ] = ACTIONS(6),
    [sym_comment] = ACTIONS(8),
  },
  [2] = {
    [sym_statement] = STATE(7),
    [sym_compound_statement] = STATE(8),
    [sym_named_label_statement] = STATE(8),
    [sym_name] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_QMARK_GT] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [sym_comment] = ACTIONS(8),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(8),
  },
  [5] = {
    [sym_statement] = STATE(7),
    [sym_compound_statement] = STATE(8),
    [sym_named_label_statement] = STATE(8),
    [sym_name] = STATE(9),
    [aux_sym_program_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [6] = {
    [anon_sym_COLON] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(26),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(18),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_QMARK_GT] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(28),
    [sym_comment] = ACTIONS(18),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_QMARK_GT] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(30),
    [anon_sym_RBRACE] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(18),
  },
  [9] = {
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(34),
    [sym_comment] = ACTIONS(18),
  },
  [10] = {
    [sym_statement] = STATE(16),
    [sym_compound_statement] = STATE(8),
    [sym_named_label_statement] = STATE(8),
    [sym_name] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_QMARK_GT] = ACTIONS(38),
    [anon_sym_LBRACE] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_QMARK_GT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(18),
  },
  [12] = {
    [sym_statement] = STATE(16),
    [sym_compound_statement] = STATE(8),
    [sym_named_label_statement] = STATE(8),
    [sym_name] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(14),
    [anon_sym_RBRACE] = ACTIONS(42),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_QMARK_GT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(18),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(46),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(18),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_comment] = ACTIONS(8),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_QMARK_GT] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(18),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_QMARK_GT] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(52),
    [sym_comment] = ACTIONS(18),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [6] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [10] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_php() {
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
