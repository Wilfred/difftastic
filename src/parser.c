#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 78
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__identifier = 1,
  sym_comment = 2,
  sym_true = 3,
  sym_false = 4,
  sym_null = 5,
  sym_float = 6,
  sym_integer = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_EQ = 10,
  sym_path = 11,
  anon_sym_COLON = 12,
  anon_sym_LBRACE = 13,
  anon_sym_COMMA = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  sym_string = 18,
  sym_resource = 19,
  sym_identifier = 20,
  sym__value = 21,
  sym_section = 22,
  aux_sym__attributes = 23,
  sym_attribute = 24,
  aux_sym__properties = 25,
  sym_property = 26,
  sym_pair = 27,
  sym_dictionary = 28,
  sym_array = 29,
  sym_arguments = 30,
  sym_constructor = 31,
  aux_sym_resource_repeat1 = 32,
  aux_sym_resource_repeat2 = 33,
  aux_sym_dictionary_repeat1 = 34,
  aux_sym_array_repeat1 = 35,
  aux_sym_arguments_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_path] = "path",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_string] = "string",
  [sym_resource] = "resource",
  [sym_identifier] = "identifier",
  [sym__value] = "_value",
  [sym_section] = "section",
  [aux_sym__attributes] = "_attributes",
  [sym_attribute] = "attribute",
  [aux_sym__properties] = "_properties",
  [sym_property] = "property",
  [sym_pair] = "pair",
  [sym_dictionary] = "dictionary",
  [sym_array] = "array",
  [sym_arguments] = "arguments",
  [sym_constructor] = "constructor",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_resource_repeat2] = "resource_repeat2",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
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
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_resource] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attributes] = {
    .visible = false,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__properties] = {
    .visible = false,
    .named = false,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_resource_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_resource_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(18);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_path);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
};

enum {
  ts_external_token_string = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string] = sym_string,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_resource] = STATE(74),
    [sym_section] = STATE(34),
    [sym_property] = STATE(22),
    [aux_sym_resource_repeat1] = STATE(22),
    [aux_sym_resource_repeat2] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
  },
  [2] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(51),
    [sym_pair] = STATE(51),
    [sym_dictionary] = STATE(51),
    [sym_array] = STATE(51),
    [sym_constructor] = STATE(51),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [sym_integer] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_string] = ACTIONS(23),
  },
  [3] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(43),
    [sym_pair] = STATE(43),
    [sym_dictionary] = STATE(43),
    [sym_array] = STATE(43),
    [sym_constructor] = STATE(43),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_null] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_integer] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(29),
    [sym_string] = ACTIONS(23),
  },
  [4] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(48),
    [sym_dictionary] = STATE(48),
    [sym_array] = STATE(48),
    [sym_constructor] = STATE(48),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(31),
    [sym_false] = ACTIONS(31),
    [sym_null] = ACTIONS(31),
    [sym_float] = ACTIONS(33),
    [sym_integer] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(33),
  },
  [5] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(69),
    [sym_pair] = STATE(69),
    [sym_dictionary] = STATE(69),
    [sym_array] = STATE(69),
    [sym_constructor] = STATE(69),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_null] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_integer] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
  },
  [6] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(55),
    [sym_dictionary] = STATE(55),
    [sym_array] = STATE(55),
    [sym_constructor] = STATE(55),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(41),
    [sym_false] = ACTIONS(41),
    [sym_null] = ACTIONS(41),
    [sym_float] = ACTIONS(43),
    [sym_integer] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(43),
  },
  [7] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(71),
    [sym_dictionary] = STATE(71),
    [sym_array] = STATE(71),
    [sym_constructor] = STATE(71),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(47),
    [sym_false] = ACTIONS(47),
    [sym_null] = ACTIONS(47),
    [sym_float] = ACTIONS(49),
    [sym_integer] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(49),
  },
  [8] = {
    [sym_identifier] = STATE(35),
    [sym__value] = STATE(73),
    [sym_dictionary] = STATE(73),
    [sym_array] = STATE(73),
    [sym_constructor] = STATE(73),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(51),
    [sym_false] = ACTIONS(51),
    [sym_null] = ACTIONS(51),
    [sym_float] = ACTIONS(53),
    [sym_integer] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_string] = ACTIONS(53),
  },
  [9] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(47),
    [sym_dictionary] = STATE(47),
    [sym_array] = STATE(47),
    [sym_constructor] = STATE(47),
    [sym__identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(59),
    [sym_false] = ACTIONS(59),
    [sym_null] = ACTIONS(59),
    [sym_float] = ACTIONS(61),
    [sym_integer] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(61),
  },
  [10] = {
    [sym_identifier] = STATE(11),
    [sym__value] = STATE(57),
    [sym_dictionary] = STATE(57),
    [sym_array] = STATE(57),
    [sym_constructor] = STATE(57),
    [sym__identifier] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_null] = ACTIONS(65),
    [sym_float] = ACTIONS(67),
    [sym_integer] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_string] = ACTIONS(67),
  },
  [11] = {
    [sym_arguments] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(69),
    [sym_path] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_path] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [sym_path] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_path] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym_path] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [sym_path] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_path] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_path] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_path] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
  },
  [20] = {
    [sym__identifier] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_path] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
  },
  [22] = {
    [sym_section] = STATE(36),
    [sym_property] = STATE(30),
    [aux_sym_resource_repeat1] = STATE(30),
    [aux_sym_resource_repeat2] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_path] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
  },
  [24] = {
    [aux_sym__properties] = STATE(31),
    [sym_property] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_path] = ACTIONS(9),
  },
  [25] = {
    [aux_sym__properties] = STATE(24),
    [sym_property] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym_path] = ACTIONS(9),
  },
  [26] = {
    [sym_identifier] = STATE(77),
    [aux_sym__attributes] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym__identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(103),
  },
  [27] = {
    [aux_sym__properties] = STATE(32),
    [sym_property] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(97),
    [sym_path] = ACTIONS(9),
  },
  [28] = {
    [sym_identifier] = STATE(77),
    [aux_sym__attributes] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym__identifier] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(108),
  },
  [29] = {
    [sym_identifier] = STATE(77),
    [aux_sym__attributes] = STATE(26),
    [sym_attribute] = STATE(26),
    [sym__identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(110),
  },
  [30] = {
    [sym_property] = STATE(30),
    [aux_sym_resource_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_path] = ACTIONS(114),
  },
  [31] = {
    [aux_sym__properties] = STATE(31),
    [sym_property] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_path] = ACTIONS(119),
  },
  [32] = {
    [aux_sym__properties] = STATE(31),
    [sym_property] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(122),
    [sym_path] = ACTIONS(9),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_path] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
  },
  [34] = {
    [sym_section] = STATE(37),
    [aux_sym_resource_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
  [35] = {
    [sym_arguments] = STATE(61),
    [sym__identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(124),
  },
  [36] = {
    [sym_section] = STATE(37),
    [aux_sym_resource_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
  },
  [37] = {
    [sym_section] = STATE(37),
    [aux_sym_resource_repeat2] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(130),
  },
  [38] = {
    [aux_sym_dictionary_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(135),
  },
  [39] = {
    [aux_sym_array_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [40] = {
    [aux_sym_dictionary_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(141),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [42] = {
    [sym_pair] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(145),
    [sym_string] = ACTIONS(147),
  },
  [43] = {
    [aux_sym_arguments_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(151),
  },
  [44] = {
    [aux_sym_dictionary_repeat1] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [45] = {
    [aux_sym_dictionary_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(155),
  },
  [46] = {
    [aux_sym_array_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(159),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
  },
  [48] = {
    [aux_sym_array_repeat1] = STATE(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [49] = {
    [aux_sym_array_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [50] = {
    [aux_sym_dictionary_repeat1] = STATE(50),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(171),
  },
  [51] = {
    [aux_sym_arguments_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(173),
  },
  [52] = {
    [aux_sym_arguments_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(175),
  },
  [53] = {
    [aux_sym_arguments_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(177),
  },
  [54] = {
    [sym_pair] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym_string] = ACTIONS(147),
  },
  [55] = {
    [aux_sym_array_repeat1] = STATE(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(139),
  },
  [56] = {
    [aux_sym_arguments_repeat1] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(186),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(188),
    [sym_path] = ACTIONS(188),
  },
  [58] = {
    [sym_pair] = STATE(70),
    [sym_comment] = ACTIONS(3),
    [sym_string] = ACTIONS(147),
  },
  [59] = {
    [sym__identifier] = ACTIONS(91),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(91),
  },
  [60] = {
    [sym__identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(83),
  },
  [61] = {
    [sym__identifier] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(95),
  },
  [62] = {
    [sym__identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(77),
  },
  [63] = {
    [sym__identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [64] = {
    [sym__identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(81),
  },
  [65] = {
    [sym__identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [66] = {
    [sym__identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(87),
  },
  [67] = {
    [sym__identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(73),
  },
  [68] = {
    [sym__identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(79),
  },
  [69] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
  },
  [70] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
  },
  [71] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(157),
  },
  [72] = {
    [sym_identifier] = STATE(29),
    [sym__identifier] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__identifier] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(190),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(143),
  },
  [76] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(194),
  },
  [77] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(196),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(72),
  [9] = {.count = 1, .reusable = true}, SHIFT(76),
  [11] = {.count = 1, .reusable = false}, SHIFT(20),
  [13] = {.count = 1, .reusable = false}, SHIFT(51),
  [15] = {.count = 1, .reusable = true}, SHIFT(51),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(42),
  [21] = {.count = 1, .reusable = true}, SHIFT(64),
  [23] = {.count = 1, .reusable = true}, SHIFT(41),
  [25] = {.count = 1, .reusable = false}, SHIFT(43),
  [27] = {.count = 1, .reusable = true}, SHIFT(43),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(48),
  [33] = {.count = 1, .reusable = true}, SHIFT(48),
  [35] = {.count = 1, .reusable = true}, SHIFT(59),
  [37] = {.count = 1, .reusable = false}, SHIFT(69),
  [39] = {.count = 1, .reusable = true}, SHIFT(69),
  [41] = {.count = 1, .reusable = false}, SHIFT(55),
  [43] = {.count = 1, .reusable = true}, SHIFT(55),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = false}, SHIFT(71),
  [49] = {.count = 1, .reusable = true}, SHIFT(71),
  [51] = {.count = 1, .reusable = false}, SHIFT(73),
  [53] = {.count = 1, .reusable = true}, SHIFT(73),
  [55] = {.count = 1, .reusable = true}, SHIFT(4),
  [57] = {.count = 1, .reusable = true}, SHIFT(54),
  [59] = {.count = 1, .reusable = false}, SHIFT(47),
  [61] = {.count = 1, .reusable = true}, SHIFT(47),
  [63] = {.count = 1, .reusable = false}, SHIFT(33),
  [65] = {.count = 1, .reusable = false}, SHIFT(57),
  [67] = {.count = 1, .reusable = true}, SHIFT(57),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_dictionary, 4),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_constructor, 2),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [101] = {.count = 1, .reusable = true}, SHIFT(20),
  [103] = {.count = 1, .reusable = true}, SHIFT(27),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym__attributes, 2), SHIFT_REPEAT(20),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym__attributes, 2),
  [110] = {.count = 1, .reusable = true}, SHIFT(25),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_resource_repeat1, 2),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(76),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym__properties, 2),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym__properties, 2), SHIFT_REPEAT(76),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_section, 5),
  [124] = {.count = 1, .reusable = true}, SHIFT(2),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_resource, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(aux_sym_resource_repeat2, 2),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_resource_repeat2, 2), SHIFT_REPEAT(72),
  [133] = {.count = 1, .reusable = true}, SHIFT(58),
  [135] = {.count = 1, .reusable = true}, SHIFT(13),
  [137] = {.count = 1, .reusable = true}, SHIFT(65),
  [139] = {.count = 1, .reusable = true}, SHIFT(7),
  [141] = {.count = 1, .reusable = true}, SHIFT(19),
  [143] = {.count = 1, .reusable = true}, SHIFT(9),
  [145] = {.count = 1, .reusable = true}, SHIFT(17),
  [147] = {.count = 1, .reusable = true}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(5),
  [151] = {.count = 1, .reusable = true}, SHIFT(12),
  [153] = {.count = 1, .reusable = true}, SHIFT(63),
  [155] = {.count = 1, .reusable = true}, SHIFT(66),
  [157] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 3),
  [164] = {.count = 1, .reusable = true}, SHIFT(62),
  [166] = {.count = 1, .reusable = true}, SHIFT(18),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(58),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(67),
  [175] = {.count = 1, .reusable = true}, SHIFT(68),
  [177] = {.count = 1, .reusable = true}, SHIFT(15),
  [179] = {.count = 1, .reusable = true}, SHIFT(60),
  [181] = {.count = 1, .reusable = true}, SHIFT(14),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_property, 3),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [192] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [194] = {.count = 1, .reusable = true}, SHIFT(10),
  [196] = {.count = 1, .reusable = true}, SHIFT(8),
};

void *tree_sitter_godotResource_external_scanner_create(void);
void tree_sitter_godotResource_external_scanner_destroy(void *);
bool tree_sitter_godotResource_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_godotResource_external_scanner_serialize(void *, char *);
void tree_sitter_godotResource_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_godotResource(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_godotResource_external_scanner_create,
      tree_sitter_godotResource_external_scanner_destroy,
      tree_sitter_godotResource_external_scanner_scan,
      tree_sitter_godotResource_external_scanner_serialize,
      tree_sitter_godotResource_external_scanner_deserialize,
    },
  };
  return &language;
}
