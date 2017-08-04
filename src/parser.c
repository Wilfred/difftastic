#include <tree_sitter/parser.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

#define LANGUAGE_VERSION 3
#define STATE_COUNT 36
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
    .structural = true,
    .extra = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
    .structural = true,
    .extra = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
    .structural = true,
    .extra = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(8);
      if (lookahead == 'x')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      if (lookahead == 'a')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'l')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 's')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'e')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 20:
      if (lookahead == 'u')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'l')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'l')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'u')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 32:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(13);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(20);
      if (lookahead == 't')
        ADVANCE(24);
      if (lookahead == '{')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      END_STATE();
    case 35:
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    case 37:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(37);
      END_STATE();
    case 38:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(38);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(12);
      if (lookahead == ']')
        ADVANCE(14);
      if (lookahead == '}')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 38},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 30},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 30},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 36},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 36},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_value] = STATE(5),
    [sym__value] = STATE(32),
    [sym_object] = STATE(4),
    [sym_pair] = STATE(33),
    [sym_array] = STATE(4),
    [aux_sym_object_repeat1] = STATE(15),
    [aux_sym_array_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_string] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(19),
    [sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(19),
  },
  [1] = {
    [sym_value] = STATE(5),
    [sym__value] = STATE(6),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [2] = {
    [sym_pair] = STATE(9),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
  },
  [3] = {
    [sym__value] = STATE(11),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(41),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
  },
  [8] = {
    [anon_sym_COLON] = ACTIONS(45),
  },
  [9] = {
    [aux_sym_object_repeat1] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
  },
  [11] = {
    [aux_sym_array_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(55),
  },
  [12] = {
    [sym__value] = STATE(19),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [13] = {
    [sym_pair] = STATE(20),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(61),
  },
  [16] = {
    [sym__value] = STATE(23),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
  },
  [18] = {
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
  },
  [19] = {
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
  },
  [21] = {
    [sym_pair] = STATE(26),
    [sym_string] = ACTIONS(31),
    [sym_number] = ACTIONS(33),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [24] = {
    [sym__value] = STATE(27),
    [sym_object] = STATE(4),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(27),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
  },
  [28] = {
    [sym__value] = STATE(34),
    [sym_object] = STATE(4),
    [sym_pair] = STATE(35),
    [sym_array] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_string] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(37),
  },
  [32] = {
    [aux_sym_array_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(100),
  },
  [33] = {
    [aux_sym_object_repeat1] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(108),
  },
  [34] = {
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
  },
  [35] = {
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(2),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(28),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(29),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(12),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(3),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(31),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(31),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(4),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [27] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__value, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_value, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 3),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 3),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_pair, 3),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 4),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 4),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 3),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 3),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [87] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_object, 2), REDUCE(sym_object, 3), REDUCE(sym_object, 4),
  [91] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array, 2), REDUCE(sym_array, 3), REDUCE(sym_array, 4),
  [95] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(sym_pair, 3), REDUCE(aux_sym_array_repeat1, 3), SHIFT(16),
  [100] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3), SHIFT(17),
  [104] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(13),
  [108] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3), SHIFT(14),
  [112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_repeat1, 2), REDUCE(aux_sym_array_repeat1, 3),
  [115] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_object_repeat1, 2), REDUCE(aux_sym_object_repeat1, 3),
};

const TSLanguage *tree_sitter_json() {
  GET_LANGUAGE();
}
