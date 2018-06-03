#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 16
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  sym_comment = 1,
  sym__multiline_string = 2,
  anon_sym_SQUOTE = 3,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 4,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 7,
  sym_number = 8,
  sym_nil = 9,
  sym_true = 10,
  sym_false = 11,
  sym_identifier = 12,
  sym_lua = 13,
  sym__statement = 14,
  sym__expression = 15,
  sym_string = 16,
  aux_sym_lua_repeat1 = 17,
  aux_sym_string_repeat1 = 18,
  aux_sym_string_repeat2 = 19,
  alias_sym_expression = 20,
};

static const char *ts_symbol_names[] = {
  [sym_comment] = "comment",
  [sym__multiline_string] = "_multiline_string",
  [ts_builtin_sym_end] = "END",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [sym_number] = "number",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_lua] = "lua",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_lua_repeat1] = "lua_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_expression] = "expression",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lua] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lua_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_expression] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_expression,
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
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
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
      if (lookahead == 'X')
        ADVANCE(10);
      if (lookahead == 'e')
        ADVANCE(6);
      if (lookahead == 'x')
        ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == 'P')
        ADVANCE(6);
      if (lookahead == 'p')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P')
        ADVANCE(6);
      if (lookahead == 'p')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == 'E')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '\n')
        SKIP(19);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        SKIP(21);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'f')
        ADVANCE(1);
      if (lookahead == 'n')
        ADVANCE(6);
      if (lookahead == 't')
        ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 'a')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'l')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 's')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'e')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 6:
      if (lookahead == 'i')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 9:
      if (lookahead == 'r')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'u')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'e')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 1},
  [2] = {.lex_state = 18, .external_lex_state = 1},
  [3] = {.lex_state = 19, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 18, .external_lex_state = 1},
  [6] = {.lex_state = 23, .external_lex_state = 2},
  [7] = {.lex_state = 18, .external_lex_state = 1},
  [8] = {.lex_state = 18, .external_lex_state = 1},
  [9] = {.lex_state = 18, .external_lex_state = 1},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 21, .external_lex_state = 2},
  [12] = {.lex_state = 18, .external_lex_state = 1},
  [13] = {.lex_state = 18, .external_lex_state = 1},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 2},
};

enum {
  ts_external_token_comment,
  ts_external_token__multiline_string,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__multiline_string] = sym__multiline_string,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token__multiline_string] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = ACTIONS(1),
    [sym__multiline_string] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_nil] = ACTIONS(3),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_lua] = STATE(6),
    [sym__statement] = STATE(8),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(5),
    [aux_sym_lua_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_nil] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
  },
  [3] = {
    [aux_sym_string_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(27),
  },
  [4] = {
    [aux_sym_string_repeat2] = STATE(11),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(31),
  },
  [5] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_nil] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_identifier] = ACTIONS(35),
  },
  [6] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [7] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__statement] = STATE(12),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(5),
    [aux_sym_lua_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [9] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_number] = ACTIONS(45),
    [sym_nil] = ACTIONS(47),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
  },
  [10] = {
    [aux_sym_string_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(53),
  },
  [11] = {
    [aux_sym_string_repeat2] = STATE(15),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(57),
  },
  [12] = {
    [sym__statement] = STATE(12),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(5),
    [aux_sym_lua_repeat1] = STATE(12),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [sym_number] = ACTIONS(70),
    [sym_nil] = ACTIONS(73),
    [sym_true] = ACTIONS(73),
    [sym_false] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
  },
  [13] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym_number] = ACTIONS(76),
    [sym_nil] = ACTIONS(78),
    [sym_true] = ACTIONS(78),
    [sym_false] = ACTIONS(78),
    [sym_identifier] = ACTIONS(78),
  },
  [14] = {
    [aux_sym_string_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(85),
  },
  [15] = {
    [aux_sym_string_repeat2] = STATE(15),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(93),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(5),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = true}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [49] = {.count = 1, .reusable = false}, SHIFT(13),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = false}, SHIFT(14),
  [55] = {.count = 1, .reusable = false}, SHIFT(15),
  [57] = {.count = 1, .reusable = true}, SHIFT(15),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [80] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(15),
  [91] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(15),
};

void *tree_sitter_lua_external_scanner_create();
void tree_sitter_lua_external_scanner_destroy(void *);
bool tree_sitter_lua_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lua_external_scanner_serialize(void *, char *);
void tree_sitter_lua_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua() {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_lua_external_scanner_create,
      tree_sitter_lua_external_scanner_destroy,
      tree_sitter_lua_external_scanner_scan,
      tree_sitter_lua_external_scanner_serialize,
      tree_sitter_lua_external_scanner_deserialize,
    },
  };
  return &language;
}
