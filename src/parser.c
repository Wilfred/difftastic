#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 30
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  sym_value = 14,
  sym__value = 15,
  sym_object = 16,
  sym_pair = 17,
  sym_array = 18,
  sym_string = 19,
  aux_sym_object_repeat1 = 20,
  aux_sym_array_repeat1 = 21,
  aux_sym_string_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_value] = "value",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
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
  [sym_string] = {
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
  [aux_sym_string_repeat1] = {
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
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\\')
        ADVANCE(21);
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
        ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      if (lookahead == '0')
        ADVANCE(4);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == 'E')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == 'E')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == 'B')
        ADVANCE(13);
      if (lookahead == 'E')
        ADVANCE(6);
      if (lookahead == 'O')
        ADVANCE(15);
      if (lookahead == 'X')
        ADVANCE(17);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'e')
        ADVANCE(6);
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
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
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      if (lookahead == '\"')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead == 'b')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(22);
      if (lookahead == 'r')
        ADVANCE(22);
      if (lookahead == 't')
        ADVANCE(22);
      if (lookahead == 'u')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_escape_sequence);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(20);
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
        ADVANCE(9);
      END_STATE();
    case 40:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(20);
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
        SKIP(40);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 41:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '+')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '0')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        SKIP(43);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(46);
      END_STATE();
    case 47:
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
      END_STATE();
    case 48:
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      END_STATE();
    case 49:
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(49);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '}')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 49},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_value] = STATE(5),
    [sym__value] = STATE(6),
    [sym_object] = STATE(6),
    [sym_array] = STATE(6),
    [sym_string] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_true] = ACTIONS(9),
    [sym_false] = ACTIONS(9),
    [sym_null] = ACTIONS(9),
  },
  [2] = {
    [sym_pair] = STATE(9),
    [sym_string] = STATE(8),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
  },
  [3] = {
    [sym__value] = STATE(11),
    [sym_object] = STATE(11),
    [sym_array] = STATE(11),
    [sym_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_null] = ACTIONS(17),
  },
  [4] = {
    [aux_sym_string_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(21),
    [sym_escape_sequence] = ACTIONS(21),
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
    [aux_sym_object_repeat1] = STATE(17),
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
    [aux_sym_array_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [13] = {
    [aux_sym_string_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(45),
    [sym_escape_sequence] = ACTIONS(45),
  },
  [14] = {
    [sym__value] = STATE(23),
    [sym_object] = STATE(23),
    [sym_array] = STATE(23),
    [sym_string] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
  },
  [15] = {
    [sym_pair] = STATE(24),
    [sym_string] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
  },
  [17] = {
    [aux_sym_object_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [18] = {
    [sym__value] = STATE(27),
    [sym_object] = STATE(27),
    [sym_array] = STATE(27),
    [sym_string] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_number] = ACTIONS(53),
    [sym_true] = ACTIONS(53),
    [sym_false] = ACTIONS(53),
    [sym_null] = ACTIONS(53),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
  },
  [20] = {
    [aux_sym_array_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
  },
  [22] = {
    [aux_sym_string_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(63),
    [sym_escape_sequence] = ACTIONS(63),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
  },
  [26] = {
    [aux_sym_object_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(68),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
  },
  [29] = {
    [aux_sym_array_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(4),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(7),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = false}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_value, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_object, 2),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_object, 3),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [57] = {.count = 1, .reusable = true}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [61] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(22),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_object, 4),
  [72] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(15),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(18),
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
