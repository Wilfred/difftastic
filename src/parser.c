#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 40
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 3
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_SLASH = 3,
  anon_sym_EQ = 4,
  sym__attribute_part = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH = 9,
  sym_tag_name = 10,
  sym_void_tag_name = 11,
  sym_text = 12,
  sym_fragment = 13,
  sym__node = 14,
  sym_element = 15,
  sym_void_element = 16,
  sym_start_tag = 17,
  sym_void_start_tag = 18,
  sym_self_closing_tag = 19,
  sym_attribute = 20,
  sym_quoted_attribute_value = 21,
  sym_end_tag = 22,
  aux_sym_fragment_repeat1 = 23,
  aux_sym_start_tag_repeat1 = 24,
  alias_sym_attribute_name = 25,
  alias_sym_attribute_value = 26,
  alias_sym_tag_name = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [sym__attribute_part] = "_attribute_part",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = "/[^']+/",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = "/[^\"]+/",
  [sym_tag_name] = "tag_name",
  [sym_void_tag_name] = "void_tag_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_void_element] = "void_element",
  [sym_start_tag] = "start_tag",
  [sym_void_start_tag] = "void_start_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_end_tag] = "end_tag",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_attribute_value] = "attribute_value",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
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
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_void_tag_name] = {
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
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_void_start_tag] = {
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
  [sym_end_tag] = {
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
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = alias_sym_tag_name,
  },
  [2] = {
    [0] = alias_sym_attribute_name,
  },
  [3] = {
    [0] = alias_sym_attribute_name,
    [2] = alias_sym_attribute_value,
  },
  [4] = {
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
      if (lookahead == '<')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      ADVANCE(9);
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
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__attribute_part);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(9);
      END_STATE();
    case 9:
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
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != '>')
        ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>')
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      END_STATE();
    case 16:
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
        SKIP(16);
      if (lookahead != 0 &&
          lookahead != '\"' &&
          lookahead != '\'' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      if (lookahead != 0 &&
          lookahead != '/' &&
          (lookahead < '<' || lookahead > '>'))
        ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 'a')
        ADVANCE(1);
      if (lookahead == 'b')
        ADVANCE(5);
      if (lookahead == 'c')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(24);
      if (lookahead == 'h')
        ADVANCE(28);
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'k')
        ADVANCE(39);
      if (lookahead == 'l')
        ADVANCE(44);
      if (lookahead == 'm')
        ADVANCE(47);
      if (lookahead == 'n')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(58);
      if (lookahead == 's')
        ADVANCE(61);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'w')
        ADVANCE(68);
      END_STATE();
    case 1:
      if (lookahead == 'r')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'e')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'a')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_void_tag_name);
      END_STATE();
    case 5:
      if (lookahead == 'a')
        ADVANCE(6);
      if (lookahead == 'g')
        ADVANCE(12);
      if (lookahead == 'r')
        ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 's')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_void_tag_name);
      if (lookahead == 'f')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'o')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'n')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't')
        ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 's')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'o')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'u')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'n')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'd')
        ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'o')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'l')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'm')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'a')
        ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'm')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'b')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'r')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'a')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'm')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(4);
      END_STATE();
    case 28:
      if (lookahead == 'r')
        ADVANCE(4);
      END_STATE();
    case 29:
      if (lookahead == 'm')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(32);
      if (lookahead == 's')
        ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'g')
        ADVANCE(4);
      END_STATE();
    case 31:
      if (lookahead == 'g')
        ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'p')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'u')
        ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 'i')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'n')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'd')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'x')
        ADVANCE(4);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'y')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'g')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'n')
        ADVANCE(4);
      END_STATE();
    case 44:
      if (lookahead == 'i')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'k')
        ADVANCE(4);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      if (lookahead == 't')
        ADVANCE(3);
      END_STATE();
    case 49:
      if (lookahead == 'u')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 't')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'm')
        ADVANCE(4);
      END_STATE();
    case 54:
      if (lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'x')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 't')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'i')
        ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == 'a')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'r')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'u')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'c')
        ADVANCE(27);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'a')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'c')
        ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'b')
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 16},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__attribute_part] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(3),
    [sym_void_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(3),
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [2] = {
    [sym_tag_name] = ACTIONS(11),
    [sym_void_tag_name] = ACTIONS(13),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(15),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [sym_text] = ACTIONS(17),
  },
  [5] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [sym_end_tag] = STATE(11),
    [aux_sym_fragment_repeat1] = STATE(12),
    [anon_sym_LT] = ACTIONS(21),
    [sym_text] = ACTIONS(9),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [sym_text] = ACTIONS(23),
  },
  [7] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
  },
  [8] = {
    [sym_attribute] = STATE(17),
    [aux_sym_start_tag_repeat1] = STATE(17),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [sym__attribute_part] = ACTIONS(33),
  },
  [9] = {
    [sym_attribute] = STATE(19),
    [aux_sym_start_tag_repeat1] = STATE(19),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_SLASH] = ACTIONS(31),
    [sym__attribute_part] = ACTIONS(33),
  },
  [10] = {
    [anon_sym_SLASH] = ACTIONS(37),
    [sym_tag_name] = ACTIONS(11),
    [sym_void_tag_name] = ACTIONS(13),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LT] = ACTIONS(41),
    [sym_text] = ACTIONS(39),
  },
  [12] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [sym_end_tag] = STATE(21),
    [aux_sym_fragment_repeat1] = STATE(22),
    [anon_sym_LT] = ACTIONS(21),
    [sym_text] = ACTIONS(9),
  },
  [13] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [sym_text] = ACTIONS(48),
  },
  [14] = {
    [anon_sym_LT] = ACTIONS(51),
    [sym_text] = ACTIONS(53),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(55),
  },
  [16] = {
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [sym__attribute_part] = ACTIONS(57),
  },
  [17] = {
    [sym_attribute] = STATE(27),
    [aux_sym_start_tag_repeat1] = STATE(27),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [sym__attribute_part] = ACTIONS(33),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LT] = ACTIONS(67),
    [sym_text] = ACTIONS(65),
  },
  [19] = {
    [sym_attribute] = STATE(27),
    [aux_sym_start_tag_repeat1] = STATE(27),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(63),
    [sym__attribute_part] = ACTIONS(33),
  },
  [20] = {
    [sym_tag_name] = ACTIONS(71),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [sym_text] = ACTIONS(73),
  },
  [22] = {
    [sym__node] = STATE(4),
    [sym_element] = STATE(4),
    [sym_void_element] = STATE(4),
    [sym_start_tag] = STATE(5),
    [sym_void_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(22),
    [anon_sym_LT] = ACTIONS(45),
    [sym_text] = ACTIONS(48),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(79),
    [sym_text] = ACTIONS(77),
  },
  [24] = {
    [sym_quoted_attribute_value] = STATE(33),
    [sym__attribute_part] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
  },
  [25] = {
    [anon_sym_LT] = ACTIONS(87),
    [sym_text] = ACTIONS(89),
  },
  [26] = {
    [anon_sym_GT] = ACTIONS(91),
  },
  [27] = {
    [sym_attribute] = STATE(27),
    [aux_sym_start_tag_repeat1] = STATE(27),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [sym__attribute_part] = ACTIONS(95),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(100),
    [sym_text] = ACTIONS(98),
  },
  [29] = {
    [anon_sym_GT] = ACTIONS(102),
  },
  [30] = {
    [anon_sym_GT] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [sym__attribute_part] = ACTIONS(104),
  },
  [31] = {
    [anon_sym_SQUOTE] = ACTIONS(106),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(108),
  },
  [32] = {
    [anon_sym_DQUOTE] = ACTIONS(106),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_PLUS_SLASH] = ACTIONS(110),
  },
  [33] = {
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [sym__attribute_part] = ACTIONS(112),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(116),
    [sym_text] = ACTIONS(114),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [sym_text] = ACTIONS(118),
  },
  [36] = {
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [sym__attribute_part] = ACTIONS(122),
  },
  [37] = {
    [anon_sym_SQUOTE] = ACTIONS(124),
  },
  [38] = {
    [anon_sym_DQUOTE] = ACTIONS(124),
  },
  [39] = {
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [sym__attribute_part] = ACTIONS(126),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(8),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 1),
  [19] = {.count = 1, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 1),
  [21] = {.count = 1, .reusable = false}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_void_element, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_void_element, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_element, 2),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_element, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [45] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3, .alias_sequence_id = 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3, .alias_sequence_id = 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 1, .alias_sequence_id = 2),
  [59] = {.count = 1, .reusable = true}, SHIFT(24),
  [61] = {.count = 1, .reusable = true}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(26),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_void_start_tag, 3, .alias_sequence_id = 1),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_void_start_tag, 3, .alias_sequence_id = 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(28),
  [71] = {.count = 1, .reusable = true}, SHIFT(29),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_element, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_element, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 4),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 4),
  [81] = {.count = 1, .reusable = true}, SHIFT(30),
  [83] = {.count = 1, .reusable = true}, SHIFT(31),
  [85] = {.count = 1, .reusable = true}, SHIFT(32),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4, .alias_sequence_id = 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(34),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(16),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_void_start_tag, 4, .alias_sequence_id = 1),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_void_start_tag, 4, .alias_sequence_id = 1),
  [102] = {.count = 1, .reusable = true}, SHIFT(35),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3, .alias_sequence_id = 3),
  [106] = {.count = 1, .reusable = false}, SHIFT(36),
  [108] = {.count = 1, .reusable = true}, SHIFT(37),
  [110] = {.count = 1, .reusable = true}, SHIFT(38),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_attribute, 3, .alias_sequence_id = 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_self_closing_tag, 5),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_self_closing_tag, 5),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 2),
  [124] = {.count = 1, .reusable = true}, SHIFT(39),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_attribute_value, 3, .alias_sequence_id = 4),
};

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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_tag_name,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
