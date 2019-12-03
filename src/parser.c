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

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(33);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_doctype_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__doctype);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 3},
  [3] = {.lex_state = 13, .external_lex_state = 3},
  [4] = {.lex_state = 13, .external_lex_state = 3},
  [5] = {.lex_state = 13, .external_lex_state = 3},
  [6] = {.lex_state = 13, .external_lex_state = 3},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 4, .external_lex_state = 4},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 3},
  [13] = {.lex_state = 13, .external_lex_state = 3},
  [14] = {.lex_state = 13, .external_lex_state = 3},
  [15] = {.lex_state = 4, .external_lex_state = 4},
  [16] = {.lex_state = 13, .external_lex_state = 3},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 3},
  [19] = {.lex_state = 13, .external_lex_state = 3},
  [20] = {.lex_state = 13, .external_lex_state = 3},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 3},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 3},
  [26] = {.lex_state = 13, .external_lex_state = 3},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 4, .external_lex_state = 4},
  [29] = {.lex_state = 4, .external_lex_state = 4},
  [30] = {.lex_state = 13, .external_lex_state = 3},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 4, .external_lex_state = 4},
  [33] = {.lex_state = 13, .external_lex_state = 3},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 3},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 3},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 4, .external_lex_state = 2},
  [42] = {.lex_state = 4, .external_lex_state = 2},
  [43] = {.lex_state = 4, .external_lex_state = 4},
  [44] = {.lex_state = 1, .external_lex_state = 2},
  [45] = {.lex_state = 4, .external_lex_state = 2},
  [46] = {.lex_state = 4, .external_lex_state = 2},
  [47] = {.lex_state = 4, .external_lex_state = 2},
  [48] = {.lex_state = 4, .external_lex_state = 4},
  [49] = {.lex_state = 4, .external_lex_state = 2},
  [50] = {.lex_state = 4, .external_lex_state = 4},
  [51] = {.lex_state = 0, .external_lex_state = 5},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 4, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 6},
  [55] = {.lex_state = 0, .external_lex_state = 6},
  [56] = {.lex_state = 0, .external_lex_state = 6},
  [57] = {.lex_state = 0, .external_lex_state = 6},
  [58] = {.lex_state = 4, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 6},
  [60] = {.lex_state = 0, .external_lex_state = 6},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 7},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 2, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 2},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 12, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 8},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 9},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 8},
  [90] = {.lex_state = 12, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 9},
  [93] = {.lex_state = 0, .external_lex_state = 2},
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
    [ts_external_token__implicit_end_tag] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token_SLASH_GT] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__start_tag_name] = true,
    [ts_external_token__script_start_tag_name] = true,
    [ts_external_token__style_start_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token_raw_text] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__end_tag_name] = true,
    [ts_external_token_erroneous_end_tag_name] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__doctype] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__start_tag_name] = ACTIONS(1),
    [sym__script_start_tag_name] = ACTIONS(1),
    [sym__style_start_tag_name] = ACTIONS(1),
    [sym__end_tag_name] = ACTIONS(1),
    [sym_erroneous_end_tag_name] = ACTIONS(1),
    [sym__implicit_end_tag] = ACTIONS(1),
    [sym_raw_text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_fragment] = STATE(77),
    [sym_doctype] = STATE(8),
    [sym__node] = STATE(8),
    [sym_element] = STATE(8),
    [sym_script_element] = STATE(8),
    [sym_style_element] = STATE(8),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(54),
    [sym_style_start_tag] = STATE(57),
    [sym_self_closing_tag] = STATE(11),
    [sym_erroneous_end_tag] = STATE(8),
    [aux_sym_fragment_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(55),
    [sym_self_closing_tag] = STATE(14),
    [sym_end_tag] = STATE(36),
    [sym_erroneous_end_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
    [sym__implicit_end_tag] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(55),
    [sym_self_closing_tag] = STATE(14),
    [sym_end_tag] = STATE(22),
    [sym_erroneous_end_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(25),
    [sym_text] = ACTIONS(21),
    [sym__implicit_end_tag] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_doctype] = STATE(2),
    [sym__node] = STATE(2),
    [sym_element] = STATE(2),
    [sym_script_element] = STATE(2),
    [sym_style_element] = STATE(2),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(55),
    [sym_self_closing_tag] = STATE(14),
    [sym_end_tag] = STATE(17),
    [sym_erroneous_end_tag] = STATE(2),
    [aux_sym_fragment_repeat1] = STATE(2),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(19),
    [sym_text] = ACTIONS(29),
    [sym__implicit_end_tag] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_doctype] = STATE(3),
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym_script_element] = STATE(3),
    [sym_style_element] = STATE(3),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(55),
    [sym_self_closing_tag] = STATE(14),
    [sym_end_tag] = STATE(12),
    [sym_erroneous_end_tag] = STATE(3),
    [aux_sym_fragment_repeat1] = STATE(3),
    [anon_sym_LT_BANG] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(17),
    [anon_sym_LT_SLASH] = ACTIONS(25),
    [sym_text] = ACTIONS(33),
    [sym__implicit_end_tag] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_doctype] = STATE(6),
    [sym__node] = STATE(6),
    [sym_element] = STATE(6),
    [sym_script_element] = STATE(6),
    [sym_style_element] = STATE(6),
    [sym_start_tag] = STATE(5),
    [sym_script_start_tag] = STATE(56),
    [sym_style_start_tag] = STATE(55),
    [sym_self_closing_tag] = STATE(14),
    [sym_erroneous_end_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [anon_sym_LT_BANG] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(40),
    [anon_sym_LT_SLASH] = ACTIONS(43),
    [sym_text] = ACTIONS(46),
    [sym__implicit_end_tag] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(54),
    [sym_style_start_tag] = STATE(57),
    [sym_self_closing_tag] = STATE(11),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LT_BANG] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_LT_SLASH] = ACTIONS(57),
    [sym_text] = ACTIONS(60),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_doctype] = STATE(7),
    [sym__node] = STATE(7),
    [sym_element] = STATE(7),
    [sym_script_element] = STATE(7),
    [sym_style_element] = STATE(7),
    [sym_start_tag] = STATE(4),
    [sym_script_start_tag] = STATE(54),
    [sym_style_start_tag] = STATE(57),
    [sym_self_closing_tag] = STATE(11),
    [sym_erroneous_end_tag] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LT_BANG] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_LT_SLASH] = ACTIONS(11),
    [sym_text] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_attribute] = STATE(29),
    [aux_sym_start_tag_repeat1] = STATE(29),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_SLASH_GT] = ACTIONS(69),
    [sym_attribute_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LT_BANG] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_LT_SLASH] = ACTIONS(75),
    [sym_text] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LT_BANG] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(79),
    [sym_text] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [anon_sym_LT_BANG] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_SLASH] = ACTIONS(81),
    [sym_text] = ACTIONS(83),
    [sym__implicit_end_tag] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [anon_sym_LT_BANG] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_SLASH] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
    [sym__implicit_end_tag] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [anon_sym_LT_BANG] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_LT_SLASH] = ACTIONS(79),
    [sym_text] = ACTIONS(77),
    [sym__implicit_end_tag] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_attribute] = STATE(28),
    [aux_sym_start_tag_repeat1] = STATE(28),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_SLASH_GT] = ACTIONS(91),
    [sym_attribute_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_LT_BANG] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_LT_SLASH] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
    [sym__implicit_end_tag] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LT_BANG] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_LT_SLASH] = ACTIONS(81),
    [sym_text] = ACTIONS(83),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_LT_BANG] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_SLASH] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
    [sym__implicit_end_tag] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [anon_sym_LT_BANG] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_SLASH] = ACTIONS(101),
    [sym_text] = ACTIONS(103),
    [sym__implicit_end_tag] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [anon_sym_LT_BANG] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_LT_SLASH] = ACTIONS(75),
    [sym_text] = ACTIONS(73),
    [sym__implicit_end_tag] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LT_BANG] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_LT_SLASH] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [anon_sym_LT_BANG] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_SLASH] = ACTIONS(105),
    [sym_text] = ACTIONS(107),
    [sym__implicit_end_tag] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LT_BANG] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_SLASH] = ACTIONS(111),
    [sym_text] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_LT_BANG] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_SLASH] = ACTIONS(115),
    [sym_text] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [anon_sym_LT_BANG] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_LT_SLASH] = ACTIONS(117),
    [sym_text] = ACTIONS(119),
    [sym__implicit_end_tag] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [anon_sym_LT_BANG] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_LT_SLASH] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
    [sym__implicit_end_tag] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LT_BANG] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_SLASH] = ACTIONS(127),
    [sym_text] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_attribute] = STATE(28),
    [aux_sym_start_tag_repeat1] = STATE(28),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_SLASH_GT] = ACTIONS(129),
    [sym_attribute_name] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym_attribute] = STATE(28),
    [aux_sym_start_tag_repeat1] = STATE(28),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_SLASH_GT] = ACTIONS(134),
    [sym_attribute_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_LT_BANG] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_LT_SLASH] = ACTIONS(127),
    [sym_text] = ACTIONS(125),
    [sym__implicit_end_tag] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_LT_BANG] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_LT_SLASH] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym_attribute] = STATE(15),
    [aux_sym_start_tag_repeat1] = STATE(15),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_SLASH_GT] = ACTIONS(136),
    [sym_attribute_name] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_LT_BANG] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_LT_SLASH] = ACTIONS(138),
    [sym_text] = ACTIONS(140),
    [sym__implicit_end_tag] = ACTIONS(140),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LT_BANG] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_LT_SLASH] = ACTIONS(117),
    [sym_text] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_LT_BANG] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_LT_SLASH] = ACTIONS(111),
    [sym_text] = ACTIONS(109),
    [sym__implicit_end_tag] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LT_BANG] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_LT_SLASH] = ACTIONS(105),
    [sym_text] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_LT_BANG] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_LT_SLASH] = ACTIONS(115),
    [sym_text] = ACTIONS(113),
    [sym__implicit_end_tag] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_LT_BANG] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_LT_SLASH] = ACTIONS(101),
    [sym_text] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LT_BANG] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_LT_SLASH] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym_quoted_attribute_value] = STATE(48),
    [sym_attribute_value] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_attribute] = STATE(47),
    [aux_sym_start_tag_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(148),
    [sym_attribute_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_attribute] = STATE(47),
    [aux_sym_start_tag_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(152),
    [sym_attribute_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_SLASH_GT] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(156),
    [sym_attribute_name] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym_quoted_attribute_value] = STATE(69),
    [sym_attribute_value] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym_attribute] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [anon_sym_GT] = ACTIONS(164),
    [sym_attribute_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym_attribute] = STATE(42),
    [aux_sym_start_tag_repeat1] = STATE(42),
    [anon_sym_GT] = ACTIONS(166),
    [sym_attribute_name] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym_attribute] = STATE(47),
    [aux_sym_start_tag_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(129),
    [sym_attribute_name] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_SLASH_GT] = ACTIONS(171),
    [sym_attribute_name] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(173),
    [sym_attribute_name] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_SLASH_GT] = ACTIONS(175),
    [sym_attribute_name] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__start_tag_name] = ACTIONS(177),
    [sym__script_start_tag_name] = ACTIONS(179),
    [sym__style_start_tag_name] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__start_tag_name] = ACTIONS(183),
    [sym__script_start_tag_name] = ACTIONS(179),
    [sym__style_start_tag_name] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_SLASH_GT] = ACTIONS(185),
    [sym_attribute_name] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym_end_tag] = STATE(21),
    [anon_sym_LT_SLASH] = ACTIONS(187),
    [sym_raw_text] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym_end_tag] = STATE(35),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_raw_text] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_end_tag] = STATE(13),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_raw_text] = ACTIONS(195),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_end_tag] = STATE(23),
    [anon_sym_LT_SLASH] = ACTIONS(187),
    [sym_raw_text] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_GT] = ACTIONS(185),
    [sym_attribute_name] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_LT_SLASH] = ACTIONS(199),
    [sym_raw_text] = ACTIONS(199),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_LT_SLASH] = ACTIONS(201),
    [sym_raw_text] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_LT_SLASH] = ACTIONS(203),
    [sym_raw_text] = ACTIONS(203),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym__end_tag_name] = ACTIONS(205),
    [sym_erroneous_end_tag_name] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_end_tag] = STATE(38),
    [anon_sym_LT_SLASH] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_DQUOTE] = ACTIONS(209),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_end_tag] = STATE(10),
    [anon_sym_LT_SLASH] = ACTIONS(187),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym__end_tag_name] = ACTIONS(213),
    [sym_erroneous_end_tag_name] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_SQUOTE] = ACTIONS(209),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_end_tag] = STATE(19),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_GT] = ACTIONS(171),
    [sym_attribute_name] = ACTIONS(171),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_GT] = ACTIONS(175),
    [sym_attribute_name] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_DQUOTE] = ACTIONS(217),
    [aux_sym_quoted_attribute_value_token2] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym_end_tag] = STATE(20),
    [anon_sym_LT_SLASH] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [anon_sym_LT_SLASH] = ACTIONS(221),
    [sym_raw_text] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_SQUOTE] = ACTIONS(217),
    [aux_sym_quoted_attribute_value_token1] = ACTIONS(223),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [sym__doctype] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_GT] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [anon_sym_SQUOTE] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [aux_sym_doctype_token1] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_GT] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_erroneous_end_tag_name] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_GT] = ACTIONS(239),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_GT] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [anon_sym_GT] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym__end_tag_name] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
  },
  [86] = {
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
  },
  [88] = {
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [sym_erroneous_end_tag_name] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [90] = {
    [aux_sym_doctype_token1] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_GT] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [sym__end_tag_name] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [sym__doctype] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(75),
  [9] = {.count = 1, .reusable = false}, SHIFT(52),
  [11] = {.count = 1, .reusable = false}, SHIFT(81),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(93),
  [17] = {.count = 1, .reusable = false}, SHIFT(51),
  [19] = {.count = 1, .reusable = false}, SHIFT(66),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = true}, SHIFT(36),
  [25] = {.count = 1, .reusable = false}, SHIFT(62),
  [27] = {.count = 1, .reusable = true}, SHIFT(22),
  [29] = {.count = 1, .reusable = true}, SHIFT(2),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(3),
  [35] = {.count = 1, .reusable = true}, SHIFT(12),
  [37] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(93),
  [40] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [43] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [49] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [51] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(75),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(52),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(81),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(7),
  [67] = {.count = 1, .reusable = true}, SHIFT(26),
  [69] = {.count = 1, .reusable = true}, SHIFT(27),
  [71] = {.count = 1, .reusable = true}, SHIFT(43),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_element, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_element, 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_script_element, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_script_element, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(33),
  [91] = {.count = 1, .reusable = true}, SHIFT(16),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_doctype, 4),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_doctype, 4),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 3),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_style_element, 2),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_style_element, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_erroneous_end_tag, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_erroneous_end_tag, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 3),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 3),
  [129] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(43),
  [134] = {.count = 1, .reusable = true}, SHIFT(31),
  [136] = {.count = 1, .reusable = true}, SHIFT(30),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [142] = {.count = 1, .reusable = true}, SHIFT(48),
  [144] = {.count = 1, .reusable = true}, SHIFT(74),
  [146] = {.count = 1, .reusable = true}, SHIFT(71),
  [148] = {.count = 1, .reusable = true}, SHIFT(73),
  [150] = {.count = 1, .reusable = true}, SHIFT(49),
  [152] = {.count = 1, .reusable = true}, SHIFT(59),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1),
  [156] = {.count = 1, .reusable = true}, SHIFT(40),
  [158] = {.count = 1, .reusable = true}, SHIFT(69),
  [160] = {.count = 1, .reusable = true}, SHIFT(67),
  [162] = {.count = 1, .reusable = true}, SHIFT(64),
  [164] = {.count = 1, .reusable = true}, SHIFT(60),
  [166] = {.count = 1, .reusable = true}, SHIFT(61),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(49),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3),
  [173] = {.count = 1, .reusable = true}, SHIFT(44),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(32),
  [179] = {.count = 1, .reusable = true}, SHIFT(46),
  [181] = {.count = 1, .reusable = true}, SHIFT(45),
  [183] = {.count = 1, .reusable = true}, SHIFT(9),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3),
  [187] = {.count = 1, .reusable = true}, SHIFT(85),
  [189] = {.count = 1, .reusable = true}, SHIFT(65),
  [191] = {.count = 1, .reusable = true}, SHIFT(92),
  [193] = {.count = 1, .reusable = true}, SHIFT(68),
  [195] = {.count = 1, .reusable = true}, SHIFT(72),
  [197] = {.count = 1, .reusable = true}, SHIFT(63),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_script_start_tag, 3),
  [205] = {.count = 1, .reusable = true}, SHIFT(82),
  [207] = {.count = 1, .reusable = true}, SHIFT(76),
  [209] = {.count = 1, .reusable = false}, SHIFT(70),
  [211] = {.count = 1, .reusable = true}, SHIFT(87),
  [213] = {.count = 1, .reusable = true}, SHIFT(83),
  [215] = {.count = 1, .reusable = true}, SHIFT(86),
  [217] = {.count = 1, .reusable = false}, SHIFT(50),
  [219] = {.count = 1, .reusable = true}, SHIFT(88),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_style_start_tag, 4),
  [223] = {.count = 1, .reusable = true}, SHIFT(78),
  [225] = {.count = 1, .reusable = true}, SHIFT(79),
  [227] = {.count = 1, .reusable = true}, SHIFT(25),
  [229] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [231] = {.count = 1, .reusable = true}, SHIFT(53),
  [233] = {.count = 1, .reusable = true}, SHIFT(91),
  [235] = {.count = 1, .reusable = true}, SHIFT(18),
  [237] = {.count = 1, .reusable = true}, SHIFT(84),
  [239] = {.count = 1, .reusable = true}, SHIFT(37),
  [241] = {.count = 1, .reusable = true}, SHIFT(24),
  [243] = {.count = 1, .reusable = true}, SHIFT(34),
  [245] = {.count = 1, .reusable = true}, SHIFT(58),
  [247] = {.count = 1, .reusable = true}, SHIFT(80),
  [249] = {.count = 1, .reusable = true}, SHIFT(39),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
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
