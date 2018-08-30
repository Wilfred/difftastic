#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 82
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__start_tag_name = 1,
  sym__start_raw_tag_name = 2,
  sym__end_tag_name = 3,
  sym_erroneous_end_tag_name = 4,
  sym__implicit_end_tag = 5,
  sym_raw_text = 6,
  sym_comment = 7,
  anon_sym_LT_BANG = 8,
  aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH = 9,
  aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH = 10,
  anon_sym_GT = 11,
  anon_sym_LT = 12,
  anon_sym_SLASH_GT = 13,
  anon_sym_LT_SLASH = 14,
  anon_sym_EQ = 15,
  sym_attribute_name = 16,
  sym_attribute_value = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 21,
  sym_text = 22,
  sym_fragment = 23,
  sym_doctype = 24,
  sym__node = 25,
  sym_element = 26,
  sym_raw_element = 27,
  sym_start_tag = 28,
  sym__raw_start_tag = 29,
  sym_self_closing_tag = 30,
  sym_end_tag = 31,
  sym_erroneous_end_tag = 32,
  sym_attribute = 33,
  sym_quoted_attribute_value = 34,
  aux_sym_fragment_repeat1 = 35,
  aux_sym_start_tag_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [sym__start_tag_name] = "tag_name",
  [sym__start_raw_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = "doctype",
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = "/[^>]+/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = "attribute_value",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym_doctype] = "doctype",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_raw_element] = "raw_element",
  [sym_start_tag] = "start_tag",
  [sym__raw_start_tag] = "start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_end_tag] = "end_tag",
  [sym_erroneous_end_tag] = "erroneous_end_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__start_raw_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_end_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_raw_text] = {
    .visible = true,
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
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
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
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = {
    .visible = true,
    .named = true,
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
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_erroneous_end_tag] = {
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
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(11);
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
      if (lookahead == '>')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(7);
      if (lookahead == '/')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 11:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 18:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != '>')
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '<')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '/')
        ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(29);
      END_STATE();
    case 29:
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
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (lookahead != 0 &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      END_STATE();
    case 40:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 2},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 22, .external_lex_state = 3},
  [4] = {.lex_state = 22, .external_lex_state = 4},
  [5] = {.lex_state = 22, .external_lex_state = 2},
  [6] = {.lex_state = 18, .external_lex_state = 5},
  [7] = {.lex_state = 23, .external_lex_state = 6},
  [8] = {.lex_state = 18, .external_lex_state = 2},
  [9] = {.lex_state = 18, .external_lex_state = 2},
  [10] = {.lex_state = 25, .external_lex_state = 2},
  [11] = {.lex_state = 28, .external_lex_state = 7},
  [12] = {.lex_state = 28, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 18, .external_lex_state = 2},
  [15] = {.lex_state = 21, .external_lex_state = 2},
  [16] = {.lex_state = 22, .external_lex_state = 3},
  [17] = {.lex_state = 22, .external_lex_state = 8},
  [18] = {.lex_state = 18, .external_lex_state = 5},
  [19] = {.lex_state = 23, .external_lex_state = 6},
  [20] = {.lex_state = 18, .external_lex_state = 5},
  [21] = {.lex_state = 18, .external_lex_state = 5},
  [22] = {.lex_state = 23, .external_lex_state = 2},
  [23] = {.lex_state = 22, .external_lex_state = 9},
  [24] = {.lex_state = 18, .external_lex_state = 2},
  [25] = {.lex_state = 18, .external_lex_state = 2},
  [26] = {.lex_state = 28, .external_lex_state = 2},
  [27] = {.lex_state = 18, .external_lex_state = 5},
  [28] = {.lex_state = 18, .external_lex_state = 2},
  [29] = {.lex_state = 30, .external_lex_state = 7},
  [30] = {.lex_state = 28, .external_lex_state = 7},
  [31] = {.lex_state = 23, .external_lex_state = 6},
  [32] = {.lex_state = 30, .external_lex_state = 2},
  [33] = {.lex_state = 28, .external_lex_state = 2},
  [34] = {.lex_state = 18, .external_lex_state = 2},
  [35] = {.lex_state = 25, .external_lex_state = 2},
  [36] = {.lex_state = 28, .external_lex_state = 7},
  [37] = {.lex_state = 28, .external_lex_state = 2},
  [38] = {.lex_state = 28, .external_lex_state = 2},
  [39] = {.lex_state = 18, .external_lex_state = 5},
  [40] = {.lex_state = 22, .external_lex_state = 8},
  [41] = {.lex_state = 18, .external_lex_state = 5},
  [42] = {.lex_state = 23, .external_lex_state = 2},
  [43] = {.lex_state = 22, .external_lex_state = 9},
  [44] = {.lex_state = 18, .external_lex_state = 5},
  [45] = {.lex_state = 18, .external_lex_state = 2},
  [46] = {.lex_state = 18, .external_lex_state = 5},
  [47] = {.lex_state = 18, .external_lex_state = 2},
  [48] = {.lex_state = 18, .external_lex_state = 2},
  [49] = {.lex_state = 31, .external_lex_state = 2},
  [50] = {.lex_state = 18, .external_lex_state = 5},
  [51] = {.lex_state = 18, .external_lex_state = 2},
  [52] = {.lex_state = 28, .external_lex_state = 7},
  [53] = {.lex_state = 31, .external_lex_state = 2},
  [54] = {.lex_state = 23, .external_lex_state = 6},
  [55] = {.lex_state = 28, .external_lex_state = 2},
  [56] = {.lex_state = 28, .external_lex_state = 2},
  [57] = {.lex_state = 18, .external_lex_state = 5},
  [58] = {.lex_state = 28, .external_lex_state = 7},
  [59] = {.lex_state = 18, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 5},
  [61] = {.lex_state = 28, .external_lex_state = 2},
  [62] = {.lex_state = 18, .external_lex_state = 5},
  [63] = {.lex_state = 18, .external_lex_state = 5},
  [64] = {.lex_state = 22, .external_lex_state = 4},
  [65] = {.lex_state = 28, .external_lex_state = 7},
  [66] = {.lex_state = 33, .external_lex_state = 2},
  [67] = {.lex_state = 36, .external_lex_state = 2},
  [68] = {.lex_state = 28, .external_lex_state = 2},
  [69] = {.lex_state = 33, .external_lex_state = 2},
  [70] = {.lex_state = 36, .external_lex_state = 2},
  [71] = {.lex_state = 18, .external_lex_state = 5},
  [72] = {.lex_state = 18, .external_lex_state = 5},
  [73] = {.lex_state = 18, .external_lex_state = 5},
  [74] = {.lex_state = 28, .external_lex_state = 7},
  [75] = {.lex_state = 39, .external_lex_state = 2},
  [76] = {.lex_state = 40, .external_lex_state = 2},
  [77] = {.lex_state = 28, .external_lex_state = 2},
  [78] = {.lex_state = 39, .external_lex_state = 2},
  [79] = {.lex_state = 40, .external_lex_state = 2},
  [80] = {.lex_state = 28, .external_lex_state = 7},
  [81] = {.lex_state = 28, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name,
  ts_external_token__start_raw_tag_name,
  ts_external_token__end_tag_name,
  ts_external_token_erroneous_end_tag_name,
  ts_external_token_SLASH_GT,
  ts_external_token__implicit_end_tag,
  ts_external_token_raw_text,
  ts_external_token_comment,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__start_raw_tag_name] = sym__start_raw_tag_name,
  [ts_external_token__end_tag_name] = sym__end_tag_name,
  [ts_external_token_erroneous_end_tag_name] = sym_erroneous_end_tag_name,
  [ts_external_token_SLASH_GT] = anon_sym_SLASH_GT,
  [ts_external_token__implicit_end_tag] = sym__implicit_end_tag,
  [ts_external_token_raw_text] = sym_raw_text,
  [ts_external_token_comment] = sym_comment,
};

static bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__start_raw_tag_name] = true,
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__start_raw_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__start_tag_name] = ACTIONS(1),
    [sym__start_raw_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(5),
    [sym_doctype] = STATE(9),
    [sym__node] = STATE(9),
    [sym_element] = STATE(9),
    [sym_raw_element] = STATE(9),
    [sym_start_tag] = STATE(6),
    [sym__raw_start_tag] = STATE(7),
    [sym_self_closing_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(9),
    [aux_sym_fragment_repeat1] = STATE(9),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(17),
  },
  [3] = {
    [sym__start_tag_name] = ACTIONS(19),
    [sym__start_raw_tag_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_erroneous_end_tag_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(25),
  },
  [6] = {
    [sym_doctype] = STATE(21),
    [sym__node] = STATE(21),
    [sym_element] = STATE(21),
    [sym_raw_element] = STATE(21),
    [sym_start_tag] = STATE(18),
    [sym__raw_start_tag] = STATE(19),
    [sym_self_closing_tag] = STATE(20),
    [sym_end_tag] = STATE(14),
    [sym_erroneous_end_tag] = STATE(21),
    [aux_sym_fragment_repeat1] = STATE(21),
    [sym__implicit_end_tag] = ACTIONS(27),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_SLASH] = ACTIONS(33),
    [sym_text] = ACTIONS(35),
  },
  [7] = {
    [sym_end_tag] = STATE(24),
    [sym_raw_text] = ACTIONS(37),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(39),
  },
  [8] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LT_BANG] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_SLASH] = ACTIONS(43),
    [sym_text] = ACTIONS(41),
  },
  [9] = {
    [sym_doctype] = STATE(25),
    [sym__node] = STATE(25),
    [sym_element] = STATE(25),
    [sym_raw_element] = STATE(25),
    [sym_start_tag] = STATE(6),
    [sym__raw_start_tag] = STATE(7),
    [sym_self_closing_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(47),
  },
  [10] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(49),
  },
  [11] = {
    [sym_attribute] = STATE(30),
    [aux_sym_start_tag_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(53),
    [sym_attribute_name] = ACTIONS(55),
  },
  [12] = {
    [sym_attribute] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(33),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(57),
    [sym_attribute_name] = ACTIONS(59),
  },
  [13] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(61),
  },
  [14] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LT_BANG] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_SLASH] = ACTIONS(65),
    [sym_text] = ACTIONS(63),
  },
  [15] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACKDd_RBRACK_LBRACKOo_RBRACK_LBRACKCc_RBRACK_LBRACKTt_RBRACK_LBRACKYy_RBRACK_LBRACKPp_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(67),
  },
  [16] = {
    [sym__start_tag_name] = ACTIONS(69),
    [sym__start_raw_tag_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(5),
  },
  [17] = {
    [sym__end_tag_name] = ACTIONS(71),
    [sym_erroneous_end_tag_name] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [18] = {
    [sym_doctype] = STATE(41),
    [sym__node] = STATE(41),
    [sym_element] = STATE(41),
    [sym_raw_element] = STATE(41),
    [sym_start_tag] = STATE(18),
    [sym__raw_start_tag] = STATE(19),
    [sym_self_closing_tag] = STATE(20),
    [sym_end_tag] = STATE(39),
    [sym_erroneous_end_tag] = STATE(41),
    [aux_sym_fragment_repeat1] = STATE(41),
    [sym__implicit_end_tag] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_SLASH] = ACTIONS(77),
    [sym_text] = ACTIONS(79),
  },
  [19] = {
    [sym_end_tag] = STATE(44),
    [sym_raw_text] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(83),
  },
  [20] = {
    [sym__implicit_end_tag] = ACTIONS(41),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_LT_SLASH] = ACTIONS(43),
    [sym_text] = ACTIONS(41),
  },
  [21] = {
    [sym_doctype] = STATE(46),
    [sym__node] = STATE(46),
    [sym_element] = STATE(46),
    [sym_raw_element] = STATE(46),
    [sym_start_tag] = STATE(18),
    [sym__raw_start_tag] = STATE(19),
    [sym_self_closing_tag] = STATE(20),
    [sym_end_tag] = STATE(45),
    [sym_erroneous_end_tag] = STATE(46),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__implicit_end_tag] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_SLASH] = ACTIONS(33),
    [sym_text] = ACTIONS(87),
  },
  [22] = {
    [sym_end_tag] = STATE(47),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(39),
  },
  [23] = {
    [sym__end_tag_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [24] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LT_BANG] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_LT_SLASH] = ACTIONS(91),
    [sym_text] = ACTIONS(89),
  },
  [25] = {
    [sym_doctype] = STATE(25),
    [sym__node] = STATE(25),
    [sym_element] = STATE(25),
    [sym_raw_element] = STATE(25),
    [sym_start_tag] = STATE(6),
    [sym__raw_start_tag] = STATE(7),
    [sym_self_closing_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(25),
    [aux_sym_fragment_repeat1] = STATE(25),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LT_BANG] = ACTIONS(95),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_LT_SLASH] = ACTIONS(101),
    [sym_text] = ACTIONS(104),
  },
  [26] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(107),
  },
  [27] = {
    [sym__implicit_end_tag] = ACTIONS(109),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_SLASH] = ACTIONS(111),
    [sym_text] = ACTIONS(109),
  },
  [28] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LT_BANG] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_SLASH] = ACTIONS(115),
    [sym_text] = ACTIONS(113),
  },
  [29] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_SLASH_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(119),
    [sym_attribute_name] = ACTIONS(117),
  },
  [30] = {
    [sym_attribute] = STATE(52),
    [aux_sym_start_tag_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_SLASH_GT] = ACTIONS(123),
    [sym_attribute_name] = ACTIONS(55),
  },
  [31] = {
    [sym_raw_text] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(125),
  },
  [32] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(127),
    [sym_attribute_name] = ACTIONS(117),
  },
  [33] = {
    [sym_attribute] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(129),
    [sym_attribute_name] = ACTIONS(59),
  },
  [34] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LT_BANG] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_LT_SLASH] = ACTIONS(133),
    [sym_text] = ACTIONS(131),
  },
  [35] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(135),
  },
  [36] = {
    [sym_attribute] = STATE(58),
    [aux_sym_start_tag_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(137),
    [sym_attribute_name] = ACTIONS(55),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(139),
  },
  [38] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(141),
  },
  [39] = {
    [sym__implicit_end_tag] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(65),
    [anon_sym_LT_SLASH] = ACTIONS(65),
    [sym_text] = ACTIONS(63),
  },
  [40] = {
    [sym__end_tag_name] = ACTIONS(143),
    [sym_erroneous_end_tag_name] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym_doctype] = STATE(46),
    [sym__node] = STATE(46),
    [sym_element] = STATE(46),
    [sym_raw_element] = STATE(46),
    [sym_start_tag] = STATE(18),
    [sym__raw_start_tag] = STATE(19),
    [sym_self_closing_tag] = STATE(20),
    [sym_end_tag] = STATE(62),
    [sym_erroneous_end_tag] = STATE(46),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__implicit_end_tag] = ACTIONS(145),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_LT_SLASH] = ACTIONS(77),
    [sym_text] = ACTIONS(87),
  },
  [42] = {
    [sym_end_tag] = STATE(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(83),
  },
  [43] = {
    [sym__end_tag_name] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym__implicit_end_tag] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(91),
    [anon_sym_LT] = ACTIONS(91),
    [anon_sym_LT_SLASH] = ACTIONS(91),
    [sym_text] = ACTIONS(89),
  },
  [45] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LT_BANG] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_SLASH] = ACTIONS(149),
    [sym_text] = ACTIONS(147),
  },
  [46] = {
    [sym_doctype] = STATE(46),
    [sym__node] = STATE(46),
    [sym_element] = STATE(46),
    [sym_raw_element] = STATE(46),
    [sym_start_tag] = STATE(18),
    [sym__raw_start_tag] = STATE(19),
    [sym_self_closing_tag] = STATE(20),
    [sym_erroneous_end_tag] = STATE(46),
    [aux_sym_fragment_repeat1] = STATE(46),
    [sym__implicit_end_tag] = ACTIONS(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(151),
    [anon_sym_LT] = ACTIONS(154),
    [anon_sym_LT_SLASH] = ACTIONS(157),
    [sym_text] = ACTIONS(160),
  },
  [47] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LT_BANG] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_SLASH] = ACTIONS(165),
    [sym_text] = ACTIONS(163),
  },
  [48] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LT_BANG] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_SLASH] = ACTIONS(169),
    [sym_text] = ACTIONS(167),
  },
  [49] = {
    [sym_quoted_attribute_value] = STATE(65),
    [sym_comment] = ACTIONS(5),
    [sym_attribute_value] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
  },
  [50] = {
    [sym__implicit_end_tag] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_LT_SLASH] = ACTIONS(179),
    [sym_text] = ACTIONS(177),
  },
  [51] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LT_BANG] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_SLASH] = ACTIONS(183),
    [sym_text] = ACTIONS(181),
  },
  [52] = {
    [sym_attribute] = STATE(52),
    [aux_sym_start_tag_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_SLASH_GT] = ACTIONS(185),
    [sym_attribute_name] = ACTIONS(187),
  },
  [53] = {
    [sym_quoted_attribute_value] = STATE(68),
    [sym_comment] = ACTIONS(5),
    [sym_attribute_value] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(194),
  },
  [54] = {
    [sym_raw_text] = ACTIONS(196),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(196),
  },
  [55] = {
    [sym_attribute] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(55),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(185),
    [sym_attribute_name] = ACTIONS(198),
  },
  [56] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(201),
  },
  [57] = {
    [sym__implicit_end_tag] = ACTIONS(113),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_SLASH] = ACTIONS(115),
    [sym_text] = ACTIONS(113),
  },
  [58] = {
    [sym_attribute] = STATE(52),
    [aux_sym_start_tag_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_SLASH_GT] = ACTIONS(203),
    [sym_attribute_name] = ACTIONS(55),
  },
  [59] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LT_BANG] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_SLASH] = ACTIONS(207),
    [sym_text] = ACTIONS(205),
  },
  [60] = {
    [sym__implicit_end_tag] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_LT_SLASH] = ACTIONS(133),
    [sym_text] = ACTIONS(131),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(209),
  },
  [62] = {
    [sym__implicit_end_tag] = ACTIONS(147),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_SLASH] = ACTIONS(149),
    [sym_text] = ACTIONS(147),
  },
  [63] = {
    [sym__implicit_end_tag] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_SLASH] = ACTIONS(165),
    [sym_text] = ACTIONS(163),
  },
  [64] = {
    [sym_erroneous_end_tag_name] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_SLASH_GT] = ACTIONS(211),
    [sym_attribute_name] = ACTIONS(211),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(215),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(217),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(211),
    [sym_attribute_name] = ACTIONS(211),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(221),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(223),
  },
  [71] = {
    [sym__implicit_end_tag] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(169),
    [anon_sym_LT_SLASH] = ACTIONS(169),
    [sym_text] = ACTIONS(167),
  },
  [72] = {
    [sym__implicit_end_tag] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_LT_SLASH] = ACTIONS(183),
    [sym_text] = ACTIONS(181),
  },
  [73] = {
    [sym__implicit_end_tag] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_LT_SLASH] = ACTIONS(207),
    [sym_text] = ACTIONS(205),
  },
  [74] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_SLASH_GT] = ACTIONS(225),
    [sym_attribute_name] = ACTIONS(225),
  },
  [75] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(227),
  },
  [76] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(227),
  },
  [77] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(225),
    [sym_attribute_name] = ACTIONS(225),
  },
  [78] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(229),
  },
  [79] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(229),
  },
  [80] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_SLASH_GT] = ACTIONS(231),
    [sym_attribute_name] = ACTIONS(231),
  },
  [81] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(231),
    [sym_attribute_name] = ACTIONS(231),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, SHIFT(11),
  [21] = {.count = 1, .reusable = true}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, SHIFT(22),
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(29),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = true}, SHIFT(34),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(38),
  [75] = {.count = 1, .reusable = true}, SHIFT(39),
  [77] = {.count = 1, .reusable = false}, SHIFT(40),
  [79] = {.count = 1, .reusable = true}, SHIFT(41),
  [81] = {.count = 1, .reusable = true}, SHIFT(42),
  [83] = {.count = 1, .reusable = true}, SHIFT(43),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = true}, SHIFT(46),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_raw_element, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_raw_element, 2),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [95] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [98] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(25),
  [107] = {.count = 1, .reusable = true}, SHIFT(48),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(49),
  [121] = {.count = 1, .reusable = true}, SHIFT(50),
  [123] = {.count = 1, .reusable = true}, SHIFT(51),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__raw_start_tag, 3),
  [127] = {.count = 1, .reusable = true}, SHIFT(53),
  [129] = {.count = 1, .reusable = true}, SHIFT(54),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [135] = {.count = 1, .reusable = true}, SHIFT(56),
  [137] = {.count = 1, .reusable = true}, SHIFT(57),
  [139] = {.count = 1, .reusable = true}, SHIFT(59),
  [141] = {.count = 1, .reusable = true}, SHIFT(60),
  [143] = {.count = 1, .reusable = true}, SHIFT(61),
  [145] = {.count = 1, .reusable = true}, SHIFT(62),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [151] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(15),
  [154] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [157] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(64),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(46),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_raw_element, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_raw_element, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [171] = {.count = 1, .reusable = true}, SHIFT(65),
  [173] = {.count = 1, .reusable = true}, SHIFT(66),
  [175] = {.count = 1, .reusable = true}, SHIFT(67),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(29),
  [190] = {.count = 1, .reusable = true}, SHIFT(68),
  [192] = {.count = 1, .reusable = true}, SHIFT(69),
  [194] = {.count = 1, .reusable = true}, SHIFT(70),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym__raw_start_tag, 4),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(32),
  [201] = {.count = 1, .reusable = true}, SHIFT(71),
  [203] = {.count = 1, .reusable = true}, SHIFT(72),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [209] = {.count = 1, .reusable = true}, SHIFT(73),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [213] = {.count = 1, .reusable = false}, SHIFT(74),
  [215] = {.count = 1, .reusable = true}, SHIFT(75),
  [217] = {.count = 1, .reusable = true}, SHIFT(76),
  [219] = {.count = 1, .reusable = false}, SHIFT(77),
  [221] = {.count = 1, .reusable = true}, SHIFT(78),
  [223] = {.count = 1, .reusable = true}, SHIFT(79),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [227] = {.count = 1, .reusable = true}, SHIFT(80),
  [229] = {.count = 1, .reusable = true}, SHIFT(81),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
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
