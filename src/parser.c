#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 147
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_EQ = 8,
  anon_sym_AMP = 9,
  anon_sym_STAR_STAR_EQ = 10,
  anon_sym_STAR_EQ = 11,
  anon_sym_SLASH_EQ = 12,
  anon_sym_PLUS_EQ = 13,
  anon_sym_DASH_EQ = 14,
  anon_sym_DOT_EQ = 15,
  anon_sym_LT_LT_EQ = 16,
  anon_sym_GT_GT_EQ = 17,
  anon_sym_AMP_EQ = 18,
  anon_sym_CARET_EQ = 19,
  anon_sym_PIPE_EQ = 20,
  anon_sym_list = 21,
  anon_sym_LPAREN = 22,
  anon_sym_EQ_GT = 23,
  anon_sym_COMMA = 24,
  anon_sym_RPAREN = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_yield = 27,
  anon_sym_from = 28,
  anon_sym_and = 29,
  anon_sym_or = 30,
  anon_sym_xor = 31,
  anon_sym_PIPE_PIPE = 32,
  anon_sym_AMP_AMP = 33,
  anon_sym_PIPE = 34,
  anon_sym_CARET = 35,
  anon_sym_QMARK_QMARK = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_LT_GT = 39,
  anon_sym_EQ_EQ_EQ = 40,
  anon_sym_BANG_EQ_EQ = 41,
  anon_sym_LT = 42,
  anon_sym_GT = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_LT_EQ_GT = 46,
  anon_sym_LT_LT = 47,
  anon_sym_GT_GT = 48,
  anon_sym_PLUS = 49,
  anon_sym_DASH = 50,
  anon_sym_DOT = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_PERCENT = 54,
  anon_sym_instanceof = 55,
  anon_sym_include = 56,
  anon_sym_include_once = 57,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 58,
  aux_sym_SLASH_BSLASHd_SLASH = 59,
  sym_comment = 60,
  sym_program = 61,
  sym_statement = 62,
  sym_compound_statement = 63,
  sym_named_label_statement = 64,
  sym_expression_statement = 65,
  sym__expression = 66,
  sym_assignment_expression = 67,
  sym__variable = 68,
  sym_list_literal = 69,
  sym__callable_variable = 70,
  sym_simple_variable = 71,
  sym__variable_name = 72,
  sym_yield_expression = 73,
  sym_array_element_initializer = 74,
  sym_binary_expression = 75,
  sym_include_expression = 76,
  sym_include_once_expression = 77,
  sym_require_expression = 78,
  sym_require_once_expression = 79,
  sym_name = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_list_literal_repeat1 = 82,
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
  [anon_sym_EQ] = "=",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_DOT_EQ] = ".=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_list] = "list",
  [anon_sym_LPAREN] = "(",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_yield] = "yield",
  [anon_sym_from] = "from",
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
  [sym_assignment_expression] = "assignment_expression",
  [sym__variable] = "_variable",
  [sym_list_literal] = "list_literal",
  [sym__callable_variable] = "_callable_variable",
  [sym_simple_variable] = "simple_variable",
  [sym__variable_name] = "_variable_name",
  [sym_yield_expression] = "yield_expression",
  [sym_array_element_initializer] = "array_element_initializer",
  [sym_binary_expression] = "binary_expression",
  [sym_include_expression] = "include_expression",
  [sym_include_once_expression] = "include_once_expression",
  [sym_require_expression] = "require_expression",
  [sym_require_once_expression] = "require_once_expression",
  [sym_name] = "name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_list_literal_repeat1] = "list_literal_repeat1",
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__variable] = {
    .visible = false,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__callable_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_name] = {
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
  [aux_sym_list_literal_repeat1] = {
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
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(31);
      if (lookahead == '=')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '?')
        ADVANCE(50);
      if (lookahead == '^')
        ADVANCE(53);
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(58);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == 'x')
        ADVANCE(88);
      if (lookahead == 'y')
        ADVANCE(91);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '|')
        ADVANCE(97);
      if (lookahead == '}')
        ADVANCE(100);
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
        ADVANCE(101);
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
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 37:
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == 'p')
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 39:
      if (lookahead == 'h')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'p')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(43);
      if (lookahead == '>')
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 50:
      if (lookahead == '>')
        ADVANCE(51);
      if (lookahead == '?')
        ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 55:
      if (lookahead == 'n')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'd')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 58:
      if (lookahead == 'r')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'o')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'm')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 62:
      if (lookahead == 'n')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'c')
        ADVANCE(64);
      if (lookahead == 's')
        ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'l')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'u')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'd')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'e')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'o')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'n')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'c')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 74:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'a')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'n')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'c')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'e')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'o')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'f')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 82:
      if (lookahead == 'i')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 's')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 88:
      if (lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 91:
      if (lookahead == 'i')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'l')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'd')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(98);
      if (lookahead == '|')
        ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 102:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(103);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(104);
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '.')
        ADVANCE(107);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '>')
        ADVANCE(112);
      if (lookahead == '?')
        ADVANCE(114);
      if (lookahead == '^')
        ADVANCE(115);
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'f')
        ADVANCE(58);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(86);
      if (lookahead == 'x')
        ADVANCE(88);
      if (lookahead == '|')
        ADVANCE(116);
      if (lookahead == '}')
        ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == '?')
        ADVANCE(37);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 111:
      if (lookahead == '=')
        ADVANCE(43);
      if (lookahead == '>')
        ADVANCE(45);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(47);
      if (lookahead == '>')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 114:
      if (lookahead == '?')
        ADVANCE(52);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(99);
      END_STATE();
    case 117:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(30);
      if (lookahead == '?')
        ADVANCE(119);
      if (lookahead == 'l')
        ADVANCE(120);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == '}')
        ADVANCE(100);
      if (lookahead == 160)
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 119:
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(83);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 122:
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '{')
        ADVANCE(96);
      if (lookahead == 160)
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == '&')
        ADVANCE(124);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(125);
      if (lookahead == '+')
        ADVANCE(126);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(128);
      if (lookahead == '/')
        ADVANCE(129);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == '<')
        ADVANCE(130);
      if (lookahead == '=')
        ADVANCE(132);
      if (lookahead == '>')
        ADVANCE(133);
      if (lookahead == '^')
        ADVANCE(135);
      if (lookahead == '|')
        ADVANCE(136);
      if (lookahead == 160)
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 125:
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 126:
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 127:
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 128:
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 129:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 130:
      if (lookahead == '<')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 133:
      if (lookahead == '>')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == '=')
        ADVANCE(98);
      END_STATE();
    case 137:
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == 'y')
        ADVANCE(138);
      if (lookahead == 160)
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(121);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 117},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 102},
  [8] = {.lex_state = 122},
  [9] = {.lex_state = 123},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 117},
  [12] = {.lex_state = 102},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 123},
  [20] = {.lex_state = 117},
  [21] = {.lex_state = 117},
  [22] = {.lex_state = 117},
  [23] = {.lex_state = 102},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 123},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 102},
  [29] = {.lex_state = 102},
  [30] = {.lex_state = 102},
  [31] = {.lex_state = 102},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 123},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 117},
  [36] = {.lex_state = 117},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 102},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 102},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 102},
  [50] = {.lex_state = 102},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 102},
  [53] = {.lex_state = 102},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 102},
  [57] = {.lex_state = 102},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 102},
  [62] = {.lex_state = 102},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 102},
  [65] = {.lex_state = 102},
  [66] = {.lex_state = 102},
  [67] = {.lex_state = 102},
  [68] = {.lex_state = 102},
  [69] = {.lex_state = 102},
  [70] = {.lex_state = 102},
  [71] = {.lex_state = 122},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 122},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 102},
  [76] = {.lex_state = 102},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 102},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 102},
  [82] = {.lex_state = 102},
  [83] = {.lex_state = 102},
  [84] = {.lex_state = 102},
  [85] = {.lex_state = 102},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 102},
  [89] = {.lex_state = 102},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 102},
  [93] = {.lex_state = 137},
  [94] = {.lex_state = 137},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 102},
  [98] = {.lex_state = 102},
  [99] = {.lex_state = 102},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 102},
  [103] = {.lex_state = 102},
  [104] = {.lex_state = 102},
  [105] = {.lex_state = 102},
  [106] = {.lex_state = 102},
  [107] = {.lex_state = 102},
  [108] = {.lex_state = 102},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 102},
  [111] = {.lex_state = 102},
  [112] = {.lex_state = 137},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 102},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 102},
  [117] = {.lex_state = 102},
  [118] = {.lex_state = 102},
  [119] = {.lex_state = 102},
  [120] = {.lex_state = 102},
  [121] = {.lex_state = 102},
  [122] = {.lex_state = 102},
  [123] = {.lex_state = 102},
  [124] = {.lex_state = 102},
  [125] = {.lex_state = 102},
  [126] = {.lex_state = 102},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 102},
  [129] = {.lex_state = 102},
  [130] = {.lex_state = 102},
  [131] = {.lex_state = 102},
  [132] = {.lex_state = 102},
  [133] = {.lex_state = 102},
  [134] = {.lex_state = 102},
  [135] = {.lex_state = 102},
  [136] = {.lex_state = 102},
  [137] = {.lex_state = 102},
  [138] = {.lex_state = 102},
  [139] = {.lex_state = 102},
  [140] = {.lex_state = 102},
  [141] = {.lex_state = 102},
  [142] = {.lex_state = 102},
  [143] = {.lex_state = 102},
  [144] = {.lex_state = 102},
  [145] = {.lex_state = 102},
  [146] = {.lex_state = 102},
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
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_DOT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
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
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
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
    [sym_statement] = STATE(10),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(19),
    [aux_sym_program_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_QMARK_GT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_comment] = ACTIONS(10),
  },
  [5] = {
    [sym_statement] = STATE(10),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(19),
    [aux_sym_program_repeat1] = STATE(22),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_QMARK_GT] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(34),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_list] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(34),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(34),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(36),
    [sym_comment] = ACTIONS(10),
  },
  [8] = {
    [sym_simple_variable] = STATE(25),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [9] = {
    [anon_sym_COLON] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(40),
    [anon_sym_STAR_EQ] = ACTIONS(40),
    [anon_sym_SLASH_EQ] = ACTIONS(40),
    [anon_sym_PLUS_EQ] = ACTIONS(40),
    [anon_sym_DASH_EQ] = ACTIONS(40),
    [anon_sym_DOT_EQ] = ACTIONS(40),
    [anon_sym_LT_LT_EQ] = ACTIONS(40),
    [anon_sym_GT_GT_EQ] = ACTIONS(40),
    [anon_sym_AMP_EQ] = ACTIONS(40),
    [anon_sym_CARET_EQ] = ACTIONS(40),
    [anon_sym_PIPE_EQ] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_QMARK_GT] = ACTIONS(42),
    [anon_sym_LBRACE] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_list] = ACTIONS(42),
    [anon_sym_DOLLAR] = ACTIONS(42),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(42),
    [sym_comment] = ACTIONS(26),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_QMARK_GT] = ACTIONS(44),
    [anon_sym_LBRACE] = ACTIONS(44),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_list] = ACTIONS(44),
    [anon_sym_DOLLAR] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(46),
    [sym_comment] = ACTIONS(10),
  },
  [13] = {
    [sym_yield_expression] = STATE(29),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [14] = {
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_DOT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [sym_comment] = ACTIONS(10),
  },
  [15] = {
    [anon_sym_EQ] = ACTIONS(52),
    [sym_comment] = ACTIONS(10),
  },
  [16] = {
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(54),
    [anon_sym_STAR_EQ] = ACTIONS(54),
    [anon_sym_SLASH_EQ] = ACTIONS(54),
    [anon_sym_PLUS_EQ] = ACTIONS(54),
    [anon_sym_DASH_EQ] = ACTIONS(54),
    [anon_sym_DOT_EQ] = ACTIONS(54),
    [anon_sym_LT_LT_EQ] = ACTIONS(54),
    [anon_sym_GT_GT_EQ] = ACTIONS(54),
    [anon_sym_AMP_EQ] = ACTIONS(54),
    [anon_sym_CARET_EQ] = ACTIONS(54),
    [anon_sym_PIPE_EQ] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_yield] = ACTIONS(54),
    [sym_comment] = ACTIONS(10),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(56),
    [anon_sym_STAR_EQ] = ACTIONS(56),
    [anon_sym_SLASH_EQ] = ACTIONS(56),
    [anon_sym_PLUS_EQ] = ACTIONS(56),
    [anon_sym_DASH_EQ] = ACTIONS(56),
    [anon_sym_DOT_EQ] = ACTIONS(56),
    [anon_sym_LT_LT_EQ] = ACTIONS(56),
    [anon_sym_GT_GT_EQ] = ACTIONS(56),
    [anon_sym_AMP_EQ] = ACTIONS(56),
    [anon_sym_CARET_EQ] = ACTIONS(56),
    [anon_sym_PIPE_EQ] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_yield] = ACTIONS(56),
    [sym_comment] = ACTIONS(10),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(58),
    [anon_sym_STAR_EQ] = ACTIONS(58),
    [anon_sym_SLASH_EQ] = ACTIONS(58),
    [anon_sym_PLUS_EQ] = ACTIONS(58),
    [anon_sym_DASH_EQ] = ACTIONS(58),
    [anon_sym_DOT_EQ] = ACTIONS(58),
    [anon_sym_LT_LT_EQ] = ACTIONS(58),
    [anon_sym_GT_GT_EQ] = ACTIONS(58),
    [anon_sym_AMP_EQ] = ACTIONS(58),
    [anon_sym_CARET_EQ] = ACTIONS(58),
    [anon_sym_PIPE_EQ] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [19] = {
    [anon_sym_COLON] = ACTIONS(60),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [sym_statement] = STATE(35),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_QMARK_GT] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_QMARK_GT] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_list] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [sym_statement] = STATE(35),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [sym__expression] = STATE(39),
    [sym_assignment_expression] = STATE(40),
    [sym__variable] = STATE(41),
    [sym_list_literal] = STATE(42),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [24] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(80),
    [anon_sym_STAR_EQ] = ACTIONS(80),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [anon_sym_PLUS_EQ] = ACTIONS(80),
    [anon_sym_DASH_EQ] = ACTIONS(80),
    [anon_sym_DOT_EQ] = ACTIONS(80),
    [anon_sym_LT_LT_EQ] = ACTIONS(80),
    [anon_sym_GT_GT_EQ] = ACTIONS(80),
    [anon_sym_AMP_EQ] = ACTIONS(80),
    [anon_sym_CARET_EQ] = ACTIONS(80),
    [anon_sym_PIPE_EQ] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_yield] = ACTIONS(80),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(82),
    [anon_sym_STAR_EQ] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [anon_sym_PLUS_EQ] = ACTIONS(82),
    [anon_sym_DASH_EQ] = ACTIONS(82),
    [anon_sym_DOT_EQ] = ACTIONS(82),
    [anon_sym_LT_LT_EQ] = ACTIONS(82),
    [anon_sym_GT_GT_EQ] = ACTIONS(82),
    [anon_sym_AMP_EQ] = ACTIONS(82),
    [anon_sym_CARET_EQ] = ACTIONS(82),
    [anon_sym_PIPE_EQ] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(62),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_QMARK_GT] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_list] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(48),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_array_element_initializer] = STATE(49),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_from] = ACTIONS(88),
    [sym_comment] = ACTIONS(10),
  },
  [29] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(52),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [30] = {
    [sym_assignment_expression] = STATE(54),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [31] = {
    [sym_assignment_expression] = STATE(54),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_QMARK_GT] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_list] = ACTIONS(92),
    [anon_sym_DOLLAR] = ACTIONS(92),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(92),
    [sym_comment] = ACTIONS(26),
  },
  [33] = {
    [anon_sym_COLON] = ACTIONS(94),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(94),
    [anon_sym_STAR_EQ] = ACTIONS(94),
    [anon_sym_SLASH_EQ] = ACTIONS(94),
    [anon_sym_PLUS_EQ] = ACTIONS(94),
    [anon_sym_DASH_EQ] = ACTIONS(94),
    [anon_sym_DOT_EQ] = ACTIONS(94),
    [anon_sym_LT_LT_EQ] = ACTIONS(94),
    [anon_sym_GT_GT_EQ] = ACTIONS(94),
    [anon_sym_AMP_EQ] = ACTIONS(94),
    [anon_sym_CARET_EQ] = ACTIONS(94),
    [anon_sym_PIPE_EQ] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(26),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(10),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_QMARK_GT] = ACTIONS(98),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_list] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(98),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(98),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_QMARK_GT] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_list] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(100),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(26),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [sym_comment] = ACTIONS(10),
  },
  [38] = {
    [sym_simple_variable] = STATE(25),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(104),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [anon_sym_EQ_GT] = ACTIONS(106),
    [sym_comment] = ACTIONS(10),
  },
  [40] = {
    [sym_yield_expression] = STATE(56),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [41] = {
    [aux_sym_list_literal_repeat1] = STATE(59),
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_DOT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_comment] = ACTIONS(10),
  },
  [42] = {
    [aux_sym_list_literal_repeat1] = STATE(59),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_comment] = ACTIONS(10),
  },
  [43] = {
    [anon_sym_RBRACE] = ACTIONS(112),
    [sym_comment] = ACTIONS(10),
  },
  [44] = {
    [sym_yield_expression] = STATE(61),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [sym__expression] = STATE(62),
    [sym_assignment_expression] = STATE(63),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [sym__expression] = STATE(64),
    [sym_assignment_expression] = STATE(63),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [anon_sym_list] = ACTIONS(114),
    [anon_sym_EQ_GT] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [sym_comment] = ACTIONS(10),
  },
  [48] = {
    [sym_yield_expression] = STATE(66),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [49] = {
    [anon_sym_list] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
  },
  [50] = {
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_xor] = ACTIONS(122),
    [anon_sym_PIPE_PIPE] = ACTIONS(122),
    [anon_sym_AMP_AMP] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_QMARK_QMARK] = ACTIONS(122),
    [anon_sym_EQ_EQ] = ACTIONS(120),
    [anon_sym_BANG_EQ] = ACTIONS(120),
    [anon_sym_LT_GT] = ACTIONS(122),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(122),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT_EQ] = ACTIONS(120),
    [anon_sym_GT_EQ] = ACTIONS(122),
    [anon_sym_LT_EQ_GT] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_instanceof] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [51] = {
    [sym_yield_expression] = STATE(68),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [52] = {
    [sym_include_expression] = STATE(70),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [53] = {
    [sym__variable] = STATE(72),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_DOLLAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(10),
  },
  [54] = {
    [anon_sym_yield] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [55] = {
    [sym__variable] = STATE(74),
    [sym_list_literal] = STATE(74),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(10),
  },
  [56] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(75),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [57] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(40),
    [sym__variable] = STATE(77),
    [sym_list_literal] = STATE(78),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [59] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(136),
    [sym_comment] = ACTIONS(10),
  },
  [60] = {
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(138),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_DOT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_yield] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [61] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(81),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [62] = {
    [anon_sym_list] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [sym_comment] = ACTIONS(10),
  },
  [63] = {
    [sym_yield_expression] = STATE(82),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [64] = {
    [anon_sym_list] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [sym_comment] = ACTIONS(10),
  },
  [65] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(63),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [66] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(85),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [67] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(87),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [68] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(88),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [69] = {
    [sym__expression] = STATE(89),
    [sym_assignment_expression] = STATE(90),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [70] = {
    [sym_include_once_expression] = STATE(92),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [sym_simple_variable] = STATE(25),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(148),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(150),
    [sym_comment] = ACTIONS(26),
  },
  [72] = {
    [anon_sym_yield] = ACTIONS(152),
    [sym_comment] = ACTIONS(10),
  },
  [73] = {
    [sym_simple_variable] = STATE(25),
    [sym__variable_name] = STATE(18),
    [sym_name] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [74] = {
    [aux_sym_list_literal_repeat1] = STATE(96),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [sym_include_expression] = STATE(97),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [76] = {
    [anon_sym_EQ_GT] = ACTIONS(158),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_DOT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [79] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(40),
    [sym__variable] = STATE(100),
    [sym_list_literal] = STATE(101),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_comment] = ACTIONS(10),
  },
  [81] = {
    [sym_include_expression] = STATE(102),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [82] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(103),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [83] = {
    [sym__expression] = STATE(104),
    [sym_assignment_expression] = STATE(63),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [84] = {
    [anon_sym_list] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(10),
  },
  [85] = {
    [sym_include_expression] = STATE(105),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [86] = {
    [anon_sym_include] = ACTIONS(166),
    [sym_comment] = ACTIONS(10),
  },
  [87] = {
    [sym_yield_expression] = STATE(106),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [88] = {
    [sym_include_expression] = STATE(107),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [89] = {
    [anon_sym_include_once] = ACTIONS(168),
    [sym_comment] = ACTIONS(10),
  },
  [90] = {
    [sym_yield_expression] = STATE(108),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [91] = {
    [sym__expression] = STATE(109),
    [sym_assignment_expression] = STATE(90),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [92] = {
    [sym_require_expression] = STATE(111),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [93] = {
    [anon_sym_yield] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [anon_sym_yield] = ACTIONS(82),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(172),
    [sym_comment] = ACTIONS(26),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(10),
  },
  [97] = {
    [sym_include_once_expression] = STATE(114),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [98] = {
    [sym__variable] = STATE(115),
    [sym_list_literal] = STATE(115),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(10),
  },
  [99] = {
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym_comment] = ACTIONS(10),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_DOT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(10),
  },
  [101] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(10),
  },
  [102] = {
    [sym_include_once_expression] = STATE(117),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [103] = {
    [sym_include_expression] = STATE(118),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [104] = {
    [anon_sym_list] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(182),
    [sym_comment] = ACTIONS(10),
  },
  [105] = {
    [sym_include_once_expression] = STATE(119),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [106] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(120),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [107] = {
    [sym_include_once_expression] = STATE(121),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [108] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [sym_binary_expression] = STATE(122),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [109] = {
    [anon_sym_include_once] = ACTIONS(184),
    [sym_comment] = ACTIONS(10),
  },
  [110] = {
    [sym__expression] = STATE(123),
    [sym_assignment_expression] = STATE(90),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [111] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(186),
    [sym_comment] = ACTIONS(10),
  },
  [112] = {
    [anon_sym_yield] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [sym_comment] = ACTIONS(10),
  },
  [114] = {
    [sym_require_expression] = STATE(126),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [116] = {
    [sym__variable] = STATE(127),
    [sym_list_literal] = STATE(127),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [sym_comment] = ACTIONS(10),
  },
  [117] = {
    [sym_require_expression] = STATE(128),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [118] = {
    [sym_include_once_expression] = STATE(129),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [119] = {
    [sym_require_expression] = STATE(130),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [120] = {
    [sym_include_expression] = STATE(131),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [121] = {
    [sym_require_expression] = STATE(132),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [122] = {
    [sym_include_expression] = STATE(133),
    [anon_sym_include] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [123] = {
    [anon_sym_include_once] = ACTIONS(192),
    [sym_comment] = ACTIONS(10),
  },
  [124] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [125] = {
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_list] = ACTIONS(194),
    [anon_sym_EQ_GT] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_and] = ACTIONS(194),
    [anon_sym_or] = ACTIONS(194),
    [anon_sym_xor] = ACTIONS(194),
    [anon_sym_PIPE_PIPE] = ACTIONS(194),
    [anon_sym_AMP_AMP] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_QMARK_QMARK] = ACTIONS(194),
    [anon_sym_EQ_EQ] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(196),
    [anon_sym_LT_GT] = ACTIONS(194),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(194),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_LT_EQ] = ACTIONS(196),
    [anon_sym_GT_EQ] = ACTIONS(194),
    [anon_sym_LT_EQ_GT] = ACTIONS(194),
    [anon_sym_LT_LT] = ACTIONS(194),
    [anon_sym_GT_GT] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_instanceof] = ACTIONS(194),
    [anon_sym_include] = ACTIONS(196),
    [anon_sym_include_once] = ACTIONS(194),
    [sym_comment] = ACTIONS(10),
  },
  [126] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(10),
  },
  [128] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(202),
    [sym_comment] = ACTIONS(10),
  },
  [129] = {
    [sym_require_expression] = STATE(137),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [130] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(204),
    [sym_comment] = ACTIONS(10),
  },
  [131] = {
    [sym_include_once_expression] = STATE(139),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [132] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(206),
    [sym_comment] = ACTIONS(10),
  },
  [133] = {
    [sym_include_once_expression] = STATE(141),
    [anon_sym_include_once] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [134] = {
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_list] = ACTIONS(208),
    [anon_sym_EQ_GT] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_and] = ACTIONS(208),
    [anon_sym_or] = ACTIONS(208),
    [anon_sym_xor] = ACTIONS(208),
    [anon_sym_PIPE_PIPE] = ACTIONS(208),
    [anon_sym_AMP_AMP] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_QMARK_QMARK] = ACTIONS(208),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [anon_sym_BANG_EQ] = ACTIONS(210),
    [anon_sym_LT_GT] = ACTIONS(208),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(208),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(208),
    [anon_sym_LT_EQ_GT] = ACTIONS(208),
    [anon_sym_LT_LT] = ACTIONS(208),
    [anon_sym_GT_GT] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_STAR] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_instanceof] = ACTIONS(208),
    [anon_sym_include] = ACTIONS(210),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [135] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(40),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [137] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(212),
    [sym_comment] = ACTIONS(10),
  },
  [138] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(48),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [139] = {
    [sym_require_expression] = STATE(143),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [140] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(51),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [141] = {
    [sym_require_expression] = STATE(144),
    [anon_sym_include_once] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [142] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(63),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [143] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(214),
    [sym_comment] = ACTIONS(10),
  },
  [144] = {
    [sym_require_once_expression] = STATE(125),
    [anon_sym_include_once] = ACTIONS(216),
    [sym_comment] = ACTIONS(10),
  },
  [145] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(87),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(10),
  },
  [146] = {
    [sym__expression] = STATE(134),
    [sym_assignment_expression] = STATE(90),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(18),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(78),
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
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__callable_variable, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 2),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_name, 2),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 3),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 4),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 4),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 4),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 5),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 6),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 3),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 7),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 4),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 7),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 5),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
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
