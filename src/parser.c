#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_if = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_erlang = 5,
  anon_sym_javascript = 6,
  anon_sym_import = 7,
  anon_sym_DOT = 8,
  anon_sym_COMMA = 9,
  anon_sym_as = 10,
  anon_sym_SLASH = 11,
  sym__name = 12,
  sym__upname = 13,
  sym_source_file = 14,
  sym_target_group = 15,
  sym__statement = 16,
  sym_target = 17,
  sym_import = 18,
  sym_module = 19,
  sym_unqualified_import = 20,
  sym_alias = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_target_group_repeat1 = 23,
  aux_sym_import_repeat1 = 24,
  aux_sym_module_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_if] = "if",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_erlang] = "erlang",
  [anon_sym_javascript] = "javascript",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_as] = "as",
  [anon_sym_SLASH] = "/",
  [sym__name] = "_name",
  [sym__upname] = "_upname",
  [sym_source_file] = "source_file",
  [sym_target_group] = "target_group",
  [sym__statement] = "_statement",
  [sym_target] = "target",
  [sym_import] = "import",
  [sym_module] = "module",
  [sym_unqualified_import] = "unqualified_import",
  [sym_alias] = "alias",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_target_group_repeat1] = "target_group_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_erlang] = anon_sym_erlang,
  [anon_sym_javascript] = anon_sym_javascript,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym__name] = sym__name,
  [sym__upname] = sym__upname,
  [sym_source_file] = sym_source_file,
  [sym_target_group] = sym_target_group,
  [sym__statement] = sym__statement,
  [sym_target] = sym_target,
  [sym_import] = sym_import,
  [sym_module] = sym_module,
  [sym_unqualified_import] = sym_unqualified_import,
  [sym_alias] = sym_alias,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_target_group_repeat1] = aux_sym_target_group_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
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
  [anon_sym_erlang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_javascript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__upname] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_target_group] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_import] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_target_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_body = 2,
  field_module = 3,
  field_target = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_module] = "module",
  [field_target] = "target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 1},
  [1] =
    {field_target, 1},
  [2] =
    {field_alias, 3},
    {field_module, 1},
  [4] =
    {field_body, 3},
    {field_target, 1},
  [6] =
    {field_alias, 2},
  [7] =
    {field_alias, 7},
    {field_module, 1},
  [9] =
    {field_alias, 8},
    {field_module, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [2] = sym_alias,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(0)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'j') ADVANCE(2);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(1)
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'v') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(22)
      if (lookahead == '\r') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ' ||
          lookahead == ';') SKIP(0)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'j') ADVANCE(2);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_erlang);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_javascript);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 22},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 22},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 22},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_erlang] = ACTIONS(1),
    [anon_sym_javascript] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym__upname] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_target_group] = STATE(61),
    [sym__statement] = STATE(61),
    [sym_import] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_target_group,
      sym__statement,
      sym_import,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(16), 1,
      anon_sym_import,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(61), 3,
      sym_target_group,
      sym__statement,
      sym_import,
  [36] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_module_repeat1,
    ACTIONS(19), 4,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
  [49] = 3,
    ACTIONS(26), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_module_repeat1,
    ACTIONS(24), 4,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
  [62] = 3,
    ACTIONS(26), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      aux_sym_module_repeat1,
    ACTIONS(28), 4,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
  [75] = 3,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_import,
    STATE(9), 3,
      sym__statement,
      sym_import,
      aux_sym_target_group_repeat1,
  [87] = 1,
    ACTIONS(19), 5,
      anon_sym_RBRACE,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
  [95] = 3,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_import,
    STATE(9), 3,
      sym__statement,
      sym_import,
      aux_sym_target_group_repeat1,
  [107] = 4,
    ACTIONS(28), 1,
      aux_sym_source_file_token1,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      aux_sym_module_repeat1,
    ACTIONS(39), 2,
      anon_sym_DOT,
      anon_sym_as,
  [121] = 4,
    ACTIONS(19), 1,
      aux_sym_source_file_token1,
    ACTIONS(45), 1,
      anon_sym_SLASH,
    STATE(11), 1,
      aux_sym_module_repeat1,
    ACTIONS(43), 2,
      anon_sym_DOT,
      anon_sym_as,
  [135] = 3,
    ACTIONS(32), 1,
      anon_sym_import,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(7), 3,
      sym__statement,
      sym_import,
      aux_sym_target_group_repeat1,
  [147] = 4,
    ACTIONS(24), 1,
      aux_sym_source_file_token1,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    STATE(11), 1,
      aux_sym_module_repeat1,
    ACTIONS(50), 2,
      anon_sym_DOT,
      anon_sym_as,
  [161] = 3,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(56), 1,
      anon_sym_as,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [172] = 2,
    ACTIONS(19), 1,
      aux_sym_source_file_token1,
    ACTIONS(43), 3,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
  [181] = 3,
    ACTIONS(58), 1,
      sym__name,
    ACTIONS(60), 1,
      sym__upname,
    STATE(29), 1,
      sym_unqualified_import,
  [191] = 2,
    ACTIONS(64), 1,
      anon_sym_as,
    ACTIONS(62), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [199] = 1,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_if,
      anon_sym_import,
  [205] = 3,
    ACTIONS(58), 1,
      sym__name,
    ACTIONS(60), 1,
      sym__upname,
    STATE(21), 1,
      sym_unqualified_import,
  [215] = 3,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_import_repeat1,
  [225] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_import_repeat1,
  [235] = 3,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_import_repeat1,
  [245] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_import_repeat1,
  [255] = 3,
    ACTIONS(52), 1,
      aux_sym_source_file_token1,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_as,
  [265] = 2,
    ACTIONS(85), 1,
      anon_sym_as,
    ACTIONS(83), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [273] = 2,
    STATE(59), 1,
      sym_target,
    ACTIONS(87), 2,
      anon_sym_erlang,
      anon_sym_javascript,
  [281] = 2,
    ACTIONS(91), 1,
      anon_sym_as,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [289] = 2,
    ACTIONS(93), 1,
      anon_sym_as,
    ACTIONS(89), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [297] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_import_repeat1,
  [307] = 3,
    ACTIONS(58), 1,
      sym__name,
    ACTIONS(60), 1,
      sym__upname,
    STATE(37), 1,
      sym_unqualified_import,
  [317] = 1,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [322] = 2,
    ACTIONS(62), 1,
      aux_sym_source_file_token1,
    ACTIONS(99), 1,
      anon_sym_as,
  [329] = 2,
    ACTIONS(101), 1,
      sym__name,
    STATE(14), 1,
      sym_module,
  [336] = 2,
    ACTIONS(103), 1,
      sym__name,
    STATE(31), 1,
      sym_alias,
  [343] = 1,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [348] = 2,
    ACTIONS(107), 1,
      sym__name,
    STATE(49), 1,
      sym_alias,
  [355] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [360] = 2,
    ACTIONS(83), 1,
      aux_sym_source_file_token1,
    ACTIONS(109), 1,
      anon_sym_as,
  [367] = 2,
    ACTIONS(103), 1,
      sym__name,
    STATE(43), 1,
      sym_alias,
  [374] = 2,
    ACTIONS(107), 1,
      sym__name,
    STATE(48), 1,
      sym_alias,
  [381] = 2,
    ACTIONS(103), 1,
      sym__name,
    STATE(42), 1,
      sym_alias,
  [388] = 1,
    ACTIONS(111), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [393] = 1,
    ACTIONS(113), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [398] = 2,
    ACTIONS(107), 1,
      sym__name,
    STATE(54), 1,
      sym_alias,
  [405] = 2,
    ACTIONS(115), 1,
      sym__name,
    STATE(24), 1,
      sym_module,
  [412] = 1,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      anon_sym_import,
  [417] = 1,
    ACTIONS(119), 1,
      sym__name,
  [421] = 1,
    ACTIONS(113), 1,
      aux_sym_source_file_token1,
  [425] = 1,
    ACTIONS(97), 1,
      aux_sym_source_file_token1,
  [429] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [433] = 1,
    ACTIONS(123), 1,
      sym__upname,
  [437] = 1,
    ACTIONS(123), 1,
      sym__name,
  [441] = 1,
    ACTIONS(125), 1,
      aux_sym_source_file_token1,
  [445] = 1,
    ACTIONS(111), 1,
      aux_sym_source_file_token1,
  [449] = 1,
    ACTIONS(117), 1,
      aux_sym_source_file_token1,
  [453] = 1,
    ACTIONS(127), 1,
      aux_sym_source_file_token1,
  [457] = 1,
    ACTIONS(129), 1,
      sym__name,
  [461] = 1,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
  [465] = 1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [469] = 1,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
  [473] = 1,
    ACTIONS(137), 1,
      aux_sym_source_file_token1,
  [477] = 1,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 172,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 191,
  [SMALL_STATE(18)] = 199,
  [SMALL_STATE(19)] = 205,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 225,
  [SMALL_STATE(22)] = 235,
  [SMALL_STATE(23)] = 245,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 273,
  [SMALL_STATE(27)] = 281,
  [SMALL_STATE(28)] = 289,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 307,
  [SMALL_STATE(31)] = 317,
  [SMALL_STATE(32)] = 322,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 336,
  [SMALL_STATE(35)] = 343,
  [SMALL_STATE(36)] = 348,
  [SMALL_STATE(37)] = 355,
  [SMALL_STATE(38)] = 360,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 374,
  [SMALL_STATE(41)] = 381,
  [SMALL_STATE(42)] = 388,
  [SMALL_STATE(43)] = 393,
  [SMALL_STATE(44)] = 398,
  [SMALL_STATE(45)] = 405,
  [SMALL_STATE(46)] = 412,
  [SMALL_STATE(47)] = 417,
  [SMALL_STATE(48)] = 421,
  [SMALL_STATE(49)] = 425,
  [SMALL_STATE(50)] = 429,
  [SMALL_STATE(51)] = 433,
  [SMALL_STATE(52)] = 437,
  [SMALL_STATE(53)] = 441,
  [SMALL_STATE(54)] = 445,
  [SMALL_STATE(55)] = 449,
  [SMALL_STATE(56)] = 453,
  [SMALL_STATE(57)] = 457,
  [SMALL_STATE(58)] = 461,
  [SMALL_STATE(59)] = 465,
  [SMALL_STATE(60)] = 469,
  [SMALL_STATE(61)] = 473,
  [SMALL_STATE(62)] = 477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(57),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_target_group_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_target_group_repeat1, 2), SHIFT_REPEAT(33),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(47),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 7, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 8, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 9, .production_id = 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 5, .production_id = 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_group, 4, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gleam(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
