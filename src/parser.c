#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 39
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 2
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__open_start_tag = 1,
  sym__close_start_tag = 2,
  sym__self_close_start_tag = 3,
  sym_end_tag = 4,
  sym__implicit_end_tag = 5,
  sym__erroneous_end_tag = 6,
  anon_sym_EQ = 7,
  sym__attribute_part = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 12,
  sym_text = 13,
  sym_fragment = 14,
  sym__node = 15,
  sym_element = 16,
  sym_start_tag = 17,
  sym_self_closing_tag = 18,
  sym_attribute = 19,
  sym_quoted_attribute_value = 20,
  aux_sym_fragment_repeat1 = 21,
  aux_sym_start_tag_repeat1 = 22,
  alias_sym_attribute_name = 23,
  alias_sym_attribute_value = 24,
};

static const char *ts_symbol_names[] = {
  [sym__open_start_tag] = "_open_start_tag",
  [sym__close_start_tag] = "_close_start_tag",
  [sym__self_close_start_tag] = "_self_close_start_tag",
  [sym_end_tag] = "end_tag",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym__erroneous_end_tag] = "_erroneous_end_tag",
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [sym__attribute_part] = "_attribute_part",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = "/[^']+/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = "/[^\"]+/",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_attribute_value] = "attribute_value",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__open_start_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__close_start_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__self_close_start_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__erroneous_end_tag] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__attribute_part] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_attribute_name,
  },
  [2] = {
    [0] = alias_sym_attribute_name,
    [2] = alias_sym_attribute_value,
  },
  [3] = {
    [1] = alias_sym_attribute_value,
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
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(5);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__attribute_part);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(7);
      if (lookahead != '<' &&
          lookahead != '>')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '=')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(11);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      if (lookahead != 0 &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 6, .external_lex_state = 2},
  [2] = {.lex_state = 9, .external_lex_state = 3},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 6, .external_lex_state = 4},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 4},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 11, .external_lex_state = 3},
  [11] = {.lex_state = 9, .external_lex_state = 3},
  [12] = {.lex_state = 9, .external_lex_state = 3},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 4},
  [15] = {.lex_state = 6, .external_lex_state = 4},
  [16] = {.lex_state = 6, .external_lex_state = 4},
  [17] = {.lex_state = 6, .external_lex_state = 4},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 6, .external_lex_state = 4},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 9, .external_lex_state = 3},
  [23] = {.lex_state = 6, .external_lex_state = 4},
  [24] = {.lex_state = 9, .external_lex_state = 3},
  [25] = {.lex_state = 6, .external_lex_state = 4},
  [26] = {.lex_state = 6, .external_lex_state = 4},
  [27] = {.lex_state = 6, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 4},
  [29] = {.lex_state = 9, .external_lex_state = 3},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 9, .external_lex_state = 3},
  [33] = {.lex_state = 6, .external_lex_state = 4},
  [34] = {.lex_state = 6, .external_lex_state = 4},
  [35] = {.lex_state = 9, .external_lex_state = 3},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9, .external_lex_state = 3},
};

enum {
  ts_external_token__open_start_tag,
  ts_external_token__close_start_tag,
  ts_external_token__self_close_start_tag,
  ts_external_token_end_tag,
  ts_external_token__implicit_end_tag,
  ts_external_token__erroneous_end_tag,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__open_start_tag] = sym__open_start_tag,
  [ts_external_token__close_start_tag] = sym__close_start_tag,
  [ts_external_token__self_close_start_tag] = sym__self_close_start_tag,
  [ts_external_token_end_tag] = sym_end_tag,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token__erroneous_end_tag] = sym__erroneous_end_tag,
};

static bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
  },
  [2] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
  },
  [3] = {
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
  },
  [4] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__open_start_tag] = ACTIONS(1),
    [sym__close_start_tag] = ACTIONS(1),
    [sym__self_close_start_tag] = ACTIONS(1),
    [sym_end_tag] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym__erroneous_end_tag] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__attribute_part] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(4),
    [sym__node] = STATE(7),
    [sym_element] = STATE(3),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(7),
    [sym__open_start_tag] = ACTIONS(3),
    [sym__erroneous_end_tag] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_text] = ACTIONS(5),
  },
  [2] = {
    [sym_attribute] = STATE(11),
    [aux_sym_start_tag_repeat1] = STATE(11),
    [sym__close_start_tag] = ACTIONS(9),
    [sym__self_close_start_tag] = ACTIONS(11),
    [sym__attribute_part] = ACTIONS(13),
  },
  [3] = {
    [sym__open_start_tag] = ACTIONS(15),
    [sym__erroneous_end_tag] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
  },
  [5] = {
    [sym__node] = STATE(17),
    [sym_element] = STATE(14),
    [sym_start_tag] = STATE(15),
    [sym_self_closing_tag] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(17),
    [sym__open_start_tag] = ACTIONS(19),
    [sym_end_tag] = ACTIONS(21),
    [sym__implicit_end_tag] = ACTIONS(21),
    [sym__erroneous_end_tag] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
  },
  [6] = {
    [sym__open_start_tag] = ACTIONS(25),
    [sym__erroneous_end_tag] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_text] = ACTIONS(25),
  },
  [7] = {
    [sym__node] = STATE(18),
    [sym_element] = STATE(3),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(18),
    [sym__open_start_tag] = ACTIONS(3),
    [sym__erroneous_end_tag] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_text] = ACTIONS(5),
  },
  [8] = {
    [sym__open_start_tag] = ACTIONS(29),
    [sym_end_tag] = ACTIONS(29),
    [sym__implicit_end_tag] = ACTIONS(29),
    [sym__erroneous_end_tag] = ACTIONS(29),
    [sym_text] = ACTIONS(29),
  },
  [9] = {
    [sym__open_start_tag] = ACTIONS(31),
    [sym__erroneous_end_tag] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_text] = ACTIONS(31),
  },
  [10] = {
    [sym__close_start_tag] = ACTIONS(33),
    [sym__self_close_start_tag] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(35),
    [sym__attribute_part] = ACTIONS(33),
  },
  [11] = {
    [sym_attribute] = STATE(22),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [sym__close_start_tag] = ACTIONS(37),
    [sym__self_close_start_tag] = ACTIONS(39),
    [sym__attribute_part] = ACTIONS(13),
  },
  [12] = {
    [sym_attribute] = STATE(24),
    [aux_sym_start_tag_repeat1] = STATE(24),
    [sym__close_start_tag] = ACTIONS(9),
    [sym__self_close_start_tag] = ACTIONS(41),
    [sym__attribute_part] = ACTIONS(13),
  },
  [13] = {
    [sym__open_start_tag] = ACTIONS(43),
    [sym__erroneous_end_tag] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_text] = ACTIONS(43),
  },
  [14] = {
    [sym__open_start_tag] = ACTIONS(15),
    [sym_end_tag] = ACTIONS(15),
    [sym__implicit_end_tag] = ACTIONS(15),
    [sym__erroneous_end_tag] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
  },
  [15] = {
    [sym__node] = STATE(26),
    [sym_element] = STATE(14),
    [sym_start_tag] = STATE(15),
    [sym_self_closing_tag] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(26),
    [sym__open_start_tag] = ACTIONS(19),
    [sym_end_tag] = ACTIONS(45),
    [sym__implicit_end_tag] = ACTIONS(45),
    [sym__erroneous_end_tag] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
  },
  [16] = {
    [sym__open_start_tag] = ACTIONS(25),
    [sym_end_tag] = ACTIONS(25),
    [sym__implicit_end_tag] = ACTIONS(25),
    [sym__erroneous_end_tag] = ACTIONS(25),
    [sym_text] = ACTIONS(25),
  },
  [17] = {
    [sym__node] = STATE(28),
    [sym_element] = STATE(14),
    [sym_start_tag] = STATE(15),
    [sym_self_closing_tag] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(28),
    [sym__open_start_tag] = ACTIONS(19),
    [sym_end_tag] = ACTIONS(47),
    [sym__implicit_end_tag] = ACTIONS(47),
    [sym__erroneous_end_tag] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
  },
  [18] = {
    [sym__node] = STATE(18),
    [sym_element] = STATE(3),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(18),
    [sym__open_start_tag] = ACTIONS(49),
    [sym__erroneous_end_tag] = ACTIONS(52),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_text] = ACTIONS(52),
  },
  [19] = {
    [sym_quoted_attribute_value] = STATE(32),
    [sym__attribute_part] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
  },
  [20] = {
    [sym__open_start_tag] = ACTIONS(63),
    [sym_end_tag] = ACTIONS(63),
    [sym__implicit_end_tag] = ACTIONS(63),
    [sym__erroneous_end_tag] = ACTIONS(63),
    [sym_text] = ACTIONS(63),
  },
  [21] = {
    [sym__open_start_tag] = ACTIONS(65),
    [sym__erroneous_end_tag] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [22] = {
    [sym_attribute] = STATE(22),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [sym__close_start_tag] = ACTIONS(67),
    [sym__self_close_start_tag] = ACTIONS(67),
    [sym__attribute_part] = ACTIONS(69),
  },
  [23] = {
    [sym__open_start_tag] = ACTIONS(31),
    [sym_end_tag] = ACTIONS(31),
    [sym__implicit_end_tag] = ACTIONS(31),
    [sym__erroneous_end_tag] = ACTIONS(31),
    [sym_text] = ACTIONS(31),
  },
  [24] = {
    [sym_attribute] = STATE(22),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [sym__close_start_tag] = ACTIONS(37),
    [sym__self_close_start_tag] = ACTIONS(72),
    [sym__attribute_part] = ACTIONS(13),
  },
  [25] = {
    [sym__open_start_tag] = ACTIONS(43),
    [sym_end_tag] = ACTIONS(43),
    [sym__implicit_end_tag] = ACTIONS(43),
    [sym__erroneous_end_tag] = ACTIONS(43),
    [sym_text] = ACTIONS(43),
  },
  [26] = {
    [sym__node] = STATE(28),
    [sym_element] = STATE(14),
    [sym_start_tag] = STATE(15),
    [sym_self_closing_tag] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(28),
    [sym__open_start_tag] = ACTIONS(19),
    [sym_end_tag] = ACTIONS(74),
    [sym__implicit_end_tag] = ACTIONS(74),
    [sym__erroneous_end_tag] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
  },
  [27] = {
    [sym__open_start_tag] = ACTIONS(76),
    [sym__erroneous_end_tag] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_text] = ACTIONS(76),
  },
  [28] = {
    [sym__node] = STATE(28),
    [sym_element] = STATE(14),
    [sym_start_tag] = STATE(15),
    [sym_self_closing_tag] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(28),
    [sym__open_start_tag] = ACTIONS(78),
    [sym_end_tag] = ACTIONS(55),
    [sym__implicit_end_tag] = ACTIONS(55),
    [sym__erroneous_end_tag] = ACTIONS(81),
    [sym_text] = ACTIONS(81),
  },
  [29] = {
    [sym__close_start_tag] = ACTIONS(84),
    [sym__self_close_start_tag] = ACTIONS(84),
    [sym__attribute_part] = ACTIONS(84),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(88),
  },
  [31] = {
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(90),
  },
  [32] = {
    [sym__close_start_tag] = ACTIONS(92),
    [sym__self_close_start_tag] = ACTIONS(92),
    [sym__attribute_part] = ACTIONS(92),
  },
  [33] = {
    [sym__open_start_tag] = ACTIONS(65),
    [sym_end_tag] = ACTIONS(65),
    [sym__implicit_end_tag] = ACTIONS(65),
    [sym__erroneous_end_tag] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [34] = {
    [sym__open_start_tag] = ACTIONS(76),
    [sym_end_tag] = ACTIONS(76),
    [sym__implicit_end_tag] = ACTIONS(76),
    [sym__erroneous_end_tag] = ACTIONS(76),
    [sym_text] = ACTIONS(76),
  },
  [35] = {
    [sym__close_start_tag] = ACTIONS(94),
    [sym__self_close_start_tag] = ACTIONS(94),
    [sym__attribute_part] = ACTIONS(94),
  },
  [36] = {
    [anon_sym_SQUOTE] = ACTIONS(96),
  },
  [37] = {
    [anon_sym_DQUOTE] = ACTIONS(96),
  },
  [38] = {
    [sym__close_start_tag] = ACTIONS(98),
    [sym__self_close_start_tag] = ACTIONS(98),
    [sym__attribute_part] = ACTIONS(98),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
  [11] = {.count = 1, .reusable = true}, SHIFT(9),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym__node, 1),
  [17] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 2),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 2),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1, .alias_sequence_id = 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(23),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [45] = {.count = 1, .reusable = true}, SHIFT(25),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [69] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(10),
  [72] = {.count = 1, .reusable = true}, SHIFT(33),
  [74] = {.count = 1, .reusable = true}, SHIFT(34),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [78] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(12),
  [81] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3, .alias_sequence_id = 2),
  [86] = {.count = 1, .reusable = false}, SHIFT(35),
  [88] = {.count = 1, .reusable = true}, SHIFT(36),
  [90] = {.count = 1, .reusable = true}, SHIFT(37),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3, .alias_sequence_id = 1),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [96] = {.count = 1, .reusable = true}, SHIFT(38),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3, .alias_sequence_id = 3),
};

void *tree_sitter_html_external_scanner_create();
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_html() {
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
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_html_external_scanner_create,
      tree_sitter_html_external_scanner_destroy,
      tree_sitter_html_external_scanner_scan,
      tree_sitter_html_external_scanner_serialize,
      tree_sitter_html_external_scanner_deserialize,
    },
  };
  return &language;
}
