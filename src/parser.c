#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 79
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  anon_sym_yield = 8,
  anon_sym_from = 9,
  anon_sym_AMP = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_and = 12,
  anon_sym_or = 13,
  anon_sym_xor = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_AMP_AMP = 16,
  anon_sym_PIPE = 17,
  anon_sym_CARET = 18,
  anon_sym_QMARK_QMARK = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_LT_GT = 22,
  anon_sym_EQ_EQ_EQ = 23,
  anon_sym_BANG_EQ_EQ = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT_EQ_GT = 29,
  anon_sym_LT_LT = 30,
  anon_sym_GT_GT = 31,
  anon_sym_PLUS = 32,
  anon_sym_DASH = 33,
  anon_sym_DOT = 34,
  anon_sym_STAR = 35,
  anon_sym_SLASH = 36,
  anon_sym_PERCENT = 37,
  anon_sym_instanceof = 38,
  anon_sym_include = 39,
  anon_sym_include_once = 40,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 41,
  aux_sym_SLASH_BSLASHd_SLASH = 42,
  sym_comment = 43,
  sym_program = 44,
  sym_statement = 45,
  sym_compound_statement = 46,
  sym_named_label_statement = 47,
  sym_expression_statement = 48,
  sym__expression = 49,
  sym_yield_expression = 50,
  sym_array_element_initializer = 51,
  sym_binary_expression = 52,
  sym_include_expression = 53,
  sym_include_once_expression = 54,
  sym_require_expression = 55,
  sym_require_once_expression = 56,
  sym_name = 57,
  aux_sym_program_repeat1 = 58,
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
  [anon_sym_yield] = "yield",
  [anon_sym_from] = "from",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
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
  [sym_yield_expression] = "yield_expression",
  [sym_array_element_initializer] = "array_element_initializer",
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
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
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
  [sym_yield_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_element_initializer] = {
    .visible = true,
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
        ADVANCE(33);
      if (lookahead == '?')
        ADVANCE(36);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(43);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == 'y')
        ADVANCE(72);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(80);
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
        ADVANCE(81);
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
      if (lookahead == '>')
        ADVANCE(32);
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
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 36:
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '?')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 40:
      if (lookahead == 'n')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'd')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 43:
      if (lookahead == 'r')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'o')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'm')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'c')
        ADVANCE(49);
      if (lookahead == 's')
        ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'l')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'u')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'd')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'c')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'e')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 59:
      if (lookahead == 't')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'a')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'n')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'c')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'e')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'o')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'f')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 67:
      if (lookahead == 'r')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 69:
      if (lookahead == 'o')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'r')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 72:
      if (lookahead == 'i')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'l')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'd')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 82:
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
        ADVANCE(33);
      if (lookahead == '?')
        ADVANCE(83);
      if (lookahead == '^')
        ADVANCE(39);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(43);
      if (lookahead == 'i')
        ADVANCE(47);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == 'y')
        ADVANCE(72);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(82);
      END_STATE();
    case 83:
      if (lookahead == '?')
        ADVANCE(38);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(85);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '?')
        ADVANCE(86);
      if (lookahead == 'y')
        ADVANCE(87);
      if (lookahead == '{')
        ADVANCE(77);
      if (lookahead == '}')
        ADVANCE(80);
      if (lookahead == 160)
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(16);
      END_STATE();
    case 86:
      if (lookahead == '>')
        ADVANCE(37);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(73);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 89:
      if (lookahead == '/')
        ADVANCE(85);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == 160)
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 82},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 82},
  [24] = {.lex_state = 82},
  [25] = {.lex_state = 82},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 84},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 82},
  [33] = {.lex_state = 82},
  [34] = {.lex_state = 82},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 82},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 82},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 82},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 82},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 82},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 82},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 82},
  [61] = {.lex_state = 82},
  [62] = {.lex_state = 82},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 82},
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
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(1),
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
    [sym_statement] = STATE(9),
    [sym_compound_statement] = STATE(10),
    [sym_named_label_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym_yield_expression] = STATE(12),
    [sym_name] = STATE(13),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_QMARK_GT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_yield] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(26),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_comment] = ACTIONS(10),
  },
  [5] = {
    [sym_statement] = STATE(9),
    [sym_compound_statement] = STATE(10),
    [sym_named_label_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym_yield_expression] = STATE(12),
    [sym_name] = STATE(13),
    [aux_sym_program_repeat1] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_yield] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_QMARK_GT] = ACTIONS(32),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_RBRACE] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(32),
    [anon_sym_yield] = ACTIONS(32),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(32),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [sym__expression] = STATE(19),
    [sym_yield_expression] = STATE(20),
    [sym_array_element_initializer] = STATE(21),
    [anon_sym_yield] = ACTIONS(34),
    [anon_sym_from] = ACTIONS(36),
    [anon_sym_AMP] = ACTIONS(38),
    [sym_comment] = ACTIONS(10),
  },
  [8] = {
    [anon_sym_COLON] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_QMARK_GT] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_yield] = ACTIONS(42),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_QMARK_GT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_yield] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(46),
    [sym_comment] = ACTIONS(10),
  },
  [12] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(25),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [13] = {
    [anon_sym_COLON] = ACTIONS(48),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(24),
  },
  [14] = {
    [sym_statement] = STATE(29),
    [sym_compound_statement] = STATE(10),
    [sym_named_label_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym_yield_expression] = STATE(12),
    [sym_name] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_QMARK_GT] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_yield] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_QMARK_GT] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_yield] = ACTIONS(56),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(56),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [sym_statement] = STATE(29),
    [sym_compound_statement] = STATE(10),
    [sym_named_label_statement] = STATE(10),
    [sym_expression_statement] = STATE(10),
    [sym__expression] = STATE(11),
    [sym_yield_expression] = STATE(12),
    [sym_name] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_yield] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [sym__expression] = STATE(31),
    [sym_yield_expression] = STATE(32),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [18] = {
    [sym__expression] = STATE(33),
    [sym_yield_expression] = STATE(32),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [19] = {
    [anon_sym_yield] = ACTIONS(60),
    [anon_sym_EQ_GT] = ACTIONS(62),
    [sym_comment] = ACTIONS(10),
  },
  [20] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(35),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [21] = {
    [anon_sym_yield] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_QMARK_GT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_yield] = ACTIONS(66),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(24),
  },
  [23] = {
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_and] = ACTIONS(70),
    [anon_sym_or] = ACTIONS(70),
    [anon_sym_xor] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(70),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_QMARK_QMARK] = ACTIONS(70),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_LT_GT] = ACTIONS(70),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(70),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(70),
    [anon_sym_LT_EQ_GT] = ACTIONS(70),
    [anon_sym_LT_LT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_instanceof] = ACTIONS(70),
    [sym_comment] = ACTIONS(10),
  },
  [24] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(37),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [sym_include_expression] = STATE(39),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_QMARK_GT] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_yield] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(24),
  },
  [27] = {
    [anon_sym_COLON] = ACTIONS(76),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(24),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_QMARK_GT] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_yield] = ACTIONS(80),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(80),
    [sym_comment] = ACTIONS(24),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_QMARK_GT] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_yield] = ACTIONS(82),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(82),
    [sym_comment] = ACTIONS(24),
  },
  [31] = {
    [anon_sym_yield] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(40),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [33] = {
    [anon_sym_yield] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [34] = {
    [sym__expression] = STATE(42),
    [sym_yield_expression] = STATE(32),
    [anon_sym_yield] = ACTIONS(34),
    [anon_sym_AMP] = ACTIONS(88),
    [sym_comment] = ACTIONS(10),
  },
  [35] = {
    [sym_include_expression] = STATE(43),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [36] = {
    [sym__expression] = STATE(44),
    [sym_yield_expression] = STATE(45),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [37] = {
    [sym_include_expression] = STATE(46),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [38] = {
    [sym__expression] = STATE(47),
    [sym_yield_expression] = STATE(48),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [39] = {
    [sym_include_once_expression] = STATE(50),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [40] = {
    [sym_include_expression] = STATE(51),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [41] = {
    [sym__expression] = STATE(52),
    [sym_yield_expression] = STATE(32),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [42] = {
    [anon_sym_yield] = ACTIONS(92),
    [sym_comment] = ACTIONS(10),
  },
  [43] = {
    [sym_include_once_expression] = STATE(53),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [44] = {
    [anon_sym_include] = ACTIONS(94),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(54),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [sym_include_once_expression] = STATE(55),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [anon_sym_include_once] = ACTIONS(96),
    [sym_comment] = ACTIONS(10),
  },
  [48] = {
    [sym__expression] = STATE(23),
    [sym_yield_expression] = STATE(24),
    [sym_binary_expression] = STATE(56),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [49] = {
    [sym__expression] = STATE(57),
    [sym_yield_expression] = STATE(48),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [50] = {
    [sym_require_expression] = STATE(59),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [51] = {
    [sym_include_once_expression] = STATE(60),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [52] = {
    [anon_sym_yield] = ACTIONS(100),
    [sym_comment] = ACTIONS(10),
  },
  [53] = {
    [sym_require_expression] = STATE(61),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [54] = {
    [sym_include_expression] = STATE(62),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [55] = {
    [sym_require_expression] = STATE(63),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [56] = {
    [sym_include_expression] = STATE(64),
    [anon_sym_include] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [57] = {
    [anon_sym_include_once] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
  },
  [58] = {
    [sym__expression] = STATE(65),
    [sym_yield_expression] = STATE(48),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [59] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
  },
  [60] = {
    [sym_require_expression] = STATE(68),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [61] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(106),
    [sym_comment] = ACTIONS(10),
  },
  [62] = {
    [sym_include_once_expression] = STATE(70),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [63] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(108),
    [sym_comment] = ACTIONS(10),
  },
  [64] = {
    [sym_include_once_expression] = STATE(72),
    [anon_sym_include_once] = ACTIONS(90),
    [sym_comment] = ACTIONS(10),
  },
  [65] = {
    [anon_sym_include_once] = ACTIONS(110),
    [sym_comment] = ACTIONS(10),
  },
  [66] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(12),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_yield] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(112),
    [anon_sym_and] = ACTIONS(112),
    [anon_sym_or] = ACTIONS(112),
    [anon_sym_xor] = ACTIONS(112),
    [anon_sym_PIPE_PIPE] = ACTIONS(112),
    [anon_sym_AMP_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_QMARK_QMARK] = ACTIONS(112),
    [anon_sym_EQ_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_LT_GT] = ACTIONS(112),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(112),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(112),
    [anon_sym_LT_EQ_GT] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_instanceof] = ACTIONS(112),
    [anon_sym_include] = ACTIONS(114),
    [anon_sym_include_once] = ACTIONS(112),
    [sym_comment] = ACTIONS(10),
  },
  [68] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(116),
    [sym_comment] = ACTIONS(10),
  },
  [69] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(20),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [70] = {
    [sym_require_expression] = STATE(75),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(24),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [72] = {
    [sym_require_expression] = STATE(76),
    [anon_sym_include_once] = ACTIONS(98),
    [sym_comment] = ACTIONS(10),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_yield] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_EQ_GT] = ACTIONS(118),
    [anon_sym_and] = ACTIONS(118),
    [anon_sym_or] = ACTIONS(118),
    [anon_sym_xor] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_QMARK_QMARK] = ACTIONS(118),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_LT_GT] = ACTIONS(118),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ_GT] = ACTIONS(118),
    [anon_sym_LT_LT] = ACTIONS(118),
    [anon_sym_GT_GT] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_instanceof] = ACTIONS(118),
    [anon_sym_include] = ACTIONS(120),
    [anon_sym_include_once] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
  },
  [74] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(32),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [76] = {
    [sym_require_once_expression] = STATE(67),
    [anon_sym_include_once] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(45),
    [anon_sym_yield] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [sym__expression] = STATE(73),
    [sym_yield_expression] = STATE(48),
    [anon_sym_yield] = ACTIONS(34),
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
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 6),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 6),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
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
