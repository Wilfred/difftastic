#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 46
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LT_QMARKphp = 1,
  anon_sym_LT_QMARK_EQ = 2,
  anon_sym_QMARK_GT = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_SEMI = 7,
  anon_sym_and = 8,
  anon_sym_or = 9,
  anon_sym_xor = 10,
  anon_sym_PIPE_PIPE = 11,
  anon_sym_AMP_AMP = 12,
  anon_sym_PIPE = 13,
  anon_sym_CARET = 14,
  anon_sym_AMP = 15,
  anon_sym_QMARK_QMARK = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT_GT = 19,
  anon_sym_EQ_EQ_EQ = 20,
  anon_sym_BANG_EQ_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_LT_EQ_GT = 26,
  anon_sym_LT_LT = 27,
  anon_sym_GT_GT = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_DOT = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_instanceof = 35,
  anon_sym_include = 36,
  anon_sym_include_once = 37,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 38,
  aux_sym_SLASH_BSLASHd_SLASH = 39,
  sym_comment = 40,
  sym_program = 41,
  sym_statement = 42,
  sym_compound_statement = 43,
  sym_named_label_statement = 44,
  sym_expression_statement = 45,
  sym__expression = 46,
  sym_binary_expression = 47,
  sym_include_expression = 48,
  sym_include_once_expression = 49,
  sym_require_expression = 50,
  sym_require_once_expression = 51,
  sym_name = 52,
  aux_sym_program_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LT_QMARKphp] = "<?php",
  [anon_sym_LT_QMARK_EQ] = "<?=",
  [anon_sym_QMARK_GT] = "?>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK_QMARK] = "??",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_instanceof] = "instanceof",
  [anon_sym_include] = "include",
  [anon_sym_include_once] = "include_once",
  [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = "/[_a-zA-Z-ÿ]/",
  [aux_sym_SLASH_BSLASHd_SLASH] = "/\\d/",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_compound_statement] = "compound_statement",
  [sym_named_label_statement] = "named_label_statement",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_include_expression] = "include_expression",
  [sym_include_once_expression] = "include_once_expression",
  [sym_require_expression] = "require_expression",
  [sym_require_once_expression] = "require_once_expression",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_QMARKphp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
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
  [anon_sym_DOT] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include_once] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASHd_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_named_label_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
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
  [sym_include_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_include_once_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_require_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_require_once_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == 'o')
        ADVANCE(62);
      if (lookahead == 'x')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(4);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 24:
      if (lookahead == '=')
        ADVANCE(25);
      if (lookahead == 'p')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 26:
      if (lookahead == 'h')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'p')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 29:
      if (lookahead == '=')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 35:
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 39:
      if (lookahead == 'n')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'd')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 42:
      if (lookahead == 'n')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'c')
        ADVANCE(44);
      if (lookahead == 's')
        ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'l')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'u')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'd')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'c')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 54:
      if (lookahead == 't')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'a')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'n')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'c')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'o')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'f')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 62:
      if (lookahead == 'r')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 72:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '*')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == '/')
        ADVANCE(12);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(32);
      if (lookahead == '?')
        ADVANCE(73);
      if (lookahead == '^')
        ADVANCE(38);
      if (lookahead == 'a')
        ADVANCE(39);
      if (lookahead == 'i')
        ADVANCE(42);
      if (lookahead == 'o')
        ADVANCE(62);
      if (lookahead == 'x')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == '?')
        ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(76);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '}')
        ADVANCE(70);
      if (lookahead == 160)
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(16);
      END_STATE();
    case 76:
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 78:
      if (lookahead == '/')
        ADVANCE(75);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == 160)
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 74},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 74},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 74},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 78},
  [13] = {.lex_state = 74},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 74},
  [21] = {.lex_state = 78},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 74},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 72},
  [33] = {.lex_state = 72},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 72},
  [36] = {.lex_state = 72},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 72},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 72},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARKphp] = ACTIONS(1),
    [anon_sym_LT_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(3),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT_EQ] = ACTIONS(3),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_instanceof] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(3),
    [anon_sym_include_once] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(3),
    [anon_sym_LT_QMARKphp] = ACTIONS(8),
    [anon_sym_LT_QMARK_EQ] = ACTIONS(8),
    [sym_comment] = ACTIONS(10),
  },
  [2] = {
    [sym_statement] = STATE(8),
    [sym_compound_statement] = STATE(9),
    [sym_named_label_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym_binary_expression] = STATE(11),
    [sym_name] = STATE(12),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_QMARK_GT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(20),
    [sym_comment] = ACTIONS(22),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(10),
  },
  [5] = {
    [sym_statement] = STATE(8),
    [sym_compound_statement] = STATE(9),
    [sym_named_label_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym_binary_expression] = STATE(11),
    [sym_name] = STATE(12),
    [aux_sym_program_repeat1] = STATE(15),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(28),
    [anon_sym_SEMI] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(20),
    [sym_comment] = ACTIONS(22),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_QMARK_GT] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(30),
    [anon_sym_RBRACE] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(30),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(22),
  },
  [7] = {
    [anon_sym_COLON] = ACTIONS(32),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(32),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(32),
    [sym_comment] = ACTIONS(22),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_QMARK_GT] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_SEMI] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(34),
    [sym_comment] = ACTIONS(22),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_QMARK_GT] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [sym_comment] = ACTIONS(10),
  },
  [11] = {
    [sym_include_expression] = STATE(19),
    [anon_sym_include] = ACTIONS(44),
    [sym_comment] = ACTIONS(10),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(46),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(22),
  },
  [13] = {
    [sym_statement] = STATE(23),
    [sym_compound_statement] = STATE(9),
    [sym_named_label_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym_binary_expression] = STATE(11),
    [sym_name] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_QMARK_GT] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(20),
    [sym_comment] = ACTIONS(22),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_QMARK_GT] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(22),
  },
  [15] = {
    [sym_statement] = STATE(23),
    [sym_compound_statement] = STATE(9),
    [sym_named_label_statement] = STATE(9),
    [sym_expression_statement] = STATE(9),
    [sym__expression] = STATE(10),
    [sym_binary_expression] = STATE(11),
    [sym_name] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(20),
    [sym_comment] = ACTIONS(22),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_QMARK_GT] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(58),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(58),
    [sym_comment] = ACTIONS(22),
  },
  [17] = {
    [sym__expression] = STATE(25),
    [sym_binary_expression] = STATE(26),
    [sym_comment] = ACTIONS(10),
  },
  [18] = {
    [sym__expression] = STATE(27),
    [sym_binary_expression] = STATE(28),
    [sym_comment] = ACTIONS(10),
  },
  [19] = {
    [sym_include_once_expression] = STATE(30),
    [anon_sym_include_once] = ACTIONS(60),
    [sym_comment] = ACTIONS(10),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_QMARK_GT] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_SEMI] = ACTIONS(62),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(22),
  },
  [21] = {
    [anon_sym_COLON] = ACTIONS(64),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(22),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_comment] = ACTIONS(10),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_QMARK_GT] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(22),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_QMARK_GT] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(22),
  },
  [25] = {
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
    [sym_include_expression] = STATE(31),
    [anon_sym_include] = ACTIONS(44),
    [sym_comment] = ACTIONS(10),
  },
  [27] = {
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [anon_sym_include_once] = ACTIONS(74),
    [sym_comment] = ACTIONS(10),
  },
  [28] = {
    [sym_include_expression] = STATE(32),
    [anon_sym_include] = ACTIONS(44),
    [sym_comment] = ACTIONS(10),
  },
  [29] = {
    [sym__expression] = STATE(33),
    [sym_binary_expression] = STATE(28),
    [sym_comment] = ACTIONS(10),
  },
  [30] = {
    [sym_require_expression] = STATE(35),
    [anon_sym_include_once] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [31] = {
    [sym_include_once_expression] = STATE(36),
    [anon_sym_include_once] = ACTIONS(60),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [sym_include_once_expression] = STATE(37),
    [anon_sym_include_once] = ACTIONS(60),
    [sym_comment] = ACTIONS(10),
  },
  [33] = {
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [anon_sym_include_once] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [34] = {
    [sym__expression] = STATE(38),
    [sym_binary_expression] = STATE(28),
    [sym_comment] = ACTIONS(10),
  },
  [35] = {
    [sym_require_once_expression] = STATE(40),
    [anon_sym_include_once] = ACTIONS(80),
    [sym_comment] = ACTIONS(10),
  },
  [36] = {
    [sym_require_expression] = STATE(41),
    [anon_sym_include_once] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [37] = {
    [sym_require_expression] = STATE(42),
    [anon_sym_include_once] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [38] = {
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [anon_sym_include_once] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [39] = {
    [sym__expression] = STATE(43),
    [sym_binary_expression] = STATE(11),
    [sym_comment] = ACTIONS(10),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_and] = ACTIONS(84),
    [anon_sym_or] = ACTIONS(84),
    [anon_sym_xor] = ACTIONS(84),
    [anon_sym_PIPE_PIPE] = ACTIONS(84),
    [anon_sym_AMP_AMP] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_QMARK_QMARK] = ACTIONS(84),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_LT_GT] = ACTIONS(84),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(84),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [anon_sym_LT_EQ_GT] = ACTIONS(84),
    [anon_sym_LT_LT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_instanceof] = ACTIONS(84),
    [anon_sym_include] = ACTIONS(86),
    [anon_sym_include_once] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [41] = {
    [sym_require_once_expression] = STATE(40),
    [anon_sym_include_once] = ACTIONS(88),
    [sym_comment] = ACTIONS(10),
  },
  [42] = {
    [sym_require_once_expression] = STATE(40),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_and] = ACTIONS(40),
    [anon_sym_or] = ACTIONS(40),
    [anon_sym_xor] = ACTIONS(40),
    [anon_sym_PIPE_PIPE] = ACTIONS(40),
    [anon_sym_AMP_AMP] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_CARET] = ACTIONS(40),
    [anon_sym_AMP] = ACTIONS(42),
    [anon_sym_QMARK_QMARK] = ACTIONS(40),
    [anon_sym_EQ_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_LT_GT] = ACTIONS(40),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(40),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(40),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(40),
    [anon_sym_LT_EQ_GT] = ACTIONS(40),
    [anon_sym_LT_LT] = ACTIONS(40),
    [anon_sym_GT_GT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(40),
    [anon_sym_DASH] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(40),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_PERCENT] = ACTIONS(40),
    [anon_sym_instanceof] = ACTIONS(40),
    [anon_sym_include] = ACTIONS(94),
    [anon_sym_include_once] = ACTIONS(92),
    [sym_comment] = ACTIONS(10),
  },
  [44] = {
    [sym__expression] = STATE(43),
    [sym_binary_expression] = STATE(26),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [sym__expression] = STATE(43),
    [sym_binary_expression] = STATE(28),
    [sym_comment] = ACTIONS(10),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 5),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 5),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_php() {
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
  };
  return &language;
}
