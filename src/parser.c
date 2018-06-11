#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 36
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__open_start_tag = 1,
  sym__close_start_tag = 2,
  sym__self_close_start_tag = 3,
  sym_end_tag = 4,
  sym__implicit_end_tag = 5,
  sym__erroneous_end_tag = 6,
  sym_comment = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 14,
  sym_text = 15,
  sym_fragment = 16,
  sym__node = 17,
  sym_element = 18,
  sym_start_tag = 19,
  sym_self_closing_tag = 20,
  sym_attribute = 21,
  sym_quoted_attribute_value = 22,
  aux_sym_fragment_repeat1 = 23,
  aux_sym_start_tag_repeat1 = 24,
  alias_sym_attribute_value = 25,
};

static const char *ts_symbol_names[] = {
  [sym__open_start_tag] = "_open_start_tag",
  [sym__close_start_tag] = "_close_start_tag",
  [sym__self_close_start_tag] = "_self_close_start_tag",
  [sym_end_tag] = "end_tag",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym__erroneous_end_tag] = "_erroneous_end_tag",
  [sym_comment] = "comment",
  [ts_builtin_sym_end] = "END",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
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
  [sym_comment] = {
    .visible = true,
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
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
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
  [alias_sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
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
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if ((lookahead < '<' || lookahead > '>'))
        ADVANCE(6);
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
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      if (lookahead != '<' &&
          lookahead != '>')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == '=')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (lookahead != 0 &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 7, .external_lex_state = 2},
  [2] = {.lex_state = 10, .external_lex_state = 3},
  [3] = {.lex_state = 12, .external_lex_state = 4},
  [4] = {.lex_state = 7, .external_lex_state = 5},
  [5] = {.lex_state = 7, .external_lex_state = 2},
  [6] = {.lex_state = 7, .external_lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 5},
  [8] = {.lex_state = 7, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 3},
  [10] = {.lex_state = 10, .external_lex_state = 3},
  [11] = {.lex_state = 10, .external_lex_state = 3},
  [12] = {.lex_state = 7, .external_lex_state = 2},
  [13] = {.lex_state = 7, .external_lex_state = 5},
  [14] = {.lex_state = 7, .external_lex_state = 5},
  [15] = {.lex_state = 7, .external_lex_state = 5},
  [16] = {.lex_state = 7, .external_lex_state = 2},
  [17] = {.lex_state = 14, .external_lex_state = 4},
  [18] = {.lex_state = 7, .external_lex_state = 5},
  [19] = {.lex_state = 7, .external_lex_state = 2},
  [20] = {.lex_state = 10, .external_lex_state = 3},
  [21] = {.lex_state = 7, .external_lex_state = 5},
  [22] = {.lex_state = 10, .external_lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 5},
  [24] = {.lex_state = 7, .external_lex_state = 5},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 7, .external_lex_state = 5},
  [27] = {.lex_state = 10, .external_lex_state = 3},
  [28] = {.lex_state = 15, .external_lex_state = 4},
  [29] = {.lex_state = 18, .external_lex_state = 4},
  [30] = {.lex_state = 7, .external_lex_state = 5},
  [31] = {.lex_state = 7, .external_lex_state = 5},
  [32] = {.lex_state = 10, .external_lex_state = 3},
  [33] = {.lex_state = 21, .external_lex_state = 4},
  [34] = {.lex_state = 22, .external_lex_state = 4},
  [35] = {.lex_state = 10, .external_lex_state = 3},
};

enum {
  ts_external_token__open_start_tag,
  ts_external_token__close_start_tag,
  ts_external_token__self_close_start_tag,
  ts_external_token_end_tag,
  ts_external_token__implicit_end_tag,
  ts_external_token__erroneous_end_tag,
  ts_external_token_comment,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__open_start_tag] = sym__open_start_tag,
  [ts_external_token__close_start_tag] = sym__close_start_tag,
  [ts_external_token__self_close_start_tag] = sym__self_close_start_tag,
  [ts_external_token_end_tag] = sym_end_tag,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token__erroneous_end_tag] = sym__erroneous_end_tag,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token_comment] = true,
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
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(3),
    [sym_attribute_value] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(3),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(6),
    [sym__open_start_tag] = ACTIONS(5),
    [sym__erroneous_end_tag] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_text] = ACTIONS(7),
  },
  [2] = {
    [sym_attribute] = STATE(10),
    [aux_sym_start_tag_repeat1] = STATE(10),
    [sym__close_start_tag] = ACTIONS(13),
    [sym__self_close_start_tag] = ACTIONS(15),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(17),
  },
  [3] = {
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(19),
  },
  [4] = {
    [sym__node] = STATE(15),
    [sym_element] = STATE(15),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_tag] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(15),
    [sym__open_start_tag] = ACTIONS(21),
    [sym_end_tag] = ACTIONS(23),
    [sym__implicit_end_tag] = ACTIONS(23),
    [sym__erroneous_end_tag] = ACTIONS(25),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(25),
  },
  [5] = {
    [sym__open_start_tag] = ACTIONS(27),
    [sym__erroneous_end_tag] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_text] = ACTIONS(27),
  },
  [6] = {
    [sym__node] = STATE(16),
    [sym_element] = STATE(16),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(16),
    [sym__open_start_tag] = ACTIONS(5),
    [sym__erroneous_end_tag] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_text] = ACTIONS(29),
  },
  [7] = {
    [sym__open_start_tag] = ACTIONS(33),
    [sym_end_tag] = ACTIONS(33),
    [sym__implicit_end_tag] = ACTIONS(33),
    [sym__erroneous_end_tag] = ACTIONS(33),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(33),
  },
  [8] = {
    [sym__open_start_tag] = ACTIONS(35),
    [sym__erroneous_end_tag] = ACTIONS(35),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_text] = ACTIONS(35),
  },
  [9] = {
    [sym__close_start_tag] = ACTIONS(37),
    [sym__self_close_start_tag] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(39),
    [sym_attribute_name] = ACTIONS(37),
  },
  [10] = {
    [sym_attribute] = STATE(20),
    [aux_sym_start_tag_repeat1] = STATE(20),
    [sym__close_start_tag] = ACTIONS(41),
    [sym__self_close_start_tag] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(17),
  },
  [11] = {
    [sym_attribute] = STATE(22),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [sym__close_start_tag] = ACTIONS(13),
    [sym__self_close_start_tag] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(17),
  },
  [12] = {
    [sym__open_start_tag] = ACTIONS(47),
    [sym__erroneous_end_tag] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_text] = ACTIONS(47),
  },
  [13] = {
    [sym__node] = STATE(24),
    [sym_element] = STATE(24),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_tag] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(24),
    [sym__open_start_tag] = ACTIONS(21),
    [sym_end_tag] = ACTIONS(49),
    [sym__implicit_end_tag] = ACTIONS(49),
    [sym__erroneous_end_tag] = ACTIONS(51),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(51),
  },
  [14] = {
    [sym__open_start_tag] = ACTIONS(27),
    [sym_end_tag] = ACTIONS(27),
    [sym__implicit_end_tag] = ACTIONS(27),
    [sym__erroneous_end_tag] = ACTIONS(27),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(27),
  },
  [15] = {
    [sym__node] = STATE(26),
    [sym_element] = STATE(26),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_tag] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(26),
    [sym__open_start_tag] = ACTIONS(21),
    [sym_end_tag] = ACTIONS(53),
    [sym__implicit_end_tag] = ACTIONS(53),
    [sym__erroneous_end_tag] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(55),
  },
  [16] = {
    [sym__node] = STATE(16),
    [sym_element] = STATE(16),
    [sym_start_tag] = STATE(4),
    [sym_self_closing_tag] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(16),
    [sym__open_start_tag] = ACTIONS(57),
    [sym__erroneous_end_tag] = ACTIONS(60),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_text] = ACTIONS(60),
  },
  [17] = {
    [sym_quoted_attribute_value] = STATE(27),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_value] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(69),
  },
  [18] = {
    [sym__open_start_tag] = ACTIONS(71),
    [sym_end_tag] = ACTIONS(71),
    [sym__implicit_end_tag] = ACTIONS(71),
    [sym__erroneous_end_tag] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(71),
  },
  [19] = {
    [sym__open_start_tag] = ACTIONS(73),
    [sym__erroneous_end_tag] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_text] = ACTIONS(73),
  },
  [20] = {
    [sym_attribute] = STATE(20),
    [aux_sym_start_tag_repeat1] = STATE(20),
    [sym__close_start_tag] = ACTIONS(75),
    [sym__self_close_start_tag] = ACTIONS(75),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(77),
  },
  [21] = {
    [sym__open_start_tag] = ACTIONS(35),
    [sym_end_tag] = ACTIONS(35),
    [sym__implicit_end_tag] = ACTIONS(35),
    [sym__erroneous_end_tag] = ACTIONS(35),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(35),
  },
  [22] = {
    [sym_attribute] = STATE(20),
    [aux_sym_start_tag_repeat1] = STATE(20),
    [sym__close_start_tag] = ACTIONS(41),
    [sym__self_close_start_tag] = ACTIONS(80),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(17),
  },
  [23] = {
    [sym__open_start_tag] = ACTIONS(47),
    [sym_end_tag] = ACTIONS(47),
    [sym__implicit_end_tag] = ACTIONS(47),
    [sym__erroneous_end_tag] = ACTIONS(47),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(47),
  },
  [24] = {
    [sym__node] = STATE(26),
    [sym_element] = STATE(26),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_tag] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(26),
    [sym__open_start_tag] = ACTIONS(21),
    [sym_end_tag] = ACTIONS(82),
    [sym__implicit_end_tag] = ACTIONS(82),
    [sym__erroneous_end_tag] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(55),
  },
  [25] = {
    [sym__open_start_tag] = ACTIONS(84),
    [sym__erroneous_end_tag] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_text] = ACTIONS(84),
  },
  [26] = {
    [sym__node] = STATE(26),
    [sym_element] = STATE(26),
    [sym_start_tag] = STATE(13),
    [sym_self_closing_tag] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(26),
    [sym__open_start_tag] = ACTIONS(86),
    [sym_end_tag] = ACTIONS(63),
    [sym__implicit_end_tag] = ACTIONS(63),
    [sym__erroneous_end_tag] = ACTIONS(89),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(89),
  },
  [27] = {
    [sym__close_start_tag] = ACTIONS(92),
    [sym__self_close_start_tag] = ACTIONS(92),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(92),
  },
  [28] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(96),
  },
  [29] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(98),
  },
  [30] = {
    [sym__open_start_tag] = ACTIONS(73),
    [sym_end_tag] = ACTIONS(73),
    [sym__implicit_end_tag] = ACTIONS(73),
    [sym__erroneous_end_tag] = ACTIONS(73),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(73),
  },
  [31] = {
    [sym__open_start_tag] = ACTIONS(84),
    [sym_end_tag] = ACTIONS(84),
    [sym__implicit_end_tag] = ACTIONS(84),
    [sym__erroneous_end_tag] = ACTIONS(84),
    [sym_comment] = ACTIONS(9),
    [sym_text] = ACTIONS(84),
  },
  [32] = {
    [sym__close_start_tag] = ACTIONS(100),
    [sym__self_close_start_tag] = ACTIONS(100),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(100),
  },
  [33] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(102),
  },
  [34] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(102),
  },
  [35] = {
    [sym__close_start_tag] = ACTIONS(104),
    [sym__self_close_start_tag] = ACTIONS(104),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(104),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(6),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [13] = {.count = 1, .reusable = true}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = true}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 2),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 2),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(17),
  [41] = {.count = 1, .reusable = true}, SHIFT(18),
  [43] = {.count = 1, .reusable = true}, SHIFT(19),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(24),
  [53] = {.count = 1, .reusable = true}, SHIFT(25),
  [55] = {.count = 1, .reusable = true}, SHIFT(26),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, SHIFT(29),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.count = 1, .reusable = true}, SHIFT(30),
  [82] = {.count = 1, .reusable = true}, SHIFT(31),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(11),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(26),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [94] = {.count = 1, .reusable = false}, SHIFT(32),
  [96] = {.count = 1, .reusable = true}, SHIFT(33),
  [98] = {.count = 1, .reusable = true}, SHIFT(34),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [102] = {.count = 1, .reusable = true}, SHIFT(35),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3, .alias_sequence_id = 1),
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
