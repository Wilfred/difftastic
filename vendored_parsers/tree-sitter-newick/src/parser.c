#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum {
  anon_sym_SEMI = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_COLON = 5,
  anon_sym_LBRACK_AMP_AMPNHX = 6,
  anon_sym_RBRACK = 7,
  anon_sym_EQ = 8,
  sym__data_safe = 9,
  sym_float = 10,
  sym_name = 11,
  sym_source_file = 12,
  sym_tree = 13,
  sym__node = 14,
  sym_leaf = 15,
  sym_clade = 16,
  sym_attributes = 17,
  sym_data = 18,
  sym_nhx_entry = 19,
  sym_length = 20,
  sym_nhx_val = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_clade_repeat1 = 23,
  aux_sym_data_repeat1 = 24,
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
  [sym__data_safe] = "_data_safe",
  [sym_float] = "float",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym_tree] = "tree",
  [sym__node] = "_node",
  [sym_leaf] = "leaf",
  [sym_clade] = "clade",
  [sym_attributes] = "attributes",
  [sym_data] = "data",
  [sym_nhx_entry] = "nhx_entry",
  [sym_length] = "length",
  [sym_nhx_val] = "nhx_val",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_clade_repeat1] = "clade_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
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
  [sym__data_safe] = sym__data_safe,
  [sym_float] = sym_float,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym_tree] = sym_tree,
  [sym__node] = sym__node,
  [sym_leaf] = sym_leaf,
  [sym_clade] = sym_clade,
  [sym_attributes] = sym_attributes,
  [sym_data] = sym_data,
  [sym_nhx_entry] = sym_nhx_entry,
  [sym_length] = sym_length,
  [sym_nhx_val] = sym_nhx_val,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_clade_repeat1] = aux_sym_clade_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
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
  [sym__data_safe] = {
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
  [sym_data] = {
    .visible = true,
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
  [aux_sym_data_repeat1] = {
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
  field_data = 3,
  field_entry = 4,
  field_key = 5,
  field_leaf = 6,
  field_length = 7,
  field_name = 8,
  field_value = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_clade] = "clade",
  [field_data] = "data",
  [field_entry] = "entry",
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 4},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 4},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_leaf, 0},
  [2] =
    {field_clade, 0},
  [3] =
    {field_attributes, 0},
  [4] =
    {field_data, 0},
  [5] =
    {field_length, 1},
  [6] =
    {field_entry, 0},
  [7] =
    {field_attributes, 1},
    {field_name, 0},
  [9] =
    {field_clade, 0, .inherited = true},
    {field_leaf, 0, .inherited = true},
  [11] =
    {field_clade, 1, .inherited = true},
    {field_leaf, 1, .inherited = true},
  [13] =
    {field_clade, 0, .inherited = true},
    {field_clade, 1, .inherited = true},
    {field_leaf, 0, .inherited = true},
    {field_leaf, 1, .inherited = true},
  [17] =
    {field_data, 2},
    {field_length, 1},
  [19] =
    {field_entry, 1, .inherited = true},
  [20] =
    {field_entry, 0, .inherited = true},
    {field_entry, 1, .inherited = true},
  [22] =
    {field_clade, 1, .inherited = true},
    {field_clade, 2, .inherited = true},
    {field_leaf, 1, .inherited = true},
    {field_leaf, 2, .inherited = true},
  [26] =
    {field_key, 1},
  [27] =
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
  [49] = 49,
  [50] = 50,
};

static inline bool sym__data_safe_character_set_1(int32_t c) {
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
      ACCEPT_TOKEN(sym__data_safe);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__data_safe);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__data_safe);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__data_safe);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__data_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__data_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__data_safe);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__data_safe);
      if (!sym__data_safe_character_set_1(lookahead)) ADVANCE(29);
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
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
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
    [sym__data_safe] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_tree] = STATE(4),
    [sym__node] = STATE(49),
    [sym_leaf] = STATE(38),
    [sym_clade] = STATE(30),
    [sym_attributes] = STATE(28),
    [sym_data] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_LBRACK_AMP_AMPNHX] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_attributes,
    STATE(30), 1,
      sym_clade,
    STATE(32), 1,
      sym_data,
    STATE(34), 1,
      sym__node,
    STATE(38), 1,
      sym_leaf,
    STATE(41), 1,
      aux_sym_clade_repeat1,
  [37] = 11,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(22), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(28), 1,
      sym_name,
    STATE(28), 1,
      sym_attributes,
    STATE(30), 1,
      sym_clade,
    STATE(32), 1,
      sym_data,
    STATE(38), 1,
      sym_leaf,
    STATE(49), 1,
      sym__node,
    STATE(3), 2,
      sym_tree,
      aux_sym_source_file_repeat1,
  [72] = 11,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_attributes,
    STATE(30), 1,
      sym_clade,
    STATE(32), 1,
      sym_data,
    STATE(38), 1,
      sym_leaf,
    STATE(49), 1,
      sym__node,
    STATE(3), 2,
      sym_tree,
      aux_sym_source_file_repeat1,
  [107] = 10,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(11), 1,
      sym_name,
    STATE(28), 1,
      sym_attributes,
    STATE(30), 1,
      sym_clade,
    STATE(32), 1,
      sym_data,
    STATE(38), 1,
      sym_leaf,
    STATE(47), 1,
      sym__node,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [139] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(37), 1,
      sym_name,
    STATE(32), 1,
      sym_data,
    STATE(33), 1,
      sym_attributes,
    ACTIONS(35), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [160] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(41), 1,
      sym_name,
    STATE(24), 1,
      sym_attributes,
    STATE(32), 1,
      sym_data,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [181] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(43), 1,
      sym_name,
    STATE(32), 1,
      sym_data,
    STATE(39), 1,
      sym_attributes,
    ACTIONS(39), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [202] = 6,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    ACTIONS(47), 1,
      sym_name,
    STATE(27), 1,
      sym_attributes,
    STATE(32), 1,
      sym_data,
    ACTIONS(45), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [223] = 5,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(25), 1,
      sym_attributes,
    STATE(32), 1,
      sym_data,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [241] = 5,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(26), 1,
      sym_attributes,
    STATE(32), 1,
      sym_data,
    ACTIONS(51), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [259] = 5,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(32), 1,
      sym_data,
    STATE(42), 1,
      sym_attributes,
    ACTIONS(53), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [277] = 5,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(32), 1,
      sym_data,
    STATE(40), 1,
      sym_attributes,
    ACTIONS(51), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [295] = 5,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(32), 1,
      sym_data,
    STATE(37), 1,
      sym_attributes,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [313] = 1,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_LBRACK_AMP_AMPNHX,
      sym_name,
  [321] = 3,
    ACTIONS(61), 1,
      sym__data_safe,
    STATE(16), 1,
      aux_sym_nhx_val_repeat1,
    ACTIONS(59), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [333] = 4,
    ACTIONS(66), 1,
      sym__data_safe,
    STATE(19), 1,
      aux_sym_nhx_val_repeat1,
    STATE(46), 1,
      sym_nhx_val,
    ACTIONS(64), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [347] = 3,
    ACTIONS(9), 1,
      anon_sym_LBRACK_AMP_AMPNHX,
    STATE(23), 1,
      sym_data,
    ACTIONS(68), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [359] = 3,
    ACTIONS(72), 1,
      sym__data_safe,
    STATE(16), 1,
      aux_sym_nhx_val_repeat1,
    ACTIONS(70), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [371] = 4,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_data_repeat1,
    STATE(44), 1,
      sym_nhx_entry,
  [384] = 1,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACK_AMP_AMPNHX,
  [391] = 4,
    ACTIONS(80), 1,
      anon_sym_COLON,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_data_repeat1,
    STATE(44), 1,
      sym_nhx_entry,
  [404] = 1,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [410] = 1,
    ACTIONS(51), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [416] = 1,
    ACTIONS(87), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [422] = 1,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [428] = 1,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [434] = 1,
    ACTIONS(91), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [440] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_clade_repeat1,
  [450] = 1,
    ACTIONS(95), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [456] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_clade_repeat1,
  [466] = 1,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [472] = 1,
    ACTIONS(49), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [478] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_clade_repeat1,
  [488] = 1,
    ACTIONS(106), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [494] = 3,
    ACTIONS(74), 1,
      anon_sym_COLON,
    STATE(20), 1,
      aux_sym_data_repeat1,
    STATE(44), 1,
      sym_nhx_entry,
  [504] = 1,
    ACTIONS(108), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [510] = 1,
    ACTIONS(110), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [516] = 1,
    ACTIONS(51), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [522] = 1,
    ACTIONS(89), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [528] = 3,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_clade_repeat1,
  [538] = 1,
    ACTIONS(114), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [544] = 3,
    ACTIONS(66), 1,
      sym__data_safe,
    STATE(19), 1,
      aux_sym_nhx_val_repeat1,
    STATE(50), 1,
      sym_nhx_val,
  [554] = 1,
    ACTIONS(116), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [559] = 2,
    ACTIONS(118), 1,
      sym_float,
    STATE(18), 1,
      sym_length,
  [566] = 1,
    ACTIONS(120), 2,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [571] = 1,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [576] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [580] = 1,
    ACTIONS(126), 1,
      anon_sym_SEMI,
  [584] = 1,
    ACTIONS(128), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 181,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 259,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 321,
  [SMALL_STATE(17)] = 333,
  [SMALL_STATE(18)] = 347,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 422,
  [SMALL_STATE(27)] = 428,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 456,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 478,
  [SMALL_STATE(35)] = 488,
  [SMALL_STATE(36)] = 494,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 522,
  [SMALL_STATE(41)] = 528,
  [SMALL_STATE(42)] = 538,
  [SMALL_STATE(43)] = 544,
  [SMALL_STATE(44)] = 554,
  [SMALL_STATE(45)] = 559,
  [SMALL_STATE(46)] = 566,
  [SMALL_STATE(47)] = 571,
  [SMALL_STATE(48)] = 576,
  [SMALL_STATE(49)] = 580,
  [SMALL_STATE(50)] = 584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4, .production_id = 15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 3, .production_id = 10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 5, .production_id = 15),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4, .production_id = 10),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf, 1, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tree, 2, .production_id = 9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nhx_val_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nhx_val_repeat1, 2), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_entry, 3, .production_id = 16),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2, .production_id = 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_val, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_length, 1),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2, .production_id = 14), SHIFT_REPEAT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 2, .production_id = 14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3, .production_id = 12),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 6, .production_id = 15),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 5, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf, 1, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, .production_id = 3),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 11), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 11),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 3, .production_id = 13),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clade, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_leaf, 2, .production_id = 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_repeat1, 1, .production_id = 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nhx_entry, 4, .production_id = 17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_clade_repeat1, 2, .production_id = 10),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
