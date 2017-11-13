#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 292
#define SYMBOL_COUNT 112
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
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
  anon_sym_COLON_COLON = 26,
  anon_sym_self = 27,
  anon_sym_parent = 28,
  anon_sym_static = 29,
  anon_sym_BSLASH = 30,
  anon_sym_namespace = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_DOT_DOT_DOT = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_array = 36,
  sym_string = 37,
  anon_sym_DOLLAR = 38,
  anon_sym_yield = 39,
  anon_sym_from = 40,
  anon_sym_and = 41,
  anon_sym_or = 42,
  anon_sym_xor = 43,
  anon_sym_PIPE_PIPE = 44,
  anon_sym_AMP_AMP = 45,
  anon_sym_PIPE = 46,
  anon_sym_CARET = 47,
  anon_sym_QMARK_QMARK = 48,
  anon_sym_EQ_EQ = 49,
  anon_sym_BANG_EQ = 50,
  anon_sym_LT_GT = 51,
  anon_sym_EQ_EQ_EQ = 52,
  anon_sym_BANG_EQ_EQ = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_GT_EQ = 57,
  anon_sym_LT_EQ_GT = 58,
  anon_sym_LT_LT = 59,
  anon_sym_GT_GT = 60,
  anon_sym_PLUS = 61,
  anon_sym_DASH = 62,
  anon_sym_DOT = 63,
  anon_sym_STAR = 64,
  anon_sym_SLASH = 65,
  anon_sym_PERCENT = 66,
  anon_sym_instanceof = 67,
  anon_sym_include = 68,
  anon_sym_include_once = 69,
  aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH = 70,
  aux_sym_SLASH_BSLASHd_SLASH = 71,
  sym_comment = 72,
  sym_program = 73,
  sym_statement = 74,
  sym_compound_statement = 75,
  sym_named_label_statement = 76,
  sym_expression_statement = 77,
  sym__expression = 78,
  sym_assignment_expression = 79,
  sym__variable = 80,
  sym_list_literal = 81,
  sym__callable_variable = 82,
  sym_function_call_expression = 83,
  sym_scoped_call_expression = 84,
  sym__scope_resolution_qualifier = 85,
  sym_relative_scope = 86,
  sym_qualified_name = 87,
  sym_namespace_name_as_prefix = 88,
  sym_namespace_name = 89,
  sym_arguments = 90,
  sym_member_call_expression = 91,
  sym_variadic_unpacking = 92,
  sym__member_name = 93,
  sym_subscript_expression = 94,
  sym_dereferencable_expression = 95,
  sym_array_creation_expression = 96,
  sym_simple_variable = 97,
  sym__variable_name = 98,
  sym_yield_expression = 99,
  sym_array_element_initializer = 100,
  sym_binary_expression = 101,
  sym_include_expression = 102,
  sym_include_once_expression = 103,
  sym_require_expression = 104,
  sym_require_once_expression = 105,
  sym_name = 106,
  aux_sym_program_repeat1 = 107,
  aux_sym_list_literal_repeat1 = 108,
  aux_sym_namespace_name_repeat1 = 109,
  aux_sym_arguments_repeat1 = 110,
  aux_sym_array_creation_expression_repeat1 = 111,
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
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_self] = "self",
  [anon_sym_parent] = "parent",
  [anon_sym_static] = "static",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_namespace] = "namespace",
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
  [sym_function_call_expression] = "function_call_expression",
  [sym_scoped_call_expression] = "scoped_call_expression",
  [sym__scope_resolution_qualifier] = "_scope_resolution_qualifier",
  [sym_relative_scope] = "relative_scope",
  [sym_qualified_name] = "qualified_name",
  [sym_namespace_name_as_prefix] = "namespace_name_as_prefix",
  [sym_namespace_name] = "namespace_name",
  [sym_arguments] = "arguments",
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
  [aux_sym_namespace_name_repeat1] = "namespace_name_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
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
  [sym_function_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_scoped_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__scope_resolution_qualifier] = {
    .visible = false,
    .named = true,
  },
  [sym_relative_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name_as_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
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
  [aux_sym_namespace_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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
        ADVANCE(46);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(62);
      if (lookahead == '?')
        ADVANCE(66);
      if (lookahead == '[')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == ']')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(81);
      if (lookahead == 'i')
        ADVANCE(85);
      if (lookahead == 'l')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead == 'o')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(126);
      if (lookahead == 'x')
        ADVANCE(135);
      if (lookahead == 'y')
        ADVANCE(138);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(147);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(148);
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
        ADVANCE(149);
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
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(52);
      if (lookahead == '?')
        ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 53:
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_QMARK_EQ);
      END_STATE();
    case 55:
      if (lookahead == 'h')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'p')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_QMARKphp);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 66:
      if (lookahead == '>')
        ADVANCE(67);
      if (lookahead == '?')
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 74:
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 'r')
        ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'd')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 77:
      if (lookahead == 'r')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'y')
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 81:
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'o')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == 'm')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'c')
        ADVANCE(87);
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'u')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'd')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'e')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'n')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'c')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'e')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_include_once);
      END_STATE();
    case 97:
      if (lookahead == 't')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'c')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'e')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'f')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 105:
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 's')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 't')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 109:
      if (lookahead == 'a')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'm')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'e')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 's')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'p')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'a')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'c')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 118:
      if (lookahead == 'r')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_parent);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'l')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'f')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'i')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'c')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 135:
      if (lookahead == 'o')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'r')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 138:
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'l')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'd')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(145);
      if (lookahead == '|')
        ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 148:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_SLASH);
      END_STATE();
    case 150:
      if (lookahead == '!')
        ADVANCE(2);
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
      if (lookahead == ':')
        ADVANCE(151);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '<')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead == '>')
        ADVANCE(62);
      if (lookahead == '?')
        ADVANCE(152);
      if (lookahead == '[')
        ADVANCE(69);
      if (lookahead == ']')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'i')
        ADVANCE(85);
      if (lookahead == 'o')
        ADVANCE(118);
      if (lookahead == 'x')
        ADVANCE(135);
      if (lookahead == 'y')
        ADVANCE(138);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == '|')
        ADVANCE(144);
      if (lookahead == '}')
        ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(150);
      END_STATE();
    case 151:
      if (lookahead == ':')
        ADVANCE(45);
      END_STATE();
    case 152:
      if (lookahead == '?')
        ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '&')
        ADVANCE(154);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == ';')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(156);
      if (lookahead == '?')
        ADVANCE(157);
      if (lookahead == '[')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == ']')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(159);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'p')
        ADVANCE(161);
      if (lookahead == 's')
        ADVANCE(162);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == '}')
        ADVANCE(147);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 155:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'r')
        ADVANCE(77);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(110);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(121);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      END_STATE();
    case 165:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == '&')
        ADVANCE(167);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(170);
      if (lookahead == '.')
        ADVANCE(171);
      if (lookahead == '/')
        ADVANCE(172);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(173);
      if (lookahead == '=')
        ADVANCE(175);
      if (lookahead == '>')
        ADVANCE(176);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == '^')
        ADVANCE(178);
      if (lookahead == '|')
        ADVANCE(179);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 167:
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 168:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 169:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 170:
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 171:
      if (lookahead == '=')
        ADVANCE(37);
      END_STATE();
    case 172:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 173:
      if (lookahead == '<')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      if (lookahead == '>')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 178:
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 179:
      if (lookahead == '=')
        ADVANCE(145);
      END_STATE();
    case 180:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(180);
      END_STATE();
    case 181:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '&')
        ADVANCE(154);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'l')
        ADVANCE(159);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'p')
        ADVANCE(161);
      if (lookahead == 's')
        ADVANCE(162);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 183:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '[')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(160);
      if (lookahead == 'p')
        ADVANCE(161);
      if (lookahead == 's')
        ADVANCE(162);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 184:
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == 'y')
        ADVANCE(185);
      if (lookahead == 160)
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(163);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 153},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 153},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 150},
  [10] = {.lex_state = 165},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 153},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 166},
  [17] = {.lex_state = 153},
  [18] = {.lex_state = 153},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 150},
  [22] = {.lex_state = 150},
  [23] = {.lex_state = 150},
  [24] = {.lex_state = 150},
  [25] = {.lex_state = 150},
  [26] = {.lex_state = 150},
  [27] = {.lex_state = 150},
  [28] = {.lex_state = 165},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 150},
  [31] = {.lex_state = 150},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 153},
  [34] = {.lex_state = 153},
  [35] = {.lex_state = 153},
  [36] = {.lex_state = 153},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 150},
  [39] = {.lex_state = 166},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 166},
  [42] = {.lex_state = 165},
  [43] = {.lex_state = 153},
  [44] = {.lex_state = 150},
  [45] = {.lex_state = 180},
  [46] = {.lex_state = 150},
  [47] = {.lex_state = 150},
  [48] = {.lex_state = 150},
  [49] = {.lex_state = 153},
  [50] = {.lex_state = 150},
  [51] = {.lex_state = 150},
  [52] = {.lex_state = 153},
  [53] = {.lex_state = 150},
  [54] = {.lex_state = 166},
  [55] = {.lex_state = 153},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 153},
  [60] = {.lex_state = 153},
  [61] = {.lex_state = 165},
  [62] = {.lex_state = 166},
  [63] = {.lex_state = 165},
  [64] = {.lex_state = 153},
  [65] = {.lex_state = 165},
  [66] = {.lex_state = 153},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 165},
  [69] = {.lex_state = 166},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 153},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 150},
  [75] = {.lex_state = 165},
  [76] = {.lex_state = 150},
  [77] = {.lex_state = 150},
  [78] = {.lex_state = 150},
  [79] = {.lex_state = 150},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 153},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 150},
  [85] = {.lex_state = 150},
  [86] = {.lex_state = 180},
  [87] = {.lex_state = 153},
  [88] = {.lex_state = 153},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 150},
  [91] = {.lex_state = 153},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 150},
  [94] = {.lex_state = 150},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 150},
  [97] = {.lex_state = 153},
  [98] = {.lex_state = 150},
  [99] = {.lex_state = 150},
  [100] = {.lex_state = 150},
  [101] = {.lex_state = 150},
  [102] = {.lex_state = 153},
  [103] = {.lex_state = 153},
  [104] = {.lex_state = 153},
  [105] = {.lex_state = 150},
  [106] = {.lex_state = 153},
  [107] = {.lex_state = 150},
  [108] = {.lex_state = 150},
  [109] = {.lex_state = 150},
  [110] = {.lex_state = 183},
  [111] = {.lex_state = 150},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 153},
  [114] = {.lex_state = 165},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 150},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 150},
  [121] = {.lex_state = 150},
  [122] = {.lex_state = 150},
  [123] = {.lex_state = 166},
  [124] = {.lex_state = 165},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 153},
  [127] = {.lex_state = 153},
  [128] = {.lex_state = 150},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 150},
  [131] = {.lex_state = 150},
  [132] = {.lex_state = 165},
  [133] = {.lex_state = 153},
  [134] = {.lex_state = 153},
  [135] = {.lex_state = 150},
  [136] = {.lex_state = 150},
  [137] = {.lex_state = 180},
  [138] = {.lex_state = 150},
  [139] = {.lex_state = 153},
  [140] = {.lex_state = 150},
  [141] = {.lex_state = 153},
  [142] = {.lex_state = 153},
  [143] = {.lex_state = 153},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 150},
  [146] = {.lex_state = 150},
  [147] = {.lex_state = 150},
  [148] = {.lex_state = 150},
  [149] = {.lex_state = 150},
  [150] = {.lex_state = 153},
  [151] = {.lex_state = 153},
  [152] = {.lex_state = 150},
  [153] = {.lex_state = 153},
  [154] = {.lex_state = 153},
  [155] = {.lex_state = 153},
  [156] = {.lex_state = 153},
  [157] = {.lex_state = 153},
  [158] = {.lex_state = 153},
  [159] = {.lex_state = 150},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 150},
  [162] = {.lex_state = 150},
  [163] = {.lex_state = 150},
  [164] = {.lex_state = 150},
  [165] = {.lex_state = 150},
  [166] = {.lex_state = 150},
  [167] = {.lex_state = 153},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 150},
  [173] = {.lex_state = 150},
  [174] = {.lex_state = 150},
  [175] = {.lex_state = 150},
  [176] = {.lex_state = 153},
  [177] = {.lex_state = 150},
  [178] = {.lex_state = 150},
  [179] = {.lex_state = 150},
  [180] = {.lex_state = 150},
  [181] = {.lex_state = 150},
  [182] = {.lex_state = 180},
  [183] = {.lex_state = 150},
  [184] = {.lex_state = 153},
  [185] = {.lex_state = 153},
  [186] = {.lex_state = 150},
  [187] = {.lex_state = 153},
  [188] = {.lex_state = 153},
  [189] = {.lex_state = 150},
  [190] = {.lex_state = 153},
  [191] = {.lex_state = 153},
  [192] = {.lex_state = 153},
  [193] = {.lex_state = 150},
  [194] = {.lex_state = 150},
  [195] = {.lex_state = 150},
  [196] = {.lex_state = 150},
  [197] = {.lex_state = 150},
  [198] = {.lex_state = 150},
  [199] = {.lex_state = 153},
  [200] = {.lex_state = 150},
  [201] = {.lex_state = 184},
  [202] = {.lex_state = 184},
  [203] = {.lex_state = 180},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 150},
  [206] = {.lex_state = 150},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 150},
  [209] = {.lex_state = 153},
  [210] = {.lex_state = 150},
  [211] = {.lex_state = 150},
  [212] = {.lex_state = 150},
  [213] = {.lex_state = 150},
  [214] = {.lex_state = 150},
  [215] = {.lex_state = 150},
  [216] = {.lex_state = 150},
  [217] = {.lex_state = 150},
  [218] = {.lex_state = 180},
  [219] = {.lex_state = 150},
  [220] = {.lex_state = 150},
  [221] = {.lex_state = 150},
  [222] = {.lex_state = 153},
  [223] = {.lex_state = 150},
  [224] = {.lex_state = 153},
  [225] = {.lex_state = 150},
  [226] = {.lex_state = 153},
  [227] = {.lex_state = 150},
  [228] = {.lex_state = 153},
  [229] = {.lex_state = 150},
  [230] = {.lex_state = 184},
  [231] = {.lex_state = 150},
  [232] = {.lex_state = 150},
  [233] = {.lex_state = 150},
  [234] = {.lex_state = 150},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 153},
  [238] = {.lex_state = 150},
  [239] = {.lex_state = 150},
  [240] = {.lex_state = 150},
  [241] = {.lex_state = 150},
  [242] = {.lex_state = 150},
  [243] = {.lex_state = 150},
  [244] = {.lex_state = 150},
  [245] = {.lex_state = 150},
  [246] = {.lex_state = 150},
  [247] = {.lex_state = 150},
  [248] = {.lex_state = 150},
  [249] = {.lex_state = 150},
  [250] = {.lex_state = 150},
  [251] = {.lex_state = 153},
  [252] = {.lex_state = 150},
  [253] = {.lex_state = 150},
  [254] = {.lex_state = 150},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 153},
  [258] = {.lex_state = 150},
  [259] = {.lex_state = 153},
  [260] = {.lex_state = 150},
  [261] = {.lex_state = 150},
  [262] = {.lex_state = 150},
  [263] = {.lex_state = 150},
  [264] = {.lex_state = 150},
  [265] = {.lex_state = 150},
  [266] = {.lex_state = 150},
  [267] = {.lex_state = 150},
  [268] = {.lex_state = 150},
  [269] = {.lex_state = 150},
  [270] = {.lex_state = 150},
  [271] = {.lex_state = 153},
  [272] = {.lex_state = 153},
  [273] = {.lex_state = 150},
  [274] = {.lex_state = 153},
  [275] = {.lex_state = 150},
  [276] = {.lex_state = 153},
  [277] = {.lex_state = 150},
  [278] = {.lex_state = 153},
  [279] = {.lex_state = 153},
  [280] = {.lex_state = 150},
  [281] = {.lex_state = 153},
  [282] = {.lex_state = 150},
  [283] = {.lex_state = 153},
  [284] = {.lex_state = 153},
  [285] = {.lex_state = 153},
  [286] = {.lex_state = 153},
  [287] = {.lex_state = 153},
  [288] = {.lex_state = 150},
  [289] = {.lex_state = 150},
  [290] = {.lex_state = 153},
  [291] = {.lex_state = 153},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_QMARKphp] = ACTIONS(1),
    [anon_sym_LT_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_parent] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
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
    [sym_statement] = STATE(17),
    [sym_compound_statement] = STATE(18),
    [sym_named_label_statement] = STATE(18),
    [sym_expression_statement] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(32),
    [aux_sym_program_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_QMARK_GT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(10),
  },
  [5] = {
    [sym_statement] = STATE(17),
    [sym_compound_statement] = STATE(18),
    [sym_named_label_statement] = STATE(18),
    [sym_expression_statement] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(32),
    [aux_sym_program_repeat1] = STATE(35),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_QMARK_GT] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_list] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_self] = ACTIONS(48),
    [anon_sym_parent] = ACTIONS(48),
    [anon_sym_static] = ACTIONS(48),
    [anon_sym_BSLASH] = ACTIONS(48),
    [anon_sym_namespace] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_array] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(48),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(40),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym_comment] = ACTIONS(10),
  },
  [8] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(38),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [9] = {
    [anon_sym_COLON_COLON] = ACTIONS(52),
    [sym_comment] = ACTIONS(10),
  },
  [10] = {
    [sym_namespace_name] = STATE(40),
    [sym_name] = STATE(41),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [11] = {
    [anon_sym_BSLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(10),
  },
  [12] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(47),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(48),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(56),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(58),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(60),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [13] = {
    [anon_sym_LPAREN] = ACTIONS(62),
    [sym_comment] = ACTIONS(10),
  },
  [14] = {
    [sym_arguments] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [15] = {
    [sym_simple_variable] = STATE(53),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [16] = {
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(68),
    [anon_sym_STAR_EQ] = ACTIONS(68),
    [anon_sym_SLASH_EQ] = ACTIONS(68),
    [anon_sym_PLUS_EQ] = ACTIONS(68),
    [anon_sym_DASH_EQ] = ACTIONS(68),
    [anon_sym_DOT_EQ] = ACTIONS(68),
    [anon_sym_LT_LT_EQ] = ACTIONS(68),
    [anon_sym_GT_GT_EQ] = ACTIONS(68),
    [anon_sym_AMP_EQ] = ACTIONS(68),
    [anon_sym_CARET_EQ] = ACTIONS(68),
    [anon_sym_PIPE_EQ] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_COLON_COLON] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(40),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_QMARK_GT] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_list] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_self] = ACTIONS(70),
    [anon_sym_parent] = ACTIONS(70),
    [anon_sym_static] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
    [anon_sym_namespace] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_array] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(70),
    [sym_comment] = ACTIONS(40),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_QMARK_GT] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_list] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [anon_sym_self] = ACTIONS(72),
    [anon_sym_parent] = ACTIONS(72),
    [anon_sym_static] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_namespace] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_array] = ACTIONS(72),
    [sym_string] = ACTIONS(72),
    [anon_sym_DOLLAR] = ACTIONS(72),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(40),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(74),
    [sym_comment] = ACTIONS(10),
  },
  [20] = {
    [sym_yield_expression] = STATE(57),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(78),
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
    [anon_sym_LPAREN] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(80),
    [sym_comment] = ACTIONS(10),
  },
  [23] = {
    [sym_arguments] = STATE(51),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(84),
    [anon_sym_STAR_EQ] = ACTIONS(84),
    [anon_sym_SLASH_EQ] = ACTIONS(84),
    [anon_sym_PLUS_EQ] = ACTIONS(84),
    [anon_sym_DASH_EQ] = ACTIONS(84),
    [anon_sym_DOT_EQ] = ACTIONS(84),
    [anon_sym_LT_LT_EQ] = ACTIONS(84),
    [anon_sym_GT_GT_EQ] = ACTIONS(84),
    [anon_sym_AMP_EQ] = ACTIONS(84),
    [anon_sym_CARET_EQ] = ACTIONS(84),
    [anon_sym_PIPE_EQ] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_yield] = ACTIONS(84),
    [sym_comment] = ACTIONS(10),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(89),
    [anon_sym_STAR_EQ] = ACTIONS(89),
    [anon_sym_SLASH_EQ] = ACTIONS(89),
    [anon_sym_PLUS_EQ] = ACTIONS(89),
    [anon_sym_DASH_EQ] = ACTIONS(89),
    [anon_sym_DOT_EQ] = ACTIONS(89),
    [anon_sym_LT_LT_EQ] = ACTIONS(89),
    [anon_sym_GT_GT_EQ] = ACTIONS(89),
    [anon_sym_AMP_EQ] = ACTIONS(89),
    [anon_sym_CARET_EQ] = ACTIONS(89),
    [anon_sym_PIPE_EQ] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [sym_comment] = ACTIONS(10),
  },
  [26] = {
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym_comment] = ACTIONS(10),
  },
  [27] = {
    [sym_arguments] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [sym_comment] = ACTIONS(10),
  },
  [28] = {
    [sym_name] = STATE(62),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [29] = {
    [anon_sym_BSLASH] = ACTIONS(95),
    [sym_comment] = ACTIONS(10),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym_comment] = ACTIONS(10),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(103),
    [anon_sym_STAR_EQ] = ACTIONS(103),
    [anon_sym_SLASH_EQ] = ACTIONS(103),
    [anon_sym_PLUS_EQ] = ACTIONS(103),
    [anon_sym_DASH_EQ] = ACTIONS(103),
    [anon_sym_DOT_EQ] = ACTIONS(103),
    [anon_sym_LT_LT_EQ] = ACTIONS(103),
    [anon_sym_GT_GT_EQ] = ACTIONS(103),
    [anon_sym_AMP_EQ] = ACTIONS(103),
    [anon_sym_CARET_EQ] = ACTIONS(103),
    [anon_sym_PIPE_EQ] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_yield] = ACTIONS(103),
    [sym_comment] = ACTIONS(10),
  },
  [32] = {
    [aux_sym_namespace_name_repeat1] = STATE(70),
    [anon_sym_COLON] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [33] = {
    [sym_statement] = STATE(72),
    [sym_compound_statement] = STATE(18),
    [sym_named_label_statement] = STATE(18),
    [sym_expression_statement] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_QMARK_GT] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_QMARK_GT] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_list] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_self] = ACTIONS(117),
    [anon_sym_parent] = ACTIONS(117),
    [anon_sym_static] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_namespace] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_array] = ACTIONS(117),
    [sym_string] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(117),
    [sym_comment] = ACTIONS(40),
  },
  [35] = {
    [sym_statement] = STATE(72),
    [sym_compound_statement] = STATE(18),
    [sym_named_label_statement] = STATE(18),
    [sym_expression_statement] = STATE(18),
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(20),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [36] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym__variable] = STATE(78),
    [sym_list_literal] = STATE(79),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [37] = {
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_comment] = ACTIONS(10),
  },
  [38] = {
    [sym_yield_expression] = STATE(81),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [39] = {
    [aux_sym_namespace_name_repeat1] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [40] = {
    [anon_sym_BSLASH] = ACTIONS(127),
    [sym_comment] = ACTIONS(10),
  },
  [41] = {
    [aux_sym_namespace_name_repeat1] = STATE(70),
    [anon_sym_BSLASH] = ACTIONS(109),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [42] = {
    [sym_namespace_name] = STATE(83),
    [sym_name] = STATE(41),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [43] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(85),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [44] = {
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(10),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(131),
    [sym_string] = ACTIONS(131),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [anon_sym_EQ_GT] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [sym_yield_expression] = STATE(88),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [48] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(10),
  },
  [49] = {
    [sym__expression] = STATE(93),
    [sym_assignment_expression] = STATE(94),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(95),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [50] = {
    [sym_variadic_unpacking] = STATE(98),
    [aux_sym_arguments_repeat1] = STATE(99),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(147),
    [sym_comment] = ACTIONS(10),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_DOT_EQ] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_yield] = ACTIONS(149),
    [sym_comment] = ACTIONS(10),
  },
  [52] = {
    [sym__expression] = STATE(100),
    [sym_assignment_expression] = STATE(101),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(151),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(151),
    [anon_sym_STAR_EQ] = ACTIONS(151),
    [anon_sym_SLASH_EQ] = ACTIONS(151),
    [anon_sym_PLUS_EQ] = ACTIONS(151),
    [anon_sym_DASH_EQ] = ACTIONS(151),
    [anon_sym_DOT_EQ] = ACTIONS(151),
    [anon_sym_LT_LT_EQ] = ACTIONS(151),
    [anon_sym_GT_GT_EQ] = ACTIONS(151),
    [anon_sym_AMP_EQ] = ACTIONS(151),
    [anon_sym_CARET_EQ] = ACTIONS(151),
    [anon_sym_PIPE_EQ] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_yield] = ACTIONS(151),
    [sym_comment] = ACTIONS(10),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_DOT_EQ] = ACTIONS(153),
    [anon_sym_LT_LT_EQ] = ACTIONS(153),
    [anon_sym_GT_GT_EQ] = ACTIONS(153),
    [anon_sym_AMP_EQ] = ACTIONS(153),
    [anon_sym_CARET_EQ] = ACTIONS(153),
    [anon_sym_PIPE_EQ] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RPAREN] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_QMARK_GT] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_list] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_self] = ACTIONS(155),
    [anon_sym_parent] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_BSLASH] = ACTIONS(155),
    [anon_sym_namespace] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_array] = ACTIONS(155),
    [sym_string] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(155),
    [sym_comment] = ACTIONS(40),
  },
  [56] = {
    [sym__expression] = STATE(104),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(106),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [anon_sym_from] = ACTIONS(159),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [57] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(109),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [58] = {
    [sym_assignment_expression] = STATE(111),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(161),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [59] = {
    [sym_assignment_expression] = STATE(111),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [60] = {
    [sym__expression] = STATE(112),
    [sym_assignment_expression] = STATE(38),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [61] = {
    [sym__member_name] = STATE(115),
    [sym_simple_variable] = STATE(116),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [63] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(40),
  },
  [64] = {
    [sym__expression] = STATE(118),
    [sym_assignment_expression] = STATE(101),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [65] = {
    [sym__member_name] = STATE(119),
    [sym_simple_variable] = STATE(116),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(117),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [66] = {
    [sym__expression] = STATE(121),
    [sym_assignment_expression] = STATE(122),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_QMARK_GT] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_list] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_self] = ACTIONS(173),
    [anon_sym_parent] = ACTIONS(173),
    [anon_sym_static] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_namespace] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_array] = ACTIONS(173),
    [sym_string] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(40),
  },
  [68] = {
    [sym_name] = STATE(123),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [69] = {
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(175),
    [anon_sym_SLASH_EQ] = ACTIONS(175),
    [anon_sym_PLUS_EQ] = ACTIONS(175),
    [anon_sym_DASH_EQ] = ACTIONS(175),
    [anon_sym_DOT_EQ] = ACTIONS(175),
    [anon_sym_LT_LT_EQ] = ACTIONS(175),
    [anon_sym_GT_GT_EQ] = ACTIONS(175),
    [anon_sym_AMP_EQ] = ACTIONS(175),
    [anon_sym_CARET_EQ] = ACTIONS(175),
    [anon_sym_PIPE_EQ] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(175),
    [anon_sym_BSLASH] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(175),
    [sym_comment] = ACTIONS(40),
  },
  [70] = {
    [anon_sym_BSLASH] = ACTIONS(177),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_comment] = ACTIONS(10),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_QMARK_GT] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_list] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_self] = ACTIONS(181),
    [anon_sym_parent] = ACTIONS(181),
    [anon_sym_static] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_namespace] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_array] = ACTIONS(181),
    [sym_string] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(181),
    [sym_comment] = ACTIONS(40),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_QMARK_GT] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_list] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_self] = ACTIONS(183),
    [anon_sym_parent] = ACTIONS(183),
    [anon_sym_static] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(183),
    [anon_sym_namespace] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_array] = ACTIONS(183),
    [sym_string] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(183),
    [sym_comment] = ACTIONS(40),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [sym_simple_variable] = STATE(53),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [76] = {
    [anon_sym_EQ_GT] = ACTIONS(187),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [sym_yield_expression] = STATE(126),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [aux_sym_list_literal_repeat1] = STATE(129),
    [anon_sym_EQ] = ACTIONS(78),
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
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(10),
  },
  [79] = {
    [aux_sym_list_literal_repeat1] = STATE(129),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(10),
  },
  [80] = {
    [sym_arguments] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [81] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(131),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [82] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(193),
    [sym_comment] = ACTIONS(40),
  },
  [83] = {
    [anon_sym_BSLASH] = ACTIONS(195),
    [sym_comment] = ACTIONS(10),
  },
  [84] = {
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_comment] = ACTIONS(10),
  },
  [85] = {
    [sym_yield_expression] = STATE(133),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(199),
    [sym_string] = ACTIONS(199),
    [sym_comment] = ACTIONS(10),
  },
  [87] = {
    [sym__expression] = STATE(135),
    [sym_assignment_expression] = STATE(85),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(201),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [88] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(136),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [89] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(47),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(138),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(56),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_comment] = ACTIONS(10),
  },
  [91] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(140),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym_comment] = ACTIONS(10),
  },
  [93] = {
    [anon_sym_EQ_GT] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_comment] = ACTIONS(10),
  },
  [94] = {
    [sym_yield_expression] = STATE(142),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [95] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(144),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym_comment] = ACTIONS(10),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(213),
    [anon_sym_STAR_EQ] = ACTIONS(213),
    [anon_sym_SLASH_EQ] = ACTIONS(213),
    [anon_sym_PLUS_EQ] = ACTIONS(213),
    [anon_sym_DASH_EQ] = ACTIONS(213),
    [anon_sym_DOT_EQ] = ACTIONS(213),
    [anon_sym_LT_LT_EQ] = ACTIONS(213),
    [anon_sym_GT_GT_EQ] = ACTIONS(213),
    [anon_sym_AMP_EQ] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(213),
    [anon_sym_PIPE_EQ] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_yield] = ACTIONS(213),
    [sym_comment] = ACTIONS(10),
  },
  [97] = {
    [sym__expression] = STATE(145),
    [sym_assignment_expression] = STATE(146),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(215),
    [sym_comment] = ACTIONS(10),
  },
  [99] = {
    [sym_variadic_unpacking] = STATE(148),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(147),
    [sym_comment] = ACTIONS(10),
  },
  [100] = {
    [anon_sym_RBRACE] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [101] = {
    [sym_yield_expression] = STATE(150),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [102] = {
    [sym__expression] = STATE(151),
    [sym_assignment_expression] = STATE(152),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [103] = {
    [sym__expression] = STATE(153),
    [sym_assignment_expression] = STATE(152),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [104] = {
    [anon_sym_list] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_EQ_GT] = ACTIONS(223),
    [anon_sym_self] = ACTIONS(221),
    [anon_sym_parent] = ACTIONS(221),
    [anon_sym_static] = ACTIONS(221),
    [anon_sym_BSLASH] = ACTIONS(221),
    [anon_sym_namespace] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_array] = ACTIONS(221),
    [sym_string] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(40),
  },
  [105] = {
    [sym_yield_expression] = STATE(155),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [106] = {
    [anon_sym_list] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_self] = ACTIONS(225),
    [anon_sym_parent] = ACTIONS(225),
    [anon_sym_static] = ACTIONS(225),
    [anon_sym_BSLASH] = ACTIONS(225),
    [anon_sym_namespace] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_array] = ACTIONS(225),
    [sym_string] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(225),
    [sym_comment] = ACTIONS(40),
  },
  [107] = {
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_and] = ACTIONS(229),
    [anon_sym_or] = ACTIONS(229),
    [anon_sym_xor] = ACTIONS(229),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(229),
    [anon_sym_QMARK_QMARK] = ACTIONS(229),
    [anon_sym_EQ_EQ] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(227),
    [anon_sym_LT_GT] = ACTIONS(229),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(229),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_LT_EQ_GT] = ACTIONS(229),
    [anon_sym_LT_LT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_instanceof] = ACTIONS(229),
    [sym_comment] = ACTIONS(10),
  },
  [108] = {
    [sym_yield_expression] = STATE(157),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [109] = {
    [sym_include_expression] = STATE(159),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [110] = {
    [sym__variable] = STATE(161),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [111] = {
    [anon_sym_yield] = ACTIONS(235),
    [sym_comment] = ACTIONS(10),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(237),
    [sym_comment] = ACTIONS(10),
  },
  [113] = {
    [sym__expression] = STATE(163),
    [sym_assignment_expression] = STATE(101),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [114] = {
    [sym_simple_variable] = STATE(53),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [115] = {
    [sym_arguments] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(239),
    [sym_comment] = ACTIONS(10),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(241),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [118] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(10),
  },
  [119] = {
    [sym_arguments] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [120] = {
    [anon_sym_EQ] = ACTIONS(245),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(245),
    [anon_sym_STAR_EQ] = ACTIONS(245),
    [anon_sym_SLASH_EQ] = ACTIONS(245),
    [anon_sym_PLUS_EQ] = ACTIONS(245),
    [anon_sym_DASH_EQ] = ACTIONS(245),
    [anon_sym_DOT_EQ] = ACTIONS(245),
    [anon_sym_LT_LT_EQ] = ACTIONS(245),
    [anon_sym_GT_GT_EQ] = ACTIONS(245),
    [anon_sym_AMP_EQ] = ACTIONS(245),
    [anon_sym_CARET_EQ] = ACTIONS(245),
    [anon_sym_PIPE_EQ] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_yield] = ACTIONS(245),
    [sym_comment] = ACTIONS(10),
  },
  [121] = {
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_comment] = ACTIONS(10),
  },
  [122] = {
    [sym_yield_expression] = STATE(167),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [123] = {
    [anon_sym_BSLASH] = ACTIONS(247),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [124] = {
    [sym_name] = STATE(168),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [125] = {
    [sym__variable] = STATE(170),
    [sym_list_literal] = STATE(171),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [126] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(172),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [127] = {
    [sym__expression] = STATE(173),
    [sym_assignment_expression] = STATE(77),
    [sym__variable] = STATE(174),
    [sym_list_literal] = STATE(175),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [128] = {
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(251),
    [sym_comment] = ACTIONS(10),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_comment] = ACTIONS(10),
  },
  [130] = {
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(257),
    [anon_sym_STAR_EQ] = ACTIONS(257),
    [anon_sym_SLASH_EQ] = ACTIONS(257),
    [anon_sym_PLUS_EQ] = ACTIONS(257),
    [anon_sym_DASH_EQ] = ACTIONS(257),
    [anon_sym_DOT_EQ] = ACTIONS(257),
    [anon_sym_LT_LT_EQ] = ACTIONS(257),
    [anon_sym_GT_GT_EQ] = ACTIONS(257),
    [anon_sym_AMP_EQ] = ACTIONS(257),
    [anon_sym_CARET_EQ] = ACTIONS(257),
    [anon_sym_PIPE_EQ] = ACTIONS(257),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_yield] = ACTIONS(257),
    [sym_comment] = ACTIONS(10),
  },
  [131] = {
    [sym_include_expression] = STATE(178),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [132] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(259),
    [sym_comment] = ACTIONS(40),
  },
  [133] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(179),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [134] = {
    [sym__expression] = STATE(180),
    [sym_assignment_expression] = STATE(85),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [sym_include_expression] = STATE(181),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [137] = {
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_string] = ACTIONS(263),
    [sym_comment] = ACTIONS(10),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_RBRACK] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [139] = {
    [sym__expression] = STATE(46),
    [sym_assignment_expression] = STATE(47),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(183),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(56),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(267),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [140] = {
    [sym_yield_expression] = STATE(184),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [141] = {
    [sym__expression] = STATE(135),
    [sym_assignment_expression] = STATE(140),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [142] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(186),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [143] = {
    [sym__expression] = STATE(93),
    [sym_assignment_expression] = STATE(94),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(138),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(273),
    [sym_comment] = ACTIONS(10),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(275),
    [sym_comment] = ACTIONS(10),
  },
  [146] = {
    [sym_yield_expression] = STATE(188),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(277),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(277),
    [anon_sym_STAR_EQ] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(277),
    [anon_sym_PLUS_EQ] = ACTIONS(277),
    [anon_sym_DASH_EQ] = ACTIONS(277),
    [anon_sym_DOT_EQ] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(277),
    [anon_sym_GT_GT_EQ] = ACTIONS(277),
    [anon_sym_AMP_EQ] = ACTIONS(277),
    [anon_sym_CARET_EQ] = ACTIONS(277),
    [anon_sym_PIPE_EQ] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_yield] = ACTIONS(277),
    [sym_comment] = ACTIONS(10),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(279),
    [sym_comment] = ACTIONS(10),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(281),
    [anon_sym_STAR_EQ] = ACTIONS(281),
    [anon_sym_SLASH_EQ] = ACTIONS(281),
    [anon_sym_PLUS_EQ] = ACTIONS(281),
    [anon_sym_DASH_EQ] = ACTIONS(281),
    [anon_sym_DOT_EQ] = ACTIONS(281),
    [anon_sym_LT_LT_EQ] = ACTIONS(281),
    [anon_sym_GT_GT_EQ] = ACTIONS(281),
    [anon_sym_AMP_EQ] = ACTIONS(281),
    [anon_sym_CARET_EQ] = ACTIONS(281),
    [anon_sym_PIPE_EQ] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_yield] = ACTIONS(281),
    [sym_comment] = ACTIONS(10),
  },
  [150] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(189),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [151] = {
    [anon_sym_list] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_self] = ACTIONS(283),
    [anon_sym_parent] = ACTIONS(283),
    [anon_sym_static] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(283),
    [anon_sym_namespace] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_array] = ACTIONS(283),
    [sym_string] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(283),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(283),
    [sym_comment] = ACTIONS(40),
  },
  [152] = {
    [sym_yield_expression] = STATE(190),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [153] = {
    [anon_sym_list] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_self] = ACTIONS(285),
    [anon_sym_parent] = ACTIONS(285),
    [anon_sym_static] = ACTIONS(285),
    [anon_sym_BSLASH] = ACTIONS(285),
    [anon_sym_namespace] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_array] = ACTIONS(285),
    [sym_string] = ACTIONS(285),
    [anon_sym_DOLLAR] = ACTIONS(285),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(285),
    [sym_comment] = ACTIONS(40),
  },
  [154] = {
    [sym__expression] = STATE(192),
    [sym_assignment_expression] = STATE(152),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(287),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [155] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(193),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [156] = {
    [sym__expression] = STATE(194),
    [sym_assignment_expression] = STATE(195),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [157] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(196),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [158] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(198),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [159] = {
    [sym_include_once_expression] = STATE(200),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [160] = {
    [sym_simple_variable] = STATE(53),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(233),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(291),
    [sym_comment] = ACTIONS(40),
  },
  [161] = {
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_yield] = ACTIONS(293),
    [sym_comment] = ACTIONS(10),
  },
  [162] = {
    [sym_array_creation_expression] = STATE(203),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_array] = ACTIONS(297),
    [sym_comment] = ACTIONS(10),
  },
  [163] = {
    [anon_sym_RBRACE] = ACTIONS(299),
    [sym_comment] = ACTIONS(10),
  },
  [164] = {
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(301),
    [anon_sym_SLASH_EQ] = ACTIONS(301),
    [anon_sym_PLUS_EQ] = ACTIONS(301),
    [anon_sym_DASH_EQ] = ACTIONS(301),
    [anon_sym_DOT_EQ] = ACTIONS(301),
    [anon_sym_LT_LT_EQ] = ACTIONS(301),
    [anon_sym_GT_GT_EQ] = ACTIONS(301),
    [anon_sym_AMP_EQ] = ACTIONS(301),
    [anon_sym_CARET_EQ] = ACTIONS(301),
    [anon_sym_PIPE_EQ] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_yield] = ACTIONS(301),
    [sym_comment] = ACTIONS(10),
  },
  [165] = {
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(303),
    [anon_sym_STAR_EQ] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(303),
    [anon_sym_PLUS_EQ] = ACTIONS(303),
    [anon_sym_DASH_EQ] = ACTIONS(303),
    [anon_sym_DOT_EQ] = ACTIONS(303),
    [anon_sym_LT_LT_EQ] = ACTIONS(303),
    [anon_sym_GT_GT_EQ] = ACTIONS(303),
    [anon_sym_AMP_EQ] = ACTIONS(303),
    [anon_sym_CARET_EQ] = ACTIONS(303),
    [anon_sym_PIPE_EQ] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_yield] = ACTIONS(303),
    [sym_comment] = ACTIONS(10),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(305),
    [anon_sym_STAR_EQ] = ACTIONS(305),
    [anon_sym_SLASH_EQ] = ACTIONS(305),
    [anon_sym_PLUS_EQ] = ACTIONS(305),
    [anon_sym_DASH_EQ] = ACTIONS(305),
    [anon_sym_DOT_EQ] = ACTIONS(305),
    [anon_sym_LT_LT_EQ] = ACTIONS(305),
    [anon_sym_GT_GT_EQ] = ACTIONS(305),
    [anon_sym_AMP_EQ] = ACTIONS(305),
    [anon_sym_CARET_EQ] = ACTIONS(305),
    [anon_sym_PIPE_EQ] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_yield] = ACTIONS(305),
    [sym_comment] = ACTIONS(10),
  },
  [167] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(205),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [168] = {
    [anon_sym_BSLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(111),
    [sym_comment] = ACTIONS(40),
  },
  [169] = {
    [sym_simple_variable] = STATE(53),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(54),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [170] = {
    [aux_sym_list_literal_repeat1] = STATE(207),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(309),
    [sym_comment] = ACTIONS(10),
  },
  [171] = {
    [aux_sym_list_literal_repeat1] = STATE(207),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(309),
    [sym_comment] = ACTIONS(10),
  },
  [172] = {
    [sym_include_expression] = STATE(208),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [173] = {
    [anon_sym_EQ_GT] = ACTIONS(311),
    [sym_comment] = ACTIONS(10),
  },
  [174] = {
    [anon_sym_EQ] = ACTIONS(78),
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
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(10),
  },
  [175] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [sym_comment] = ACTIONS(10),
  },
  [176] = {
    [sym__expression] = STATE(210),
    [sym_assignment_expression] = STATE(77),
    [sym__variable] = STATE(211),
    [sym_list_literal] = STATE(212),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [177] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(10),
  },
  [178] = {
    [sym_include_once_expression] = STATE(213),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [179] = {
    [sym_include_expression] = STATE(214),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_comment] = ACTIONS(10),
  },
  [181] = {
    [sym_include_once_expression] = STATE(215),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [182] = {
    [anon_sym_LPAREN] = ACTIONS(319),
    [sym_string] = ACTIONS(319),
    [sym_comment] = ACTIONS(10),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_comment] = ACTIONS(10),
  },
  [184] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(216),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [185] = {
    [sym__expression] = STATE(180),
    [sym_assignment_expression] = STATE(140),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [186] = {
    [sym_include_expression] = STATE(217),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [187] = {
    [sym__expression] = STATE(93),
    [sym_assignment_expression] = STATE(94),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_array_element_initializer] = STATE(183),
    [sym_name] = STATE(39),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [188] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(219),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [189] = {
    [sym_include_expression] = STATE(220),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [190] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(221),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [191] = {
    [sym__expression] = STATE(222),
    [sym_assignment_expression] = STATE(152),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [192] = {
    [anon_sym_list] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_self] = ACTIONS(325),
    [anon_sym_parent] = ACTIONS(325),
    [anon_sym_static] = ACTIONS(325),
    [anon_sym_BSLASH] = ACTIONS(325),
    [anon_sym_namespace] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_array] = ACTIONS(325),
    [sym_string] = ACTIONS(325),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(325),
    [sym_comment] = ACTIONS(40),
  },
  [193] = {
    [sym_include_expression] = STATE(223),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [194] = {
    [anon_sym_include] = ACTIONS(327),
    [sym_comment] = ACTIONS(10),
  },
  [195] = {
    [sym_yield_expression] = STATE(224),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [196] = {
    [sym_include_expression] = STATE(225),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [197] = {
    [anon_sym_include_once] = ACTIONS(329),
    [sym_comment] = ACTIONS(10),
  },
  [198] = {
    [sym_yield_expression] = STATE(226),
    [anon_sym_yield] = ACTIONS(76),
    [sym_comment] = ACTIONS(10),
  },
  [199] = {
    [sym__expression] = STATE(227),
    [sym_assignment_expression] = STATE(198),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [200] = {
    [sym_require_expression] = STATE(229),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_yield] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(68),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(68),
    [sym_comment] = ACTIONS(40),
  },
  [202] = {
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_yield] = ACTIONS(153),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(333),
    [sym_comment] = ACTIONS(40),
  },
  [203] = {
    [sym_string] = ACTIONS(335),
    [sym_comment] = ACTIONS(10),
  },
  [204] = {
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym_comment] = ACTIONS(10),
  },
  [205] = {
    [sym_include_expression] = STATE(232),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [206] = {
    [anon_sym_EQ] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(339),
    [sym_comment] = ACTIONS(10),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(341),
    [sym_comment] = ACTIONS(10),
  },
  [208] = {
    [sym_include_once_expression] = STATE(234),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [209] = {
    [sym__variable] = STATE(235),
    [sym_list_literal] = STATE(236),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [210] = {
    [anon_sym_EQ_GT] = ACTIONS(343),
    [sym_comment] = ACTIONS(10),
  },
  [211] = {
    [anon_sym_EQ] = ACTIONS(78),
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
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(10),
  },
  [212] = {
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [sym_comment] = ACTIONS(10),
  },
  [213] = {
    [sym_require_expression] = STATE(238),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [214] = {
    [sym_include_once_expression] = STATE(239),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [215] = {
    [sym_require_expression] = STATE(240),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [216] = {
    [sym_include_expression] = STATE(241),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [217] = {
    [sym_include_once_expression] = STATE(242),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [218] = {
    [anon_sym_LPAREN] = ACTIONS(347),
    [sym_string] = ACTIONS(347),
    [sym_comment] = ACTIONS(10),
  },
  [219] = {
    [sym_include_expression] = STATE(243),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [220] = {
    [sym_include_once_expression] = STATE(244),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [221] = {
    [sym_include_expression] = STATE(245),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [222] = {
    [anon_sym_list] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(349),
    [anon_sym_self] = ACTIONS(349),
    [anon_sym_parent] = ACTIONS(349),
    [anon_sym_static] = ACTIONS(349),
    [anon_sym_BSLASH] = ACTIONS(349),
    [anon_sym_namespace] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_array] = ACTIONS(349),
    [sym_string] = ACTIONS(349),
    [anon_sym_DOLLAR] = ACTIONS(349),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(349),
    [sym_comment] = ACTIONS(40),
  },
  [223] = {
    [sym_include_once_expression] = STATE(246),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [224] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(247),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [225] = {
    [sym_include_once_expression] = STATE(248),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [226] = {
    [sym__expression] = STATE(107),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_binary_expression] = STATE(249),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [227] = {
    [anon_sym_include_once] = ACTIONS(351),
    [sym_comment] = ACTIONS(10),
  },
  [228] = {
    [sym__expression] = STATE(250),
    [sym_assignment_expression] = STATE(198),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [229] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(353),
    [sym_comment] = ACTIONS(10),
  },
  [230] = {
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_yield] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(175),
    [sym_comment] = ACTIONS(40),
  },
  [231] = {
    [anon_sym_LBRACE] = ACTIONS(355),
    [anon_sym_COLON_COLON] = ACTIONS(355),
    [anon_sym_DASH_GT] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_comment] = ACTIONS(10),
  },
  [232] = {
    [sym_include_once_expression] = STATE(253),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [233] = {
    [anon_sym_EQ] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_comment] = ACTIONS(10),
  },
  [234] = {
    [sym_require_expression] = STATE(254),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [235] = {
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [sym_comment] = ACTIONS(10),
  },
  [236] = {
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [sym_comment] = ACTIONS(10),
  },
  [237] = {
    [sym__variable] = STATE(255),
    [sym_list_literal] = STATE(256),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(249),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [238] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(361),
    [sym_comment] = ACTIONS(10),
  },
  [239] = {
    [sym_require_expression] = STATE(258),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [240] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(363),
    [sym_comment] = ACTIONS(10),
  },
  [241] = {
    [sym_include_once_expression] = STATE(260),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [242] = {
    [sym_require_expression] = STATE(261),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [243] = {
    [sym_include_once_expression] = STATE(262),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [244] = {
    [sym_require_expression] = STATE(263),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [245] = {
    [sym_include_once_expression] = STATE(264),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [246] = {
    [sym_require_expression] = STATE(265),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [247] = {
    [sym_include_expression] = STATE(266),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [248] = {
    [sym_require_expression] = STATE(267),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [249] = {
    [sym_include_expression] = STATE(268),
    [anon_sym_include] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [250] = {
    [anon_sym_include_once] = ACTIONS(365),
    [sym_comment] = ACTIONS(10),
  },
  [251] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(20),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [252] = {
    [anon_sym_RBRACE] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(369),
    [anon_sym_EQ_GT] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [anon_sym_and] = ACTIONS(367),
    [anon_sym_or] = ACTIONS(367),
    [anon_sym_xor] = ACTIONS(367),
    [anon_sym_PIPE_PIPE] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_CARET] = ACTIONS(367),
    [anon_sym_QMARK_QMARK] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(369),
    [anon_sym_BANG_EQ] = ACTIONS(369),
    [anon_sym_LT_GT] = ACTIONS(367),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(367),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_LT_EQ] = ACTIONS(369),
    [anon_sym_GT_EQ] = ACTIONS(367),
    [anon_sym_LT_EQ_GT] = ACTIONS(367),
    [anon_sym_LT_LT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(369),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_instanceof] = ACTIONS(367),
    [anon_sym_include] = ACTIONS(369),
    [anon_sym_include_once] = ACTIONS(367),
    [sym_comment] = ACTIONS(10),
  },
  [253] = {
    [sym_require_expression] = STATE(270),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [254] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(371),
    [sym_comment] = ACTIONS(10),
  },
  [255] = {
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [sym_comment] = ACTIONS(10),
  },
  [256] = {
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [sym_comment] = ACTIONS(10),
  },
  [257] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(38),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [258] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(375),
    [sym_comment] = ACTIONS(10),
  },
  [259] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(47),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [260] = {
    [sym_require_expression] = STATE(273),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [261] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(377),
    [sym_comment] = ACTIONS(10),
  },
  [262] = {
    [sym_require_expression] = STATE(275),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [263] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(379),
    [sym_comment] = ACTIONS(10),
  },
  [264] = {
    [sym_require_expression] = STATE(277),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [265] = {
    [sym_require_once_expression] = STATE(279),
    [anon_sym_include_once] = ACTIONS(381),
    [sym_comment] = ACTIONS(10),
  },
  [266] = {
    [sym_include_once_expression] = STATE(280),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [267] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(383),
    [sym_comment] = ACTIONS(10),
  },
  [268] = {
    [sym_include_once_expression] = STATE(282),
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [269] = {
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [anon_sym_AMP] = ACTIONS(387),
    [anon_sym_EQ_GT] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [anon_sym_and] = ACTIONS(385),
    [anon_sym_or] = ACTIONS(385),
    [anon_sym_xor] = ACTIONS(385),
    [anon_sym_PIPE_PIPE] = ACTIONS(385),
    [anon_sym_AMP_AMP] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(385),
    [anon_sym_QMARK_QMARK] = ACTIONS(385),
    [anon_sym_EQ_EQ] = ACTIONS(387),
    [anon_sym_BANG_EQ] = ACTIONS(387),
    [anon_sym_LT_GT] = ACTIONS(385),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(385),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(385),
    [anon_sym_LT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_GT_EQ] = ACTIONS(385),
    [anon_sym_LT_EQ_GT] = ACTIONS(385),
    [anon_sym_LT_LT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(387),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_SLASH] = ACTIONS(387),
    [anon_sym_PERCENT] = ACTIONS(385),
    [anon_sym_instanceof] = ACTIONS(385),
    [anon_sym_include] = ACTIONS(387),
    [anon_sym_include_once] = ACTIONS(385),
    [sym_comment] = ACTIONS(10),
  },
  [270] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(389),
    [sym_comment] = ACTIONS(10),
  },
  [271] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(77),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [272] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(85),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [273] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(391),
    [sym_comment] = ACTIONS(10),
  },
  [274] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(94),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [275] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(393),
    [sym_comment] = ACTIONS(10),
  },
  [276] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(101),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [277] = {
    [sym_require_once_expression] = STATE(279),
    [anon_sym_include_once] = ACTIONS(395),
    [sym_comment] = ACTIONS(10),
  },
  [278] = {
    [sym__expression] = STATE(287),
    [sym_assignment_expression] = STATE(105),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [279] = {
    [anon_sym_list] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(397),
    [anon_sym_self] = ACTIONS(397),
    [anon_sym_parent] = ACTIONS(397),
    [anon_sym_static] = ACTIONS(397),
    [anon_sym_BSLASH] = ACTIONS(397),
    [anon_sym_namespace] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_array] = ACTIONS(397),
    [sym_string] = ACTIONS(397),
    [anon_sym_DOLLAR] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(397),
    [sym_comment] = ACTIONS(40),
  },
  [280] = {
    [sym_require_expression] = STATE(288),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [281] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(108),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [282] = {
    [sym_require_expression] = STATE(289),
    [anon_sym_include_once] = ACTIONS(331),
    [sym_comment] = ACTIONS(10),
  },
  [283] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(122),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [284] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(140),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [285] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(146),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [286] = {
    [sym__expression] = STATE(287),
    [sym_assignment_expression] = STATE(152),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [287] = {
    [anon_sym_list] = ACTIONS(399),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_self] = ACTIONS(399),
    [anon_sym_parent] = ACTIONS(399),
    [anon_sym_static] = ACTIONS(399),
    [anon_sym_BSLASH] = ACTIONS(399),
    [anon_sym_namespace] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(399),
    [anon_sym_array] = ACTIONS(399),
    [sym_string] = ACTIONS(399),
    [anon_sym_DOLLAR] = ACTIONS(399),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(399),
    [sym_comment] = ACTIONS(40),
  },
  [288] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(401),
    [sym_comment] = ACTIONS(10),
  },
  [289] = {
    [sym_require_once_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(403),
    [sym_comment] = ACTIONS(10),
  },
  [290] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(195),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [291] = {
    [sym__expression] = STATE(269),
    [sym_assignment_expression] = STATE(198),
    [sym__variable] = STATE(21),
    [sym_list_literal] = STATE(22),
    [sym__callable_variable] = STATE(23),
    [sym_function_call_expression] = STATE(24),
    [sym_scoped_call_expression] = STATE(24),
    [sym__scope_resolution_qualifier] = STATE(25),
    [sym_relative_scope] = STATE(26),
    [sym_qualified_name] = STATE(27),
    [sym_namespace_name_as_prefix] = STATE(28),
    [sym_namespace_name] = STATE(29),
    [sym_member_call_expression] = STATE(24),
    [sym_subscript_expression] = STATE(24),
    [sym_dereferencable_expression] = STATE(30),
    [sym_array_creation_expression] = STATE(14),
    [sym_simple_variable] = STATE(24),
    [sym__variable_name] = STATE(31),
    [sym_name] = STATE(39),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_LPAREN] = ACTIONS(22),
    [anon_sym_self] = ACTIONS(24),
    [anon_sym_parent] = ACTIONS(24),
    [anon_sym_static] = ACTIONS(24),
    [anon_sym_BSLASH] = ACTIONS(26),
    [anon_sym_namespace] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_array] = ACTIONS(32),
    [sym_string] = ACTIONS(34),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
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
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relative_scope, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [86] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true), SHIFT(50),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__callable_variable, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__scope_resolution_qualifier, 1),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 1),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 1),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_call_expression, 2),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 2),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_name, 2),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 2),
  [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 2, .fragile = true),
  [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(120),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 3),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 3),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(137),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [225] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__member_name, 1),
  [241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__member_name, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 3),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 4),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_call_expression, 4),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 4),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 2),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variadic_unpacking, 2),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 4),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 4),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_scoped_call_expression, 4),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 4),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_call_expression, 4),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_name_repeat1, 3),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 5),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 5),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 3),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(231),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__member_name, 3),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 6),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(233),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 6),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dereferencable_expression, 6),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 7),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 4),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 7),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 5),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
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
