#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 25
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 40:
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
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 41:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      END_STATE();
    case 43:
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(44);
      END_STATE();
    case 45:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 44},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 45},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 44},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 45},
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
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_value] = STATE(4),
    [sym__value] = STATE(5),
    [sym_object] = STATE(5),
    [sym_array] = STATE(5),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [sym_number] = ACTIONS(7),
    [sym_true] = ACTIONS(7),
    [sym_false] = ACTIONS(7),
    [sym_null] = ACTIONS(7),
  },
  [2] = {
    [sym_pair] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(9),
    [sym_string] = ACTIONS(11),
    [sym_number] = ACTIONS(11),
  },
  [3] = {
    [sym__value] = STATE(10),
    [sym_object] = STATE(10),
    [sym_array] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(23),
  },
  [8] = {
    [aux_sym_object_repeat1] = STATE(14),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(27),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
  },
  [10] = {
    [aux_sym_array_repeat1] = STATE(17),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(33),
  },
  [11] = {
    [sym__value] = STATE(18),
    [sym_object] = STATE(18),
    [sym_array] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(35),
    [sym_number] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_null] = ACTIONS(35),
  },
  [12] = {
    [sym_pair] = STATE(19),
    [sym_string] = ACTIONS(11),
    [sym_number] = ACTIONS(11),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [14] = {
    [aux_sym_object_repeat1] = STATE(21),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(39),
  },
  [15] = {
    [sym__value] = STATE(22),
    [sym_object] = STATE(22),
    [sym_array] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_string] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_null] = ACTIONS(41),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [17] = {
    [aux_sym_array_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [18] = {
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [21] = {
    [aux_sym_object_repeat1] = STATE(21),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [22] = {
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
  },
  [24] = {
    [aux_sym_array_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_RBRACK] = ACTIONS(56),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_object, 2),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(13),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_object, 3),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_object, 4),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(12),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [58] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(15),
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
