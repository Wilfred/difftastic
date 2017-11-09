#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 255
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  anon_sym_DASH_GT = 26,
  anon_sym_DOT_DOT_DOT = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_array = 30,
  sym_string = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_yield = 33,
  anon_sym_from = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_xor = 37,
  anon_sym_PIPE_PIPE = 38,
  anon_sym_AMP_AMP = 39,
  anon_sym_PIPE = 40,
  anon_sym_CARET = 41,
  anon_sym_QMARK_QMARK = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_LT_GT = 45,
  anon_sym_EQ_EQ_EQ = 46,
  anon_sym_BANG_EQ_EQ = 47,
  anon_sym_LT = 48,
  anon_sym_GT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_LT_EQ_GT = 52,
  anon_sym_LT_LT = 53,
  anon_sym_GT_GT = 54,
  anon_sym_PLUS = 55,
  anon_sym_DASH = 56,
  anon_sym_DOT = 57,
  anon_sym_STAR = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_instanceof = 61,
  anon_sym_include = 62,
  anon_sym_include_once = 63,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 64,
  aux_sym_SLASH_BSLASHd_SLASH = 65,
  sym_comment = 66,
  sym_program = 67,
  sym_statement = 68,
  sym_compound_statement = 69,
  sym_named_label_statement = 70,
  sym_expression_statement = 71,
  sym__expression = 72,
  sym_assignment_expression = 73,
  sym__variable = 74,
  sym_list_literal = 75,
  sym__callable_variable = 76,
  sym_member_call_expression = 77,
  sym_variadic_unpacking = 78,
  sym__member_name = 79,
  sym_subscript_expression = 80,
  sym_dereferencable_expression = 81,
  sym_array_creation_expression = 82,
  sym_simple_variable = 83,
  sym__variable_name = 84,
  sym_yield_expression = 85,
  sym_array_element_initializer = 86,
  sym_binary_expression = 87,
  sym_include_expression = 88,
  sym_include_once_expression = 89,
  sym_require_expression = 90,
  sym_require_once_expression = 91,
  sym_name = 92,
  aux_sym_program_repeat1 = 93,
  aux_sym_list_literal_repeat1 = 94,
  aux_sym_member_call_expression_repeat1 = 95,
  aux_sym_array_creation_expression_repeat1 = 96,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT_DOT_DOT] = "...",
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
  [sym_member_call_expression] = "member_call_expression",
  [sym_variadic_unpacking] = "variadic_unpacking",
  [sym__member_name] = "_member_name",
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
  [aux_sym_member_call_expression_repeat1] = "member_call_expression_repeat1",
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
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
  [sym_member_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variadic_unpacking] = {
    .visible = true,
    .named = true,
  },
  [sym__member_name] = {
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
  [aux_sym_member_call_expression_repeat1] = {
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
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(61);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == '[')
        ADVANCE(68);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'l')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == 'x')
        ADVANCE(109);
      if (lookahead == 'y')
        ADVANCE(112);
      if (lookahead == '{')
        ADVANCE(117);
      if (lookahead == '|')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(121);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(122);
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
        ADVANCE(123);
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
      if (lookahead == '>')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '=')
        ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == '.')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == '*')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*')
        ADVANCE(40);
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == '>')
        ADVANCE(51);
      if (lookahead == '?')
        ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 52:
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == 'p')
        ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 54:
      if (lookahead == 'h')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'p')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(62);
      if (lookahead == '>')
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 65:
      if (lookahead == '>')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(73);
      if (lookahead == 'r')
        ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'd')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 75:
      if (lookahead == 'r')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'a')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 'y')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 79:
      if (lookahead == 'r')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'm')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 83:
      if (lookahead == 'n')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'c')
        ADVANCE(85);
      if (lookahead == 's')
        ADVANCE(95);
      END_STATE();
    case 85:
      if (lookahead == 'l')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'd')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'n')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'c')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'f')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 103:
      if (lookahead == 'i')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 's')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 107:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 109:
      if (lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'r')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 112:
      if (lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'e')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'l')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'd')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(119);
      if (lookahead == '|')
        ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 122:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 124:
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
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(38);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '<')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(61);
      if (lookahead == '?')
        ADVANCE(125);
      if (lookahead == '[')
        ADVANCE(68);
      if (lookahead == ']')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(79);
      if (lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'l')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == 'x')
        ADVANCE(109);
      if (lookahead == 'y')
        ADVANCE(112);
      if (lookahead == '{')
        ADVANCE(117);
      if (lookahead == '|')
        ADVANCE(118);
      if (lookahead == '}')
        ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(124);
      END_STATE();
    case 125:
      if (lookahead == '?')
        ADVANCE(67);
      END_STATE();
    case 126:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(127);
      if (lookahead == ';')
        ADVANCE(45);
      if (lookahead == '?')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(129);
      if (lookahead == '{')
        ADVANCE(117);
      if (lookahead == '}')
        ADVANCE(121);
      if (lookahead == 160)
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      END_STATE();
    case 128:
      if (lookahead == '>')
        ADVANCE(66);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(104);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 131:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(127);
      if (lookahead == '{')
        ADVANCE(117);
      if (lookahead == 160)
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == '&')
        ADVANCE(133);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(134);
      if (lookahead == '+')
        ADVANCE(135);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(136);
      if (lookahead == '.')
        ADVANCE(137);
      if (lookahead == '/')
        ADVANCE(138);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(139);
      if (lookahead == '=')
        ADVANCE(141);
      if (lookahead == '>')
        ADVANCE(142);
      if (lookahead == '^')
        ADVANCE(144);
      if (lookahead == '|')
        ADVANCE(145);
      if (lookahead == 160)
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(132);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(130);
      END_STATE();
    case 133:
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 134:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 135:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 136:
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 137:
      if (lookahead == '=')
        ADVANCE(37);
      END_STATE();
    case 138:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 139:
      if (lookahead == '<')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      if (lookahead == '>')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 144:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 145:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(127);
      if (lookahead == 'y')
        ADVANCE(147);
      if (lookahead == 160)
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(130);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(113);
      END_STATE();
    case 148:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(127);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(148);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 126},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 126},
  [6] = {.lex_state = 126},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 131},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 126},
  [11] = {.lex_state = 126},
  [12] = {.lex_state = 124},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 124},
  [15] = {.lex_state = 124},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 124},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 132},
  [21] = {.lex_state = 126},
  [22] = {.lex_state = 126},
  [23] = {.lex_state = 126},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 132},
  [28] = {.lex_state = 126},
  [29] = {.lex_state = 124},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 124},
  [35] = {.lex_state = 131},
  [36] = {.lex_state = 124},
  [37] = {.lex_state = 126},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 126},
  [41] = {.lex_state = 126},
  [42] = {.lex_state = 124},
  [43] = {.lex_state = 131},
  [44] = {.lex_state = 124},
  [45] = {.lex_state = 124},
  [46] = {.lex_state = 124},
  [47] = {.lex_state = 124},
  [48] = {.lex_state = 124},
  [49] = {.lex_state = 124},
  [50] = {.lex_state = 124},
  [51] = {.lex_state = 124},
  [52] = {.lex_state = 124},
  [53] = {.lex_state = 124},
  [54] = {.lex_state = 124},
  [55] = {.lex_state = 124},
  [56] = {.lex_state = 124},
  [57] = {.lex_state = 124},
  [58] = {.lex_state = 124},
  [59] = {.lex_state = 124},
  [60] = {.lex_state = 124},
  [61] = {.lex_state = 124},
  [62] = {.lex_state = 124},
  [63] = {.lex_state = 124},
  [64] = {.lex_state = 131},
  [65] = {.lex_state = 124},
  [66] = {.lex_state = 124},
  [67] = {.lex_state = 132},
  [68] = {.lex_state = 124},
  [69] = {.lex_state = 124},
  [70] = {.lex_state = 124},
  [71] = {.lex_state = 124},
  [72] = {.lex_state = 124},
  [73] = {.lex_state = 124},
  [74] = {.lex_state = 124},
  [75] = {.lex_state = 124},
  [76] = {.lex_state = 124},
  [77] = {.lex_state = 124},
  [78] = {.lex_state = 124},
  [79] = {.lex_state = 124},
  [80] = {.lex_state = 124},
  [81] = {.lex_state = 124},
  [82] = {.lex_state = 124},
  [83] = {.lex_state = 124},
  [84] = {.lex_state = 124},
  [85] = {.lex_state = 124},
  [86] = {.lex_state = 124},
  [87] = {.lex_state = 131},
  [88] = {.lex_state = 124},
  [89] = {.lex_state = 124},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 124},
  [92] = {.lex_state = 124},
  [93] = {.lex_state = 124},
  [94] = {.lex_state = 124},
  [95] = {.lex_state = 131},
  [96] = {.lex_state = 124},
  [97] = {.lex_state = 124},
  [98] = {.lex_state = 124},
  [99] = {.lex_state = 124},
  [100] = {.lex_state = 124},
  [101] = {.lex_state = 124},
  [102] = {.lex_state = 124},
  [103] = {.lex_state = 124},
  [104] = {.lex_state = 124},
  [105] = {.lex_state = 124},
  [106] = {.lex_state = 124},
  [107] = {.lex_state = 124},
  [108] = {.lex_state = 124},
  [109] = {.lex_state = 124},
  [110] = {.lex_state = 124},
  [111] = {.lex_state = 124},
  [112] = {.lex_state = 124},
  [113] = {.lex_state = 124},
  [114] = {.lex_state = 124},
  [115] = {.lex_state = 124},
  [116] = {.lex_state = 146},
  [117] = {.lex_state = 146},
  [118] = {.lex_state = 124},
  [119] = {.lex_state = 124},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 124},
  [122] = {.lex_state = 124},
  [123] = {.lex_state = 124},
  [124] = {.lex_state = 124},
  [125] = {.lex_state = 124},
  [126] = {.lex_state = 124},
  [127] = {.lex_state = 124},
  [128] = {.lex_state = 124},
  [129] = {.lex_state = 124},
  [130] = {.lex_state = 124},
  [131] = {.lex_state = 124},
  [132] = {.lex_state = 124},
  [133] = {.lex_state = 124},
  [134] = {.lex_state = 124},
  [135] = {.lex_state = 124},
  [136] = {.lex_state = 124},
  [137] = {.lex_state = 124},
  [138] = {.lex_state = 124},
  [139] = {.lex_state = 124},
  [140] = {.lex_state = 124},
  [141] = {.lex_state = 124},
  [142] = {.lex_state = 124},
  [143] = {.lex_state = 124},
  [144] = {.lex_state = 124},
  [145] = {.lex_state = 146},
  [146] = {.lex_state = 124},
  [147] = {.lex_state = 124},
  [148] = {.lex_state = 148},
  [149] = {.lex_state = 124},
  [150] = {.lex_state = 124},
  [151] = {.lex_state = 124},
  [152] = {.lex_state = 124},
  [153] = {.lex_state = 124},
  [154] = {.lex_state = 124},
  [155] = {.lex_state = 124},
  [156] = {.lex_state = 124},
  [157] = {.lex_state = 124},
  [158] = {.lex_state = 124},
  [159] = {.lex_state = 124},
  [160] = {.lex_state = 124},
  [161] = {.lex_state = 124},
  [162] = {.lex_state = 124},
  [163] = {.lex_state = 124},
  [164] = {.lex_state = 124},
  [165] = {.lex_state = 124},
  [166] = {.lex_state = 124},
  [167] = {.lex_state = 124},
  [168] = {.lex_state = 124},
  [169] = {.lex_state = 124},
  [170] = {.lex_state = 124},
  [171] = {.lex_state = 124},
  [172] = {.lex_state = 124},
  [173] = {.lex_state = 124},
  [174] = {.lex_state = 124},
  [175] = {.lex_state = 148},
  [176] = {.lex_state = 124},
  [177] = {.lex_state = 124},
  [178] = {.lex_state = 124},
  [179] = {.lex_state = 124},
  [180] = {.lex_state = 124},
  [181] = {.lex_state = 124},
  [182] = {.lex_state = 124},
  [183] = {.lex_state = 124},
  [184] = {.lex_state = 124},
  [185] = {.lex_state = 124},
  [186] = {.lex_state = 124},
  [187] = {.lex_state = 124},
  [188] = {.lex_state = 124},
  [189] = {.lex_state = 124},
  [190] = {.lex_state = 124},
  [191] = {.lex_state = 124},
  [192] = {.lex_state = 124},
  [193] = {.lex_state = 124},
  [194] = {.lex_state = 124},
  [195] = {.lex_state = 124},
  [196] = {.lex_state = 124},
  [197] = {.lex_state = 124},
  [198] = {.lex_state = 124},
  [199] = {.lex_state = 124},
  [200] = {.lex_state = 124},
  [201] = {.lex_state = 148},
  [202] = {.lex_state = 124},
  [203] = {.lex_state = 124},
  [204] = {.lex_state = 124},
  [205] = {.lex_state = 124},
  [206] = {.lex_state = 124},
  [207] = {.lex_state = 124},
  [208] = {.lex_state = 124},
  [209] = {.lex_state = 124},
  [210] = {.lex_state = 124},
  [211] = {.lex_state = 124},
  [212] = {.lex_state = 124},
  [213] = {.lex_state = 124},
  [214] = {.lex_state = 124},
  [215] = {.lex_state = 124},
  [216] = {.lex_state = 124},
  [217] = {.lex_state = 124},
  [218] = {.lex_state = 124},
  [219] = {.lex_state = 124},
  [220] = {.lex_state = 124},
  [221] = {.lex_state = 148},
  [222] = {.lex_state = 124},
  [223] = {.lex_state = 124},
  [224] = {.lex_state = 124},
  [225] = {.lex_state = 124},
  [226] = {.lex_state = 124},
  [227] = {.lex_state = 124},
  [228] = {.lex_state = 124},
  [229] = {.lex_state = 124},
  [230] = {.lex_state = 124},
  [231] = {.lex_state = 124},
  [232] = {.lex_state = 124},
  [233] = {.lex_state = 124},
  [234] = {.lex_state = 124},
  [235] = {.lex_state = 124},
  [236] = {.lex_state = 124},
  [237] = {.lex_state = 148},
  [238] = {.lex_state = 124},
  [239] = {.lex_state = 124},
  [240] = {.lex_state = 124},
  [241] = {.lex_state = 124},
  [242] = {.lex_state = 124},
  [243] = {.lex_state = 124},
  [244] = {.lex_state = 124},
  [245] = {.lex_state = 124},
  [246] = {.lex_state = 124},
  [247] = {.lex_state = 124},
  [248] = {.lex_state = 124},
  [249] = {.lex_state = 124},
  [250] = {.lex_state = 124},
  [251] = {.lex_state = 124},
  [252] = {.lex_state = 124},
  [253] = {.lex_state = 124},
  [254] = {.lex_state = 124},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
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
    [sym_member_call_expression] = STATE(17),
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
    [sym_member_call_expression] = STATE(17),
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
    [anon_sym_DASH_GT] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [19] = {
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(66),
    [anon_sym_STAR_EQ] = ACTIONS(66),
    [anon_sym_SLASH_EQ] = ACTIONS(66),
    [anon_sym_PLUS_EQ] = ACTIONS(66),
    [anon_sym_DASH_EQ] = ACTIONS(66),
    [anon_sym_DOT_EQ] = ACTIONS(66),
    [anon_sym_LT_LT_EQ] = ACTIONS(66),
    [anon_sym_GT_GT_EQ] = ACTIONS(66),
    [anon_sym_AMP_EQ] = ACTIONS(66),
    [anon_sym_CARET_EQ] = ACTIONS(66),
    [anon_sym_PIPE_EQ] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_yield] = ACTIONS(66),
    [sym_comment] = ACTIONS(10),
  },
  [20] = {
    [anon_sym_COLON] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [sym_statement] = STATE(40),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_QMARK_GT] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_QMARK_GT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_list] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(26),
  },
  [23] = {
    [sym_statement] = STATE(40),
    [sym_compound_statement] = STATE(11),
    [sym_named_label_statement] = STATE(11),
    [sym_expression_statement] = STATE(11),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(20),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_DOLLAR] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [24] = {
    [sym__expression] = STATE(44),
    [sym_assignment_expression] = STATE(45),
    [sym__variable] = STATE(46),
    [sym_list_literal] = STATE(47),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [sym__expression] = STATE(48),
    [sym_assignment_expression] = STATE(49),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
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
    [anon_sym_yield] = ACTIONS(88),
    [sym_comment] = ACTIONS(10),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_DOT_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
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
  [29] = {
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(54),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_from] = ACTIONS(96),
    [sym_comment] = ACTIONS(10),
  },
  [30] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(57),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [31] = {
    [sym_assignment_expression] = STATE(59),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [sym_assignment_expression] = STATE(59),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [33] = {
    [sym__expression] = STATE(60),
    [sym_assignment_expression] = STATE(61),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [34] = {
    [sym__expression] = STATE(62),
    [sym_assignment_expression] = STATE(49),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [35] = {
    [sym__member_name] = STATE(65),
    [sym_simple_variable] = STATE(66),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(67),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [36] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(70),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [37] = {
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
  [38] = {
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(108),
    [anon_sym_STAR_EQ] = ACTIONS(108),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [anon_sym_PLUS_EQ] = ACTIONS(108),
    [anon_sym_DASH_EQ] = ACTIONS(108),
    [anon_sym_DOT_EQ] = ACTIONS(108),
    [anon_sym_LT_LT_EQ] = ACTIONS(108),
    [anon_sym_GT_GT_EQ] = ACTIONS(108),
    [anon_sym_AMP_EQ] = ACTIONS(108),
    [anon_sym_CARET_EQ] = ACTIONS(108),
    [anon_sym_PIPE_EQ] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(26),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(10),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_QMARK_GT] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_list] = ACTIONS(112),
    [anon_sym_DOLLAR] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(112),
    [sym_comment] = ACTIONS(26),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_QMARK_GT] = ACTIONS(114),
    [anon_sym_LBRACE] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_list] = ACTIONS(114),
    [anon_sym_DOLLAR] = ACTIONS(114),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(26),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [sym_comment] = ACTIONS(10),
  },
  [43] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [44] = {
    [anon_sym_EQ_GT] = ACTIONS(120),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [sym_yield_expression] = STATE(72),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [aux_sym_list_literal_repeat1] = STATE(75),
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
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [aux_sym_list_literal_repeat1] = STATE(75),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [48] = {
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_comment] = ACTIONS(10),
  },
  [49] = {
    [sym_yield_expression] = STATE(77),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [50] = {
    [sym__expression] = STATE(78),
    [sym_assignment_expression] = STATE(79),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [51] = {
    [sym__expression] = STATE(80),
    [sym_assignment_expression] = STATE(79),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [52] = {
    [anon_sym_list] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [53] = {
    [sym_yield_expression] = STATE(82),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [54] = {
    [anon_sym_list] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [sym_comment] = ACTIONS(10),
  },
  [55] = {
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_and] = ACTIONS(136),
    [anon_sym_or] = ACTIONS(136),
    [anon_sym_xor] = ACTIONS(136),
    [anon_sym_PIPE_PIPE] = ACTIONS(136),
    [anon_sym_AMP_AMP] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_QMARK_QMARK] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_LT_GT] = ACTIONS(136),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(136),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(136),
    [anon_sym_LT_EQ_GT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_instanceof] = ACTIONS(136),
    [sym_comment] = ACTIONS(10),
  },
  [56] = {
    [sym_yield_expression] = STATE(84),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [57] = {
    [sym_include_expression] = STATE(86),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [58] = {
    [sym__variable] = STATE(88),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [sym_comment] = ACTIONS(10),
  },
  [59] = {
    [anon_sym_yield] = ACTIONS(142),
    [sym_comment] = ACTIONS(10),
  },
  [60] = {
    [anon_sym_RPAREN] = ACTIONS(144),
    [sym_comment] = ACTIONS(10),
  },
  [61] = {
    [sym_yield_expression] = STATE(90),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [62] = {
    [anon_sym_RBRACE] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [63] = {
    [sym__expression] = STATE(92),
    [sym_assignment_expression] = STATE(49),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [64] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(148),
    [sym_comment] = ACTIONS(10),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(150),
    [sym_comment] = ACTIONS(10),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(152),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(26),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_DOT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_yield] = ACTIONS(154),
    [sym_comment] = ACTIONS(10),
  },
  [69] = {
    [anon_sym_RBRACK] = ACTIONS(146),
    [sym_comment] = ACTIONS(10),
  },
  [70] = {
    [sym_yield_expression] = STATE(94),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [sym__variable] = STATE(96),
    [sym_list_literal] = STATE(97),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [72] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(98),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [73] = {
    [sym__expression] = STATE(99),
    [sym_assignment_expression] = STATE(45),
    [sym__variable] = STATE(100),
    [sym_list_literal] = STATE(101),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(162),
    [sym_comment] = ACTIONS(10),
  },
  [76] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(164),
    [anon_sym_STAR_EQ] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(164),
    [anon_sym_DOT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT_EQ] = ACTIONS(164),
    [anon_sym_GT_GT_EQ] = ACTIONS(164),
    [anon_sym_AMP_EQ] = ACTIONS(164),
    [anon_sym_CARET_EQ] = ACTIONS(164),
    [anon_sym_PIPE_EQ] = ACTIONS(164),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_yield] = ACTIONS(164),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(104),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [anon_sym_list] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_DOLLAR] = ACTIONS(166),
    [sym_comment] = ACTIONS(10),
  },
  [79] = {
    [sym_yield_expression] = STATE(105),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [80] = {
    [anon_sym_list] = ACTIONS(168),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(10),
  },
  [81] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(79),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [82] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(108),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [83] = {
    [sym__expression] = STATE(109),
    [sym_assignment_expression] = STATE(110),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [84] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(111),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [85] = {
    [sym__expression] = STATE(112),
    [sym_assignment_expression] = STATE(113),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [86] = {
    [sym_include_once_expression] = STATE(115),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [87] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(176),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_yield] = ACTIONS(178),
    [sym_comment] = ACTIONS(10),
  },
  [89] = {
    [sym_array_creation_expression] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_array] = ACTIONS(182),
    [sym_comment] = ACTIONS(10),
  },
  [90] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(121),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [91] = {
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(184),
    [anon_sym_STAR_EQ] = ACTIONS(184),
    [anon_sym_SLASH_EQ] = ACTIONS(184),
    [anon_sym_PLUS_EQ] = ACTIONS(184),
    [anon_sym_DASH_EQ] = ACTIONS(184),
    [anon_sym_DOT_EQ] = ACTIONS(184),
    [anon_sym_LT_LT_EQ] = ACTIONS(184),
    [anon_sym_GT_GT_EQ] = ACTIONS(184),
    [anon_sym_AMP_EQ] = ACTIONS(184),
    [anon_sym_CARET_EQ] = ACTIONS(184),
    [anon_sym_PIPE_EQ] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_yield] = ACTIONS(184),
    [sym_comment] = ACTIONS(10),
  },
  [92] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [sym_comment] = ACTIONS(10),
  },
  [93] = {
    [sym_variadic_unpacking] = STATE(125),
    [aux_sym_member_call_expression_repeat1] = STATE(126),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [94] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(127),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [95] = {
    [sym_simple_variable] = STATE(26),
    [sym__variable_name] = STATE(19),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [aux_sym_list_literal_repeat1] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(194),
    [sym_comment] = ACTIONS(10),
  },
  [97] = {
    [aux_sym_list_literal_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(194),
    [sym_comment] = ACTIONS(10),
  },
  [98] = {
    [sym_include_expression] = STATE(130),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [99] = {
    [anon_sym_EQ_GT] = ACTIONS(196),
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
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
  },
  [101] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [sym_comment] = ACTIONS(10),
  },
  [102] = {
    [sym__expression] = STATE(132),
    [sym_assignment_expression] = STATE(45),
    [sym__variable] = STATE(133),
    [sym_list_literal] = STATE(134),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [103] = {
    [anon_sym_EQ] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_comment] = ACTIONS(10),
  },
  [104] = {
    [sym_include_expression] = STATE(135),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [105] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(136),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [106] = {
    [sym__expression] = STATE(137),
    [sym_assignment_expression] = STATE(79),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [107] = {
    [anon_sym_list] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [sym_comment] = ACTIONS(10),
  },
  [108] = {
    [sym_include_expression] = STATE(138),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [109] = {
    [anon_sym_include] = ACTIONS(204),
    [sym_comment] = ACTIONS(10),
  },
  [110] = {
    [sym_yield_expression] = STATE(139),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [111] = {
    [sym_include_expression] = STATE(140),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [112] = {
    [anon_sym_include_once] = ACTIONS(206),
    [sym_comment] = ACTIONS(10),
  },
  [113] = {
    [sym_yield_expression] = STATE(141),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [114] = {
    [sym__expression] = STATE(142),
    [sym_assignment_expression] = STATE(113),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [115] = {
    [sym_require_expression] = STATE(144),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_yield] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_yield] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(210),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(150),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(151),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(218),
    [sym_comment] = ACTIONS(10),
  },
  [120] = {
    [sym_string] = ACTIONS(220),
    [sym_comment] = ACTIONS(10),
  },
  [121] = {
    [sym_include_expression] = STATE(154),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [122] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_comment] = ACTIONS(10),
  },
  [123] = {
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(224),
    [anon_sym_STAR_EQ] = ACTIONS(224),
    [anon_sym_SLASH_EQ] = ACTIONS(224),
    [anon_sym_PLUS_EQ] = ACTIONS(224),
    [anon_sym_DASH_EQ] = ACTIONS(224),
    [anon_sym_DOT_EQ] = ACTIONS(224),
    [anon_sym_LT_LT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT_EQ] = ACTIONS(224),
    [anon_sym_AMP_EQ] = ACTIONS(224),
    [anon_sym_CARET_EQ] = ACTIONS(224),
    [anon_sym_PIPE_EQ] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_yield] = ACTIONS(224),
    [sym_comment] = ACTIONS(10),
  },
  [124] = {
    [sym__expression] = STATE(155),
    [sym_assignment_expression] = STATE(156),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(226),
    [sym_comment] = ACTIONS(10),
  },
  [126] = {
    [sym_variadic_unpacking] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(190),
    [sym_comment] = ACTIONS(10),
  },
  [127] = {
    [sym_include_expression] = STATE(159),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [128] = {
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_comment] = ACTIONS(10),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(232),
    [sym_comment] = ACTIONS(10),
  },
  [130] = {
    [sym_include_once_expression] = STATE(161),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [131] = {
    [sym__variable] = STATE(162),
    [sym_list_literal] = STATE(163),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [132] = {
    [anon_sym_EQ_GT] = ACTIONS(234),
    [sym_comment] = ACTIONS(10),
  },
  [133] = {
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
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_comment] = ACTIONS(10),
  },
  [134] = {
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_comment] = ACTIONS(10),
  },
  [135] = {
    [sym_include_once_expression] = STATE(165),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [sym_include_expression] = STATE(166),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [137] = {
    [anon_sym_list] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [sym_comment] = ACTIONS(10),
  },
  [138] = {
    [sym_include_once_expression] = STATE(167),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [139] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(168),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [140] = {
    [sym_include_once_expression] = STATE(169),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [141] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(170),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [142] = {
    [anon_sym_include_once] = ACTIONS(240),
    [sym_comment] = ACTIONS(10),
  },
  [143] = {
    [sym__expression] = STATE(171),
    [sym_assignment_expression] = STATE(113),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [144] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(242),
    [sym_comment] = ACTIONS(10),
  },
  [145] = {
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_yield] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [sym__expression] = STATE(78),
    [sym_assignment_expression] = STATE(174),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [147] = {
    [anon_sym_RBRACK] = ACTIONS(244),
    [sym_comment] = ACTIONS(10),
  },
  [148] = {
    [sym_string] = ACTIONS(246),
    [sym_comment] = ACTIONS(10),
  },
  [149] = {
    [anon_sym_EQ_GT] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [150] = {
    [sym_yield_expression] = STATE(177),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [151] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(244),
    [sym_comment] = ACTIONS(10),
  },
  [152] = {
    [sym__expression] = STATE(182),
    [sym_assignment_expression] = STATE(183),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(184),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(244),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [153] = {
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_DASH_GT] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [sym_comment] = ACTIONS(10),
  },
  [154] = {
    [sym_include_once_expression] = STATE(185),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(258),
    [sym_comment] = ACTIONS(10),
  },
  [156] = {
    [sym_yield_expression] = STATE(186),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [157] = {
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(260),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [anon_sym_PLUS_EQ] = ACTIONS(260),
    [anon_sym_DASH_EQ] = ACTIONS(260),
    [anon_sym_DOT_EQ] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(260),
    [anon_sym_GT_GT_EQ] = ACTIONS(260),
    [anon_sym_AMP_EQ] = ACTIONS(260),
    [anon_sym_CARET_EQ] = ACTIONS(260),
    [anon_sym_PIPE_EQ] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_yield] = ACTIONS(260),
    [sym_comment] = ACTIONS(10),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(262),
    [sym_comment] = ACTIONS(10),
  },
  [159] = {
    [sym_include_once_expression] = STATE(187),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(10),
  },
  [161] = {
    [sym_require_expression] = STATE(188),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [162] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(10),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(10),
  },
  [164] = {
    [sym__variable] = STATE(189),
    [sym_list_literal] = STATE(190),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [165] = {
    [sym_require_expression] = STATE(191),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [166] = {
    [sym_include_once_expression] = STATE(192),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [167] = {
    [sym_require_expression] = STATE(193),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [168] = {
    [sym_include_expression] = STATE(194),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [169] = {
    [sym_require_expression] = STATE(195),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [170] = {
    [sym_include_expression] = STATE(196),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [171] = {
    [anon_sym_include_once] = ACTIONS(268),
    [sym_comment] = ACTIONS(10),
  },
  [172] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(13),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(272),
    [anon_sym_list] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [anon_sym_and] = ACTIONS(270),
    [anon_sym_or] = ACTIONS(270),
    [anon_sym_xor] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_AMP_AMP] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_QMARK_QMARK] = ACTIONS(270),
    [anon_sym_EQ_EQ] = ACTIONS(272),
    [anon_sym_BANG_EQ] = ACTIONS(272),
    [anon_sym_LT_GT] = ACTIONS(270),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(270),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(272),
    [anon_sym_LT_EQ] = ACTIONS(272),
    [anon_sym_GT_EQ] = ACTIONS(270),
    [anon_sym_LT_EQ_GT] = ACTIONS(270),
    [anon_sym_LT_LT] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(270),
    [anon_sym_instanceof] = ACTIONS(270),
    [anon_sym_include] = ACTIONS(272),
    [anon_sym_include_once] = ACTIONS(270),
    [sym_comment] = ACTIONS(10),
  },
  [174] = {
    [sym_yield_expression] = STATE(198),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [175] = {
    [sym_string] = ACTIONS(274),
    [sym_comment] = ACTIONS(10),
  },
  [176] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(174),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [177] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(200),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [178] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(150),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(202),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(278),
    [sym_comment] = ACTIONS(10),
  },
  [180] = {
    [sym__expression] = STATE(78),
    [sym_assignment_expression] = STATE(204),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [181] = {
    [anon_sym_RPAREN] = ACTIONS(278),
    [sym_comment] = ACTIONS(10),
  },
  [182] = {
    [anon_sym_EQ_GT] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [sym_comment] = ACTIONS(10),
  },
  [183] = {
    [sym_yield_expression] = STATE(206),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [184] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(278),
    [sym_comment] = ACTIONS(10),
  },
  [185] = {
    [sym_require_expression] = STATE(209),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [186] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(210),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [187] = {
    [sym_require_expression] = STATE(211),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [188] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(286),
    [sym_comment] = ACTIONS(10),
  },
  [189] = {
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(10),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(10),
  },
  [191] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(290),
    [sym_comment] = ACTIONS(10),
  },
  [192] = {
    [sym_require_expression] = STATE(214),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [193] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(292),
    [sym_comment] = ACTIONS(10),
  },
  [194] = {
    [sym_include_once_expression] = STATE(216),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [195] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(294),
    [sym_comment] = ACTIONS(10),
  },
  [196] = {
    [sym_include_once_expression] = STATE(218),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [197] = {
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_list] = ACTIONS(296),
    [anon_sym_EQ_GT] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_and] = ACTIONS(296),
    [anon_sym_or] = ACTIONS(296),
    [anon_sym_xor] = ACTIONS(296),
    [anon_sym_PIPE_PIPE] = ACTIONS(296),
    [anon_sym_AMP_AMP] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_QMARK_QMARK] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_LT_GT] = ACTIONS(296),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(296),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [anon_sym_LT_EQ_GT] = ACTIONS(296),
    [anon_sym_LT_LT] = ACTIONS(296),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_instanceof] = ACTIONS(296),
    [anon_sym_include] = ACTIONS(298),
    [anon_sym_include_once] = ACTIONS(296),
    [sym_comment] = ACTIONS(10),
  },
  [198] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(219),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [199] = {
    [sym__expression] = STATE(137),
    [sym_assignment_expression] = STATE(174),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [200] = {
    [sym_include_expression] = STATE(220),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [201] = {
    [sym_string] = ACTIONS(300),
    [sym_comment] = ACTIONS(10),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(10),
  },
  [203] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(150),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(222),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [204] = {
    [sym_yield_expression] = STATE(223),
    [anon_sym_yield] = ACTIONS(48),
    [sym_comment] = ACTIONS(10),
  },
  [205] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(204),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [206] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(225),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [207] = {
    [sym__expression] = STATE(182),
    [sym_assignment_expression] = STATE(183),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(202),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [208] = {
    [anon_sym_COMMA] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(304),
    [sym_comment] = ACTIONS(10),
  },
  [209] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(310),
    [sym_comment] = ACTIONS(10),
  },
  [210] = {
    [sym_include_expression] = STATE(228),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [211] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(312),
    [sym_comment] = ACTIONS(10),
  },
  [212] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(45),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [213] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(49),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [214] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(314),
    [sym_comment] = ACTIONS(10),
  },
  [215] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(53),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [216] = {
    [sym_require_expression] = STATE(231),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [217] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [218] = {
    [sym_require_expression] = STATE(232),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [219] = {
    [sym_include_expression] = STATE(233),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [220] = {
    [sym_include_once_expression] = STATE(234),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [221] = {
    [sym_string] = ACTIONS(316),
    [sym_comment] = ACTIONS(10),
  },
  [222] = {
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym_comment] = ACTIONS(10),
  },
  [223] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_binary_expression] = STATE(235),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [224] = {
    [sym__expression] = STATE(137),
    [sym_assignment_expression] = STATE(204),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [225] = {
    [sym_include_expression] = STATE(236),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [226] = {
    [sym__expression] = STATE(182),
    [sym_assignment_expression] = STATE(183),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [sym_array_element_initializer] = STATE(222),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [227] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(61),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [228] = {
    [sym_include_once_expression] = STATE(238),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [229] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(70),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [230] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(79),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [231] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(322),
    [sym_comment] = ACTIONS(10),
  },
  [232] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(324),
    [sym_comment] = ACTIONS(10),
  },
  [233] = {
    [sym_include_once_expression] = STATE(241),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [234] = {
    [sym_require_expression] = STATE(242),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [235] = {
    [sym_include_expression] = STATE(243),
    [anon_sym_include] = ACTIONS(138),
    [sym_comment] = ACTIONS(10),
  },
  [236] = {
    [sym_include_once_expression] = STATE(244),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [237] = {
    [sym_string] = ACTIONS(326),
    [sym_comment] = ACTIONS(10),
  },
  [238] = {
    [sym_require_expression] = STATE(245),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [239] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(110),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [240] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(113),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [241] = {
    [sym_require_expression] = STATE(246),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [242] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(328),
    [sym_comment] = ACTIONS(10),
  },
  [243] = {
    [sym_include_once_expression] = STATE(248),
    [anon_sym_include_once] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [244] = {
    [sym_require_expression] = STATE(249),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [245] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(330),
    [sym_comment] = ACTIONS(10),
  },
  [246] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(332),
    [sym_comment] = ACTIONS(10),
  },
  [247] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(150),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [248] = {
    [sym_require_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(208),
    [sym_comment] = ACTIONS(10),
  },
  [249] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(334),
    [sym_comment] = ACTIONS(10),
  },
  [250] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(156),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [251] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(174),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [252] = {
    [sym_require_once_expression] = STATE(173),
    [anon_sym_include_once] = ACTIONS(336),
    [sym_comment] = ACTIONS(10),
  },
  [253] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(183),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [sym_comment] = ACTIONS(10),
  },
  [254] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(204),
    [sym__variable] = STATE(14),
    [sym_list_literal] = STATE(15),
    [sym__callable_variable] = STATE(16),
    [sym_member_call_expression] = STATE(17),
    [sym_subscript_expression] = STATE(17),
    [sym_dereferencable_expression] = STATE(18),
    [sym_simple_variable] = STATE(17),
    [sym__variable_name] = STATE(19),
    [anon_sym_list] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(86),
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
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 2),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_name, 2),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 3),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__member_name, 1),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__member_name, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 3),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 4),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 4),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 4),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 4),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 5),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__member_name, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_call_expression, 5),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_member_call_expression_repeat1, 1),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 6),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 3),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dereferencable_expression, 6),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variadic_unpacking, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_call_expression, 6),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_member_call_expression_repeat1, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 7),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 4),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 7),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(205),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(207),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 5),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(224),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(230),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 5),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 6),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(247),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
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
