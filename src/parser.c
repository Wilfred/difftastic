#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 21
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_datasource = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_string_value = 4,
  sym_identifier = 5,
  sym_number = 6,
  sym_assignation = 7,
  sym_dot = 8,
  sym_true = 9,
  sym_false = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_datasource_definition = 13,
  sym_datasource_block = 14,
  sym__datasource_statement = 15,
  sym_assignee = 16,
  sym__environment_variable = 17,
  sym_boolean = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_datasource_block_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_datasource] = "datasource",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_string_value] = "string_value",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_assignation] = "assignation",
  [sym_dot] = "dot",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_datasource_definition] = "datasource_definition",
  [sym_datasource_block] = "datasource_block",
  [sym__datasource_statement] = "_datasource_statement",
  [sym_assignee] = "assignee",
  [sym__environment_variable] = "_environment_variable",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_datasource_block_repeat1] = "datasource_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_datasource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_assignation] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_datasource_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_datasource_block] = {
    .visible = true,
    .named = true,
  },
  [sym__datasource_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignee] = {
    .visible = true,
    .named = true,
  },
  [sym__environment_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_datasource_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_datasource);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_assignation);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_false] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [anon_sym_datasource] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_assignation] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_datasource_definition] = STATE(3),
    [sym__definition] = STATE(3),
    [sym_source_file] = STATE(4),
    [anon_sym_datasource] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
  },
  [2] = {
    [sym_identifier] = ACTIONS(7),
  },
  [3] = {
    [sym_datasource_definition] = STATE(6),
    [sym__definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_datasource] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(11),
  },
  [5] = {
    [sym_datasource_block] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(13),
  },
  [6] = {
    [sym_datasource_definition] = STATE(6),
    [sym__definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_datasource] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(18),
  },
  [7] = {
    [aux_sym_datasource_block_repeat1] = STATE(11),
    [sym__datasource_statement] = STATE(11),
    [sym_identifier] = ACTIONS(20),
    [anon_sym_RBRACE] = ACTIONS(22),
  },
  [8] = {
    [anon_sym_datasource] = ACTIONS(24),
    [ts_builtin_sym_end] = ACTIONS(24),
  },
  [9] = {
    [sym_assignation] = ACTIONS(26),
  },
  [10] = {
    [anon_sym_datasource] = ACTIONS(28),
    [ts_builtin_sym_end] = ACTIONS(28),
  },
  [11] = {
    [aux_sym_datasource_block_repeat1] = STATE(14),
    [sym__datasource_statement] = STATE(14),
    [sym_identifier] = ACTIONS(20),
    [anon_sym_RBRACE] = ACTIONS(30),
  },
  [12] = {
    [sym__environment_variable] = STATE(17),
    [sym_boolean] = STATE(17),
    [sym_assignee] = STATE(18),
    [sym_identifier] = ACTIONS(32),
    [sym_false] = ACTIONS(34),
    [sym_string_value] = ACTIONS(36),
    [sym_true] = ACTIONS(34),
  },
  [13] = {
    [anon_sym_datasource] = ACTIONS(38),
    [ts_builtin_sym_end] = ACTIONS(38),
  },
  [14] = {
    [aux_sym_datasource_block_repeat1] = STATE(14),
    [sym__datasource_statement] = STATE(14),
    [sym_identifier] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(43),
  },
  [15] = {
    [sym_dot] = ACTIONS(45),
  },
  [16] = {
    [sym_identifier] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
  },
  [17] = {
    [sym_identifier] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
  },
  [18] = {
    [sym_identifier] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
  },
  [19] = {
    [sym_identifier] = ACTIONS(53),
  },
  [20] = {
    [sym_identifier] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [11] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [18] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [20] = {.count = 1, .reusable = true}, SHIFT(9),
  [22] = {.count = 1, .reusable = true}, SHIFT(10),
  [24] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_definition, 3),
  [26] = {.count = 1, .reusable = true}, SHIFT(12),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 2),
  [30] = {.count = 1, .reusable = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = false}, SHIFT(15),
  [34] = {.count = 1, .reusable = false}, SHIFT(16),
  [36] = {.count = 1, .reusable = true}, SHIFT(17),
  [38] = {.count = 1, .reusable = true}, REDUCE(sym_datasource_block, 3),
  [40] = {.count = 2, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_datasource_block_repeat1, 2),
  [45] = {.count = 1, .reusable = true}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_boolean, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_assignee, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym__datasource_statement, 3),
  [53] = {.count = 1, .reusable = true}, SHIFT(20),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__environment_variable, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_prisma(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
