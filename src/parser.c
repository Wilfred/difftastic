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
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LT_BANG = 1,
  aux_sym_doctype_token1 = 2,
  anon_sym_GT = 3,
  sym__doctype = 4,
  anon_sym_LT = 5,
  anon_sym_SLASH_GT = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_EQ = 8,
  sym_attribute_name = 9,
  sym_attribute_value = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_quoted_attribute_value_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_quoted_attribute_value_token2 = 14,
  sym_text = 15,
  sym__start_tag_name = 16,
  sym__script_start_tag_name = 17,
  sym__style_start_tag_name = 18,
  sym__end_tag_name = 19,
  sym_erroneous_end_tag_name = 20,
  sym__implicit_end_tag = 21,
  sym_raw_text = 22,
  sym_comment = 23,
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
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [aux_sym_doctype_token1] = "doctype_token1",
  [anon_sym_GT] = ">",
  [sym__doctype] = "doctype",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym__start_tag_name] = "tag_name",
  [sym__script_start_tag_name] = "tag_name",
  [sym__style_start_tag_name] = "tag_name",
  [sym__end_tag_name] = "tag_name",
  [sym_erroneous_end_tag_name] = "erroneous_end_tag_name",
  [sym__implicit_end_tag] = "_implicit_end_tag",
  [sym_raw_text] = "raw_text",
  [sym_comment] = "comment",
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
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_doctype_token1] = {
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
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
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
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(5);
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
      if (lookahead == '>')
        ADVANCE(9);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(11);
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
        ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
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
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '>')
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
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '/')
        ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 18, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 3},
  [3] = {.lex_state = 0, .external_lex_state = 4},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 18, .external_lex_state = 2},
  [6] = {.lex_state = 18, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 18, .external_lex_state = 5},
  [9] = {.lex_state = 22, .external_lex_state = 6},
  [10] = {.lex_state = 22, .external_lex_state = 6},
  [11] = {.lex_state = 24, .external_lex_state = 7},
  [12] = {.lex_state = 24, .external_lex_state = 2},
  [13] = {.lex_state = 24, .external_lex_state = 2},
  [14] = {.lex_state = 24, .external_lex_state = 2},
  [15] = {.lex_state = 26, .external_lex_state = 2},
  [16] = {.lex_state = 18, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 8},
  [19] = {.lex_state = 21, .external_lex_state = 2},
  [20] = {.lex_state = 18, .external_lex_state = 2},
  [21] = {.lex_state = 18, .external_lex_state = 5},
  [22] = {.lex_state = 18, .external_lex_state = 5},
  [23] = {.lex_state = 18, .external_lex_state = 5},
  [24] = {.lex_state = 22, .external_lex_state = 6},
  [25] = {.lex_state = 22, .external_lex_state = 6},
  [26] = {.lex_state = 0, .external_lex_state = 9},
  [27] = {.lex_state = 22, .external_lex_state = 2},
  [28] = {.lex_state = 18, .external_lex_state = 2},
  [29] = {.lex_state = 22, .external_lex_state = 2},
  [30] = {.lex_state = 18, .external_lex_state = 2},
  [31] = {.lex_state = 24, .external_lex_state = 7},
  [32] = {.lex_state = 18, .external_lex_state = 2},
  [33] = {.lex_state = 18, .external_lex_state = 5},
  [34] = {.lex_state = 24, .external_lex_state = 7},
  [35] = {.lex_state = 24, .external_lex_state = 2},
  [36] = {.lex_state = 22, .external_lex_state = 6},
  [37] = {.lex_state = 24, .external_lex_state = 2},
  [38] = {.lex_state = 22, .external_lex_state = 6},
  [39] = {.lex_state = 24, .external_lex_state = 2},
  [40] = {.lex_state = 18, .external_lex_state = 2},
  [41] = {.lex_state = 24, .external_lex_state = 2},
  [42] = {.lex_state = 24, .external_lex_state = 7},
  [43] = {.lex_state = 24, .external_lex_state = 2},
  [44] = {.lex_state = 24, .external_lex_state = 2},
  [45] = {.lex_state = 26, .external_lex_state = 2},
  [46] = {.lex_state = 18, .external_lex_state = 2},
  [47] = {.lex_state = 18, .external_lex_state = 5},
  [48] = {.lex_state = 0, .external_lex_state = 8},
  [49] = {.lex_state = 18, .external_lex_state = 5},
  [50] = {.lex_state = 18, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 9},
  [52] = {.lex_state = 22, .external_lex_state = 2},
  [53] = {.lex_state = 18, .external_lex_state = 5},
  [54] = {.lex_state = 22, .external_lex_state = 2},
  [55] = {.lex_state = 18, .external_lex_state = 5},
  [56] = {.lex_state = 18, .external_lex_state = 2},
  [57] = {.lex_state = 18, .external_lex_state = 2},
  [58] = {.lex_state = 29, .external_lex_state = 2},
  [59] = {.lex_state = 18, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 5},
  [61] = {.lex_state = 24, .external_lex_state = 7},
  [62] = {.lex_state = 29, .external_lex_state = 2},
  [63] = {.lex_state = 22, .external_lex_state = 6},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 22, .external_lex_state = 6},
  [66] = {.lex_state = 18, .external_lex_state = 2},
  [67] = {.lex_state = 18, .external_lex_state = 5},
  [68] = {.lex_state = 24, .external_lex_state = 7},
  [69] = {.lex_state = 18, .external_lex_state = 5},
  [70] = {.lex_state = 18, .external_lex_state = 2},
  [71] = {.lex_state = 24, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 24, .external_lex_state = 2},
  [74] = {.lex_state = 18, .external_lex_state = 5},
  [75] = {.lex_state = 18, .external_lex_state = 5},
  [76] = {.lex_state = 18, .external_lex_state = 5},
  [77] = {.lex_state = 31, .external_lex_state = 2},
  [78] = {.lex_state = 24, .external_lex_state = 7},
  [79] = {.lex_state = 34, .external_lex_state = 2},
  [80] = {.lex_state = 31, .external_lex_state = 2},
  [81] = {.lex_state = 24, .external_lex_state = 2},
  [82] = {.lex_state = 34, .external_lex_state = 2},
  [83] = {.lex_state = 18, .external_lex_state = 5},
  [84] = {.lex_state = 18, .external_lex_state = 5},
  [85] = {.lex_state = 18, .external_lex_state = 5},
  [86] = {.lex_state = 24, .external_lex_state = 7},
  [87] = {.lex_state = 29, .external_lex_state = 2},
  [88] = {.lex_state = 29, .external_lex_state = 2},
  [89] = {.lex_state = 24, .external_lex_state = 2},
  [90] = {.lex_state = 29, .external_lex_state = 2},
  [91] = {.lex_state = 29, .external_lex_state = 2},
  [92] = {.lex_state = 24, .external_lex_state = 7},
  [93] = {.lex_state = 24, .external_lex_state = 2},
};

enum {
  ts_external_token__start_tag_name = 0,
  ts_external_token__script_start_tag_name = 1,
  ts_external_token__style_start_tag_name = 2,
  ts_external_token__end_tag_name = 3,
  ts_external_token_erroneous_end_tag_name = 4,
  ts_external_token_SLASH_GT = 5,
  ts_external_token__implicit_end_tag = 6,
  ts_external_token_raw_text = 7,
  ts_external_token_comment = 8,
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
    [ts_external_token_raw_text] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token__end_tag_name] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
  },
  [4] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
    [ts_external_token__implicit_end_tag] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_raw_text] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_SLASH_GT] = true,
  },
  [8] = {
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__end_tag_name] = true,
  },
  [9] = {
    [ts_external_token_comment] = true,
    [ts_external_token__end_tag_name] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__start_tag_name] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__style_start_tag_name] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_fragment_repeat1] = STATE(5),
    [sym_element] = STATE(5),
    [sym_script_element] = STATE(5),
    [sym_self_closing_tag] = STATE(6),
    [sym_fragment] = STATE(7),
    [sym_style_element] = STATE(5),
    [sym_start_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(5),
    [sym_doctype] = STATE(5),
    [sym__node] = STATE(5),
    [sym_script_start_tag] = STATE(9),
    [sym_style_start_tag] = STATE(10),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [anon_sym_LT_BANG] = ACTIONS(13),
  },
  [2] = {
    [sym__start_tag_name] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym__style_start_tag_name] = ACTIONS(17),
    [sym__script_start_tag_name] = ACTIONS(19),
  },
  [3] = {
    [sym_erroneous_end_tag_name] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_comment] = ACTIONS(3),
    [sym__doctype] = ACTIONS(23),
  },
  [5] = {
    [aux_sym_fragment_repeat1] = STATE(16),
    [sym_element] = STATE(16),
    [sym_script_element] = STATE(16),
    [sym_self_closing_tag] = STATE(6),
    [sym_style_element] = STATE(16),
    [sym_start_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(16),
    [sym_doctype] = STATE(16),
    [sym__node] = STATE(16),
    [sym_script_start_tag] = STATE(9),
    [sym_style_start_tag] = STATE(10),
    [anon_sym_LT] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [anon_sym_LT_BANG] = ACTIONS(13),
  },
  [6] = {
    [anon_sym_LT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [7] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [8] = {
    [aux_sym_fragment_repeat1] = STATE(21),
    [sym_element] = STATE(21),
    [sym_script_element] = STATE(21),
    [sym_self_closing_tag] = STATE(22),
    [sym_end_tag] = STATE(20),
    [sym_style_element] = STATE(21),
    [sym_start_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(21),
    [sym_doctype] = STATE(21),
    [sym__node] = STATE(21),
    [sym_script_start_tag] = STATE(24),
    [sym_style_start_tag] = STATE(25),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(37),
    [anon_sym_LT_SLASH] = ACTIONS(39),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(43),
  },
  [9] = {
    [sym_end_tag] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(47),
  },
  [10] = {
    [sym_end_tag] = STATE(30),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(49),
  },
  [11] = {
    [aux_sym_start_tag_repeat1] = STATE(34),
    [sym_attribute] = STATE(34),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
  },
  [12] = {
    [aux_sym_start_tag_repeat1] = STATE(37),
    [sym_attribute] = STATE(37),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(59),
  },
  [13] = {
    [aux_sym_start_tag_repeat1] = STATE(39),
    [sym_attribute] = STATE(39),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(61),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(63),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_doctype_token1] = ACTIONS(65),
  },
  [16] = {
    [aux_sym_fragment_repeat1] = STATE(16),
    [sym_element] = STATE(16),
    [sym_script_element] = STATE(16),
    [sym_self_closing_tag] = STATE(6),
    [sym_style_element] = STATE(16),
    [sym_start_tag] = STATE(8),
    [sym_erroneous_end_tag] = STATE(16),
    [sym_doctype] = STATE(16),
    [sym__node] = STATE(16),
    [sym_script_start_tag] = STATE(9),
    [sym_style_start_tag] = STATE(10),
    [anon_sym_LT] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(70),
    [sym_text] = ACTIONS(73),
    [anon_sym_LT_BANG] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(79),
  },
  [17] = {
    [sym__start_tag_name] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__style_start_tag_name] = ACTIONS(17),
    [sym__script_start_tag_name] = ACTIONS(19),
  },
  [18] = {
    [sym_erroneous_end_tag_name] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(85),
  },
  [19] = {
    [sym_comment] = ACTIONS(3),
    [sym__doctype] = ACTIONS(87),
  },
  [20] = {
    [anon_sym_LT] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(89),
    [sym_text] = ACTIONS(91),
    [anon_sym_LT_BANG] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(91),
  },
  [21] = {
    [aux_sym_fragment_repeat1] = STATE(47),
    [sym_element] = STATE(47),
    [sym_script_element] = STATE(47),
    [sym_self_closing_tag] = STATE(22),
    [sym_end_tag] = STATE(46),
    [sym_style_element] = STATE(47),
    [sym_start_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(47),
    [sym_doctype] = STATE(47),
    [sym__node] = STATE(47),
    [sym_script_start_tag] = STATE(24),
    [sym_style_start_tag] = STATE(25),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(93),
    [anon_sym_LT_SLASH] = ACTIONS(39),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(95),
  },
  [22] = {
    [anon_sym_LT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [sym__implicit_end_tag] = ACTIONS(31),
  },
  [23] = {
    [aux_sym_fragment_repeat1] = STATE(50),
    [sym_element] = STATE(50),
    [sym_script_element] = STATE(50),
    [sym_self_closing_tag] = STATE(22),
    [sym_end_tag] = STATE(49),
    [sym_style_element] = STATE(50),
    [sym_start_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(50),
    [sym_doctype] = STATE(50),
    [sym__node] = STATE(50),
    [sym_script_start_tag] = STATE(24),
    [sym_style_start_tag] = STATE(25),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(97),
    [anon_sym_LT_SLASH] = ACTIONS(99),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(101),
  },
  [24] = {
    [sym_end_tag] = STATE(53),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(103),
    [sym_raw_text] = ACTIONS(105),
  },
  [25] = {
    [sym_end_tag] = STATE(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(103),
    [sym_raw_text] = ACTIONS(107),
  },
  [26] = {
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(85),
  },
  [27] = {
    [sym_end_tag] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
  },
  [28] = {
    [anon_sym_LT] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(109),
    [sym_text] = ACTIONS(111),
    [anon_sym_LT_BANG] = ACTIONS(109),
    [ts_builtin_sym_end] = ACTIONS(111),
  },
  [29] = {
    [sym_end_tag] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
  },
  [30] = {
    [anon_sym_LT] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(113),
    [sym_text] = ACTIONS(115),
    [anon_sym_LT_BANG] = ACTIONS(113),
    [ts_builtin_sym_end] = ACTIONS(115),
  },
  [31] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(117),
    [anon_sym_SLASH_GT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(119),
  },
  [32] = {
    [anon_sym_LT] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
    [anon_sym_LT_BANG] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(123),
  },
  [33] = {
    [anon_sym_LT] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(125),
    [sym_text] = ACTIONS(127),
    [anon_sym_LT_BANG] = ACTIONS(125),
    [sym__implicit_end_tag] = ACTIONS(127),
  },
  [34] = {
    [aux_sym_start_tag_repeat1] = STATE(61),
    [sym_attribute] = STATE(61),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(133),
  },
  [36] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(135),
    [sym_raw_text] = ACTIONS(135),
  },
  [37] = {
    [aux_sym_start_tag_repeat1] = STATE(64),
    [sym_attribute] = STATE(64),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(137),
  },
  [38] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(139),
    [sym_raw_text] = ACTIONS(139),
  },
  [39] = {
    [aux_sym_start_tag_repeat1] = STATE(64),
    [sym_attribute] = STATE(64),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(141),
  },
  [40] = {
    [anon_sym_LT] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
    [anon_sym_LT_BANG] = ACTIONS(143),
    [ts_builtin_sym_end] = ACTIONS(145),
  },
  [41] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(147),
  },
  [42] = {
    [aux_sym_start_tag_repeat1] = STATE(68),
    [sym_attribute] = STATE(68),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(55),
  },
  [43] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(151),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(153),
  },
  [45] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_doctype_token1] = ACTIONS(155),
  },
  [46] = {
    [anon_sym_LT] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(157),
    [sym_text] = ACTIONS(159),
    [anon_sym_LT_BANG] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(159),
  },
  [47] = {
    [aux_sym_fragment_repeat1] = STATE(47),
    [sym_element] = STATE(47),
    [sym_script_element] = STATE(47),
    [sym_self_closing_tag] = STATE(22),
    [sym_style_element] = STATE(47),
    [sym_start_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(47),
    [sym_doctype] = STATE(47),
    [sym__node] = STATE(47),
    [sym_script_start_tag] = STATE(24),
    [sym_style_start_tag] = STATE(25),
    [anon_sym_LT] = ACTIONS(161),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(164),
    [sym_text] = ACTIONS(167),
    [anon_sym_LT_BANG] = ACTIONS(170),
    [sym__implicit_end_tag] = ACTIONS(79),
  },
  [48] = {
    [sym_erroneous_end_tag_name] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(173),
  },
  [49] = {
    [anon_sym_LT] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(89),
    [sym_text] = ACTIONS(91),
    [anon_sym_LT_BANG] = ACTIONS(89),
    [sym__implicit_end_tag] = ACTIONS(91),
  },
  [50] = {
    [aux_sym_fragment_repeat1] = STATE(47),
    [sym_element] = STATE(47),
    [sym_script_element] = STATE(47),
    [sym_self_closing_tag] = STATE(22),
    [sym_end_tag] = STATE(74),
    [sym_style_element] = STATE(47),
    [sym_start_tag] = STATE(23),
    [sym_erroneous_end_tag] = STATE(47),
    [sym_doctype] = STATE(47),
    [sym__node] = STATE(47),
    [sym_script_start_tag] = STATE(24),
    [sym_style_start_tag] = STATE(25),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(93),
    [anon_sym_LT_SLASH] = ACTIONS(99),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(175),
  },
  [51] = {
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(173),
  },
  [52] = {
    [sym_end_tag] = STATE(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(103),
  },
  [53] = {
    [anon_sym_LT] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(109),
    [sym_text] = ACTIONS(111),
    [anon_sym_LT_BANG] = ACTIONS(109),
    [sym__implicit_end_tag] = ACTIONS(111),
  },
  [54] = {
    [sym_end_tag] = STATE(76),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(103),
  },
  [55] = {
    [anon_sym_LT] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(113),
    [sym_text] = ACTIONS(115),
    [anon_sym_LT_BANG] = ACTIONS(113),
    [sym__implicit_end_tag] = ACTIONS(115),
  },
  [56] = {
    [anon_sym_LT] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(177),
    [sym_text] = ACTIONS(179),
    [anon_sym_LT_BANG] = ACTIONS(177),
    [ts_builtin_sym_end] = ACTIONS(179),
  },
  [57] = {
    [anon_sym_LT] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(181),
    [sym_text] = ACTIONS(183),
    [anon_sym_LT_BANG] = ACTIONS(181),
    [ts_builtin_sym_end] = ACTIONS(183),
  },
  [58] = {
    [sym_quoted_attribute_value] = STATE(78),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym_attribute_value] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(189),
  },
  [59] = {
    [anon_sym_LT] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_text] = ACTIONS(193),
    [anon_sym_LT_BANG] = ACTIONS(191),
    [ts_builtin_sym_end] = ACTIONS(193),
  },
  [60] = {
    [anon_sym_LT] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(195),
    [sym_text] = ACTIONS(197),
    [anon_sym_LT_BANG] = ACTIONS(195),
    [sym__implicit_end_tag] = ACTIONS(197),
  },
  [61] = {
    [aux_sym_start_tag_repeat1] = STATE(61),
    [sym_attribute] = STATE(61),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(199),
    [anon_sym_SLASH_GT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
  },
  [62] = {
    [sym_quoted_attribute_value] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [sym_attribute_value] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(208),
  },
  [63] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(210),
    [sym_raw_text] = ACTIONS(210),
  },
  [64] = {
    [aux_sym_start_tag_repeat1] = STATE(64),
    [sym_attribute] = STATE(64),
    [sym_attribute_name] = ACTIONS(212),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(202),
  },
  [65] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(215),
    [sym_raw_text] = ACTIONS(215),
  },
  [66] = {
    [anon_sym_LT] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(217),
    [sym_text] = ACTIONS(219),
    [anon_sym_LT_BANG] = ACTIONS(217),
    [ts_builtin_sym_end] = ACTIONS(219),
  },
  [67] = {
    [anon_sym_LT] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
    [anon_sym_LT_BANG] = ACTIONS(121),
    [sym__implicit_end_tag] = ACTIONS(123),
  },
  [68] = {
    [aux_sym_start_tag_repeat1] = STATE(61),
    [sym_attribute] = STATE(61),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(131),
  },
  [69] = {
    [anon_sym_LT] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
    [anon_sym_LT_BANG] = ACTIONS(143),
    [sym__implicit_end_tag] = ACTIONS(145),
  },
  [70] = {
    [anon_sym_LT] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(223),
    [sym_text] = ACTIONS(225),
    [anon_sym_LT_BANG] = ACTIONS(223),
    [ts_builtin_sym_end] = ACTIONS(225),
  },
  [71] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(227),
  },
  [72] = {
    [sym_erroneous_end_tag_name] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(229),
  },
  [74] = {
    [anon_sym_LT] = ACTIONS(157),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(157),
    [sym_text] = ACTIONS(159),
    [anon_sym_LT_BANG] = ACTIONS(157),
    [sym__implicit_end_tag] = ACTIONS(159),
  },
  [75] = {
    [anon_sym_LT] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(177),
    [sym_text] = ACTIONS(179),
    [anon_sym_LT_BANG] = ACTIONS(177),
    [sym__implicit_end_tag] = ACTIONS(179),
  },
  [76] = {
    [anon_sym_LT] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(181),
    [sym_text] = ACTIONS(183),
    [anon_sym_LT_BANG] = ACTIONS(181),
    [sym__implicit_end_tag] = ACTIONS(183),
  },
  [77] = {
    [anon_sym_DQUOTE] = ACTIONS(231),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(235),
    [anon_sym_SLASH_GT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
  },
  [79] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(237),
  },
  [80] = {
    [anon_sym_DQUOTE] = ACTIONS(239),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_attribute_name] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(235),
  },
  [82] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(239),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(243),
  },
  [83] = {
    [anon_sym_LT] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_text] = ACTIONS(193),
    [anon_sym_LT_BANG] = ACTIONS(191),
    [sym__implicit_end_tag] = ACTIONS(193),
  },
  [84] = {
    [anon_sym_LT] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(217),
    [sym_text] = ACTIONS(219),
    [anon_sym_LT_BANG] = ACTIONS(217),
    [sym__implicit_end_tag] = ACTIONS(219),
  },
  [85] = {
    [anon_sym_LT] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(223),
    [sym_text] = ACTIONS(225),
    [anon_sym_LT_BANG] = ACTIONS(223),
    [sym__implicit_end_tag] = ACTIONS(225),
  },
  [86] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(245),
    [anon_sym_SLASH_GT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
  },
  [87] = {
    [anon_sym_DQUOTE] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(247),
  },
  [89] = {
    [sym_attribute_name] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(245),
  },
  [90] = {
    [anon_sym_DQUOTE] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(249),
  },
  [92] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(251),
    [anon_sym_SLASH_GT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
  },
  [93] = {
    [sym_attribute_name] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(251),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(11),
  [17] = {.count = 1, .reusable = true}, SHIFT(13),
  [19] = {.count = 1, .reusable = true}, SHIFT(12),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [33] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = false}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = false}, SHIFT(18),
  [41] = {.count = 1, .reusable = false}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(26),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, SHIFT(29),
  [51] = {.count = 1, .reusable = true}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, SHIFT(33),
  [57] = {.count = 1, .reusable = true}, SHIFT(35),
  [59] = {.count = 1, .reusable = true}, SHIFT(36),
  [61] = {.count = 1, .reusable = true}, SHIFT(38),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(41),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(42),
  [83] = {.count = 1, .reusable = true}, SHIFT(43),
  [85] = {.count = 1, .reusable = true}, SHIFT(44),
  [87] = {.count = 1, .reusable = true}, SHIFT(45),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(47),
  [95] = {.count = 1, .reusable = true}, SHIFT(46),
  [97] = {.count = 1, .reusable = true}, SHIFT(50),
  [99] = {.count = 1, .reusable = false}, SHIFT(48),
  [101] = {.count = 1, .reusable = true}, SHIFT(49),
  [103] = {.count = 1, .reusable = true}, SHIFT(51),
  [105] = {.count = 1, .reusable = true}, SHIFT(52),
  [107] = {.count = 1, .reusable = true}, SHIFT(54),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 2),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(58),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [129] = {.count = 1, .reusable = true}, SHIFT(59),
  [131] = {.count = 1, .reusable = true}, SHIFT(60),
  [133] = {.count = 1, .reusable = true}, SHIFT(62),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 3),
  [137] = {.count = 1, .reusable = true}, SHIFT(63),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 3),
  [141] = {.count = 1, .reusable = true}, SHIFT(65),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [147] = {.count = 1, .reusable = true}, SHIFT(66),
  [149] = {.count = 1, .reusable = true}, SHIFT(67),
  [151] = {.count = 1, .reusable = true}, SHIFT(69),
  [153] = {.count = 1, .reusable = true}, SHIFT(70),
  [155] = {.count = 1, .reusable = true}, SHIFT(71),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [161] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(17),
  [164] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(72),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(47),
  [170] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(19),
  [173] = {.count = 1, .reusable = true}, SHIFT(73),
  [175] = {.count = 1, .reusable = true}, SHIFT(74),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 3),
  [185] = {.count = 1, .reusable = true}, SHIFT(77),
  [187] = {.count = 1, .reusable = true}, SHIFT(78),
  [189] = {.count = 1, .reusable = true}, SHIFT(79),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(31),
  [202] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(80),
  [206] = {.count = 1, .reusable = true}, SHIFT(81),
  [208] = {.count = 1, .reusable = true}, SHIFT(82),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 4),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(35),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 4),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [221] = {.count = 1, .reusable = true}, SHIFT(83),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [227] = {.count = 1, .reusable = true}, SHIFT(84),
  [229] = {.count = 1, .reusable = true}, SHIFT(85),
  [231] = {.count = 1, .reusable = false}, SHIFT(86),
  [233] = {.count = 1, .reusable = true}, SHIFT(87),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(88),
  [239] = {.count = 1, .reusable = false}, SHIFT(89),
  [241] = {.count = 1, .reusable = true}, SHIFT(90),
  [243] = {.count = 1, .reusable = true}, SHIFT(91),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(92),
  [249] = {.count = 1, .reusable = true}, SHIFT(93),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
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
