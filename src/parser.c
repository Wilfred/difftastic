#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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

enum ts_symbol_identifiers {
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
  [7] = 6,
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
  [40] = 40,
  [41] = 15,
  [42] = 42,
  [43] = 40,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 44,
  [58] = 51,
  [59] = 59,
  [60] = 60,
  [61] = 56,
  [62] = 59,
  [63] = 45,
  [64] = 52,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 19,
  [70] = 16,
  [71] = 17,
  [72] = 18,
  [73] = 22,
  [74] = 24,
  [75] = 21,
  [76] = 25,
  [77] = 20,
  [78] = 23,
  [79] = 26,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 68,
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
      ADVANCE_MAP(
        '(', 39,
        ')', 40,
        ',', 37,
        '-', 9,
        '.', 2,
        '0', 25,
        ':', 35,
        ';', 20,
        '=', 33,
        '[', 31,
      );
      if (lookahead == '\\') SKIP(14);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(26);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
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
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 14:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(15);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == ',') ADVANCE(37);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(20);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') SKIP(16);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '}') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(17);
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
      ADVANCE_MAP(
        '-', 9,
        '.', 22,
        '_', 27,
        'B', 4,
        'b', 4,
        'E', 1,
        'e', 1,
        'O', 5,
        'o', 5,
        'X', 6,
        'x', 6,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
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
      if (lookahead == '\\') SKIP(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(5);
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
      if (lookahead == '\n') SKIP(0);
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
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
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
    [sym_resource] = STATE(91),
    [sym_section] = STATE(38),
    [sym_property] = STATE(27),
    [aux_sym_resource_repeat1] = STATE(27),
    [aux_sym_resource_repeat2] = STATE(38),
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
    STATE(45), 1,
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
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(63), 1,
      sym_pair,
    ACTIONS(25), 2,
      sym_string,
      sym_float,
    ACTIONS(23), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(43), 4,
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
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_identifier,
    STATE(57), 1,
      sym_pair,
    ACTIONS(31), 2,
      sym_string,
      sym_float,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(86), 4,
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
    STATE(44), 1,
      sym_pair,
    ACTIONS(31), 2,
      sym_string,
      sym_float,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(86), 4,
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
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(39), 2,
      sym_string,
      sym_float,
    ACTIONS(37), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(51), 4,
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
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(45), 2,
      sym_string,
      sym_float,
    ACTIONS(43), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(58), 4,
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
    ACTIONS(31), 2,
      sym_string,
      sym_float,
    ACTIONS(29), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(86), 4,
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
    STATE(14), 1,
      sym_identifier,
    STATE(65), 1,
      sym_pair,
    ACTIONS(51), 2,
      sym_string,
      sym_float,
    ACTIONS(49), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(54), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [292] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym__identifier,
    STATE(14), 1,
      sym_identifier,
    ACTIONS(57), 2,
      sym_string,
      sym_float,
    ACTIONS(55), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(50), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__identifier,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(61), 2,
      sym_string,
      sym_float,
    ACTIONS(59), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(83), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [356] = 8,
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
    ACTIONS(69), 2,
      sym_string,
      sym_float,
    ACTIONS(67), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(80), 4,
      sym__value,
      sym_dictionary,
      sym_array,
      sym_constructor,
  [388] = 8,
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
    ACTIONS(73), 2,
      sym_string,
      sym_float,
    ACTIONS(71), 4,
      sym_true,
      sym_false,
      sym_null,
      sym_integer,
    STATE(47), 4,
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
    STATE(18), 1,
      sym_arguments,
    STATE(68), 1,
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
    STATE(31), 2,
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
    STATE(72), 1,
      sym_arguments,
    STATE(85), 1,
      sym__typeArgs,
    ACTIONS(75), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(37), 2,
      aux_sym__attributes,
      sym_attribute,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(36), 2,
      aux_sym__properties,
      sym_property,
  [687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_path,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(31), 2,
      sym_property,
      aux_sym_resource_repeat1,
  [702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(34), 2,
      aux_sym__properties,
      sym_property,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(32), 2,
      aux_sym__properties,
      sym_property,
  [732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_path,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(34), 2,
      aux_sym__properties,
      sym_property,
  [747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym__identifier,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(35), 2,
      aux_sym__attributes,
      sym_attribute,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_path,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(34), 2,
      aux_sym__properties,
      sym_property,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_identifier,
    STATE(35), 2,
      aux_sym__attributes,
      sym_attribute,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
      anon_sym_LPAREN,
  [850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_section,
      aux_sym_resource_repeat2,
  [864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_arguments_repeat1,
  [880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_dictionary_repeat1,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_repeat1,
  [941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__typeArgs_repeat1,
  [954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_path,
  [963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_array_repeat1,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [989] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__typeArgs_repeat1,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [1026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_dictionary_repeat1,
  [1052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_array_repeat1,
  [1065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_repeat1,
  [1078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym__typeArgs_repeat1,
  [1091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [1104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_dictionary_repeat1,
  [1117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_arguments_repeat1,
  [1130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_arguments_repeat1,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(29), 1,
      sym_identifier,
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(84), 1,
      sym_identifier,
  [1171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_arguments,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
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
    ACTIONS(91), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
  [1287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      sym__identifier,
      anon_sym_RBRACK,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_arguments,
  [1321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_COLON,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_EQ,
  [1342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_EQ,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
  [1356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(30)] = 672,
  [SMALL_STATE(31)] = 687,
  [SMALL_STATE(32)] = 702,
  [SMALL_STATE(33)] = 717,
  [SMALL_STATE(34)] = 732,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 764,
  [SMALL_STATE(37)] = 779,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 810,
  [SMALL_STATE(40)] = 824,
  [SMALL_STATE(41)] = 840,
  [SMALL_STATE(42)] = 850,
  [SMALL_STATE(43)] = 864,
  [SMALL_STATE(44)] = 880,
  [SMALL_STATE(45)] = 893,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 919,
  [SMALL_STATE(48)] = 928,
  [SMALL_STATE(49)] = 941,
  [SMALL_STATE(50)] = 954,
  [SMALL_STATE(51)] = 963,
  [SMALL_STATE(52)] = 976,
  [SMALL_STATE(53)] = 989,
  [SMALL_STATE(54)] = 1002,
  [SMALL_STATE(55)] = 1013,
  [SMALL_STATE(56)] = 1026,
  [SMALL_STATE(57)] = 1039,
  [SMALL_STATE(58)] = 1052,
  [SMALL_STATE(59)] = 1065,
  [SMALL_STATE(60)] = 1078,
  [SMALL_STATE(61)] = 1091,
  [SMALL_STATE(62)] = 1104,
  [SMALL_STATE(63)] = 1117,
  [SMALL_STATE(64)] = 1130,
  [SMALL_STATE(65)] = 1143,
  [SMALL_STATE(66)] = 1151,
  [SMALL_STATE(67)] = 1161,
  [SMALL_STATE(68)] = 1171,
  [SMALL_STATE(69)] = 1181,
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
  [SMALL_STATE(84)] = 1303,
  [SMALL_STATE(85)] = 1311,
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
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__properties, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__properties, 2, 0, 0), SHIFT_REPEAT(89),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attributes, 2, 0, 0), SHIFT_REPEAT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attributes, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_resource_repeat2, 2, 0, 0), SHIFT_REPEAT(66),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_resource, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__typeArgs_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__typeArgs, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
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

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_godot_resource_external_scanner_create(void);
void tree_sitter_godot_resource_external_scanner_destroy(void *);
bool tree_sitter_godot_resource_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_godot_resource_external_scanner_serialize(void *, char *);
void tree_sitter_godot_resource_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_godot_resource(void) {
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
