#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

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
  sym__typeArgs = 31,
  sym_constructor = 32,
  aux_sym_resource_repeat1 = 33,
  aux_sym_resource_repeat2 = 34,
  aux_sym_dictionary_repeat1 = 35,
  aux_sym_array_repeat1 = 36,
  aux_sym_arguments_repeat1 = 37,
  aux_sym__typeArgs_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
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
  [sym__typeArgs] = "_typeArgs",
  [sym_constructor] = "constructor",
  [aux_sym_resource_repeat1] = "resource_repeat1",
  [aux_sym_resource_repeat2] = "resource_repeat2",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym__typeArgs_repeat1] = "_typeArgs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_path] = sym_path,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string] = sym_string,
  [sym_resource] = sym_resource,
  [sym_identifier] = sym_identifier,
  [sym__value] = sym__value,
  [sym_section] = sym_section,
  [aux_sym__attributes] = aux_sym__attributes,
  [sym_attribute] = sym_attribute,
  [aux_sym__properties] = aux_sym__properties,
  [sym_property] = sym_property,
  [sym_pair] = sym_pair,
  [sym_dictionary] = sym_dictionary,
  [sym_array] = sym_array,
  [sym_arguments] = sym_arguments,
  [sym__typeArgs] = sym__typeArgs,
  [sym_constructor] = sym_constructor,
  [aux_sym_resource_repeat1] = aux_sym_resource_repeat1,
  [aux_sym_resource_repeat2] = aux_sym_resource_repeat2,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym__typeArgs_repeat1] = aux_sym__typeArgs_repeat1,
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
  [sym__typeArgs] = {
    .visible = false,
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
  [aux_sym__typeArgs_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 14,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 15,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 58,
  [59] = 47,
  [60] = 46,
  [61] = 53,
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 19,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 22,
  [71] = 24,
  [72] = 21,
  [73] = 17,
  [74] = 18,
  [75] = 16,
  [76] = 25,
  [77] = 23,
  [78] = 78,
  [79] = 20,
  [80] = 26,
  [81] = 67,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(14)
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
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '-') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 13:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 14:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(13)
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(16)
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
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
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '_') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(5);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(6);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(7);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(12);
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
  eof = lexer->eof(lexer);
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

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 17},
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
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
};

enum {
  ts_external_token_string = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string] = sym_string,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_resource] = STATE(90),
    [sym_section] = STATE(41),
    [sym_property] = STATE(27),
    [aux_sym_resource_repeat1] = STATE(27),
    [aux_sym_resource_repeat2] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(49), 1,
      sym_pair,
    ACTIONS(15), 2,
      sym_string,
      sym_float,
    ACTIONS(13), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(40), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [38] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(59), 1,
      sym_pair,
    ACTIONS(25), 2,
      sym_string,
      sym_float,
    ACTIONS(23), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(91), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [76] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(45), 1,
      sym_pair,
    ACTIONS(31), 2,
      sym_string,
      sym_float,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(38), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [114] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(47), 1,
      sym_pair,
    ACTIONS(25), 2,
      sym_string,
      sym_float,
    ACTIONS(23), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(91), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [152] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(78), 1,
      sym_pair,
    ACTIONS(39), 2,
      sym_string,
      sym_float,
    ACTIONS(37), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(44), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [187] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym_string,
      sym_float,
    ACTIONS(41), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(61), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [222] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(82), 1,
      sym_pair,
    ACTIONS(25), 2,
      sym_string,
      sym_float,
    ACTIONS(23), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(91), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [257] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(49), 2,
      sym_string,
      sym_float,
    ACTIONS(47), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(53), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(55), 2,
      sym_string,
      sym_float,
    ACTIONS(53), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(65), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(59), 2,
      sym_string,
      sym_float,
    ACTIONS(57), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(51), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(65), 2,
      sym_string,
      sym_float,
    ACTIONS(63), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(58), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [388] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(69), 2,
      sym_string,
      sym_float,
    ACTIONS(67), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(85), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [420] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
    STATE(81), 1,
      sym__typeArgs,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 9,
      sym__identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [614] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_property,
      aux_sym_resource_repeat1,
    STATE(42), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [635] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__typeArgs,
    STATE(72), 1,
      sym_arguments,
    ACTIONS(75), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_path,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(30), 2,
      sym_property,
      aux_sym_resource_repeat1,
  [685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(29), 2,
      aux_sym__properties,
      sym_property,
  [700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_identifier,
    STATE(37), 2,
      aux_sym__attributes,
      sym_attribute,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_path,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym__identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_identifier,
    STATE(34), 2,
      aux_sym__attributes,
      sym_attribute,
  [749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(35), 2,
      aux_sym__properties,
      sym_property,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_identifier,
    STATE(34), 2,
      aux_sym__attributes,
      sym_attribute,
  [796] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_arguments_repeat1,
  [812] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_arguments_repeat1,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
      anon_sym_LPAREN,
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_arguments_repeat1,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_dictionary_repeat1,
  [930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_arguments_repeat1,
  [956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_array_repeat1,
  [969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_array_repeat1,
  [991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [1017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [1030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_array_repeat1,
  [1043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym__typeArgs_repeat1,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_dictionary_repeat1,
  [1078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_arguments_repeat1,
  [1091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [1104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [1117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym__typeArgs_repeat1,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym__typeArgs_repeat1,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym_arguments,
  [1169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    STATE(64), 1,
      sym_identifier,
  [1179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    STATE(32), 1,
      sym_identifier,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_arguments,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 222,
  [SMALL_STATE(9)] = 257,
  [SMALL_STATE(10)] = 292,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 388,
  [SMALL_STATE(14)] = 420,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 460,
  [SMALL_STATE(17)] = 474,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 502,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 544,
  [SMALL_STATE(23)] = 558,
  [SMALL_STATE(24)] = 572,
  [SMALL_STATE(25)] = 586,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 655,
  [SMALL_STATE(30)] = 670,
  [SMALL_STATE(31)] = 685,
  [SMALL_STATE(32)] = 700,
  [SMALL_STATE(33)] = 717,
  [SMALL_STATE(34)] = 732,
  [SMALL_STATE(35)] = 749,
  [SMALL_STATE(36)] = 764,
  [SMALL_STATE(37)] = 779,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 812,
  [SMALL_STATE(40)] = 826,
  [SMALL_STATE(41)] = 842,
  [SMALL_STATE(42)] = 856,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 880,
  [SMALL_STATE(45)] = 891,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 917,
  [SMALL_STATE(48)] = 930,
  [SMALL_STATE(49)] = 943,
  [SMALL_STATE(50)] = 956,
  [SMALL_STATE(51)] = 969,
  [SMALL_STATE(52)] = 978,
  [SMALL_STATE(53)] = 991,
  [SMALL_STATE(54)] = 1004,
  [SMALL_STATE(55)] = 1017,
  [SMALL_STATE(56)] = 1030,
  [SMALL_STATE(57)] = 1043,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1065,
  [SMALL_STATE(60)] = 1078,
  [SMALL_STATE(61)] = 1091,
  [SMALL_STATE(62)] = 1104,
  [SMALL_STATE(63)] = 1117,
  [SMALL_STATE(64)] = 1130,
  [SMALL_STATE(65)] = 1143,
  [SMALL_STATE(66)] = 1151,
  [SMALL_STATE(67)] = 1159,
  [SMALL_STATE(68)] = 1169,
  [SMALL_STATE(69)] = 1179,
  [SMALL_STATE(70)] = 1189,
  [SMALL_STATE(71)] = 1197,
  [SMALL_STATE(72)] = 1205,
  [SMALL_STATE(73)] = 1213,
  [SMALL_STATE(74)] = 1221,
  [SMALL_STATE(75)] = 1229,
  [SMALL_STATE(76)] = 1237,
  [SMALL_STATE(77)] = 1245,
  [SMALL_STATE(78)] = 1253,
  [SMALL_STATE(79)] = 1261,
  [SMALL_STATE(80)] = 1269,
  [SMALL_STATE(81)] = 1277,
  [SMALL_STATE(82)] = 1287,
  [SMALL_STATE(83)] = 1295,
  [SMALL_STATE(84)] = 1305,
  [SMALL_STATE(85)] = 1313,
  [SMALL_STATE(86)] = 1321,
  [SMALL_STATE(87)] = 1328,
  [SMALL_STATE(88)] = 1335,
  [SMALL_STATE(89)] = 1342,
  [SMALL_STATE(90)] = 1349,
  [SMALL_STATE(91)] = 1356,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(86),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__properties, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__properties, 2), SHIFT_REPEAT(86),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2), SHIFT_REPEAT(69),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(8),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2), SHIFT_REPEAT(83),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 3),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_godot_resource_external_scanner_create(void);
void tree_sitter_godot_resource_external_scanner_destroy(void *);
bool tree_sitter_godot_resource_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_godot_resource_external_scanner_serialize(void *, char *);
void tree_sitter_godot_resource_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_godot_resource(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_godot_resource_external_scanner_create,
      tree_sitter_godot_resource_external_scanner_destroy,
      tree_sitter_godot_resource_external_scanner_scan,
      tree_sitter_godot_resource_external_scanner_serialize,
      tree_sitter_godot_resource_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
