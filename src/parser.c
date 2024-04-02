#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 90
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
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
  [25] = 11,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 12,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 41,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 39,
  [59] = 46,
  [60] = 52,
  [61] = 45,
  [62] = 62,
  [63] = 24,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 13,
  [70] = 22,
  [71] = 20,
  [72] = 21,
  [73] = 17,
  [74] = 14,
  [75] = 75,
  [76] = 19,
  [77] = 18,
  [78] = 15,
  [79] = 23,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
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
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
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
  [68] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_resource] = STATE(86),
    [sym_section] = STATE(36),
    [sym_property] = STATE(16),
    [aux_sym_resource_repeat1] = STATE(16),
    [aux_sym_resource_repeat2] = STATE(36),
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
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(23), 1,
      sym_string,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(13), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(59), 5,
      sym__value,
      sym_pair,
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
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(27), 1,
      sym_float,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(25), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(46), 5,
      sym__value,
      sym_pair,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [76] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(33), 2,
      sym_string,
      sym_float,
    ACTIONS(31), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(49), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [111] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(39), 2,
      sym_string,
      sym_float,
    ACTIONS(37), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(47), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [146] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_string,
    ACTIONS(45), 1,
      sym_float,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(64), 5,
      sym__value,
      sym_pair,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(49), 2,
      sym_string,
      sym_float,
    ACTIONS(47), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(51), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [213] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(53), 2,
      sym_string,
      sym_float,
    ACTIONS(51), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(82), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [245] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(55), 1,
      sym__identifier,
    STATE(11), 1,
      sym_identifier,
    ACTIONS(59), 2,
      sym_string,
      sym_float,
    ACTIONS(57), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(53), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_identifier,
    ACTIONS(63), 2,
      sym_string,
      sym_float,
    ACTIONS(61), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(66), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_arguments,
    STATE(65), 1,
      sym__typeArgs,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      sym__identifier,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_property,
      aux_sym_resource_repeat1,
    STATE(38), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_path,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_arguments,
    STATE(83), 1,
      sym__typeArgs,
    ACTIONS(69), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      aux_sym__properties,
      sym_property,
  [561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__identifier,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(28), 2,
      aux_sym__attributes,
      sym_attribute,
  [578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_path,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(29), 2,
      sym_property,
      aux_sym_resource_repeat1,
  [593] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__identifier,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(34), 2,
      aux_sym__attributes,
      sym_attribute,
  [610] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      aux_sym__properties,
      sym_property,
  [625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_path,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      aux_sym__properties,
      sym_property,
  [655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(28), 2,
      aux_sym__attributes,
      sym_attribute,
  [672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
      anon_sym_LPAREN,
  [682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(37), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    STATE(37), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_string,
    STATE(45), 1,
      sym_pair,
  [737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_array_repeat1,
  [750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_array_repeat1,
  [763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym__typeArgs_repeat1,
  [789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_dictionary_repeat1,
  [813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_arguments_repeat1,
  [826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_array_repeat1,
  [839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym__typeArgs_repeat1,
  [852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_array_repeat1,
  [865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_array_repeat1,
  [878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
  [909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_dictionary_repeat1,
  [935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym__typeArgs_repeat1,
  [961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_string,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_pair,
  [974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_dictionary_repeat1,
  [1013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_arguments,
  [1047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(62), 1,
      sym_identifier,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_string,
    STATE(81), 1,
      sym_pair,
  [1075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(43), 1,
      sym_identifier,
  [1133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(30), 1,
      sym_identifier,
  [1175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_arguments,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_EQ,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_EQ,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 347,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 386,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 420,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 446,
  [SMALL_STATE(21)] = 459,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 531,
  [SMALL_STATE(27)] = 546,
  [SMALL_STATE(28)] = 561,
  [SMALL_STATE(29)] = 578,
  [SMALL_STATE(30)] = 593,
  [SMALL_STATE(31)] = 610,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 640,
  [SMALL_STATE(34)] = 655,
  [SMALL_STATE(35)] = 672,
  [SMALL_STATE(36)] = 682,
  [SMALL_STATE(37)] = 696,
  [SMALL_STATE(38)] = 710,
  [SMALL_STATE(39)] = 724,
  [SMALL_STATE(40)] = 737,
  [SMALL_STATE(41)] = 750,
  [SMALL_STATE(42)] = 763,
  [SMALL_STATE(43)] = 776,
  [SMALL_STATE(44)] = 789,
  [SMALL_STATE(45)] = 800,
  [SMALL_STATE(46)] = 813,
  [SMALL_STATE(47)] = 826,
  [SMALL_STATE(48)] = 839,
  [SMALL_STATE(49)] = 852,
  [SMALL_STATE(50)] = 865,
  [SMALL_STATE(51)] = 878,
  [SMALL_STATE(52)] = 887,
  [SMALL_STATE(53)] = 900,
  [SMALL_STATE(54)] = 909,
  [SMALL_STATE(55)] = 922,
  [SMALL_STATE(56)] = 935,
  [SMALL_STATE(57)] = 948,
  [SMALL_STATE(58)] = 961,
  [SMALL_STATE(59)] = 974,
  [SMALL_STATE(60)] = 987,
  [SMALL_STATE(61)] = 1000,
  [SMALL_STATE(62)] = 1013,
  [SMALL_STATE(63)] = 1021,
  [SMALL_STATE(64)] = 1029,
  [SMALL_STATE(65)] = 1037,
  [SMALL_STATE(66)] = 1047,
  [SMALL_STATE(67)] = 1055,
  [SMALL_STATE(68)] = 1065,
  [SMALL_STATE(69)] = 1075,
  [SMALL_STATE(70)] = 1083,
  [SMALL_STATE(71)] = 1091,
  [SMALL_STATE(72)] = 1099,
  [SMALL_STATE(73)] = 1107,
  [SMALL_STATE(74)] = 1115,
  [SMALL_STATE(75)] = 1123,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1141,
  [SMALL_STATE(78)] = 1149,
  [SMALL_STATE(79)] = 1157,
  [SMALL_STATE(80)] = 1165,
  [SMALL_STATE(81)] = 1175,
  [SMALL_STATE(82)] = 1183,
  [SMALL_STATE(83)] = 1191,
  [SMALL_STATE(84)] = 1201,
  [SMALL_STATE(85)] = 1208,
  [SMALL_STATE(86)] = 1215,
  [SMALL_STATE(87)] = 1222,
  [SMALL_STATE(88)] = 1229,
  [SMALL_STATE(89)] = 1236,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2), SHIFT_REPEAT(84),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__properties, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__properties, 2), SHIFT_REPEAT(84),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2), SHIFT_REPEAT(80),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2), SHIFT_REPEAT(67),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(68),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 4),
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
