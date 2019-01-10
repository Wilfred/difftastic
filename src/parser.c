#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 13
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_module = 1,
  anon_sym_exposing = 2,
  anon_sym_EQ = 3,
  anon_sym_import = 4,
  sym_module_identifier = 5,
  sym_func_identifier = 6,
  sym_file = 7,
  sym__statement = 8,
  sym__module = 9,
  sym__simple_statements = 10,
  sym__simple_statement = 11,
  sym_func = 12,
  sym__func_body = 13,
  sym_import_statement = 14,
  aux_sym_file_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_exposing] = "exposing",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [sym_module_identifier] = "module_identifier",
  [sym_func_identifier] = "func_identifier",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym__module] = "_module",
  [sym__simple_statements] = "_simple_statements",
  [sym__simple_statement] = "_simple_statement",
  [sym_func] = "func",
  [sym__func_body] = "_func_body",
  [sym_import_statement] = "import_statement",
  [aux_sym_file_repeat1] = "file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_func_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym__func_body] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
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
      if (lookahead == '=')
        ADVANCE(2);
      if (lookahead == 'e')
        ADVANCE(3);
      if (lookahead == 'i')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(23);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3:
      if (lookahead == 'x')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'p')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'o')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 's')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'i')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'n')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'g')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_exposing);
      END_STATE();
    case 11:
      if (lookahead == 'm')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'p')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'o')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 17:
      if (lookahead == 'o')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'd')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'u')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'l')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'e')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_module_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'i')
        ADVANCE(25);
      if (lookahead == 'm')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'm')
        ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'p')
        ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'o')
        ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'r')
        ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 't')
        ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_import);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_func_identifier);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'o')
        ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'd')
        ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'u')
        ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'l')
        ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_func_identifier);
      if (lookahead == 'e')
        ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_module);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == '=')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(3);
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
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_exposing] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym_module_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(5),
    [sym__statement] = STATE(6),
    [sym__module] = STATE(6),
    [sym__simple_statements] = STATE(6),
    [sym__simple_statement] = STATE(6),
    [sym_func] = STATE(6),
    [sym_import_statement] = STATE(6),
    [aux_sym_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [sym_func_identifier] = ACTIONS(9),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(11),
  },
  [3] = {
    [sym_module_identifier] = ACTIONS(13),
  },
  [4] = {
    [anon_sym_EQ] = ACTIONS(15),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [6] = {
    [sym__statement] = STATE(10),
    [sym__module] = STATE(10),
    [sym__simple_statements] = STATE(10),
    [sym__simple_statement] = STATE(10),
    [sym_func] = STATE(10),
    [sym_import_statement] = STATE(10),
    [aux_sym_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [sym_func_identifier] = ACTIONS(9),
  },
  [7] = {
    [anon_sym_exposing] = ACTIONS(21),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_module] = ACTIONS(25),
    [anon_sym_import] = ACTIONS(25),
    [sym_func_identifier] = ACTIONS(25),
  },
  [9] = {
    [sym__func_body] = STATE(12),
  },
  [10] = {
    [sym__statement] = STATE(10),
    [sym__module] = STATE(10),
    [sym__simple_statements] = STATE(10),
    [sym__simple_statement] = STATE(10),
    [sym_func] = STATE(10),
    [sym_import_statement] = STATE(10),
    [aux_sym_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_module] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(32),
    [sym_func_identifier] = ACTIONS(35),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [sym_func_identifier] = ACTIONS(40),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_import] = ACTIONS(44),
    [sym_func_identifier] = ACTIONS(44),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_file, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 2),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 2),
  [27] = {.count = 1, .reusable = true}, REDUCE(aux_sym_file_repeat1, 2),
  [29] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.count = 2, .reusable = false}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym__module, 3),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym__module, 3),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_func, 3),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym_func, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elm() {
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
