#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 8
#define STATE_COUNT 34
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  sym_comment = 1,
  sym__multiline_string = 2,
  sym_spread = 3,
  anon_sym_or = 4,
  anon_sym_and = 5,
  anon_sym_LT = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_TILDE_EQ = 9,
  anon_sym_GT_EQ = 10,
  anon_sym_GT = 11,
  anon_sym_PIPE = 12,
  anon_sym_TILDE = 13,
  anon_sym_AMP = 14,
  anon_sym_LT_LT = 15,
  anon_sym_GT_GT = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_SLASH_SLASH = 21,
  anon_sym_PERCENT = 22,
  anon_sym_DOT_DOT = 23,
  anon_sym_CARET = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 26,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH = 29,
  sym_number = 30,
  sym_nil = 31,
  sym_true = 32,
  sym_false = 33,
  sym_identifier = 34,
  sym_lua = 35,
  sym__statement = 36,
  sym__expression = 37,
  sym_binary_expression = 38,
  sym_string = 39,
  aux_sym_lua_repeat1 = 40,
  aux_sym_string_repeat1 = 41,
  aux_sym_string_repeat2 = 42,
  alias_sym_expression = 43,
};

static const char *ts_symbol_names[] = {
  [sym_comment] = "comment",
  [sym__multiline_string] = "_multiline_string",
  [ts_builtin_sym_end] = "END",
  [sym_spread] = "spread",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_CARET] = "^",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\\\\"\\n]/",
  [sym_number] = "number",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_lua] = "lua",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [aux_sym_lua_repeat1] = "lua_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [alias_sym_expression] = "expression",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_spread] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_lua] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lua_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_expression] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_expression,
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
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(27);
      if (lookahead == '>')
        ADVANCE(29);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 9:
      if (lookahead == '.')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '.')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_spread);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E')
        ADVANCE(13);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == 'E')
        ADVANCE(13);
      if (lookahead == 'X')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(13);
      if (lookahead == 'x')
        ADVANCE(19);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == 'P')
        ADVANCE(13);
      if (lookahead == 'p')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P')
        ADVANCE(13);
      if (lookahead == 'p')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.')
        ADVANCE(12);
      if (lookahead == 'E')
        ADVANCE(13);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 27:
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(30);
      if (lookahead == '>')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(40);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(39);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '.')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 41:
      if (lookahead == '.')
        ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == '0')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(24);
      if (lookahead == '=')
        ADVANCE(27);
      if (lookahead == '>')
        ADVANCE(29);
      if (lookahead == '^')
        ADVANCE(34);
      if (lookahead == '|')
        ADVANCE(35);
      if (lookahead == '~')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == '\n')
        SKIP(43);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        SKIP(45);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 47:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(47);
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
      if (lookahead == 'f')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(9);
      if (lookahead == 'o')
        ADVANCE(12);
      if (lookahead == 't')
        ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == 'n')
        ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'd')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 4:
      if (lookahead == 'a')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'l')
        ADVANCE(6);
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
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 9:
      if (lookahead == 'i')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'l')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 12:
      if (lookahead == 'r')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 14:
      if (lookahead == 'r')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'u')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'e')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 39, .external_lex_state = 1},
  [2] = {.lex_state = 42, .external_lex_state = 1},
  [3] = {.lex_state = 42, .external_lex_state = 1},
  [4] = {.lex_state = 43, .external_lex_state = 2},
  [5] = {.lex_state = 45, .external_lex_state = 2},
  [6] = {.lex_state = 47, .external_lex_state = 2},
  [7] = {.lex_state = 42, .external_lex_state = 1},
  [8] = {.lex_state = 39, .external_lex_state = 1},
  [9] = {.lex_state = 42, .external_lex_state = 1},
  [10] = {.lex_state = 43, .external_lex_state = 2},
  [11] = {.lex_state = 45, .external_lex_state = 2},
  [12] = {.lex_state = 39, .external_lex_state = 1},
  [13] = {.lex_state = 39, .external_lex_state = 1},
  [14] = {.lex_state = 39, .external_lex_state = 1},
  [15] = {.lex_state = 39, .external_lex_state = 1},
  [16] = {.lex_state = 39, .external_lex_state = 1},
  [17] = {.lex_state = 39, .external_lex_state = 1},
  [18] = {.lex_state = 39, .external_lex_state = 1},
  [19] = {.lex_state = 39, .external_lex_state = 1},
  [20] = {.lex_state = 39, .external_lex_state = 1},
  [21] = {.lex_state = 39, .external_lex_state = 1},
  [22] = {.lex_state = 42, .external_lex_state = 1},
  [23] = {.lex_state = 43, .external_lex_state = 2},
  [24] = {.lex_state = 45, .external_lex_state = 2},
  [25] = {.lex_state = 42, .external_lex_state = 1},
  [26] = {.lex_state = 42, .external_lex_state = 1},
  [27] = {.lex_state = 42, .external_lex_state = 1},
  [28] = {.lex_state = 42, .external_lex_state = 1},
  [29] = {.lex_state = 42, .external_lex_state = 1},
  [30] = {.lex_state = 42, .external_lex_state = 1},
  [31] = {.lex_state = 42, .external_lex_state = 1},
  [32] = {.lex_state = 42, .external_lex_state = 1},
  [33] = {.lex_state = 42, .external_lex_state = 1},
};

enum {
  ts_external_token_comment,
  ts_external_token__multiline_string,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__multiline_string] = sym__multiline_string,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token__multiline_string] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = ACTIONS(1),
    [sym__multiline_string] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_spread] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_nil] = ACTIONS(3),
    [sym_true] = ACTIONS(3),
    [sym_false] = ACTIONS(3),
    [sym_identifier] = ACTIONS(3),
  },
  [1] = {
    [sym_lua] = STATE(6),
    [sym__statement] = STATE(8),
    [sym__expression] = STATE(7),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [2] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(19),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_spread] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_TILDE_EQ] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(19),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(19),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [sym_nil] = ACTIONS(21),
    [sym_true] = ACTIONS(21),
    [sym_false] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
  },
  [3] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_spread] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_TILDE_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [sym_nil] = ACTIONS(25),
    [sym_true] = ACTIONS(25),
    [sym_false] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
  },
  [4] = {
    [aux_sym_string_repeat1] = STATE(10),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(31),
  },
  [5] = {
    [aux_sym_string_repeat2] = STATE(11),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(35),
  },
  [6] = {
    [sym_comment] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [7] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_spread] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_nil] = ACTIONS(65),
    [sym_true] = ACTIONS(65),
    [sym_false] = ACTIONS(65),
    [sym_identifier] = ACTIONS(65),
  },
  [8] = {
    [sym__statement] = STATE(21),
    [sym__expression] = STATE(7),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [9] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_spread] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_TILDE_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_SLASH_SLASH] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(69),
    [sym_nil] = ACTIONS(71),
    [sym_true] = ACTIONS(71),
    [sym_false] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
  },
  [10] = {
    [aux_sym_string_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(75),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(77),
  },
  [11] = {
    [aux_sym_string_repeat2] = STATE(24),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(81),
  },
  [12] = {
    [sym__expression] = STATE(25),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [13] = {
    [sym__expression] = STATE(26),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [14] = {
    [sym__expression] = STATE(27),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [15] = {
    [sym__expression] = STATE(28),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [16] = {
    [sym__expression] = STATE(29),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [17] = {
    [sym__expression] = STATE(30),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [18] = {
    [sym__expression] = STATE(31),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [19] = {
    [sym__expression] = STATE(32),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [20] = {
    [sym__expression] = STATE(33),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(7),
    [sym_spread] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(11),
    [sym_nil] = ACTIONS(17),
    [sym_true] = ACTIONS(17),
    [sym_false] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
  },
  [21] = {
    [sym__statement] = STATE(21),
    [sym__expression] = STATE(7),
    [sym_binary_expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_lua_repeat1] = STATE(21),
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_spread] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_number] = ACTIONS(88),
    [sym_nil] = ACTIONS(97),
    [sym_true] = ACTIONS(97),
    [sym_false] = ACTIONS(97),
    [sym_identifier] = ACTIONS(97),
  },
  [22] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(100),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_spread] = ACTIONS(100),
    [anon_sym_or] = ACTIONS(102),
    [anon_sym_and] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_TILDE_EQ] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(100),
    [anon_sym_PERCENT] = ACTIONS(100),
    [anon_sym_DOT_DOT] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [sym_number] = ACTIONS(100),
    [sym_nil] = ACTIONS(102),
    [sym_true] = ACTIONS(102),
    [sym_false] = ACTIONS(102),
    [sym_identifier] = ACTIONS(102),
  },
  [23] = {
    [aux_sym_string_repeat1] = STATE(23),
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(106),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(109),
  },
  [24] = {
    [aux_sym_string_repeat2] = STATE(24),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_BSLASH_DQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(117),
  },
  [25] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [26] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_TILDE_EQ] = ACTIONS(47),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [27] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [28] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [29] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(53),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [30] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [31] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [32] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT_DOT] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
  [33] = {
    [sym_comment] = ACTIONS(5),
    [sym__multiline_string] = ACTIONS(120),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_spread] = ACTIONS(120),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_TILDE_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_DOT_DOT] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym_number] = ACTIONS(120),
    [sym_nil] = ACTIONS(122),
    [sym_true] = ACTIONS(122),
    [sym_false] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_string, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(9),
  [29] = {.count = 1, .reusable = true}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(10),
  [33] = {.count = 1, .reusable = false}, SHIFT(11),
  [35] = {.count = 1, .reusable = true}, SHIFT(11),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(12),
  [43] = {.count = 1, .reusable = false}, SHIFT(13),
  [45] = {.count = 1, .reusable = false}, SHIFT(14),
  [47] = {.count = 1, .reusable = true}, SHIFT(14),
  [49] = {.count = 1, .reusable = true}, SHIFT(15),
  [51] = {.count = 1, .reusable = false}, SHIFT(16),
  [53] = {.count = 1, .reusable = true}, SHIFT(17),
  [55] = {.count = 1, .reusable = true}, SHIFT(18),
  [57] = {.count = 1, .reusable = true}, SHIFT(19),
  [59] = {.count = 1, .reusable = true}, SHIFT(20),
  [61] = {.count = 1, .reusable = false}, SHIFT(20),
  [63] = {.count = 1, .reusable = false}, SHIFT(18),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1, .alias_sequence_id = 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_lua, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [73] = {.count = 1, .reusable = false}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, SHIFT(23),
  [77] = {.count = 1, .reusable = false}, SHIFT(23),
  [79] = {.count = 1, .reusable = false}, SHIFT(24),
  [81] = {.count = 1, .reusable = true}, SHIFT(24),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 1, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(4),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(5),
  [97] = {.count = 2, .reusable = false}, REDUCE(aux_sym_lua_repeat1, 2), SHIFT_REPEAT(3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [109] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(24),
  [115] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat2, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(24),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
};

void *tree_sitter_lua_external_scanner_create();
void tree_sitter_lua_external_scanner_destroy(void *);
bool tree_sitter_lua_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lua_external_scanner_serialize(void *, char *);
void tree_sitter_lua_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua() {
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
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_lua_external_scanner_create,
      tree_sitter_lua_external_scanner_destroy,
      tree_sitter_lua_external_scanner_scan,
      tree_sitter_lua_external_scanner_serialize,
      tree_sitter_lua_external_scanner_deserialize,
    },
  };
  return &language;
}
