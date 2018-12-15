#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 94
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__start_tag_name = 1,
  sym__script_start_tag_name = 2,
  sym__style_start_tag_name = 3,
  sym__end_tag_name = 4,
  sym_erroneous_end_tag_name = 5,
  sym__implicit_end_tag = 6,
  sym_raw_text = 7,
  sym_comment = 8,
  anon_sym_LT_BANG = 9,
  aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH = 10,
  anon_sym_GT = 11,
  sym__doctype = 12,
  anon_sym_LT = 13,
  anon_sym_SLASH_GT = 14,
  anon_sym_LT_SLASH = 15,
  anon_sym_EQ = 16,
  sym_attribute_name = 17,
  sym_attribute_value = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 22,
  sym_text = 23,
  sym_fragment = 24,
  sym_doctype = 25,
  sym__node = 26,
  sym_element = 27,
  sym_script_element = 28,
  sym_style_element = 29,
  sym_start_tag = 30,
  sym_script_start_tag = 31,
  sym_style_start_tag = 32,
  sym_self_closing_tag = 33,
  sym_end_tag = 34,
  sym_erroneous_end_tag = 35,
  sym_attribute = 36,
  sym_quoted_attribute_value = 37,
  aux_sym_fragment_repeat1 = 38,
  aux_sym_start_tag_repeat1 = 39,
};

static const char *ts_symbol_names[] = {
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = "/[^>]+/",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
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
  [sym_script_element] = "script_element",
  [sym_style_element] = "style_element",
  [sym_start_tag] = "start_tag",
  [sym_script_start_tag] = "start_tag",
  [sym_style_start_tag] = "start_tag",
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
  [sym__script_start_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym__style_start_tag_name] = {
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
  [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doctype] = {
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
  [sym_script_element] = {
    .visible = true,
    .named = true,
  },
  [sym_style_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_script_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_style_start_tag] = {
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
      ACCEPT_TOKEN(sym__doctype);
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
      if (lookahead == '=')
        ADVANCE(9);
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
      if (lookahead == '>')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(30);
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
  [8] = {.lex_state = 23, .external_lex_state = 6},
  [9] = {.lex_state = 18, .external_lex_state = 2},
  [10] = {.lex_state = 18, .external_lex_state = 2},
  [11] = {.lex_state = 25, .external_lex_state = 2},
  [12] = {.lex_state = 28, .external_lex_state = 7},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 28, .external_lex_state = 2},
  [15] = {.lex_state = 30, .external_lex_state = 2},
  [16] = {.lex_state = 18, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 2},
  [18] = {.lex_state = 22, .external_lex_state = 3},
  [19] = {.lex_state = 22, .external_lex_state = 8},
  [20] = {.lex_state = 18, .external_lex_state = 5},
  [21] = {.lex_state = 23, .external_lex_state = 6},
  [22] = {.lex_state = 23, .external_lex_state = 6},
  [23] = {.lex_state = 18, .external_lex_state = 5},
  [24] = {.lex_state = 18, .external_lex_state = 5},
  [25] = {.lex_state = 23, .external_lex_state = 2},
  [26] = {.lex_state = 22, .external_lex_state = 9},
  [27] = {.lex_state = 18, .external_lex_state = 2},
  [28] = {.lex_state = 23, .external_lex_state = 2},
  [29] = {.lex_state = 18, .external_lex_state = 2},
  [30] = {.lex_state = 18, .external_lex_state = 2},
  [31] = {.lex_state = 30, .external_lex_state = 2},
  [32] = {.lex_state = 18, .external_lex_state = 5},
  [33] = {.lex_state = 18, .external_lex_state = 2},
  [34] = {.lex_state = 28, .external_lex_state = 7},
  [35] = {.lex_state = 28, .external_lex_state = 7},
  [36] = {.lex_state = 23, .external_lex_state = 6},
  [37] = {.lex_state = 28, .external_lex_state = 2},
  [38] = {.lex_state = 28, .external_lex_state = 2},
  [39] = {.lex_state = 23, .external_lex_state = 6},
  [40] = {.lex_state = 28, .external_lex_state = 2},
  [41] = {.lex_state = 18, .external_lex_state = 2},
  [42] = {.lex_state = 25, .external_lex_state = 2},
  [43] = {.lex_state = 28, .external_lex_state = 7},
  [44] = {.lex_state = 30, .external_lex_state = 2},
  [45] = {.lex_state = 30, .external_lex_state = 2},
  [46] = {.lex_state = 18, .external_lex_state = 5},
  [47] = {.lex_state = 22, .external_lex_state = 8},
  [48] = {.lex_state = 18, .external_lex_state = 5},
  [49] = {.lex_state = 23, .external_lex_state = 2},
  [50] = {.lex_state = 22, .external_lex_state = 9},
  [51] = {.lex_state = 18, .external_lex_state = 5},
  [52] = {.lex_state = 23, .external_lex_state = 2},
  [53] = {.lex_state = 18, .external_lex_state = 5},
  [54] = {.lex_state = 18, .external_lex_state = 2},
  [55] = {.lex_state = 18, .external_lex_state = 5},
  [56] = {.lex_state = 18, .external_lex_state = 2},
  [57] = {.lex_state = 18, .external_lex_state = 2},
  [58] = {.lex_state = 18, .external_lex_state = 2},
  [59] = {.lex_state = 31, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 5},
  [61] = {.lex_state = 18, .external_lex_state = 2},
  [62] = {.lex_state = 28, .external_lex_state = 7},
  [63] = {.lex_state = 31, .external_lex_state = 2},
  [64] = {.lex_state = 23, .external_lex_state = 6},
  [65] = {.lex_state = 28, .external_lex_state = 2},
  [66] = {.lex_state = 23, .external_lex_state = 6},
  [67] = {.lex_state = 30, .external_lex_state = 2},
  [68] = {.lex_state = 18, .external_lex_state = 5},
  [69] = {.lex_state = 28, .external_lex_state = 7},
  [70] = {.lex_state = 18, .external_lex_state = 2},
  [71] = {.lex_state = 18, .external_lex_state = 5},
  [72] = {.lex_state = 30, .external_lex_state = 2},
  [73] = {.lex_state = 18, .external_lex_state = 5},
  [74] = {.lex_state = 18, .external_lex_state = 5},
  [75] = {.lex_state = 18, .external_lex_state = 5},
  [76] = {.lex_state = 22, .external_lex_state = 4},
  [77] = {.lex_state = 28, .external_lex_state = 7},
  [78] = {.lex_state = 33, .external_lex_state = 2},
  [79] = {.lex_state = 36, .external_lex_state = 2},
  [80] = {.lex_state = 28, .external_lex_state = 2},
  [81] = {.lex_state = 33, .external_lex_state = 2},
  [82] = {.lex_state = 36, .external_lex_state = 2},
  [83] = {.lex_state = 18, .external_lex_state = 5},
  [84] = {.lex_state = 18, .external_lex_state = 5},
  [85] = {.lex_state = 18, .external_lex_state = 5},
  [86] = {.lex_state = 28, .external_lex_state = 7},
  [87] = {.lex_state = 39, .external_lex_state = 2},
  [88] = {.lex_state = 40, .external_lex_state = 2},
  [89] = {.lex_state = 28, .external_lex_state = 2},
  [90] = {.lex_state = 39, .external_lex_state = 2},
  [91] = {.lex_state = 40, .external_lex_state = 2},
  [92] = {.lex_state = 28, .external_lex_state = 7},
  [93] = {.lex_state = 28, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name,
  ts_external_token__script_start_tag_name,
  ts_external_token__style_start_tag_name,
  ts_external_token__end_tag_name,
  ts_external_token_erroneous_end_tag_name,
  ts_external_token_SLASH_GT,
  ts_external_token__implicit_end_tag,
  ts_external_token_raw_text,
  ts_external_token_comment,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__start_tag_name] = sym__start_tag_name,
  [ts_external_token__script_start_tag_name] = sym__script_start_tag_name,
  [ts_external_token__style_start_tag_name] = sym__style_start_tag_name,
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
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
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
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
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
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(5),
    [sym_doctype] = STATE(10),
    [sym__node] = STATE(10),
    [sym_element] = STATE(10),
    [sym_script_element] = STATE(10),
    [sym_style_element] = STATE(10),
    [sym_start_tag] = STATE(6),
    [sym_script_start_tag] = STATE(7),
    [sym_style_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [sym_erroneous_end_tag] = STATE(10),
    [aux_sym_fragment_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [sym__doctype] = ACTIONS(17),
  },
  [3] = {
    [sym__start_tag_name] = ACTIONS(19),
    [sym__script_start_tag_name] = ACTIONS(21),
    [sym__style_start_tag_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_erroneous_end_tag_name] = ACTIONS(25),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [6] = {
    [sym_doctype] = STATE(24),
    [sym__node] = STATE(24),
    [sym_element] = STATE(24),
    [sym_script_element] = STATE(24),
    [sym_style_element] = STATE(24),
    [sym_start_tag] = STATE(20),
    [sym_script_start_tag] = STATE(21),
    [sym_style_start_tag] = STATE(22),
    [sym_self_closing_tag] = STATE(23),
    [sym_end_tag] = STATE(16),
    [sym_erroneous_end_tag] = STATE(24),
    [aux_sym_fragment_repeat1] = STATE(24),
    [sym__implicit_end_tag] = ACTIONS(29),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_SLASH] = ACTIONS(35),
    [sym_text] = ACTIONS(37),
  },
  [7] = {
    [sym_end_tag] = STATE(27),
    [sym_raw_text] = ACTIONS(39),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(41),
  },
  [8] = {
    [sym_end_tag] = STATE(29),
    [sym_raw_text] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(41),
  },
  [9] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LT_BANG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LT_SLASH] = ACTIONS(47),
    [sym_text] = ACTIONS(45),
  },
  [10] = {
    [sym_doctype] = STATE(30),
    [sym__node] = STATE(30),
    [sym_element] = STATE(30),
    [sym_script_element] = STATE(30),
    [sym_style_element] = STATE(30),
    [sym_start_tag] = STATE(6),
    [sym_script_start_tag] = STATE(7),
    [sym_style_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [sym_erroneous_end_tag] = STATE(30),
    [aux_sym_fragment_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_LT_SLASH] = ACTIONS(13),
    [sym_text] = ACTIONS(51),
  },
  [11] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(53),
  },
  [12] = {
    [sym_attribute] = STATE(35),
    [aux_sym_start_tag_repeat1] = STATE(35),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_SLASH_GT] = ACTIONS(57),
    [sym_attribute_name] = ACTIONS(59),
  },
  [13] = {
    [sym_attribute] = STATE(38),
    [aux_sym_start_tag_repeat1] = STATE(38),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(61),
    [sym_attribute_name] = ACTIONS(63),
  },
  [14] = {
    [sym_attribute] = STATE(40),
    [aux_sym_start_tag_repeat1] = STATE(40),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(65),
    [sym_attribute_name] = ACTIONS(63),
  },
  [15] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(67),
  },
  [16] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LT_BANG] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_LT_SLASH] = ACTIONS(71),
    [sym_text] = ACTIONS(69),
  },
  [17] = {
    [sym_comment] = ACTIONS(5),
    [sym__doctype] = ACTIONS(73),
  },
  [18] = {
    [sym__start_tag_name] = ACTIONS(75),
    [sym__script_start_tag_name] = ACTIONS(21),
    [sym__style_start_tag_name] = ACTIONS(23),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym__end_tag_name] = ACTIONS(77),
    [sym_erroneous_end_tag_name] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym_doctype] = STATE(48),
    [sym__node] = STATE(48),
    [sym_element] = STATE(48),
    [sym_script_element] = STATE(48),
    [sym_style_element] = STATE(48),
    [sym_start_tag] = STATE(20),
    [sym_script_start_tag] = STATE(21),
    [sym_style_start_tag] = STATE(22),
    [sym_self_closing_tag] = STATE(23),
    [sym_end_tag] = STATE(46),
    [sym_erroneous_end_tag] = STATE(48),
    [aux_sym_fragment_repeat1] = STATE(48),
    [sym__implicit_end_tag] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_SLASH] = ACTIONS(83),
    [sym_text] = ACTIONS(85),
  },
  [21] = {
    [sym_end_tag] = STATE(51),
    [sym_raw_text] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(89),
  },
  [22] = {
    [sym_end_tag] = STATE(53),
    [sym_raw_text] = ACTIONS(91),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(89),
  },
  [23] = {
    [sym__implicit_end_tag] = ACTIONS(45),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_LT_SLASH] = ACTIONS(47),
    [sym_text] = ACTIONS(45),
  },
  [24] = {
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(20),
    [sym_script_start_tag] = STATE(21),
    [sym_style_start_tag] = STATE(22),
    [sym_self_closing_tag] = STATE(23),
    [sym_end_tag] = STATE(54),
    [sym_erroneous_end_tag] = STATE(55),
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym__implicit_end_tag] = ACTIONS(93),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_SLASH] = ACTIONS(35),
    [sym_text] = ACTIONS(95),
  },
  [25] = {
    [sym_end_tag] = STATE(56),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(41),
  },
  [26] = {
    [sym__end_tag_name] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LT_BANG] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_LT_SLASH] = ACTIONS(99),
    [sym_text] = ACTIONS(97),
  },
  [28] = {
    [sym_end_tag] = STATE(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(41),
  },
  [29] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LT_BANG] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_SLASH] = ACTIONS(103),
    [sym_text] = ACTIONS(101),
  },
  [30] = {
    [sym_doctype] = STATE(30),
    [sym__node] = STATE(30),
    [sym_element] = STATE(30),
    [sym_script_element] = STATE(30),
    [sym_style_element] = STATE(30),
    [sym_start_tag] = STATE(6),
    [sym_script_start_tag] = STATE(7),
    [sym_style_start_tag] = STATE(8),
    [sym_self_closing_tag] = STATE(9),
    [sym_erroneous_end_tag] = STATE(30),
    [aux_sym_fragment_repeat1] = STATE(30),
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_LT_BANG] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(110),
    [anon_sym_LT_SLASH] = ACTIONS(113),
    [sym_text] = ACTIONS(116),
  },
  [31] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(119),
  },
  [32] = {
    [sym__implicit_end_tag] = ACTIONS(121),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(123),
    [anon_sym_LT] = ACTIONS(123),
    [anon_sym_LT_SLASH] = ACTIONS(123),
    [sym_text] = ACTIONS(121),
  },
  [33] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LT_BANG] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_SLASH] = ACTIONS(127),
    [sym_text] = ACTIONS(125),
  },
  [34] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_SLASH_GT] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [sym_attribute_name] = ACTIONS(129),
  },
  [35] = {
    [sym_attribute] = STATE(62),
    [aux_sym_start_tag_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(135),
    [sym_attribute_name] = ACTIONS(59),
  },
  [36] = {
    [sym_raw_text] = ACTIONS(137),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(137),
  },
  [37] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(139),
    [sym_attribute_name] = ACTIONS(129),
  },
  [38] = {
    [sym_attribute] = STATE(65),
    [aux_sym_start_tag_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(141),
    [sym_attribute_name] = ACTIONS(63),
  },
  [39] = {
    [sym_raw_text] = ACTIONS(143),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(143),
  },
  [40] = {
    [sym_attribute] = STATE(65),
    [aux_sym_start_tag_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(145),
    [sym_attribute_name] = ACTIONS(63),
  },
  [41] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LT_BANG] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_SLASH] = ACTIONS(149),
    [sym_text] = ACTIONS(147),
  },
  [42] = {
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK_CARET_GT_RBRACK_PLUS_SLASH] = ACTIONS(151),
  },
  [43] = {
    [sym_attribute] = STATE(69),
    [aux_sym_start_tag_repeat1] = STATE(69),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_SLASH_GT] = ACTIONS(153),
    [sym_attribute_name] = ACTIONS(59),
  },
  [44] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(155),
  },
  [45] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(157),
  },
  [46] = {
    [sym__implicit_end_tag] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_LT_SLASH] = ACTIONS(71),
    [sym_text] = ACTIONS(69),
  },
  [47] = {
    [sym__end_tag_name] = ACTIONS(159),
    [sym_erroneous_end_tag_name] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [48] = {
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(20),
    [sym_script_start_tag] = STATE(21),
    [sym_style_start_tag] = STATE(22),
    [sym_self_closing_tag] = STATE(23),
    [sym_end_tag] = STATE(73),
    [sym_erroneous_end_tag] = STATE(55),
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym__implicit_end_tag] = ACTIONS(161),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(33),
    [anon_sym_LT_SLASH] = ACTIONS(83),
    [sym_text] = ACTIONS(95),
  },
  [49] = {
    [sym_end_tag] = STATE(74),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(89),
  },
  [50] = {
    [sym__end_tag_name] = ACTIONS(159),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym__implicit_end_tag] = ACTIONS(97),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_LT_SLASH] = ACTIONS(99),
    [sym_text] = ACTIONS(97),
  },
  [52] = {
    [sym_end_tag] = STATE(75),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(89),
  },
  [53] = {
    [sym__implicit_end_tag] = ACTIONS(101),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_LT_SLASH] = ACTIONS(103),
    [sym_text] = ACTIONS(101),
  },
  [54] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LT_BANG] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_SLASH] = ACTIONS(165),
    [sym_text] = ACTIONS(163),
  },
  [55] = {
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(20),
    [sym_script_start_tag] = STATE(21),
    [sym_style_start_tag] = STATE(22),
    [sym_self_closing_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(55),
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym__implicit_end_tag] = ACTIONS(105),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_LT_SLASH] = ACTIONS(173),
    [sym_text] = ACTIONS(176),
  },
  [56] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LT_BANG] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_SLASH] = ACTIONS(181),
    [sym_text] = ACTIONS(179),
  },
  [57] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_LT_BANG] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_LT_SLASH] = ACTIONS(185),
    [sym_text] = ACTIONS(183),
  },
  [58] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_LT_BANG] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_SLASH] = ACTIONS(189),
    [sym_text] = ACTIONS(187),
  },
  [59] = {
    [sym_quoted_attribute_value] = STATE(77),
    [sym_comment] = ACTIONS(5),
    [sym_attribute_value] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(195),
  },
  [60] = {
    [sym__implicit_end_tag] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_LT_SLASH] = ACTIONS(199),
    [sym_text] = ACTIONS(197),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LT_BANG] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_SLASH] = ACTIONS(203),
    [sym_text] = ACTIONS(201),
  },
  [62] = {
    [sym_attribute] = STATE(62),
    [aux_sym_start_tag_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_SLASH_GT] = ACTIONS(205),
    [sym_attribute_name] = ACTIONS(207),
  },
  [63] = {
    [sym_quoted_attribute_value] = STATE(80),
    [sym_comment] = ACTIONS(5),
    [sym_attribute_value] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(214),
  },
  [64] = {
    [sym_raw_text] = ACTIONS(216),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(216),
  },
  [65] = {
    [sym_attribute] = STATE(65),
    [aux_sym_start_tag_repeat1] = STATE(65),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(205),
    [sym_attribute_name] = ACTIONS(218),
  },
  [66] = {
    [sym_raw_text] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_SLASH] = ACTIONS(221),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(223),
  },
  [68] = {
    [sym__implicit_end_tag] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_SLASH] = ACTIONS(127),
    [sym_text] = ACTIONS(125),
  },
  [69] = {
    [sym_attribute] = STATE(62),
    [aux_sym_start_tag_repeat1] = STATE(62),
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_SLASH_GT] = ACTIONS(225),
    [sym_attribute_name] = ACTIONS(59),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LT_BANG] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LT_SLASH] = ACTIONS(229),
    [sym_text] = ACTIONS(227),
  },
  [71] = {
    [sym__implicit_end_tag] = ACTIONS(147),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_LT_SLASH] = ACTIONS(149),
    [sym_text] = ACTIONS(147),
  },
  [72] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(231),
  },
  [73] = {
    [sym__implicit_end_tag] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_LT_SLASH] = ACTIONS(165),
    [sym_text] = ACTIONS(163),
  },
  [74] = {
    [sym__implicit_end_tag] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_LT_SLASH] = ACTIONS(181),
    [sym_text] = ACTIONS(179),
  },
  [75] = {
    [sym__implicit_end_tag] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(185),
    [anon_sym_LT_SLASH] = ACTIONS(185),
    [sym_text] = ACTIONS(183),
  },
  [76] = {
    [sym_erroneous_end_tag_name] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [77] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_SLASH_GT] = ACTIONS(233),
    [sym_attribute_name] = ACTIONS(233),
  },
  [78] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(237),
  },
  [79] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(235),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(239),
  },
  [80] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(233),
    [sym_attribute_name] = ACTIONS(233),
  },
  [81] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(243),
  },
  [82] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(245),
  },
  [83] = {
    [sym__implicit_end_tag] = ACTIONS(187),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_LT_SLASH] = ACTIONS(189),
    [sym_text] = ACTIONS(187),
  },
  [84] = {
    [sym__implicit_end_tag] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_LT_SLASH] = ACTIONS(203),
    [sym_text] = ACTIONS(201),
  },
  [85] = {
    [sym__implicit_end_tag] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_LT_SLASH] = ACTIONS(229),
    [sym_text] = ACTIONS(227),
  },
  [86] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_SLASH_GT] = ACTIONS(247),
    [sym_attribute_name] = ACTIONS(247),
  },
  [87] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(249),
  },
  [88] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(249),
  },
  [89] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(247),
    [sym_attribute_name] = ACTIONS(247),
  },
  [90] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(251),
  },
  [91] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(251),
  },
  [92] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_SLASH_GT] = ACTIONS(253),
    [sym_attribute_name] = ACTIONS(253),
  },
  [93] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(253),
    [sym_attribute_name] = ACTIONS(253),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(11),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = false}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(24),
  [39] = {.count = 1, .reusable = true}, SHIFT(25),
  [41] = {.count = 1, .reusable = true}, SHIFT(26),
  [43] = {.count = 1, .reusable = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(30),
  [53] = {.count = 1, .reusable = true}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, SHIFT(32),
  [57] = {.count = 1, .reusable = true}, SHIFT(33),
  [59] = {.count = 1, .reusable = true}, SHIFT(34),
  [61] = {.count = 1, .reusable = true}, SHIFT(36),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(39),
  [67] = {.count = 1, .reusable = true}, SHIFT(41),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(43),
  [77] = {.count = 1, .reusable = true}, SHIFT(44),
  [79] = {.count = 1, .reusable = true}, SHIFT(45),
  [81] = {.count = 1, .reusable = true}, SHIFT(46),
  [83] = {.count = 1, .reusable = false}, SHIFT(47),
  [85] = {.count = 1, .reusable = true}, SHIFT(48),
  [87] = {.count = 1, .reusable = true}, SHIFT(49),
  [89] = {.count = 1, .reusable = true}, SHIFT(50),
  [91] = {.count = 1, .reusable = true}, SHIFT(52),
  [93] = {.count = 1, .reusable = true}, SHIFT(54),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 2),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(30),
  [119] = {.count = 1, .reusable = true}, SHIFT(58),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(59),
  [133] = {.count = 1, .reusable = true}, SHIFT(60),
  [135] = {.count = 1, .reusable = true}, SHIFT(61),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 3),
  [139] = {.count = 1, .reusable = true}, SHIFT(63),
  [141] = {.count = 1, .reusable = true}, SHIFT(64),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(66),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(67),
  [153] = {.count = 1, .reusable = true}, SHIFT(68),
  [155] = {.count = 1, .reusable = true}, SHIFT(70),
  [157] = {.count = 1, .reusable = true}, SHIFT(71),
  [159] = {.count = 1, .reusable = true}, SHIFT(72),
  [161] = {.count = 1, .reusable = true}, SHIFT(73),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [167] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(17),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(18),
  [173] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(76),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 3),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [191] = {.count = 1, .reusable = true}, SHIFT(77),
  [193] = {.count = 1, .reusable = true}, SHIFT(78),
  [195] = {.count = 1, .reusable = true}, SHIFT(79),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [205] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(34),
  [210] = {.count = 1, .reusable = true}, SHIFT(80),
  [212] = {.count = 1, .reusable = true}, SHIFT(81),
  [214] = {.count = 1, .reusable = true}, SHIFT(82),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 4),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(37),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 4),
  [223] = {.count = 1, .reusable = true}, SHIFT(83),
  [225] = {.count = 1, .reusable = true}, SHIFT(84),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [231] = {.count = 1, .reusable = true}, SHIFT(85),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [235] = {.count = 1, .reusable = false}, SHIFT(86),
  [237] = {.count = 1, .reusable = true}, SHIFT(87),
  [239] = {.count = 1, .reusable = true}, SHIFT(88),
  [241] = {.count = 1, .reusable = false}, SHIFT(89),
  [243] = {.count = 1, .reusable = true}, SHIFT(90),
  [245] = {.count = 1, .reusable = true}, SHIFT(91),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(92),
  [251] = {.count = 1, .reusable = true}, SHIFT(93),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
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
