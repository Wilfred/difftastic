#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 26
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_string = 7,
  sym_number = 8,
  sym_true = 9,
  sym_false = 10,
  sym_null = 11,
  sym_value = 12,
  sym__value = 13,
  sym_object = 14,
  sym_pair = 15,
  sym_array = 16,
  aux_sym_object_repeat1 = 17,
  aux_sym_array_repeat1 = 18,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_value] = "value",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(5);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '0')
        ADVANCE(6);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'E')
        ADVANCE(8);
      if (lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(8);
      if (lookahead == 'e')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'E')
        ADVANCE(8);
      if (lookahead == 'e')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(7);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'E')
        ADVANCE(8);
      if (lookahead == 'O')
        ADVANCE(17);
      if (lookahead == 'X')
        ADVANCE(19);
      if (lookahead == 'b')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(8);
      if (lookahead == 'o')
        ADVANCE(17);
      if (lookahead == 'x')
        ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      if (lookahead == 'a')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'l')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 's')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 29:
      if (lookahead == 'u')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'l')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'l')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 33:
      if (lookahead == 'r')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'u')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'e')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(29);
      if (lookahead == 't')
        ADVANCE(33);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 40},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_value] = STATE(5),
    [sym__value] = STATE(6),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [2] = {
    [sym_pair] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [3] = {
    [sym__value] = STATE(11),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [8] = {
    [anon_sym_COLON] = ACTIONS(29),
  },
  [9] = {
    [aux_sym_object_repeat1] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
  },
  [11] = {
    [aux_sym_array_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [12] = {
    [sym__value] = STATE(19),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [13] = {
    [sym_pair] = STATE(20),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [15] = {
    [aux_sym_object_repeat1] = STATE(22),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(43),
  },
  [16] = {
    [sym__value] = STATE(23),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_string] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [18] = {
    [aux_sym_array_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(47),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
  },
  [22] = {
    [aux_sym_object_repeat1] = STATE(22),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_RBRACK] = ACTIONS(60),
  },
  [25] = {
    [aux_sym_array_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(58),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__value, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value, 1),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 3),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 3),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 4),
  [55] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(13),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 4),
  [62] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(16),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_json() {
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
