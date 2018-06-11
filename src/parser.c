#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 68
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 2
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__open_start_tag = 1,
  sym__open_raw_start_tag = 2,
  sym__close_start_tag = 3,
  sym__self_close_start_tag = 4,
  sym_end_tag = 5,
  sym__implicit_end_tag = 6,
  sym__erroneous_end_tag = 7,
  sym__raw_text = 8,
  sym_comment = 9,
  anon_sym_LT_BANG = 10,
  aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH = 12,
  anon_sym_GT = 13,
  anon_sym_EQ = 14,
  sym_attribute_name = 15,
  sym_attribute_value = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 20,
  sym_text = 21,
  sym_fragment = 22,
  sym_doctype = 23,
  sym__node = 24,
  sym_element = 25,
  sym_raw_element = 26,
  sym_start_tag = 27,
  sym__raw_start_tag = 28,
  sym_self_closing_tag = 29,
  sym_attribute = 30,
  sym_quoted_attribute_value = 31,
  aux_sym_fragment_repeat1 = 32,
  aux_sym_start_tag_repeat1 = 33,
  alias_sym_attribute_value = 34,
  alias_sym_start_tag = 35,
};

static const char *ts_symbol_names[] = {
  [sym__open_start_tag] = "_open_start_tag",
  [sym__open_raw_start_tag] = "_open_raw_start_tag",
  [sym__close_start_tag] = "_close_start_tag",
  [sym__self_close_start_tag] = "_self_close_start_tag",
  [sym_end_tag] = "end_tag",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym__erroneous_end_tag] = "_erroneous_end_tag",
  [sym__raw_text] = "_raw_text",
  [sym_comment] = "comment",
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = "/[Dd][Oo][Cc][Tt][Yy][Pp][Ee]/",
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = "/[^>]+/",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = "/[^']+/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = "/[^\"]+/",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_raw_element] = "raw_element",
  [sym_start_tag] = "start_tag",
  [sym__raw_start_tag] = "_raw_start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [alias_sym_attribute_value] = "attribute_value",
  [alias_sym_start_tag] = "start_tag",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__open_start_tag] = {
    .visible = false,
    .named = true,
  },
  [sym__open_raw_start_tag] = {
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
  [sym__raw_text] = {
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
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
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
  [sym_doctype] = {
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
  [sym_raw_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_start_tag] = {
    .visible = false,
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
  [alias_sym_start_tag] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_start_tag,
  },
  [2] = {
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
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
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
      if (lookahead == '!')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != '>')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(18);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(19);
      END_STATE();
    case 19:
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
        ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(26);
      if (lookahead != 0 &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      END_STATE();
    case 36:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(36);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15, .external_lex_state = 2},
  [2] = {.lex_state = 18, .external_lex_state = 3},
  [3] = {.lex_state = 18, .external_lex_state = 4},
  [4] = {.lex_state = 20, .external_lex_state = 5},
  [5] = {.lex_state = 21, .external_lex_state = 5},
  [6] = {.lex_state = 15, .external_lex_state = 2},
  [7] = {.lex_state = 15, .external_lex_state = 6},
  [8] = {.lex_state = 21, .external_lex_state = 7},
  [9] = {.lex_state = 15, .external_lex_state = 2},
  [10] = {.lex_state = 15, .external_lex_state = 2},
  [11] = {.lex_state = 15, .external_lex_state = 6},
  [12] = {.lex_state = 15, .external_lex_state = 2},
  [13] = {.lex_state = 22, .external_lex_state = 3},
  [14] = {.lex_state = 18, .external_lex_state = 3},
  [15] = {.lex_state = 21, .external_lex_state = 7},
  [16] = {.lex_state = 22, .external_lex_state = 4},
  [17] = {.lex_state = 18, .external_lex_state = 4},
  [18] = {.lex_state = 23, .external_lex_state = 5},
  [19] = {.lex_state = 18, .external_lex_state = 3},
  [20] = {.lex_state = 15, .external_lex_state = 2},
  [21] = {.lex_state = 20, .external_lex_state = 5},
  [22] = {.lex_state = 15, .external_lex_state = 6},
  [23] = {.lex_state = 15, .external_lex_state = 6},
  [24] = {.lex_state = 21, .external_lex_state = 7},
  [25] = {.lex_state = 15, .external_lex_state = 6},
  [26] = {.lex_state = 15, .external_lex_state = 6},
  [27] = {.lex_state = 15, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 8},
  [29] = {.lex_state = 15, .external_lex_state = 2},
  [30] = {.lex_state = 26, .external_lex_state = 5},
  [31] = {.lex_state = 15, .external_lex_state = 6},
  [32] = {.lex_state = 15, .external_lex_state = 2},
  [33] = {.lex_state = 18, .external_lex_state = 3},
  [34] = {.lex_state = 26, .external_lex_state = 5},
  [35] = {.lex_state = 21, .external_lex_state = 7},
  [36] = {.lex_state = 18, .external_lex_state = 4},
  [37] = {.lex_state = 28, .external_lex_state = 5},
  [38] = {.lex_state = 15, .external_lex_state = 6},
  [39] = {.lex_state = 18, .external_lex_state = 3},
  [40] = {.lex_state = 23, .external_lex_state = 5},
  [41] = {.lex_state = 15, .external_lex_state = 6},
  [42] = {.lex_state = 15, .external_lex_state = 6},
  [43] = {.lex_state = 15, .external_lex_state = 6},
  [44] = {.lex_state = 21, .external_lex_state = 8},
  [45] = {.lex_state = 15, .external_lex_state = 2},
  [46] = {.lex_state = 15, .external_lex_state = 6},
  [47] = {.lex_state = 15, .external_lex_state = 2},
  [48] = {.lex_state = 18, .external_lex_state = 3},
  [49] = {.lex_state = 29, .external_lex_state = 5},
  [50] = {.lex_state = 32, .external_lex_state = 5},
  [51] = {.lex_state = 18, .external_lex_state = 4},
  [52] = {.lex_state = 29, .external_lex_state = 5},
  [53] = {.lex_state = 32, .external_lex_state = 5},
  [54] = {.lex_state = 15, .external_lex_state = 2},
  [55] = {.lex_state = 15, .external_lex_state = 6},
  [56] = {.lex_state = 28, .external_lex_state = 5},
  [57] = {.lex_state = 15, .external_lex_state = 6},
  [58] = {.lex_state = 15, .external_lex_state = 6},
  [59] = {.lex_state = 18, .external_lex_state = 3},
  [60] = {.lex_state = 35, .external_lex_state = 5},
  [61] = {.lex_state = 36, .external_lex_state = 5},
  [62] = {.lex_state = 18, .external_lex_state = 4},
  [63] = {.lex_state = 35, .external_lex_state = 5},
  [64] = {.lex_state = 36, .external_lex_state = 5},
  [65] = {.lex_state = 15, .external_lex_state = 6},
  [66] = {.lex_state = 18, .external_lex_state = 3},
  [67] = {.lex_state = 18, .external_lex_state = 4},
};

enum {
  ts_external_token__open_start_tag,
  ts_external_token__open_raw_start_tag,
  ts_external_token__close_start_tag,
  ts_external_token__self_close_start_tag,
  ts_external_token_end_tag,
  ts_external_token__implicit_end_tag,
  ts_external_token__erroneous_end_tag,
  ts_external_token__raw_text,
  ts_external_token_comment,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__open_start_tag] = sym__open_start_tag,
  [ts_external_token__open_raw_start_tag] = sym__open_raw_start_tag,
  [ts_external_token__close_start_tag] = sym__close_start_tag,
  [ts_external_token__self_close_start_tag] = sym__self_close_start_tag,
  [ts_external_token_end_tag] = sym_end_tag,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token__erroneous_end_tag] = sym__erroneous_end_tag,
  [ts_external_token__raw_text] = sym__raw_text,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__open_raw_start_tag] = true,
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token__raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__open_raw_start_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__close_start_tag] = true,
    [ts_external_token__self_close_start_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__close_start_tag] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__open_start_tag] = true,
    [ts_external_token__open_raw_start_tag] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__erroneous_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_end_tag] = true,
    [ts_external_token__raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_end_tag] = true,
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__open_start_tag] = ACTIONS(1),
    [sym__open_raw_start_tag] = ACTIONS(1),
    [sym__close_start_tag] = ACTIONS(1),
    [sym__self_close_start_tag] = ACTIONS(1),
    [sym_end_tag] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym__erroneous_end_tag] = ACTIONS(1),
    [sym__raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(5),
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_raw_element] = STATE(6),
    [sym_start_tag] = STATE(7),
    [sym__raw_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [aux_sym_fragment_repeat1] = STATE(10),
    [sym__open_start_tag] = ACTIONS(3),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym__erroneous_end_tag] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LT_BANG] = ACTIONS(13),
    [sym_text] = ACTIONS(7),
  },
  [2] = {
    [sym_attribute] = STATE(14),
    [aux_sym_start_tag_repeat1] = STATE(14),
    [sym__close_start_tag] = ACTIONS(15),
    [sym__self_close_start_tag] = ACTIONS(17),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(19),
  },
  [3] = {
    [sym_attribute] = STATE(17),
    [aux_sym_start_tag_repeat1] = STATE(17),
    [sym__close_start_tag] = ACTIONS(21),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(23),
  },
  [4] = {
    [sym_comment] = ACTIONS(9),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(25),
  },
  [5] = {
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [6] = {
    [sym__open_start_tag] = ACTIONS(29),
    [sym__open_raw_start_tag] = ACTIONS(29),
    [sym__erroneous_end_tag] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [sym_text] = ACTIONS(29),
  },
  [7] = {
    [sym_doctype] = STATE(22),
    [sym__node] = STATE(22),
    [sym_element] = STATE(22),
    [sym_raw_element] = STATE(22),
    [sym_start_tag] = STATE(23),
    [sym__raw_start_tag] = STATE(24),
    [sym_self_closing_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(26),
    [sym__open_start_tag] = ACTIONS(33),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym_end_tag] = ACTIONS(35),
    [sym__implicit_end_tag] = ACTIONS(35),
    [sym__erroneous_end_tag] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(39),
    [sym_text] = ACTIONS(37),
  },
  [8] = {
    [sym_end_tag] = ACTIONS(41),
    [sym__raw_text] = ACTIONS(43),
    [sym_comment] = ACTIONS(9),
  },
  [9] = {
    [sym__open_start_tag] = ACTIONS(45),
    [sym__open_raw_start_tag] = ACTIONS(45),
    [sym__erroneous_end_tag] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT_BANG] = ACTIONS(47),
    [sym_text] = ACTIONS(45),
  },
  [10] = {
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_raw_element] = STATE(6),
    [sym_start_tag] = STATE(7),
    [sym__raw_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [aux_sym_fragment_repeat1] = STATE(29),
    [sym__open_start_tag] = ACTIONS(3),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym__erroneous_end_tag] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(13),
    [sym_text] = ACTIONS(7),
  },
  [11] = {
    [sym__open_start_tag] = ACTIONS(51),
    [sym__open_raw_start_tag] = ACTIONS(51),
    [sym_end_tag] = ACTIONS(51),
    [sym__implicit_end_tag] = ACTIONS(51),
    [sym__erroneous_end_tag] = ACTIONS(51),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(53),
    [sym_text] = ACTIONS(51),
  },
  [12] = {
    [sym__open_start_tag] = ACTIONS(55),
    [sym__open_raw_start_tag] = ACTIONS(55),
    [sym__erroneous_end_tag] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LT_BANG] = ACTIONS(57),
    [sym_text] = ACTIONS(55),
  },
  [13] = {
    [sym__close_start_tag] = ACTIONS(59),
    [sym__self_close_start_tag] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(61),
    [sym_attribute_name] = ACTIONS(59),
  },
  [14] = {
    [sym_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [sym__close_start_tag] = ACTIONS(63),
    [sym__self_close_start_tag] = ACTIONS(65),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(19),
  },
  [15] = {
    [sym_end_tag] = ACTIONS(67),
    [sym__raw_text] = ACTIONS(67),
    [sym_comment] = ACTIONS(9),
  },
  [16] = {
    [sym__close_start_tag] = ACTIONS(59),
    [sym_comment] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(69),
    [sym_attribute_name] = ACTIONS(59),
  },
  [17] = {
    [sym_attribute] = STATE(36),
    [aux_sym_start_tag_repeat1] = STATE(36),
    [sym__close_start_tag] = ACTIONS(71),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(23),
  },
  [18] = {
    [sym_comment] = ACTIONS(9),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(73),
  },
  [19] = {
    [sym_attribute] = STATE(39),
    [aux_sym_start_tag_repeat1] = STATE(39),
    [sym__close_start_tag] = ACTIONS(15),
    [sym__self_close_start_tag] = ACTIONS(75),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(19),
  },
  [20] = {
    [sym__open_start_tag] = ACTIONS(77),
    [sym__open_raw_start_tag] = ACTIONS(77),
    [sym__erroneous_end_tag] = ACTIONS(77),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LT_BANG] = ACTIONS(79),
    [sym_text] = ACTIONS(77),
  },
  [21] = {
    [sym_comment] = ACTIONS(9),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(81),
  },
  [22] = {
    [sym__open_start_tag] = ACTIONS(29),
    [sym__open_raw_start_tag] = ACTIONS(29),
    [sym_end_tag] = ACTIONS(29),
    [sym__implicit_end_tag] = ACTIONS(29),
    [sym__erroneous_end_tag] = ACTIONS(29),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [sym_text] = ACTIONS(29),
  },
  [23] = {
    [sym_doctype] = STATE(22),
    [sym__node] = STATE(22),
    [sym_element] = STATE(22),
    [sym_raw_element] = STATE(22),
    [sym_start_tag] = STATE(23),
    [sym__raw_start_tag] = STATE(24),
    [sym_self_closing_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(42),
    [sym__open_start_tag] = ACTIONS(33),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym_end_tag] = ACTIONS(83),
    [sym__implicit_end_tag] = ACTIONS(83),
    [sym__erroneous_end_tag] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(39),
    [sym_text] = ACTIONS(37),
  },
  [24] = {
    [sym_end_tag] = ACTIONS(85),
    [sym__raw_text] = ACTIONS(87),
    [sym_comment] = ACTIONS(9),
  },
  [25] = {
    [sym__open_start_tag] = ACTIONS(45),
    [sym__open_raw_start_tag] = ACTIONS(45),
    [sym_end_tag] = ACTIONS(45),
    [sym__implicit_end_tag] = ACTIONS(45),
    [sym__erroneous_end_tag] = ACTIONS(45),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(47),
    [sym_text] = ACTIONS(45),
  },
  [26] = {
    [sym_doctype] = STATE(22),
    [sym__node] = STATE(22),
    [sym_element] = STATE(22),
    [sym_raw_element] = STATE(22),
    [sym_start_tag] = STATE(23),
    [sym__raw_start_tag] = STATE(24),
    [sym_self_closing_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__open_start_tag] = ACTIONS(33),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym_end_tag] = ACTIONS(89),
    [sym__implicit_end_tag] = ACTIONS(89),
    [sym__erroneous_end_tag] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(39),
    [sym_text] = ACTIONS(37),
  },
  [27] = {
    [sym__open_start_tag] = ACTIONS(91),
    [sym__open_raw_start_tag] = ACTIONS(91),
    [sym__erroneous_end_tag] = ACTIONS(91),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_LT_BANG] = ACTIONS(93),
    [sym_text] = ACTIONS(91),
  },
  [28] = {
    [sym_end_tag] = ACTIONS(95),
    [sym_comment] = ACTIONS(9),
  },
  [29] = {
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_raw_element] = STATE(6),
    [sym_start_tag] = STATE(7),
    [sym__raw_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [aux_sym_fragment_repeat1] = STATE(29),
    [sym__open_start_tag] = ACTIONS(97),
    [sym__open_raw_start_tag] = ACTIONS(100),
    [sym__erroneous_end_tag] = ACTIONS(103),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_LT_BANG] = ACTIONS(108),
    [sym_text] = ACTIONS(103),
  },
  [30] = {
    [sym_quoted_attribute_value] = STATE(48),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_value] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
  },
  [31] = {
    [sym__open_start_tag] = ACTIONS(117),
    [sym__open_raw_start_tag] = ACTIONS(117),
    [sym_end_tag] = ACTIONS(117),
    [sym__implicit_end_tag] = ACTIONS(117),
    [sym__erroneous_end_tag] = ACTIONS(117),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(119),
    [sym_text] = ACTIONS(117),
  },
  [32] = {
    [sym__open_start_tag] = ACTIONS(121),
    [sym__open_raw_start_tag] = ACTIONS(121),
    [sym__erroneous_end_tag] = ACTIONS(121),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LT_BANG] = ACTIONS(123),
    [sym_text] = ACTIONS(121),
  },
  [33] = {
    [sym_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [sym__close_start_tag] = ACTIONS(125),
    [sym__self_close_start_tag] = ACTIONS(125),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(127),
  },
  [34] = {
    [sym_quoted_attribute_value] = STATE(51),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_value] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(134),
  },
  [35] = {
    [sym_end_tag] = ACTIONS(136),
    [sym__raw_text] = ACTIONS(136),
    [sym_comment] = ACTIONS(9),
  },
  [36] = {
    [sym_attribute] = STATE(36),
    [aux_sym_start_tag_repeat1] = STATE(36),
    [sym__close_start_tag] = ACTIONS(125),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(138),
  },
  [37] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(141),
  },
  [38] = {
    [sym__open_start_tag] = ACTIONS(55),
    [sym__open_raw_start_tag] = ACTIONS(55),
    [sym_end_tag] = ACTIONS(55),
    [sym__implicit_end_tag] = ACTIONS(55),
    [sym__erroneous_end_tag] = ACTIONS(55),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(57),
    [sym_text] = ACTIONS(55),
  },
  [39] = {
    [sym_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [sym__close_start_tag] = ACTIONS(63),
    [sym__self_close_start_tag] = ACTIONS(143),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(19),
  },
  [40] = {
    [sym_comment] = ACTIONS(9),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(145),
  },
  [41] = {
    [sym__open_start_tag] = ACTIONS(77),
    [sym__open_raw_start_tag] = ACTIONS(77),
    [sym_end_tag] = ACTIONS(77),
    [sym__implicit_end_tag] = ACTIONS(77),
    [sym__erroneous_end_tag] = ACTIONS(77),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(79),
    [sym_text] = ACTIONS(77),
  },
  [42] = {
    [sym_doctype] = STATE(22),
    [sym__node] = STATE(22),
    [sym_element] = STATE(22),
    [sym_raw_element] = STATE(22),
    [sym_start_tag] = STATE(23),
    [sym__raw_start_tag] = STATE(24),
    [sym_self_closing_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__open_start_tag] = ACTIONS(33),
    [sym__open_raw_start_tag] = ACTIONS(5),
    [sym_end_tag] = ACTIONS(147),
    [sym__implicit_end_tag] = ACTIONS(147),
    [sym__erroneous_end_tag] = ACTIONS(37),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(39),
    [sym_text] = ACTIONS(37),
  },
  [43] = {
    [sym__open_start_tag] = ACTIONS(91),
    [sym__open_raw_start_tag] = ACTIONS(91),
    [sym_end_tag] = ACTIONS(91),
    [sym__implicit_end_tag] = ACTIONS(91),
    [sym__erroneous_end_tag] = ACTIONS(91),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(93),
    [sym_text] = ACTIONS(91),
  },
  [44] = {
    [sym_end_tag] = ACTIONS(149),
    [sym_comment] = ACTIONS(9),
  },
  [45] = {
    [sym__open_start_tag] = ACTIONS(151),
    [sym__open_raw_start_tag] = ACTIONS(151),
    [sym__erroneous_end_tag] = ACTIONS(151),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LT_BANG] = ACTIONS(153),
    [sym_text] = ACTIONS(151),
  },
  [46] = {
    [sym_doctype] = STATE(22),
    [sym__node] = STATE(22),
    [sym_element] = STATE(22),
    [sym_raw_element] = STATE(22),
    [sym_start_tag] = STATE(23),
    [sym__raw_start_tag] = STATE(24),
    [sym_self_closing_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__open_start_tag] = ACTIONS(155),
    [sym__open_raw_start_tag] = ACTIONS(100),
    [sym_end_tag] = ACTIONS(106),
    [sym__implicit_end_tag] = ACTIONS(106),
    [sym__erroneous_end_tag] = ACTIONS(158),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(161),
    [sym_text] = ACTIONS(158),
  },
  [47] = {
    [sym__open_start_tag] = ACTIONS(164),
    [sym__open_raw_start_tag] = ACTIONS(164),
    [sym__erroneous_end_tag] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_LT_BANG] = ACTIONS(166),
    [sym_text] = ACTIONS(164),
  },
  [48] = {
    [sym__close_start_tag] = ACTIONS(168),
    [sym__self_close_start_tag] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(168),
  },
  [49] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(172),
  },
  [50] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(174),
  },
  [51] = {
    [sym__close_start_tag] = ACTIONS(168),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(168),
  },
  [52] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(178),
  },
  [53] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(180),
  },
  [54] = {
    [sym__open_start_tag] = ACTIONS(182),
    [sym__open_raw_start_tag] = ACTIONS(182),
    [sym__erroneous_end_tag] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_LT_BANG] = ACTIONS(184),
    [sym_text] = ACTIONS(182),
  },
  [55] = {
    [sym__open_start_tag] = ACTIONS(121),
    [sym__open_raw_start_tag] = ACTIONS(121),
    [sym_end_tag] = ACTIONS(121),
    [sym__implicit_end_tag] = ACTIONS(121),
    [sym__erroneous_end_tag] = ACTIONS(121),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(123),
    [sym_text] = ACTIONS(121),
  },
  [56] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_GT] = ACTIONS(186),
  },
  [57] = {
    [sym__open_start_tag] = ACTIONS(151),
    [sym__open_raw_start_tag] = ACTIONS(151),
    [sym_end_tag] = ACTIONS(151),
    [sym__implicit_end_tag] = ACTIONS(151),
    [sym__erroneous_end_tag] = ACTIONS(151),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(153),
    [sym_text] = ACTIONS(151),
  },
  [58] = {
    [sym__open_start_tag] = ACTIONS(164),
    [sym__open_raw_start_tag] = ACTIONS(164),
    [sym_end_tag] = ACTIONS(164),
    [sym__implicit_end_tag] = ACTIONS(164),
    [sym__erroneous_end_tag] = ACTIONS(164),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(166),
    [sym_text] = ACTIONS(164),
  },
  [59] = {
    [sym__close_start_tag] = ACTIONS(188),
    [sym__self_close_start_tag] = ACTIONS(188),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(188),
  },
  [60] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(190),
  },
  [61] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(190),
  },
  [62] = {
    [sym__close_start_tag] = ACTIONS(188),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(188),
  },
  [63] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(192),
  },
  [64] = {
    [sym_comment] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(192),
  },
  [65] = {
    [sym__open_start_tag] = ACTIONS(182),
    [sym__open_raw_start_tag] = ACTIONS(182),
    [sym_end_tag] = ACTIONS(182),
    [sym__implicit_end_tag] = ACTIONS(182),
    [sym__erroneous_end_tag] = ACTIONS(182),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LT_BANG] = ACTIONS(184),
    [sym_text] = ACTIONS(182),
  },
  [66] = {
    [sym__close_start_tag] = ACTIONS(194),
    [sym__self_close_start_tag] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(194),
  },
  [67] = {
    [sym__close_start_tag] = ACTIONS(194),
    [sym_comment] = ACTIONS(9),
    [sym_attribute_name] = ACTIONS(194),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(6),
  [9] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(15),
  [23] = {.count = 1, .reusable = true}, SHIFT(16),
  [25] = {.count = 1, .reusable = true}, SHIFT(18),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(19),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym__raw_start_tag, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 1, .reusable = true}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(40),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, SHIFT(43),
  [87] = {.count = 1, .reusable = true}, SHIFT(44),
  [89] = {.count = 1, .reusable = true}, SHIFT(45),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_raw_element, 2, .alias_sequence_id = 1),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_raw_element, 2, .alias_sequence_id = 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(47),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [106] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [111] = {.count = 1, .reusable = true}, SHIFT(48),
  [113] = {.count = 1, .reusable = true}, SHIFT(49),
  [115] = {.count = 1, .reusable = true}, SHIFT(50),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(13),
  [130] = {.count = 1, .reusable = true}, SHIFT(51),
  [132] = {.count = 1, .reusable = true}, SHIFT(52),
  [134] = {.count = 1, .reusable = true}, SHIFT(53),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__raw_start_tag, 3),
  [138] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(16),
  [141] = {.count = 1, .reusable = true}, SHIFT(54),
  [143] = {.count = 1, .reusable = true}, SHIFT(55),
  [145] = {.count = 1, .reusable = true}, SHIFT(56),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, SHIFT(58),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [155] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(19),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(22),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(21),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_raw_element, 3, .alias_sequence_id = 1),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_raw_element, 3, .alias_sequence_id = 1),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [170] = {.count = 1, .reusable = false}, SHIFT(59),
  [172] = {.count = 1, .reusable = true}, SHIFT(60),
  [174] = {.count = 1, .reusable = true}, SHIFT(61),
  [176] = {.count = 1, .reusable = false}, SHIFT(62),
  [178] = {.count = 1, .reusable = true}, SHIFT(63),
  [180] = {.count = 1, .reusable = true}, SHIFT(64),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [186] = {.count = 1, .reusable = true}, SHIFT(65),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [190] = {.count = 1, .reusable = true}, SHIFT(66),
  [192] = {.count = 1, .reusable = true}, SHIFT(67),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3, .alias_sequence_id = 2),
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
