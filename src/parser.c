#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 94
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 0
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
  [17] = {.lex_state = 0, .external_lex_state = 8},
  [18] = {.lex_state = 18, .external_lex_state = 2},
  [19] = {.lex_state = 18, .external_lex_state = 5},
  [20] = {.lex_state = 0, .external_lex_state = 9},
  [21] = {.lex_state = 22, .external_lex_state = 2},
  [22] = {.lex_state = 18, .external_lex_state = 2},
  [23] = {.lex_state = 22, .external_lex_state = 2},
  [24] = {.lex_state = 18, .external_lex_state = 2},
  [25] = {.lex_state = 24, .external_lex_state = 7},
  [26] = {.lex_state = 18, .external_lex_state = 2},
  [27] = {.lex_state = 18, .external_lex_state = 5},
  [28] = {.lex_state = 24, .external_lex_state = 7},
  [29] = {.lex_state = 22, .external_lex_state = 6},
  [30] = {.lex_state = 24, .external_lex_state = 2},
  [31] = {.lex_state = 22, .external_lex_state = 6},
  [32] = {.lex_state = 24, .external_lex_state = 2},
  [33] = {.lex_state = 18, .external_lex_state = 2},
  [34] = {.lex_state = 24, .external_lex_state = 2},
  [35] = {.lex_state = 24, .external_lex_state = 2},
  [36] = {.lex_state = 18, .external_lex_state = 2},
  [37] = {.lex_state = 18, .external_lex_state = 2},
  [38] = {.lex_state = 18, .external_lex_state = 2},
  [39] = {.lex_state = 29, .external_lex_state = 2},
  [40] = {.lex_state = 18, .external_lex_state = 2},
  [41] = {.lex_state = 18, .external_lex_state = 5},
  [42] = {.lex_state = 24, .external_lex_state = 7},
  [43] = {.lex_state = 22, .external_lex_state = 6},
  [44] = {.lex_state = 22, .external_lex_state = 6},
  [45] = {.lex_state = 18, .external_lex_state = 2},
  [46] = {.lex_state = 18, .external_lex_state = 2},
  [47] = {.lex_state = 31, .external_lex_state = 2},
  [48] = {.lex_state = 24, .external_lex_state = 7},
  [49] = {.lex_state = 34, .external_lex_state = 2},
  [50] = {.lex_state = 24, .external_lex_state = 7},
  [51] = {.lex_state = 29, .external_lex_state = 2},
  [52] = {.lex_state = 29, .external_lex_state = 2},
  [53] = {.lex_state = 24, .external_lex_state = 7},
  [54] = {.lex_state = 18, .external_lex_state = 5},
  [55] = {.lex_state = 18, .external_lex_state = 5},
  [56] = {.lex_state = 18, .external_lex_state = 5},
  [57] = {.lex_state = 18, .external_lex_state = 5},
  [58] = {.lex_state = 18, .external_lex_state = 5},
  [59] = {.lex_state = 24, .external_lex_state = 2},
  [60] = {.lex_state = 18, .external_lex_state = 5},
  [61] = {.lex_state = 18, .external_lex_state = 5},
  [62] = {.lex_state = 18, .external_lex_state = 5},
  [63] = {.lex_state = 18, .external_lex_state = 5},
  [64] = {.lex_state = 18, .external_lex_state = 5},
  [65] = {.lex_state = 18, .external_lex_state = 5},
  [66] = {.lex_state = 24, .external_lex_state = 2},
  [67] = {.lex_state = 18, .external_lex_state = 5},
  [68] = {.lex_state = 18, .external_lex_state = 5},
  [69] = {.lex_state = 24, .external_lex_state = 2},
  [70] = {.lex_state = 24, .external_lex_state = 2},
  [71] = {.lex_state = 24, .external_lex_state = 2},
  [72] = {.lex_state = 18, .external_lex_state = 5},
  [73] = {.lex_state = 22, .external_lex_state = 6},
  [74] = {.lex_state = 22, .external_lex_state = 6},
  [75] = {.lex_state = 24, .external_lex_state = 7},
  [76] = {.lex_state = 24, .external_lex_state = 2},
  [77] = {.lex_state = 18, .external_lex_state = 5},
  [78] = {.lex_state = 22, .external_lex_state = 2},
  [79] = {.lex_state = 22, .external_lex_state = 2},
  [80] = {.lex_state = 24, .external_lex_state = 7},
  [81] = {.lex_state = 24, .external_lex_state = 2},
  [82] = {.lex_state = 24, .external_lex_state = 2},
  [83] = {.lex_state = 29, .external_lex_state = 2},
  [84] = {.lex_state = 31, .external_lex_state = 2},
  [85] = {.lex_state = 34, .external_lex_state = 2},
  [86] = {.lex_state = 29, .external_lex_state = 2},
  [87] = {.lex_state = 29, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 26, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 8},
  [92] = {.lex_state = 0, .external_lex_state = 9},
  [93] = {.lex_state = 21, .external_lex_state = 2},
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
    [aux_sym_fragment_repeat1] = STATE(19),
    [sym_element] = STATE(19),
    [sym_script_element] = STATE(19),
    [sym_self_closing_tag] = STATE(54),
    [sym_end_tag] = STATE(18),
    [sym_style_element] = STATE(19),
    [sym_start_tag] = STATE(72),
    [sym_erroneous_end_tag] = STATE(19),
    [sym_doctype] = STATE(19),
    [sym__node] = STATE(19),
    [sym_script_start_tag] = STATE(73),
    [sym_style_start_tag] = STATE(74),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(37),
    [anon_sym_LT_SLASH] = ACTIONS(39),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(43),
  },
  [9] = {
    [sym_end_tag] = STATE(22),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(47),
  },
  [10] = {
    [sym_end_tag] = STATE(24),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
    [sym_raw_text] = ACTIONS(49),
  },
  [11] = {
    [aux_sym_start_tag_repeat1] = STATE(28),
    [sym_attribute] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(55),
  },
  [12] = {
    [aux_sym_start_tag_repeat1] = STATE(30),
    [sym_attribute] = STATE(30),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(59),
  },
  [13] = {
    [aux_sym_start_tag_repeat1] = STATE(32),
    [sym_attribute] = STATE(32),
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
    [sym_erroneous_end_tag_name] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(83),
  },
  [18] = {
    [anon_sym_LT] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
    [anon_sym_LT_BANG] = ACTIONS(85),
    [ts_builtin_sym_end] = ACTIONS(87),
  },
  [19] = {
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_self_closing_tag] = STATE(54),
    [sym_end_tag] = STATE(36),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(72),
    [sym_erroneous_end_tag] = STATE(55),
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_script_start_tag] = STATE(73),
    [sym_style_start_tag] = STATE(74),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(89),
    [anon_sym_LT_SLASH] = ACTIONS(39),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(91),
  },
  [20] = {
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(83),
  },
  [21] = {
    [sym_end_tag] = STATE(37),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
  },
  [22] = {
    [anon_sym_LT] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
    [anon_sym_LT_BANG] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(95),
  },
  [23] = {
    [sym_end_tag] = STATE(38),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(45),
  },
  [24] = {
    [anon_sym_LT] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
    [anon_sym_LT_BANG] = ACTIONS(97),
    [ts_builtin_sym_end] = ACTIONS(99),
  },
  [25] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(101),
    [anon_sym_SLASH_GT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
  },
  [26] = {
    [anon_sym_LT] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(105),
    [sym_text] = ACTIONS(107),
    [anon_sym_LT_BANG] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(107),
  },
  [27] = {
    [anon_sym_LT] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(109),
    [sym_text] = ACTIONS(111),
    [anon_sym_LT_BANG] = ACTIONS(109),
    [sym__implicit_end_tag] = ACTIONS(111),
  },
  [28] = {
    [aux_sym_start_tag_repeat1] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(117),
    [sym_raw_text] = ACTIONS(117),
  },
  [30] = {
    [aux_sym_start_tag_repeat1] = STATE(66),
    [sym_attribute] = STATE(66),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(119),
  },
  [31] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(121),
    [sym_raw_text] = ACTIONS(121),
  },
  [32] = {
    [aux_sym_start_tag_repeat1] = STATE(66),
    [sym_attribute] = STATE(66),
    [sym_attribute_name] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(123),
  },
  [33] = {
    [anon_sym_LT] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(125),
    [sym_text] = ACTIONS(127),
    [anon_sym_LT_BANG] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(127),
  },
  [34] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(129),
  },
  [35] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(131),
  },
  [36] = {
    [anon_sym_LT] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
    [anon_sym_LT_BANG] = ACTIONS(133),
    [ts_builtin_sym_end] = ACTIONS(135),
  },
  [37] = {
    [anon_sym_LT] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
    [anon_sym_LT_BANG] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(139),
  },
  [38] = {
    [anon_sym_LT] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(141),
    [sym_text] = ACTIONS(143),
    [anon_sym_LT_BANG] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(143),
  },
  [39] = {
    [sym_quoted_attribute_value] = STATE(48),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym_attribute_value] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(149),
  },
  [40] = {
    [anon_sym_LT] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(151),
    [sym_text] = ACTIONS(153),
    [anon_sym_LT_BANG] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(153),
  },
  [41] = {
    [anon_sym_LT] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(155),
    [sym_text] = ACTIONS(157),
    [anon_sym_LT_BANG] = ACTIONS(155),
    [sym__implicit_end_tag] = ACTIONS(157),
  },
  [42] = {
    [aux_sym_start_tag_repeat1] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(159),
    [anon_sym_SLASH_GT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
  },
  [43] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(164),
    [sym_raw_text] = ACTIONS(164),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(166),
    [sym_raw_text] = ACTIONS(166),
  },
  [45] = {
    [anon_sym_LT] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(168),
    [sym_text] = ACTIONS(170),
    [anon_sym_LT_BANG] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(170),
  },
  [46] = {
    [anon_sym_LT] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(172),
    [sym_text] = ACTIONS(174),
    [anon_sym_LT_BANG] = ACTIONS(172),
    [ts_builtin_sym_end] = ACTIONS(174),
  },
  [47] = {
    [anon_sym_DQUOTE] = ACTIONS(176),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(180),
    [anon_sym_SLASH_GT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
  },
  [49] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(182),
  },
  [50] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(184),
    [anon_sym_SLASH_GT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(184),
  },
  [51] = {
    [anon_sym_DQUOTE] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(186),
  },
  [53] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(188),
    [anon_sym_SLASH_GT] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
  },
  [54] = {
    [anon_sym_LT] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(29),
    [sym_text] = ACTIONS(31),
    [anon_sym_LT_BANG] = ACTIONS(29),
    [sym__implicit_end_tag] = ACTIONS(31),
  },
  [55] = {
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_self_closing_tag] = STATE(54),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(72),
    [sym_erroneous_end_tag] = STATE(55),
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_script_start_tag] = STATE(73),
    [sym_style_start_tag] = STATE(74),
    [anon_sym_LT] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(193),
    [sym_text] = ACTIONS(196),
    [anon_sym_LT_BANG] = ACTIONS(199),
    [sym__implicit_end_tag] = ACTIONS(79),
  },
  [56] = {
    [anon_sym_LT] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
    [anon_sym_LT_BANG] = ACTIONS(85),
    [sym__implicit_end_tag] = ACTIONS(87),
  },
  [57] = {
    [anon_sym_LT] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
    [anon_sym_LT_BANG] = ACTIONS(93),
    [sym__implicit_end_tag] = ACTIONS(95),
  },
  [58] = {
    [anon_sym_LT] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
    [anon_sym_LT_BANG] = ACTIONS(97),
    [sym__implicit_end_tag] = ACTIONS(99),
  },
  [59] = {
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(202),
  },
  [60] = {
    [anon_sym_LT] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(105),
    [sym_text] = ACTIONS(107),
    [anon_sym_LT_BANG] = ACTIONS(105),
    [sym__implicit_end_tag] = ACTIONS(107),
  },
  [61] = {
    [anon_sym_LT] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(125),
    [sym_text] = ACTIONS(127),
    [anon_sym_LT_BANG] = ACTIONS(125),
    [sym__implicit_end_tag] = ACTIONS(127),
  },
  [62] = {
    [anon_sym_LT] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
    [anon_sym_LT_BANG] = ACTIONS(133),
    [sym__implicit_end_tag] = ACTIONS(135),
  },
  [63] = {
    [anon_sym_LT] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
    [anon_sym_LT_BANG] = ACTIONS(137),
    [sym__implicit_end_tag] = ACTIONS(139),
  },
  [64] = {
    [anon_sym_LT] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(141),
    [sym_text] = ACTIONS(143),
    [anon_sym_LT_BANG] = ACTIONS(141),
    [sym__implicit_end_tag] = ACTIONS(143),
  },
  [65] = {
    [anon_sym_LT] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(151),
    [sym_text] = ACTIONS(153),
    [anon_sym_LT_BANG] = ACTIONS(151),
    [sym__implicit_end_tag] = ACTIONS(153),
  },
  [66] = {
    [aux_sym_start_tag_repeat1] = STATE(66),
    [sym_attribute] = STATE(66),
    [sym_attribute_name] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(162),
  },
  [67] = {
    [anon_sym_LT] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(168),
    [sym_text] = ACTIONS(170),
    [anon_sym_LT_BANG] = ACTIONS(168),
    [sym__implicit_end_tag] = ACTIONS(170),
  },
  [68] = {
    [anon_sym_LT] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(172),
    [sym_text] = ACTIONS(174),
    [anon_sym_LT_BANG] = ACTIONS(172),
    [sym__implicit_end_tag] = ACTIONS(174),
  },
  [69] = {
    [sym_attribute_name] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(180),
  },
  [70] = {
    [sym_attribute_name] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(184),
  },
  [71] = {
    [sym_attribute_name] = ACTIONS(188),
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(188),
  },
  [72] = {
    [aux_sym_fragment_repeat1] = STATE(77),
    [sym_element] = STATE(77),
    [sym_script_element] = STATE(77),
    [sym_self_closing_tag] = STATE(54),
    [sym_end_tag] = STATE(56),
    [sym_style_element] = STATE(77),
    [sym_start_tag] = STATE(72),
    [sym_erroneous_end_tag] = STATE(77),
    [sym_doctype] = STATE(77),
    [sym__node] = STATE(77),
    [sym_script_start_tag] = STATE(73),
    [sym_style_start_tag] = STATE(74),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(207),
    [anon_sym_LT_SLASH] = ACTIONS(209),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(211),
  },
  [73] = {
    [sym_end_tag] = STATE(57),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(213),
    [sym_raw_text] = ACTIONS(215),
  },
  [74] = {
    [sym_end_tag] = STATE(58),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(213),
    [sym_raw_text] = ACTIONS(217),
  },
  [75] = {
    [aux_sym_start_tag_repeat1] = STATE(80),
    [sym_attribute] = STATE(80),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(55),
  },
  [76] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(221),
  },
  [77] = {
    [aux_sym_fragment_repeat1] = STATE(55),
    [sym_element] = STATE(55),
    [sym_script_element] = STATE(55),
    [sym_self_closing_tag] = STATE(54),
    [sym_end_tag] = STATE(62),
    [sym_style_element] = STATE(55),
    [sym_start_tag] = STATE(72),
    [sym_erroneous_end_tag] = STATE(55),
    [sym_doctype] = STATE(55),
    [sym__node] = STATE(55),
    [sym_script_start_tag] = STATE(73),
    [sym_style_start_tag] = STATE(74),
    [anon_sym_LT] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [sym_text] = ACTIONS(89),
    [anon_sym_LT_SLASH] = ACTIONS(209),
    [anon_sym_LT_BANG] = ACTIONS(41),
    [sym__implicit_end_tag] = ACTIONS(223),
  },
  [78] = {
    [sym_end_tag] = STATE(63),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(213),
  },
  [79] = {
    [sym_end_tag] = STATE(64),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LT_SLASH] = ACTIONS(213),
  },
  [80] = {
    [aux_sym_start_tag_repeat1] = STATE(42),
    [sym_attribute] = STATE(42),
    [sym_comment] = ACTIONS(3),
    [sym_attribute_name] = ACTIONS(51),
    [anon_sym_SLASH_GT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(115),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(227),
  },
  [82] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(229),
  },
  [83] = {
    [sym_quoted_attribute_value] = STATE(69),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_attribute_value] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(235),
  },
  [84] = {
    [anon_sym_DQUOTE] = ACTIONS(237),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(241),
  },
  [86] = {
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(243),
  },
  [88] = {
    [sym__start_tag_name] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym__style_start_tag_name] = ACTIONS(17),
    [sym__script_start_tag_name] = ACTIONS(19),
  },
  [89] = {
    [sym_erroneous_end_tag_name] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_doctype_token1] = ACTIONS(247),
  },
  [91] = {
    [sym_erroneous_end_tag_name] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(249),
  },
  [92] = {
    [sym_comment] = ACTIONS(3),
    [sym__end_tag_name] = ACTIONS(249),
  },
  [93] = {
    [sym_comment] = ACTIONS(3),
    [sym__doctype] = ACTIONS(251),
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
  [35] = {.count = 1, .reusable = false}, SHIFT(88),
  [37] = {.count = 1, .reusable = true}, SHIFT(19),
  [39] = {.count = 1, .reusable = false}, SHIFT(17),
  [41] = {.count = 1, .reusable = false}, SHIFT(93),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = true}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, SHIFT(23),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(59),
  [59] = {.count = 1, .reusable = true}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, SHIFT(34),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(76),
  [83] = {.count = 1, .reusable = true}, SHIFT(35),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(55),
  [91] = {.count = 1, .reusable = true}, SHIFT(36),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 2),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 2),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 2),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(39),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [113] = {.count = 1, .reusable = true}, SHIFT(40),
  [115] = {.count = 1, .reusable = true}, SHIFT(41),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 3),
  [119] = {.count = 1, .reusable = true}, SHIFT(43),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 3),
  [123] = {.count = 1, .reusable = true}, SHIFT(44),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [129] = {.count = 1, .reusable = true}, SHIFT(45),
  [131] = {.count = 1, .reusable = true}, SHIFT(46),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 3),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 3),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 3),
  [145] = {.count = 1, .reusable = true}, SHIFT(47),
  [147] = {.count = 1, .reusable = true}, SHIFT(48),
  [149] = {.count = 1, .reusable = true}, SHIFT(49),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(25),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 4),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 4),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [176] = {.count = 1, .reusable = false}, SHIFT(50),
  [178] = {.count = 1, .reusable = true}, SHIFT(51),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [182] = {.count = 1, .reusable = true}, SHIFT(52),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [186] = {.count = 1, .reusable = true}, SHIFT(53),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(88),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [199] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(93),
  [202] = {.count = 1, .reusable = true}, SHIFT(83),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(59),
  [207] = {.count = 1, .reusable = true}, SHIFT(77),
  [209] = {.count = 1, .reusable = false}, SHIFT(91),
  [211] = {.count = 1, .reusable = true}, SHIFT(56),
  [213] = {.count = 1, .reusable = true}, SHIFT(92),
  [215] = {.count = 1, .reusable = true}, SHIFT(78),
  [217] = {.count = 1, .reusable = true}, SHIFT(79),
  [219] = {.count = 1, .reusable = true}, SHIFT(60),
  [221] = {.count = 1, .reusable = true}, SHIFT(61),
  [223] = {.count = 1, .reusable = true}, SHIFT(62),
  [225] = {.count = 1, .reusable = true}, SHIFT(65),
  [227] = {.count = 1, .reusable = true}, SHIFT(67),
  [229] = {.count = 1, .reusable = true}, SHIFT(68),
  [231] = {.count = 1, .reusable = true}, SHIFT(84),
  [233] = {.count = 1, .reusable = true}, SHIFT(69),
  [235] = {.count = 1, .reusable = true}, SHIFT(85),
  [237] = {.count = 1, .reusable = false}, SHIFT(70),
  [239] = {.count = 1, .reusable = true}, SHIFT(86),
  [241] = {.count = 1, .reusable = true}, SHIFT(87),
  [243] = {.count = 1, .reusable = true}, SHIFT(71),
  [245] = {.count = 1, .reusable = true}, SHIFT(75),
  [247] = {.count = 1, .reusable = true}, SHIFT(81),
  [249] = {.count = 1, .reusable = true}, SHIFT(82),
  [251] = {.count = 1, .reusable = true}, SHIFT(90),
};

void *tree_sitter_html_external_scanner_create(void);
void tree_sitter_html_external_scanner_destroy(void *);
bool tree_sitter_html_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_html_external_scanner_serialize(void *, char *);
void tree_sitter_html_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_html(void) {
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
