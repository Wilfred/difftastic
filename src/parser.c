#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 232
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_array = 28,
  sym_string = 29,
  anon_sym_DOLLAR = 30,
  anon_sym_yield = 31,
  anon_sym_from = 32,
  anon_sym_and = 33,
  anon_sym_or = 34,
  anon_sym_xor = 35,
  anon_sym_PIPE_PIPE = 36,
  anon_sym_AMP_AMP = 37,
  anon_sym_PIPE = 38,
  anon_sym_CARET = 39,
  anon_sym_QMARK_QMARK = 40,
  anon_sym_EQ_EQ = 41,
  anon_sym_BANG_EQ = 42,
  anon_sym_LT_GT = 43,
  anon_sym_EQ_EQ_EQ = 44,
  anon_sym_BANG_EQ_EQ = 45,
  anon_sym_LT = 46,
  anon_sym_GT = 47,
  anon_sym_LT_EQ = 48,
  anon_sym_GT_EQ = 49,
  anon_sym_LT_EQ_GT = 50,
  anon_sym_LT_LT = 51,
  anon_sym_GT_GT = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_DOT = 55,
  anon_sym_STAR = 56,
  anon_sym_SLASH = 57,
  anon_sym_PERCENT = 58,
  anon_sym_instanceof = 59,
  anon_sym_include = 60,
  anon_sym_include_once = 61,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 62,
  aux_sym_SLASH_BSLASHd_SLASH = 63,
  sym_comment = 64,
  sym_program = 65,
  sym_statement = 66,
  sym_compound_statement = 67,
  sym_named_label_statement = 68,
  sym_expression_statement = 69,
  sym__expression = 70,
  sym_assignment_expression = 71,
  sym__variable = 72,
  sym_list_literal = 73,
  sym__callable_variable = 74,
  sym_subscript_expression = 75,
  sym_dereferencable_expression = 76,
  sym_array_creation_expression = 77,
  sym_simple_variable = 78,
  sym__variable_name = 79,
  sym_yield_expression = 80,
  sym_array_element_initializer = 81,
  sym_binary_expression = 82,
  sym_include_expression = 83,
  sym_include_once_expression = 84,
  sym_require_expression = 85,
  sym_require_once_expression = 86,
  sym_name = 87,
  aux_sym_program_repeat1 = 88,
  aux_sym_list_literal_repeat1 = 89,
  aux_sym_array_creation_expression_repeat1 = 90,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_array] = "array",
  [sym_string] = "string",
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
  [sym_subscript_expression] = "subscript_expression",
  [sym_dereferencable_expression] = "dereferencable_expression",
  [sym_array_creation_expression] = "array_creation_expression",
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
  [aux_sym_array_creation_expression_repeat1] = "array_creation_expression_repeat1",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
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
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dereferencable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_creation_expression] = {
    .visible = true,
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
  [aux_sym_array_creation_expression_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '%')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(17);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(28);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '?')
        ADVANCE(62);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == ']')
        ADVANCE(66);
      if (lookahead == '^')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'o')
        ADVANCE(104);
      if (lookahead == 'x')
        ADVANCE(106);
      if (lookahead == 'y')
        ADVANCE(109);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '|')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(118);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(119);
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
        ADVANCE(120);
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
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 7:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(5);
      if (lookahead == 'e')
        ADVANCE(5);
      if (lookahead == 'f')
        ADVANCE(5);
      if (lookahead == 'n')
        ADVANCE(5);
      if (lookahead == 'r')
        ADVANCE(5);
      if (lookahead == 't')
        ADVANCE(5);
      if (lookahead == 'u')
        ADVANCE(8);
      if (lookahead == 'v')
        ADVANCE(5);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '{')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '}')
        ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\"')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(5);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 20:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '\\')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == '*')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*')
        ADVANCE(37);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(46);
      if (lookahead == '>')
        ADVANCE(48);
      if (lookahead == '?')
        ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 49:
      if (lookahead == '=')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 51:
      if (lookahead == 'h')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'p')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(55);
      if (lookahead == '>')
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 62:
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 69:
      if (lookahead == 'n')
        ADVANCE(70);
      if (lookahead == 'r')
        ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'd')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 72:
      if (lookahead == 'r')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'a')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'y')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 76:
      if (lookahead == 'r')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'm')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 80:
      if (lookahead == 'n')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'c')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'l')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'u')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'd')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'e')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'c')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 92:
      if (lookahead == 't')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'a')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'c')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'o')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'f')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 100:
      if (lookahead == 'i')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 's')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 104:
      if (lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 106:
      if (lookahead == 'o')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'l')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'd')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(116);
      if (lookahead == '|')
        ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 121:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '%')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(17);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(28);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '.')
        ADVANCE(33);
      if (lookahead == '/')
        ADVANCE(35);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == '>')
        ADVANCE(58);
      if (lookahead == '?')
        ADVANCE(122);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == ']')
        ADVANCE(66);
      if (lookahead == '^')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'i')
        ADVANCE(80);
      if (lookahead == 'l')
        ADVANCE(100);
      if (lookahead == 'o')
        ADVANCE(104);
      if (lookahead == 'x')
        ADVANCE(106);
      if (lookahead == 'y')
        ADVANCE(109);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '|')
        ADVANCE(115);
      if (lookahead == '}')
        ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(121);
      END_STATE();
    case 122:
      if (lookahead == '?')
        ADVANCE(64);
      END_STATE();
    case 123:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(124);
      if (lookahead == ';')
        ADVANCE(42);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == 'l')
        ADVANCE(126);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == '}')
        ADVANCE(118);
      if (lookahead == 160)
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(39);
      END_STATE();
    case 125:
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(101);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 128:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(114);
      if (lookahead == 160)
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(127);
      END_STATE();
    case 129:
      if (lookahead == '&')
        ADVANCE(130);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(131);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(135);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(136);
      if (lookahead == '=')
        ADVANCE(138);
      if (lookahead == '>')
        ADVANCE(139);
      if (lookahead == '^')
        ADVANCE(141);
      if (lookahead == '|')
        ADVANCE(142);
      if (lookahead == 160)
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(127);
      END_STATE();
    case 130:
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 131:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 132:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 133:
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 134:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 135:
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(39);
      if (lookahead == '=')
        ADVANCE(40);
      END_STATE();
    case 136:
      if (lookahead == '<')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 139:
      if (lookahead == '>')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 141:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 142:
      if (lookahead == '=')
        ADVANCE(116);
      END_STATE();
    case 143:
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(124);
      if (lookahead == 'y')
        ADVANCE(144);
      if (lookahead == 160)
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(127);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(110);
      END_STATE();
    case 145:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(124);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(145);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
  [2] = {.lex_state = 123},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 123},
  [6] = {.lex_state = 123},
  [7] = {.lex_state = 121},
  [8] = {.lex_state = 128},
  [9] = {.lex_state = 129},
  [10] = {.lex_state = 123},
  [11] = {.lex_state = 123},
  [12] = {.lex_state = 121},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 121},
  [18] = {.lex_state = 121},
  [19] = {.lex_state = 121},
  [20] = {.lex_state = 129},
  [21] = {.lex_state = 123},
  [22] = {.lex_state = 123},
  [23] = {.lex_state = 123},
  [24] = {.lex_state = 121},
  [25] = {.lex_state = 121},
  [26] = {.lex_state = 121},
  [27] = {.lex_state = 129},
  [28] = {.lex_state = 123},
  [29] = {.lex_state = 121},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 121},
  [32] = {.lex_state = 121},
  [33] = {.lex_state = 121},
  [34] = {.lex_state = 121},
  [35] = {.lex_state = 121},
  [36] = {.lex_state = 123},
  [37] = {.lex_state = 129},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 123},
  [40] = {.lex_state = 123},
  [41] = {.lex_state = 121},
  [42] = {.lex_state = 128},
  [43] = {.lex_state = 121},
  [44] = {.lex_state = 121},
  [45] = {.lex_state = 121},
  [46] = {.lex_state = 121},
  [47] = {.lex_state = 121},
  [48] = {.lex_state = 121},
  [49] = {.lex_state = 121},
  [50] = {.lex_state = 121},
  [51] = {.lex_state = 121},
  [52] = {.lex_state = 121},
  [53] = {.lex_state = 121},
  [54] = {.lex_state = 121},
  [55] = {.lex_state = 121},
  [56] = {.lex_state = 121},
  [57] = {.lex_state = 121},
  [58] = {.lex_state = 121},
  [59] = {.lex_state = 121},
  [60] = {.lex_state = 121},
  [61] = {.lex_state = 121},
  [62] = {.lex_state = 121},
  [63] = {.lex_state = 121},
  [64] = {.lex_state = 121},
  [65] = {.lex_state = 121},
  [66] = {.lex_state = 121},
  [67] = {.lex_state = 121},
  [68] = {.lex_state = 121},
  [69] = {.lex_state = 121},
  [70] = {.lex_state = 121},
  [71] = {.lex_state = 121},
  [72] = {.lex_state = 121},
  [73] = {.lex_state = 121},
  [74] = {.lex_state = 121},
  [75] = {.lex_state = 121},
  [76] = {.lex_state = 121},
  [77] = {.lex_state = 121},
  [78] = {.lex_state = 121},
  [79] = {.lex_state = 121},
  [80] = {.lex_state = 121},
  [81] = {.lex_state = 128},
  [82] = {.lex_state = 121},
  [83] = {.lex_state = 121},
  [84] = {.lex_state = 121},
  [85] = {.lex_state = 121},
  [86] = {.lex_state = 121},
  [87] = {.lex_state = 128},
  [88] = {.lex_state = 121},
  [89] = {.lex_state = 121},
  [90] = {.lex_state = 121},
  [91] = {.lex_state = 121},
  [92] = {.lex_state = 121},
  [93] = {.lex_state = 121},
  [94] = {.lex_state = 121},
  [95] = {.lex_state = 121},
  [96] = {.lex_state = 121},
  [97] = {.lex_state = 121},
  [98] = {.lex_state = 121},
  [99] = {.lex_state = 121},
  [100] = {.lex_state = 121},
  [101] = {.lex_state = 121},
  [102] = {.lex_state = 121},
  [103] = {.lex_state = 121},
  [104] = {.lex_state = 121},
  [105] = {.lex_state = 121},
  [106] = {.lex_state = 121},
  [107] = {.lex_state = 121},
  [108] = {.lex_state = 143},
  [109] = {.lex_state = 143},
  [110] = {.lex_state = 121},
  [111] = {.lex_state = 121},
  [112] = {.lex_state = 145},
  [113] = {.lex_state = 121},
  [114] = {.lex_state = 121},
  [115] = {.lex_state = 121},
  [116] = {.lex_state = 121},
  [117] = {.lex_state = 121},
  [118] = {.lex_state = 121},
  [119] = {.lex_state = 121},
  [120] = {.lex_state = 121},
  [121] = {.lex_state = 121},
  [122] = {.lex_state = 121},
  [123] = {.lex_state = 121},
  [124] = {.lex_state = 121},
  [125] = {.lex_state = 121},
  [126] = {.lex_state = 121},
  [127] = {.lex_state = 121},
  [128] = {.lex_state = 121},
  [129] = {.lex_state = 121},
  [130] = {.lex_state = 121},
  [131] = {.lex_state = 121},
  [132] = {.lex_state = 143},
  [133] = {.lex_state = 121},
  [134] = {.lex_state = 121},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 121},
  [137] = {.lex_state = 121},
  [138] = {.lex_state = 121},
  [139] = {.lex_state = 121},
  [140] = {.lex_state = 121},
  [141] = {.lex_state = 121},
  [142] = {.lex_state = 121},
  [143] = {.lex_state = 121},
  [144] = {.lex_state = 121},
  [145] = {.lex_state = 121},
  [146] = {.lex_state = 121},
  [147] = {.lex_state = 121},
  [148] = {.lex_state = 121},
  [149] = {.lex_state = 121},
  [150] = {.lex_state = 121},
  [151] = {.lex_state = 121},
  [152] = {.lex_state = 121},
  [153] = {.lex_state = 121},
  [154] = {.lex_state = 121},
  [155] = {.lex_state = 121},
  [156] = {.lex_state = 121},
  [157] = {.lex_state = 121},
  [158] = {.lex_state = 145},
  [159] = {.lex_state = 121},
  [160] = {.lex_state = 121},
  [161] = {.lex_state = 121},
  [162] = {.lex_state = 121},
  [163] = {.lex_state = 121},
  [164] = {.lex_state = 121},
  [165] = {.lex_state = 121},
  [166] = {.lex_state = 121},
  [167] = {.lex_state = 121},
  [168] = {.lex_state = 121},
  [169] = {.lex_state = 121},
  [170] = {.lex_state = 121},
  [171] = {.lex_state = 121},
  [172] = {.lex_state = 121},
  [173] = {.lex_state = 121},
  [174] = {.lex_state = 121},
  [175] = {.lex_state = 121},
  [176] = {.lex_state = 121},
  [177] = {.lex_state = 121},
  [178] = {.lex_state = 121},
  [179] = {.lex_state = 121},
  [180] = {.lex_state = 121},
  [181] = {.lex_state = 121},
  [182] = {.lex_state = 121},
  [183] = {.lex_state = 145},
  [184] = {.lex_state = 121},
  [185] = {.lex_state = 121},
  [186] = {.lex_state = 121},
  [187] = {.lex_state = 121},
  [188] = {.lex_state = 121},
  [189] = {.lex_state = 121},
  [190] = {.lex_state = 121},
  [191] = {.lex_state = 121},
  [192] = {.lex_state = 121},
  [193] = {.lex_state = 121},
  [194] = {.lex_state = 121},
  [195] = {.lex_state = 121},
  [196] = {.lex_state = 121},
  [197] = {.lex_state = 121},
  [198] = {.lex_state = 121},
  [199] = {.lex_state = 121},
  [200] = {.lex_state = 121},
  [201] = {.lex_state = 121},
  [202] = {.lex_state = 145},
  [203] = {.lex_state = 121},
  [204] = {.lex_state = 121},
  [205] = {.lex_state = 121},
  [206] = {.lex_state = 121},
  [207] = {.lex_state = 121},
  [208] = {.lex_state = 121},
  [209] = {.lex_state = 121},
  [210] = {.lex_state = 121},
  [211] = {.lex_state = 121},
  [212] = {.lex_state = 121},
  [213] = {.lex_state = 121},
  [214] = {.lex_state = 121},
  [215] = {.lex_state = 121},
  [216] = {.lex_state = 121},
  [217] = {.lex_state = 145},
  [218] = {.lex_state = 121},
  [219] = {.lex_state = 121},
  [220] = {.lex_state = 121},
  [221] = {.lex_state = 121},
  [222] = {.lex_state = 121},
  [223] = {.lex_state = 121},
  [224] = {.lex_state = 121},
  [225] = {.lex_state = 121},
  [226] = {.lex_state = 121},
  [227] = {.lex_state = 121},
  [228] = {.lex_state = 121},
  [229] = {.lex_state = 121},
  [230] = {.lex_state = 121},
  [231] = {.lex_state = 121},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
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
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [aux_sym_program_repeat1] = STATE(21),
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
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [aux_sym_program_repeat1] = STATE(23),
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
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
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
    [anon_sym_LPAREN] = ACTIONS(40),
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
    [sym_yield_expression] = STATE(30),
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
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym_comment] = ACTIONS(10),
  },
  [15] = {
    [anon_sym_EQ] = ACTIONS(52),
    [sym_comment] = ACTIONS(10),
  },
  [16] = {
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
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_yield] = ACTIONS(56),
    [sym_comment] = ACTIONS(10),
  },
  [17] = {
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
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(62),
    [sym_comment] = ACTIONS(10),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(64),
    [anon_sym_STAR_EQ] = ACTIONS(64),
    [anon_sym_SLASH_EQ] = ACTIONS(64),
    [anon_sym_PLUS_EQ] = ACTIONS(64),
    [anon_sym_DASH_EQ] = ACTIONS(64),
    [anon_sym_DOT_EQ] = ACTIONS(64),
    [anon_sym_LT_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_AMP_EQ] = ACTIONS(64),
    [anon_sym_CARET_EQ] = ACTIONS(64),
    [anon_sym_PIPE_EQ] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_yield] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(66),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [sym_statement] = STATE(39),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_QMARK_GT] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_QMARK_GT] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_list] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [sym_statement] = STATE(39),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym__expression] = STATE(43),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(45),
    [sym_list_literal] = STATE(46),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [sym__expression] = STATE(47),
    [sym_assignment_expression] = STATE(48),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(86),
    [anon_sym_STAR_EQ] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [anon_sym_PLUS_EQ] = ACTIONS(86),
    [anon_sym_DASH_EQ] = ACTIONS(86),
    [anon_sym_DOT_EQ] = ACTIONS(86),
    [anon_sym_LT_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_AMP_EQ] = ACTIONS(86),
    [anon_sym_CARET_EQ] = ACTIONS(86),
    [anon_sym_PIPE_EQ] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_yield] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(88),
    [anon_sym_STAR_EQ] = ACTIONS(88),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(88),
    [anon_sym_DASH_EQ] = ACTIONS(88),
    [anon_sym_DOT_EQ] = ACTIONS(88),
    [anon_sym_LT_LT_EQ] = ACTIONS(88),
    [anon_sym_GT_GT_EQ] = ACTIONS(88),
    [anon_sym_AMP_EQ] = ACTIONS(88),
    [anon_sym_CARET_EQ] = ACTIONS(88),
    [anon_sym_PIPE_EQ] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_QMARK_GT] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_list] = ACTIONS(90),
    [anon_sym_DOLLAR] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(53),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_from] = ACTIONS(94),
    [sym_comment] = ACTIONS(10),
  },
  [30] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(56),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [31] = {
    [sym_assignment_expression] = STATE(58),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [sym_assignment_expression] = STATE(58),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [33] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(60),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [34] = {
    [sym__expression] = STATE(61),
    [sym_assignment_expression] = STATE(48),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [35] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(64),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
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
    [anon_sym_COLON] = ACTIONS(102),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(102),
    [anon_sym_STAR_EQ] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(102),
    [anon_sym_PLUS_EQ] = ACTIONS(102),
    [anon_sym_DASH_EQ] = ACTIONS(102),
    [anon_sym_DOT_EQ] = ACTIONS(102),
    [anon_sym_LT_LT_EQ] = ACTIONS(102),
    [anon_sym_GT_GT_EQ] = ACTIONS(102),
    [anon_sym_AMP_EQ] = ACTIONS(102),
    [anon_sym_CARET_EQ] = ACTIONS(102),
    [anon_sym_PIPE_EQ] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(26),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_QMARK_GT] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_list] = ACTIONS(106),
    [anon_sym_DOLLAR] = ACTIONS(106),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(106),
    [sym_comment] = ACTIONS(26),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_QMARK_GT] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_list] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [sym_comment] = ACTIONS(10),
  },
  [42] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(114),
    [sym_comment] = ACTIONS(10),
  },
  [44] = {
    [sym_yield_expression] = STATE(66),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [aux_sym_list_literal_repeat1] = STATE(69),
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
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [aux_sym_list_literal_repeat1] = STATE(69),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_comment] = ACTIONS(10),
  },
  [48] = {
    [sym_yield_expression] = STATE(71),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [49] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(73),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [50] = {
    [sym__expression] = STATE(74),
    [sym_assignment_expression] = STATE(73),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [51] = {
    [anon_sym_list] = ACTIONS(122),
    [anon_sym_EQ_GT] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [52] = {
    [sym_yield_expression] = STATE(76),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [53] = {
    [anon_sym_list] = ACTIONS(126),
    [anon_sym_DOLLAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(10),
  },
  [54] = {
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_and] = ACTIONS(130),
    [anon_sym_or] = ACTIONS(130),
    [anon_sym_xor] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(130),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(130),
    [anon_sym_QMARK_QMARK] = ACTIONS(130),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_LT_GT] = ACTIONS(130),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(130),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [anon_sym_LT_EQ_GT] = ACTIONS(130),
    [anon_sym_LT_LT] = ACTIONS(130),
    [anon_sym_GT_GT] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_instanceof] = ACTIONS(130),
    [sym_comment] = ACTIONS(10),
  },
  [55] = {
    [sym_yield_expression] = STATE(78),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [56] = {
    [sym_include_expression] = STATE(80),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [57] = {
    [sym__variable] = STATE(82),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(10),
  },
  [58] = {
    [anon_sym_yield] = ACTIONS(136),
    [sym_comment] = ACTIONS(10),
  },
  [59] = {
    [anon_sym_RPAREN] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [60] = {
    [sym_yield_expression] = STATE(84),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [61] = {
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym_comment] = ACTIONS(10),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(142),
    [anon_sym_STAR_EQ] = ACTIONS(142),
    [anon_sym_SLASH_EQ] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(142),
    [anon_sym_DASH_EQ] = ACTIONS(142),
    [anon_sym_DOT_EQ] = ACTIONS(142),
    [anon_sym_LT_LT_EQ] = ACTIONS(142),
    [anon_sym_GT_GT_EQ] = ACTIONS(142),
    [anon_sym_AMP_EQ] = ACTIONS(142),
    [anon_sym_CARET_EQ] = ACTIONS(142),
    [anon_sym_PIPE_EQ] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_yield] = ACTIONS(142),
    [sym_comment] = ACTIONS(10),
  },
  [63] = {
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym_comment] = ACTIONS(10),
  },
  [64] = {
    [sym_yield_expression] = STATE(86),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [65] = {
    [sym__variable] = STATE(88),
    [sym_list_literal] = STATE(89),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym_comment] = ACTIONS(10),
  },
  [66] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(90),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [67] = {
    [sym__expression] = STATE(91),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(92),
    [sym_list_literal] = STATE(93),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(150),
    [sym_comment] = ACTIONS(10),
  },
  [70] = {
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(152),
    [anon_sym_STAR_EQ] = ACTIONS(152),
    [anon_sym_SLASH_EQ] = ACTIONS(152),
    [anon_sym_PLUS_EQ] = ACTIONS(152),
    [anon_sym_DASH_EQ] = ACTIONS(152),
    [anon_sym_DOT_EQ] = ACTIONS(152),
    [anon_sym_LT_LT_EQ] = ACTIONS(152),
    [anon_sym_GT_GT_EQ] = ACTIONS(152),
    [anon_sym_AMP_EQ] = ACTIONS(152),
    [anon_sym_CARET_EQ] = ACTIONS(152),
    [anon_sym_PIPE_EQ] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_yield] = ACTIONS(152),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(96),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [72] = {
    [anon_sym_list] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(10),
  },
  [73] = {
    [sym_yield_expression] = STATE(97),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [74] = {
    [anon_sym_list] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(73),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [76] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(100),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [sym__expression] = STATE(101),
    [sym_assignment_expression] = STATE(102),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(103),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [79] = {
    [sym__expression] = STATE(104),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [80] = {
    [sym_include_once_expression] = STATE(107),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [81] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(109),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_yield] = ACTIONS(166),
    [sym_comment] = ACTIONS(10),
  },
  [83] = {
    [sym_array_creation_expression] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_array] = ACTIONS(170),
    [sym_comment] = ACTIONS(10),
  },
  [84] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(113),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(172),
    [anon_sym_STAR_EQ] = ACTIONS(172),
    [anon_sym_SLASH_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(172),
    [anon_sym_DASH_EQ] = ACTIONS(172),
    [anon_sym_DOT_EQ] = ACTIONS(172),
    [anon_sym_LT_LT_EQ] = ACTIONS(172),
    [anon_sym_GT_GT_EQ] = ACTIONS(172),
    [anon_sym_AMP_EQ] = ACTIONS(172),
    [anon_sym_CARET_EQ] = ACTIONS(172),
    [anon_sym_PIPE_EQ] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_yield] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [86] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(114),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [87] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [aux_sym_list_literal_repeat1] = STATE(116),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(10),
  },
  [89] = {
    [aux_sym_list_literal_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(176),
    [sym_comment] = ACTIONS(10),
  },
  [90] = {
    [sym_include_expression] = STATE(117),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [91] = {
    [anon_sym_EQ_GT] = ACTIONS(178),
    [sym_comment] = ACTIONS(10),
  },
  [92] = {
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
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(10),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(10),
  },
  [94] = {
    [sym__expression] = STATE(119),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(120),
    [sym_list_literal] = STATE(121),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [sym_comment] = ACTIONS(10),
  },
  [96] = {
    [sym_include_expression] = STATE(122),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [97] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(123),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [98] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(73),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [99] = {
    [anon_sym_list] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(10),
  },
  [100] = {
    [sym_include_expression] = STATE(125),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [101] = {
    [anon_sym_include] = ACTIONS(186),
    [sym_comment] = ACTIONS(10),
  },
  [102] = {
    [sym_yield_expression] = STATE(126),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [103] = {
    [sym_include_expression] = STATE(127),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [104] = {
    [anon_sym_include_once] = ACTIONS(188),
    [sym_comment] = ACTIONS(10),
  },
  [105] = {
    [sym_yield_expression] = STATE(128),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [106] = {
    [sym__expression] = STATE(129),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [107] = {
    [sym_require_expression] = STATE(131),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_yield] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_yield] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(192),
    [sym_comment] = ACTIONS(26),
  },
  [110] = {
    [sym__expression] = STATE(136),
    [sym_assignment_expression] = STATE(137),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(138),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(10),
  },
  [112] = {
    [sym_string] = ACTIONS(202),
    [sym_comment] = ACTIONS(10),
  },
  [113] = {
    [sym_include_expression] = STATE(141),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [114] = {
    [sym_include_expression] = STATE(142),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [115] = {
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [sym_comment] = ACTIONS(10),
  },
  [116] = {
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(206),
    [sym_comment] = ACTIONS(10),
  },
  [117] = {
    [sym_include_once_expression] = STATE(144),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [118] = {
    [sym__variable] = STATE(145),
    [sym_list_literal] = STATE(146),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym_comment] = ACTIONS(10),
  },
  [119] = {
    [anon_sym_EQ_GT] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [120] = {
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
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(10),
  },
  [121] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(10),
  },
  [122] = {
    [sym_include_once_expression] = STATE(148),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [123] = {
    [sym_include_expression] = STATE(149),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [124] = {
    [anon_sym_list] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [sym_comment] = ACTIONS(10),
  },
  [125] = {
    [sym_include_once_expression] = STATE(150),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [126] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(151),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [127] = {
    [sym_include_once_expression] = STATE(152),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [128] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(153),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [129] = {
    [anon_sym_include_once] = ACTIONS(214),
    [sym_comment] = ACTIONS(10),
  },
  [130] = {
    [sym__expression] = STATE(154),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [131] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(216),
    [sym_comment] = ACTIONS(10),
  },
  [132] = {
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_yield] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(102),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(157),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [134] = {
    [anon_sym_RBRACK] = ACTIONS(218),
    [sym_comment] = ACTIONS(10),
  },
  [135] = {
    [sym_string] = ACTIONS(220),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [anon_sym_EQ_GT] = ACTIONS(222),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [137] = {
    [sym_yield_expression] = STATE(160),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [138] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(218),
    [sym_comment] = ACTIONS(10),
  },
  [139] = {
    [sym__expression] = STATE(165),
    [sym_assignment_expression] = STATE(166),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(167),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [140] = {
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [sym_comment] = ACTIONS(10),
  },
  [141] = {
    [sym_include_once_expression] = STATE(168),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [142] = {
    [sym_include_once_expression] = STATE(169),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [sym_comment] = ACTIONS(10),
  },
  [144] = {
    [sym_require_expression] = STATE(170),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [sym_comment] = ACTIONS(10),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [sym_comment] = ACTIONS(10),
  },
  [147] = {
    [sym__variable] = STATE(171),
    [sym_list_literal] = STATE(172),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [sym_comment] = ACTIONS(10),
  },
  [148] = {
    [sym_require_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [149] = {
    [sym_include_once_expression] = STATE(174),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [150] = {
    [sym_require_expression] = STATE(175),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [151] = {
    [sym_include_expression] = STATE(176),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [152] = {
    [sym_require_expression] = STATE(177),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [153] = {
    [sym_include_expression] = STATE(178),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [154] = {
    [anon_sym_include_once] = ACTIONS(236),
    [sym_comment] = ACTIONS(10),
  },
  [155] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_list] = ACTIONS(238),
    [anon_sym_EQ_GT] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_and] = ACTIONS(238),
    [anon_sym_or] = ACTIONS(238),
    [anon_sym_xor] = ACTIONS(238),
    [anon_sym_PIPE_PIPE] = ACTIONS(238),
    [anon_sym_AMP_AMP] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym_QMARK_QMARK] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_LT_GT] = ACTIONS(238),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(238),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [anon_sym_LT_EQ_GT] = ACTIONS(238),
    [anon_sym_LT_LT] = ACTIONS(238),
    [anon_sym_GT_GT] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_STAR] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_instanceof] = ACTIONS(238),
    [anon_sym_include] = ACTIONS(240),
    [anon_sym_include_once] = ACTIONS(238),
    [sym_comment] = ACTIONS(10),
  },
  [157] = {
    [sym_yield_expression] = STATE(180),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [158] = {
    [sym_string] = ACTIONS(242),
    [sym_comment] = ACTIONS(10),
  },
  [159] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(157),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(244),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [160] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(182),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [161] = {
    [sym__expression] = STATE(136),
    [sym_assignment_expression] = STATE(137),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(184),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(246),
    [sym_comment] = ACTIONS(10),
  },
  [163] = {
    [sym__expression] = STATE(72),
    [sym_assignment_expression] = STATE(186),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(10),
  },
  [165] = {
    [anon_sym_EQ_GT] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [166] = {
    [sym_yield_expression] = STATE(188),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [167] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(190),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(246),
    [sym_comment] = ACTIONS(10),
  },
  [168] = {
    [sym_require_expression] = STATE(191),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [169] = {
    [sym_require_expression] = STATE(192),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [170] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(254),
    [sym_comment] = ACTIONS(10),
  },
  [171] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [sym_comment] = ACTIONS(10),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [sym_comment] = ACTIONS(10),
  },
  [173] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(258),
    [sym_comment] = ACTIONS(10),
  },
  [174] = {
    [sym_require_expression] = STATE(195),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [175] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(260),
    [sym_comment] = ACTIONS(10),
  },
  [176] = {
    [sym_include_once_expression] = STATE(197),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [177] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(262),
    [sym_comment] = ACTIONS(10),
  },
  [178] = {
    [sym_include_once_expression] = STATE(199),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [179] = {
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_list] = ACTIONS(264),
    [anon_sym_EQ_GT] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [anon_sym_and] = ACTIONS(264),
    [anon_sym_or] = ACTIONS(264),
    [anon_sym_xor] = ACTIONS(264),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_AMP_AMP] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_QMARK_QMARK] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [anon_sym_BANG_EQ] = ACTIONS(266),
    [anon_sym_LT_GT] = ACTIONS(264),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(264),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(264),
    [anon_sym_LT_EQ_GT] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_instanceof] = ACTIONS(264),
    [anon_sym_include] = ACTIONS(266),
    [anon_sym_include_once] = ACTIONS(264),
    [sym_comment] = ACTIONS(10),
  },
  [180] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(200),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [181] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(157),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [182] = {
    [sym_include_expression] = STATE(201),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [183] = {
    [sym_string] = ACTIONS(268),
    [sym_comment] = ACTIONS(10),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [sym_comment] = ACTIONS(10),
  },
  [185] = {
    [sym__expression] = STATE(136),
    [sym_assignment_expression] = STATE(137),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(203),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [186] = {
    [sym_yield_expression] = STATE(204),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [187] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(186),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [188] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(206),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [189] = {
    [sym__expression] = STATE(165),
    [sym_assignment_expression] = STATE(166),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(184),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(272),
    [sym_comment] = ACTIONS(10),
  },
  [191] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(278),
    [sym_comment] = ACTIONS(10),
  },
  [192] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(280),
    [sym_comment] = ACTIONS(10),
  },
  [193] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(44),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [194] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(48),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [195] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(282),
    [sym_comment] = ACTIONS(10),
  },
  [196] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(52),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [197] = {
    [sym_require_expression] = STATE(211),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [198] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [199] = {
    [sym_require_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [200] = {
    [sym_include_expression] = STATE(213),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [201] = {
    [sym_include_once_expression] = STATE(214),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [202] = {
    [sym_string] = ACTIONS(284),
    [sym_comment] = ACTIONS(10),
  },
  [203] = {
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_RBRACK] = ACTIONS(286),
    [sym_comment] = ACTIONS(10),
  },
  [204] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(215),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [205] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(186),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [206] = {
    [sym_include_expression] = STATE(216),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [207] = {
    [sym__expression] = STATE(165),
    [sym_assignment_expression] = STATE(166),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(203),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [208] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(60),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [209] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(64),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [210] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(73),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [211] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(290),
    [sym_comment] = ACTIONS(10),
  },
  [212] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(292),
    [sym_comment] = ACTIONS(10),
  },
  [213] = {
    [sym_include_once_expression] = STATE(220),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [214] = {
    [sym_require_expression] = STATE(221),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [215] = {
    [sym_include_expression] = STATE(222),
    [anon_sym_include] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [216] = {
    [sym_include_once_expression] = STATE(223),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [217] = {
    [sym_string] = ACTIONS(294),
    [sym_comment] = ACTIONS(10),
  },
  [218] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(102),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [219] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [220] = {
    [sym_require_expression] = STATE(224),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [221] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(296),
    [sym_comment] = ACTIONS(10),
  },
  [222] = {
    [sym_include_once_expression] = STATE(226),
    [anon_sym_include_once] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [223] = {
    [sym_require_expression] = STATE(227),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [224] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(298),
    [sym_comment] = ACTIONS(10),
  },
  [225] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(137),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [226] = {
    [sym_require_expression] = STATE(229),
    [anon_sym_include_once] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [227] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(300),
    [sym_comment] = ACTIONS(10),
  },
  [228] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(157),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [229] = {
    [sym_require_once_expression] = STATE(156),
    [anon_sym_include_once] = ACTIONS(302),
    [sym_comment] = ACTIONS(10),
  },
  [230] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(166),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [231] = {
    [sym__expression] = STATE(179),
    [sym_assignment_expression] = STATE(186),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(84),
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
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__callable_variable, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 2),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_name, 2),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 3),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 3),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 4),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 4),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(81),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 4),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 4),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 5),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 6),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 3),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dereferencable_expression, 6),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 7),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 4),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 7),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 5),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 5),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 3),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 6),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(225),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
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
