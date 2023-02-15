#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACK_AMP_AMPNHX = 6,
  anon_sym_RBRACK = 7,
  anon_sym_EQ = 8,
  sym__nhx_safe = 9,
  sym_float = 10,
  sym_name = 11,
  sym_source_file = 12,
  sym_tree = 13,
  sym__node = 14,
  sym_leaf = 15,
  sym_clade = 16,
  sym_attributes = 17,
  sym__nhx = 18,
  sym_nhx_entry = 19,
  sym_length = 20,
  sym_nhx_val = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_clade_repeat1 = 23,
  aux_sym__nhx_repeat1 = 24,
  aux_sym_nhx_val_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK_AMP_AMPNHX] = "[&&NHX",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym__nhx_safe] = "_nhx_safe",
  [sym_float] = "float",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym_tree] = "tree",
  [sym__node] = "_node",
  [sym_leaf] = "leaf",
  [sym_clade] = "clade",
  [sym_attributes] = "attributes",
  [sym__nhx] = "_nhx",
  [sym_nhx_entry] = "nhx_entry",
  [sym_length] = "length",
  [sym_nhx_val] = "nhx_val",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_clade_repeat1] = "clade_repeat1",
  [aux_sym__nhx_repeat1] = "_nhx_repeat1",
  [aux_sym_nhx_val_repeat1] = "nhx_val_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK_AMP_AMPNHX] = anon_sym_LBRACK_AMP_AMPNHX,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__nhx_safe] = sym__nhx_safe,
  [sym_float] = sym_float,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym_tree] = sym_tree,
  [sym__node] = sym__node,
  [sym_leaf] = sym_leaf,
  [sym_clade] = sym_clade,
  [sym_attributes] = sym_attributes,
  [sym__nhx] = sym__nhx,
  [sym_nhx_entry] = sym_nhx_entry,
  [sym_length] = sym_length,
  [sym_nhx_val] = sym_nhx_val,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_clade_repeat1] = aux_sym_clade_repeat1,
  [aux_sym__nhx_repeat1] = aux_sym__nhx_repeat1,
  [aux_sym_nhx_val_repeat1] = aux_sym_nhx_val_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_AMP_AMPNHX] = {
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
  [sym__nhx_safe] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_tree] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_leaf] = {
    .visible = true,
    .named = true,
  },
  [sym_clade] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__nhx] = {
    .visible = false,
    .named = true,
  },
  [sym_nhx_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_length] = {
    .visible = true,
    .named = true,
  },
  [sym_nhx_val] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clade_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__nhx_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nhx_val_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attributes = 1,
  field_clade = 2,
  field_key = 3,
  field_leaf = 4,
  field_length = 5,
  field_name = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_clade] = "clade",
  [field_key] = "key",
  [field_leaf] = "leaf",
  [field_length] = "length",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 4},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 4},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_leaf, 0},
  [2] =
    {field_clade, 0},
  [3] =
    {field_attributes, 1},
    {field_name, 0},
  [5] =
    {field_clade, 0, .inherited = true},
    {field_leaf, 0, .inherited = true},
  [7] =
    {field_clade, 1, .inherited = true},
    {field_leaf, 1, .inherited = true},
  [9] =
    {field_clade, 0, .inherited = true},
    {field_clade, 1, .inherited = true},
    {field_leaf, 0, .inherited = true},
    {field_leaf, 1, .inherited = true},
  [13] =
    {field_length, 1},
  [14] =
    {field_clade, 1, .inherited = true},
    {field_clade, 2, .inherited = true},
    {field_leaf, 1, .inherited = true},
    {field_leaf, 2, .inherited = true},
  [18] =
    {field_key, 1},
  [19] =
    {field_key, 1},
    {field_value, 3},
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
  [4] = 4,
  [5] = 5,
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
};

static inline bool sym__nhx_safe_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= ',' || (c < '['
      ? (c < '='
        ? (c >= ':' && c <= ';')
        : c <= '=')
      : (c <= '[' || c == ']'))));
}

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= ')' || (c < '['
      ? (c < ':'
        ? c == ','
        : c <= ';')
      : (c <= '[' || c == ']'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'H') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'N') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(33);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK_AMP_AMPNHX);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__nhx_safe);
      if (!sym__nhx_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (!sym_name_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK_AMP_AMPNHX] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__nhx_safe] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_tree] = STATE(8),
    [sym__node] = STATE(47),
    [sym_leaf] = STATE(27),
    [sym_clade] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(15), 1,
      sym_name,
    STATE(31), 1,
      sym__nhx,
    STATE(35), 1,
      sym_attributes,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21] = 8,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_clade_repeat1,
    STATE(27), 1,
      sym_leaf,
    STATE(40), 1,
      sym__node,
    STATE(42), 1,
      sym_clade,
  [46] = 6,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(23), 1,
      sym_name,
    STATE(23), 1,
      sym_attributes,
    STATE(31), 1,
      sym__nhx,
    ACTIONS(21), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [67] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      sym_name,
    STATE(27), 1,
      sym_leaf,
    STATE(42), 1,
      sym_clade,
    STATE(47), 1,
      sym__node,
    STATE(5), 2,
      sym_tree,
      aux_sym_source_file_repeat1,
  [90] = 6,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(33), 1,
      sym_name,
    STATE(31), 1,
      sym__nhx,
    STATE(32), 1,
      sym_attributes,
    ACTIONS(21), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [111] = 6,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(37), 1,
      sym_name,
    STATE(31), 1,
      sym__nhx,
    STATE(38), 1,
      sym_attributes,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [132] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_leaf,
    STATE(42), 1,
      sym_clade,
    STATE(47), 1,
      sym__node,
    STATE(5), 2,
      sym_tree,
      aux_sym_source_file_repeat1,
  [155] = 5,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(31), 1,
      sym__nhx,
    STATE(41), 1,
      sym_attributes,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [173] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_name,
    STATE(27), 1,
      sym_leaf,
    STATE(42), 1,
      sym_clade,
    STATE(44), 1,
      sym__node,
    ACTIONS(43), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [193] = 5,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(31), 1,
      sym__nhx,
    STATE(33), 1,
      sym_attributes,
    ACTIONS(45), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [211] = 5,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(31), 1,
      sym__nhx,
    STATE(37), 1,
      sym_attributes,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [229] = 5,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(26), 1,
      sym_attributes,
    STATE(31), 1,
      sym__nhx,
    ACTIONS(47), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [247] = 5,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(30), 1,
      sym_attributes,
    STATE(31), 1,
      sym__nhx,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [265] = 3,
    ACTIONS(53), 1,
      sym__nhx_safe,
    STATE(18), 1,
      aux_sym_nhx_val_repeat1,
    ACTIONS(51), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [277] = 3,
    ACTIONS(13), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(36), 1,
      sym__nhx,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [289] = 4,
    ACTIONS(59), 1,
      sym__nhx_safe,
    STATE(15), 1,
      aux_sym_nhx_val_repeat1,
    STATE(45), 1,
      sym_nhx_val,
    ACTIONS(57), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [303] = 3,
    ACTIONS(63), 1,
      sym__nhx_safe,
    STATE(18), 1,
      aux_sym_nhx_val_repeat1,
    ACTIONS(61), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [315] = 3,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(19), 2,
      sym_nhx_entry,
      aux_sym__nhx_repeat1,
  [326] = 3,
    ACTIONS(71), 1,
      anon_sym_COLON,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(19), 2,
      sym_nhx_entry,
      aux_sym__nhx_repeat1,
  [337] = 1,
    ACTIONS(75), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_AMP_AMPNHX,
  [344] = 3,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_clade_repeat1,
  [354] = 1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [360] = 3,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_clade_repeat1,
  [370] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_clade_repeat1,
  [380] = 1,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [386] = 1,
    ACTIONS(88), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [392] = 3,
    ACTIONS(59), 1,
      sym__nhx_safe,
    STATE(15), 1,
      aux_sym_nhx_val_repeat1,
    STATE(46), 1,
      sym_nhx_val,
  [402] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      sym_name,
  [408] = 1,
    ACTIONS(92), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [414] = 1,
    ACTIONS(94), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [420] = 1,
    ACTIONS(41), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [426] = 1,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [432] = 2,
    ACTIONS(71), 1,
      anon_sym_COLON,
    STATE(20), 2,
      sym_nhx_entry,
      aux_sym__nhx_repeat1,
  [440] = 1,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [446] = 1,
    ACTIONS(98), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [452] = 1,
    ACTIONS(100), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [458] = 1,
    ACTIONS(47), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [464] = 1,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [470] = 3,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_clade_repeat1,
  [480] = 1,
    ACTIONS(100), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [486] = 1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [492] = 2,
    ACTIONS(108), 1,
      sym_float,
    STATE(16), 1,
      sym_length,
  [499] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [504] = 1,
    ACTIONS(112), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [509] = 1,
    ACTIONS(114), 1,
      anon_sym_EQ,
  [513] = 1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
  [517] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 193,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 289,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 315,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 337,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 392,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 408,
  [SMALL_STATE(31)] = 414,
  [SMALL_STATE(32)] = 420,
  [SMALL_STATE(33)] = 426,
  [SMALL_STATE(34)] = 432,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 458,
  [SMALL_STATE(39)] = 464,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 480,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 492,
  [SMALL_STATE(44)] = 499,
  [SMALL_STATE(45)] = 504,
  [SMALL_STATE(46)] = 509,
  [SMALL_STATE(47)] = 513,
  [SMALL_STATE(48)] = 517,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 3, .production_id = 6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4, .production_id = 9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4, .production_id = 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf, 1, .production_id = 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 5, .production_id = 9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_val, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2, .production_id = 8),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_entry, 3, .production_id = 10),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nhx_val_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nhx_val_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__nhx_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__nhx_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 7), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 6, .production_id = 9),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tree, 2, .production_id = 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf, 2, .production_id = 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3, .production_id = 8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 5, .production_id = 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nhx, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_entry, 4, .production_id = 11),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_newick(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
