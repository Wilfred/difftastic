#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 297
#define SYMBOL_COUNT 111
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
  anon_sym_COLON_COLON = 21,
  anon_sym_list = 22,
  anon_sym_LPAREN = 23,
  anon_sym_EQ_GT = 24,
  anon_sym_COMMA = 25,
  anon_sym_RPAREN = 26,
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
  sym_scoped_property_access_expression = 80,
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
  sym_subscript_expression = 93,
  sym_dereferencable_expression = 94,
  sym_array_creation_expression = 95,
  sym_simple_variable = 96,
  sym__variable_name = 97,
  sym_yield_expression = 98,
  sym_array_element_initializer = 99,
  sym_binary_expression = 100,
  sym_include_expression = 101,
  sym_include_once_expression = 102,
  sym_require_expression = 103,
  sym_require_once_expression = 104,
  sym_name = 105,
  aux_sym_program_repeat1 = 106,
  aux_sym_list_literal_repeat1 = 107,
  aux_sym_namespace_name_repeat1 = 108,
  aux_sym_arguments_repeat1 = 109,
  aux_sym_array_creation_expression_repeat1 = 110,
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
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_list] = "list",
  [anon_sym_LPAREN] = "(",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_scoped_property_access_expression] = "scoped_property_access_expression",
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
  [anon_sym_COLON_COLON] = {
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
  [sym_scoped_property_access_expression] = {
    .visible = true,
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
      if (lookahead == '\\')
        ADVANCE(70);
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
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '&')
        ADVANCE(154);
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
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == ']')
        ADVANCE(71);
      if (lookahead == 'l')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(160);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == '}')
        ADVANCE(147);
      if (lookahead == 160)
        ADVANCE(162);
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
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
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
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(110);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(121);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(127);
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      END_STATE();
    case 163:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '{')
        ADVANCE(143);
      if (lookahead == 160)
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == '&')
        ADVANCE(165);
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == ')')
        ADVANCE(23);
      if (lookahead == '*')
        ADVANCE(166);
      if (lookahead == '+')
        ADVANCE(167);
      if (lookahead == ',')
        ADVANCE(30);
      if (lookahead == '-')
        ADVANCE(168);
      if (lookahead == '.')
        ADVANCE(169);
      if (lookahead == '/')
        ADVANCE(170);
      if (lookahead == ':')
        ADVANCE(44);
      if (lookahead == '<')
        ADVANCE(171);
      if (lookahead == '=')
        ADVANCE(173);
      if (lookahead == '>')
        ADVANCE(174);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == '^')
        ADVANCE(176);
      if (lookahead == '|')
        ADVANCE(177);
      if (lookahead == 160)
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
      END_STATE();
    case 165:
      if (lookahead == '=')
        ADVANCE(19);
      END_STATE();
    case 166:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '=')
        ADVANCE(27);
      END_STATE();
    case 167:
      if (lookahead == '=')
        ADVANCE(29);
      END_STATE();
    case 168:
      if (lookahead == '=')
        ADVANCE(32);
      END_STATE();
    case 169:
      if (lookahead == '=')
        ADVANCE(37);
      END_STATE();
    case 170:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 171:
      if (lookahead == '<')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 174:
      if (lookahead == '>')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 176:
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 177:
      if (lookahead == '=')
        ADVANCE(145);
      END_STATE();
    case 178:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '&')
        ADVANCE(154);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == 'f')
        ADVANCE(179);
      if (lookahead == 'l')
        ADVANCE(158);
      if (lookahead == 'n')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(160);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == 160)
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'r')
        ADVANCE(82);
      END_STATE();
    case 180:
      if (lookahead == '$')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(160);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == 160)
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
      END_STATE();
    case 181:
      if (lookahead == '(')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(155);
      if (lookahead == 'y')
        ADVANCE(182);
      if (lookahead == 160)
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279)
        SKIP(181);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255))
        ADVANCE(162);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    case 183:
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(20);
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
        SKIP(183);
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
  [7] = {.lex_state = 150},
  [8] = {.lex_state = 150},
  [9] = {.lex_state = 163},
  [10] = {.lex_state = 150},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 164},
  [13] = {.lex_state = 153},
  [14] = {.lex_state = 153},
  [15] = {.lex_state = 150},
  [16] = {.lex_state = 150},
  [17] = {.lex_state = 150},
  [18] = {.lex_state = 150},
  [19] = {.lex_state = 150},
  [20] = {.lex_state = 150},
  [21] = {.lex_state = 150},
  [22] = {.lex_state = 150},
  [23] = {.lex_state = 163},
  [24] = {.lex_state = 150},
  [25] = {.lex_state = 150},
  [26] = {.lex_state = 150},
  [27] = {.lex_state = 164},
  [28] = {.lex_state = 153},
  [29] = {.lex_state = 153},
  [30] = {.lex_state = 153},
  [31] = {.lex_state = 153},
  [32] = {.lex_state = 150},
  [33] = {.lex_state = 164},
  [34] = {.lex_state = 163},
  [35] = {.lex_state = 153},
  [36] = {.lex_state = 150},
  [37] = {.lex_state = 164},
  [38] = {.lex_state = 153},
  [39] = {.lex_state = 178},
  [40] = {.lex_state = 153},
  [41] = {.lex_state = 153},
  [42] = {.lex_state = 153},
  [43] = {.lex_state = 153},
  [44] = {.lex_state = 163},
  [45] = {.lex_state = 150},
  [46] = {.lex_state = 150},
  [47] = {.lex_state = 164},
  [48] = {.lex_state = 163},
  [49] = {.lex_state = 153},
  [50] = {.lex_state = 163},
  [51] = {.lex_state = 153},
  [52] = {.lex_state = 153},
  [53] = {.lex_state = 163},
  [54] = {.lex_state = 164},
  [55] = {.lex_state = 150},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 153},
  [58] = {.lex_state = 153},
  [59] = {.lex_state = 150},
  [60] = {.lex_state = 163},
  [61] = {.lex_state = 150},
  [62] = {.lex_state = 150},
  [63] = {.lex_state = 150},
  [64] = {.lex_state = 150},
  [65] = {.lex_state = 150},
  [66] = {.lex_state = 164},
  [67] = {.lex_state = 163},
  [68] = {.lex_state = 150},
  [69] = {.lex_state = 150},
  [70] = {.lex_state = 150},
  [71] = {.lex_state = 153},
  [72] = {.lex_state = 153},
  [73] = {.lex_state = 153},
  [74] = {.lex_state = 150},
  [75] = {.lex_state = 153},
  [76] = {.lex_state = 150},
  [77] = {.lex_state = 150},
  [78] = {.lex_state = 150},
  [79] = {.lex_state = 180},
  [80] = {.lex_state = 150},
  [81] = {.lex_state = 150},
  [82] = {.lex_state = 150},
  [83] = {.lex_state = 153},
  [84] = {.lex_state = 150},
  [85] = {.lex_state = 164},
  [86] = {.lex_state = 150},
  [87] = {.lex_state = 153},
  [88] = {.lex_state = 150},
  [89] = {.lex_state = 150},
  [90] = {.lex_state = 150},
  [91] = {.lex_state = 153},
  [92] = {.lex_state = 163},
  [93] = {.lex_state = 150},
  [94] = {.lex_state = 164},
  [95] = {.lex_state = 150},
  [96] = {.lex_state = 150},
  [97] = {.lex_state = 150},
  [98] = {.lex_state = 164},
  [99] = {.lex_state = 163},
  [100] = {.lex_state = 153},
  [101] = {.lex_state = 153},
  [102] = {.lex_state = 153},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 150},
  [105] = {.lex_state = 163},
  [106] = {.lex_state = 163},
  [107] = {.lex_state = 150},
  [108] = {.lex_state = 153},
  [109] = {.lex_state = 153},
  [110] = {.lex_state = 150},
  [111] = {.lex_state = 153},
  [112] = {.lex_state = 153},
  [113] = {.lex_state = 153},
  [114] = {.lex_state = 153},
  [115] = {.lex_state = 153},
  [116] = {.lex_state = 153},
  [117] = {.lex_state = 150},
  [118] = {.lex_state = 163},
  [119] = {.lex_state = 150},
  [120] = {.lex_state = 150},
  [121] = {.lex_state = 150},
  [122] = {.lex_state = 153},
  [123] = {.lex_state = 150},
  [124] = {.lex_state = 150},
  [125] = {.lex_state = 150},
  [126] = {.lex_state = 150},
  [127] = {.lex_state = 150},
  [128] = {.lex_state = 150},
  [129] = {.lex_state = 150},
  [130] = {.lex_state = 150},
  [131] = {.lex_state = 150},
  [132] = {.lex_state = 153},
  [133] = {.lex_state = 164},
  [134] = {.lex_state = 163},
  [135] = {.lex_state = 150},
  [136] = {.lex_state = 150},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 150},
  [139] = {.lex_state = 150},
  [140] = {.lex_state = 150},
  [141] = {.lex_state = 150},
  [142] = {.lex_state = 153},
  [143] = {.lex_state = 150},
  [144] = {.lex_state = 150},
  [145] = {.lex_state = 153},
  [146] = {.lex_state = 153},
  [147] = {.lex_state = 153},
  [148] = {.lex_state = 150},
  [149] = {.lex_state = 150},
  [150] = {.lex_state = 150},
  [151] = {.lex_state = 150},
  [152] = {.lex_state = 150},
  [153] = {.lex_state = 150},
  [154] = {.lex_state = 153},
  [155] = {.lex_state = 150},
  [156] = {.lex_state = 181},
  [157] = {.lex_state = 181},
  [158] = {.lex_state = 163},
  [159] = {.lex_state = 153},
  [160] = {.lex_state = 150},
  [161] = {.lex_state = 183},
  [162] = {.lex_state = 150},
  [163] = {.lex_state = 150},
  [164] = {.lex_state = 153},
  [165] = {.lex_state = 150},
  [166] = {.lex_state = 150},
  [167] = {.lex_state = 150},
  [168] = {.lex_state = 150},
  [169] = {.lex_state = 163},
  [170] = {.lex_state = 150},
  [171] = {.lex_state = 153},
  [172] = {.lex_state = 150},
  [173] = {.lex_state = 150},
  [174] = {.lex_state = 150},
  [175] = {.lex_state = 150},
  [176] = {.lex_state = 150},
  [177] = {.lex_state = 153},
  [178] = {.lex_state = 150},
  [179] = {.lex_state = 153},
  [180] = {.lex_state = 150},
  [181] = {.lex_state = 153},
  [182] = {.lex_state = 150},
  [183] = {.lex_state = 153},
  [184] = {.lex_state = 150},
  [185] = {.lex_state = 181},
  [186] = {.lex_state = 153},
  [187] = {.lex_state = 150},
  [188] = {.lex_state = 183},
  [189] = {.lex_state = 150},
  [190] = {.lex_state = 150},
  [191] = {.lex_state = 150},
  [192] = {.lex_state = 153},
  [193] = {.lex_state = 150},
  [194] = {.lex_state = 150},
  [195] = {.lex_state = 150},
  [196] = {.lex_state = 150},
  [197] = {.lex_state = 150},
  [198] = {.lex_state = 150},
  [199] = {.lex_state = 150},
  [200] = {.lex_state = 150},
  [201] = {.lex_state = 150},
  [202] = {.lex_state = 150},
  [203] = {.lex_state = 153},
  [204] = {.lex_state = 150},
  [205] = {.lex_state = 150},
  [206] = {.lex_state = 150},
  [207] = {.lex_state = 150},
  [208] = {.lex_state = 150},
  [209] = {.lex_state = 150},
  [210] = {.lex_state = 150},
  [211] = {.lex_state = 153},
  [212] = {.lex_state = 150},
  [213] = {.lex_state = 150},
  [214] = {.lex_state = 150},
  [215] = {.lex_state = 183},
  [216] = {.lex_state = 153},
  [217] = {.lex_state = 153},
  [218] = {.lex_state = 153},
  [219] = {.lex_state = 150},
  [220] = {.lex_state = 153},
  [221] = {.lex_state = 150},
  [222] = {.lex_state = 150},
  [223] = {.lex_state = 150},
  [224] = {.lex_state = 150},
  [225] = {.lex_state = 150},
  [226] = {.lex_state = 150},
  [227] = {.lex_state = 150},
  [228] = {.lex_state = 150},
  [229] = {.lex_state = 150},
  [230] = {.lex_state = 150},
  [231] = {.lex_state = 150},
  [232] = {.lex_state = 150},
  [233] = {.lex_state = 150},
  [234] = {.lex_state = 150},
  [235] = {.lex_state = 150},
  [236] = {.lex_state = 150},
  [237] = {.lex_state = 150},
  [238] = {.lex_state = 153},
  [239] = {.lex_state = 153},
  [240] = {.lex_state = 150},
  [241] = {.lex_state = 150},
  [242] = {.lex_state = 183},
  [243] = {.lex_state = 150},
  [244] = {.lex_state = 153},
  [245] = {.lex_state = 150},
  [246] = {.lex_state = 153},
  [247] = {.lex_state = 153},
  [248] = {.lex_state = 153},
  [249] = {.lex_state = 150},
  [250] = {.lex_state = 150},
  [251] = {.lex_state = 150},
  [252] = {.lex_state = 150},
  [253] = {.lex_state = 153},
  [254] = {.lex_state = 153},
  [255] = {.lex_state = 150},
  [256] = {.lex_state = 153},
  [257] = {.lex_state = 153},
  [258] = {.lex_state = 150},
  [259] = {.lex_state = 153},
  [260] = {.lex_state = 150},
  [261] = {.lex_state = 150},
  [262] = {.lex_state = 150},
  [263] = {.lex_state = 150},
  [264] = {.lex_state = 183},
  [265] = {.lex_state = 150},
  [266] = {.lex_state = 153},
  [267] = {.lex_state = 153},
  [268] = {.lex_state = 150},
  [269] = {.lex_state = 153},
  [270] = {.lex_state = 153},
  [271] = {.lex_state = 150},
  [272] = {.lex_state = 153},
  [273] = {.lex_state = 153},
  [274] = {.lex_state = 153},
  [275] = {.lex_state = 150},
  [276] = {.lex_state = 150},
  [277] = {.lex_state = 150},
  [278] = {.lex_state = 150},
  [279] = {.lex_state = 150},
  [280] = {.lex_state = 150},
  [281] = {.lex_state = 183},
  [282] = {.lex_state = 153},
  [283] = {.lex_state = 153},
  [284] = {.lex_state = 153},
  [285] = {.lex_state = 150},
  [286] = {.lex_state = 150},
  [287] = {.lex_state = 150},
  [288] = {.lex_state = 150},
  [289] = {.lex_state = 150},
  [290] = {.lex_state = 153},
  [291] = {.lex_state = 150},
  [292] = {.lex_state = 150},
  [293] = {.lex_state = 153},
  [294] = {.lex_state = 150},
  [295] = {.lex_state = 153},
  [296] = {.lex_state = 153},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_statement] = STATE(13),
    [sym_compound_statement] = STATE(14),
    [sym_named_label_statement] = STATE(14),
    [sym_expression_statement] = STATE(14),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(27),
    [aux_sym_program_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(12),
    [anon_sym_QMARK_GT] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_comment] = ACTIONS(10),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_comment] = ACTIONS(10),
  },
  [5] = {
    [sym_statement] = STATE(13),
    [sym_compound_statement] = STATE(14),
    [sym_named_label_statement] = STATE(14),
    [sym_expression_statement] = STATE(14),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(27),
    [aux_sym_program_repeat1] = STATE(30),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_QMARK_GT] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_list] = ACTIONS(40),
    [anon_sym_self] = ACTIONS(40),
    [anon_sym_parent] = ACTIONS(40),
    [anon_sym_static] = ACTIONS(40),
    [anon_sym_BSLASH] = ACTIONS(40),
    [anon_sym_namespace] = ACTIONS(40),
    [anon_sym_DOLLAR] = ACTIONS(40),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(32),
  },
  [7] = {
    [anon_sym_LPAREN] = ACTIONS(42),
    [sym_comment] = ACTIONS(10),
  },
  [8] = {
    [anon_sym_COLON_COLON] = ACTIONS(44),
    [sym_comment] = ACTIONS(10),
  },
  [9] = {
    [sym_namespace_name] = STATE(32),
    [sym_name] = STATE(33),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [10] = {
    [anon_sym_BSLASH] = ACTIONS(46),
    [sym_comment] = ACTIONS(10),
  },
  [11] = {
    [sym_simple_variable] = STATE(36),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [12] = {
    [anon_sym_COLON] = ACTIONS(50),
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(50),
    [anon_sym_STAR_EQ] = ACTIONS(50),
    [anon_sym_SLASH_EQ] = ACTIONS(50),
    [anon_sym_PLUS_EQ] = ACTIONS(50),
    [anon_sym_DASH_EQ] = ACTIONS(50),
    [anon_sym_DOT_EQ] = ACTIONS(50),
    [anon_sym_LT_LT_EQ] = ACTIONS(50),
    [anon_sym_GT_GT_EQ] = ACTIONS(50),
    [anon_sym_AMP_EQ] = ACTIONS(50),
    [anon_sym_CARET_EQ] = ACTIONS(50),
    [anon_sym_PIPE_EQ] = ACTIONS(50),
    [anon_sym_COLON_COLON] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_BSLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(32),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_QMARK_GT] = ACTIONS(52),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_RBRACE] = ACTIONS(52),
    [anon_sym_SEMI] = ACTIONS(52),
    [anon_sym_list] = ACTIONS(52),
    [anon_sym_self] = ACTIONS(52),
    [anon_sym_parent] = ACTIONS(52),
    [anon_sym_static] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(52),
    [anon_sym_namespace] = ACTIONS(52),
    [anon_sym_DOLLAR] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(52),
    [sym_comment] = ACTIONS(32),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_QMARK_GT] = ACTIONS(54),
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(54),
    [anon_sym_list] = ACTIONS(54),
    [anon_sym_self] = ACTIONS(54),
    [anon_sym_parent] = ACTIONS(54),
    [anon_sym_static] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(54),
    [anon_sym_namespace] = ACTIONS(54),
    [anon_sym_DOLLAR] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(32),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(56),
    [sym_comment] = ACTIONS(10),
  },
  [16] = {
    [sym_yield_expression] = STATE(40),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [17] = {
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_DOT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_comment] = ACTIONS(10),
  },
  [18] = {
    [anon_sym_EQ] = ACTIONS(62),
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
    [anon_sym_COLON_COLON] = ACTIONS(68),
    [sym_comment] = ACTIONS(10),
  },
  [21] = {
    [anon_sym_COLON_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(10),
  },
  [22] = {
    [sym_arguments] = STATE(46),
    [anon_sym_COLON_COLON] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [23] = {
    [sym_name] = STATE(47),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [24] = {
    [anon_sym_BSLASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(10),
  },
  [25] = {
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_COLON_COLON] = ACTIONS(70),
    [anon_sym_DASH_GT] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(80),
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
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_yield] = ACTIONS(82),
    [sym_comment] = ACTIONS(10),
  },
  [27] = {
    [aux_sym_namespace_name_repeat1] = STATE(55),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_COLON_COLON] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [28] = {
    [sym_statement] = STATE(57),
    [sym_compound_statement] = STATE(14),
    [sym_named_label_statement] = STATE(14),
    [sym_expression_statement] = STATE(14),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_QMARK_GT] = ACTIONS(94),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_QMARK_GT] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_list] = ACTIONS(96),
    [anon_sym_self] = ACTIONS(96),
    [anon_sym_parent] = ACTIONS(96),
    [anon_sym_static] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_namespace] = ACTIONS(96),
    [anon_sym_DOLLAR] = ACTIONS(96),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(32),
  },
  [30] = {
    [sym_statement] = STATE(57),
    [sym_compound_statement] = STATE(14),
    [sym_named_label_statement] = STATE(14),
    [sym_expression_statement] = STATE(14),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(27),
    [anon_sym_LBRACE] = ACTIONS(16),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [31] = {
    [sym__expression] = STATE(61),
    [sym_assignment_expression] = STATE(62),
    [sym_scoped_property_access_expression] = STATE(63),
    [sym_list_literal] = STATE(64),
    [sym__callable_variable] = STATE(63),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(65),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [32] = {
    [anon_sym_BSLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(10),
  },
  [33] = {
    [aux_sym_namespace_name_repeat1] = STATE(55),
    [anon_sym_BSLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [34] = {
    [sym_namespace_name] = STATE(68),
    [sym_name] = STATE(33),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [35] = {
    [sym__expression] = STATE(69),
    [sym_assignment_expression] = STATE(70),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [36] = {
    [anon_sym_EQ] = ACTIONS(106),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(106),
    [anon_sym_STAR_EQ] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(106),
    [anon_sym_PLUS_EQ] = ACTIONS(106),
    [anon_sym_DASH_EQ] = ACTIONS(106),
    [anon_sym_DOT_EQ] = ACTIONS(106),
    [anon_sym_LT_LT_EQ] = ACTIONS(106),
    [anon_sym_GT_GT_EQ] = ACTIONS(106),
    [anon_sym_AMP_EQ] = ACTIONS(106),
    [anon_sym_CARET_EQ] = ACTIONS(106),
    [anon_sym_PIPE_EQ] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_yield] = ACTIONS(106),
    [sym_comment] = ACTIONS(10),
  },
  [37] = {
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
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_QMARK_GT] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_list] = ACTIONS(110),
    [anon_sym_self] = ACTIONS(110),
    [anon_sym_parent] = ACTIONS(110),
    [anon_sym_static] = ACTIONS(110),
    [anon_sym_BSLASH] = ACTIONS(110),
    [anon_sym_namespace] = ACTIONS(110),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(110),
    [sym_comment] = ACTIONS(32),
  },
  [39] = {
    [sym__expression] = STATE(73),
    [sym_assignment_expression] = STATE(74),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(75),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [anon_sym_from] = ACTIONS(114),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [40] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(78),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [41] = {
    [sym_assignment_expression] = STATE(80),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [42] = {
    [sym_assignment_expression] = STATE(80),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [43] = {
    [sym__expression] = STATE(81),
    [sym_assignment_expression] = STATE(82),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [44] = {
    [sym_simple_variable] = STATE(84),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(85),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [45] = {
    [sym_variadic_unpacking] = STATE(88),
    [aux_sym_arguments_repeat1] = STATE(89),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [46] = {
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [anon_sym_PLUS_EQ] = ACTIONS(124),
    [anon_sym_DASH_EQ] = ACTIONS(124),
    [anon_sym_DOT_EQ] = ACTIONS(124),
    [anon_sym_LT_LT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_AMP_EQ] = ACTIONS(124),
    [anon_sym_CARET_EQ] = ACTIONS(124),
    [anon_sym_PIPE_EQ] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_yield] = ACTIONS(124),
    [sym_comment] = ACTIONS(10),
  },
  [47] = {
    [anon_sym_COLON_COLON] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [48] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(32),
  },
  [49] = {
    [sym__expression] = STATE(90),
    [sym_assignment_expression] = STATE(70),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [50] = {
    [sym_simple_variable] = STATE(93),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [51] = {
    [sym__expression] = STATE(96),
    [sym_assignment_expression] = STATE(97),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_QMARK_GT] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_list] = ACTIONS(136),
    [anon_sym_self] = ACTIONS(136),
    [anon_sym_parent] = ACTIONS(136),
    [anon_sym_static] = ACTIONS(136),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_namespace] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(32),
  },
  [53] = {
    [sym_name] = STATE(98),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [54] = {
    [anon_sym_COLON] = ACTIONS(138),
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
    [anon_sym_COLON_COLON] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_BSLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [55] = {
    [anon_sym_BSLASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(10),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_comment] = ACTIONS(10),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_QMARK_GT] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_list] = ACTIONS(144),
    [anon_sym_self] = ACTIONS(144),
    [anon_sym_parent] = ACTIONS(144),
    [anon_sym_static] = ACTIONS(144),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_namespace] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(144),
    [sym_comment] = ACTIONS(32),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_QMARK_GT] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_list] = ACTIONS(146),
    [anon_sym_self] = ACTIONS(146),
    [anon_sym_parent] = ACTIONS(146),
    [anon_sym_static] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(146),
    [anon_sym_namespace] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(32),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [sym_comment] = ACTIONS(10),
  },
  [60] = {
    [sym_simple_variable] = STATE(36),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [61] = {
    [anon_sym_EQ_GT] = ACTIONS(150),
    [sym_comment] = ACTIONS(10),
  },
  [62] = {
    [sym_yield_expression] = STATE(101),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [63] = {
    [aux_sym_list_literal_repeat1] = STATE(104),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_DOT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_comment] = ACTIONS(10),
  },
  [64] = {
    [aux_sym_list_literal_repeat1] = STATE(104),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_comment] = ACTIONS(10),
  },
  [65] = {
    [anon_sym_COLON_COLON] = ACTIONS(156),
    [sym_comment] = ACTIONS(10),
  },
  [66] = {
    [aux_sym_namespace_name_repeat1] = STATE(55),
    [anon_sym_COLON_COLON] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [67] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(158),
    [sym_comment] = ACTIONS(32),
  },
  [68] = {
    [anon_sym_BSLASH] = ACTIONS(160),
    [sym_comment] = ACTIONS(10),
  },
  [69] = {
    [anon_sym_RBRACE] = ACTIONS(162),
    [sym_comment] = ACTIONS(10),
  },
  [70] = {
    [sym_yield_expression] = STATE(108),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [71] = {
    [sym__expression] = STATE(109),
    [sym_assignment_expression] = STATE(110),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [72] = {
    [sym__expression] = STATE(111),
    [sym_assignment_expression] = STATE(110),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [73] = {
    [anon_sym_list] = ACTIONS(164),
    [anon_sym_EQ_GT] = ACTIONS(166),
    [anon_sym_self] = ACTIONS(164),
    [anon_sym_parent] = ACTIONS(164),
    [anon_sym_static] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(164),
    [anon_sym_namespace] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(164),
    [sym_comment] = ACTIONS(32),
  },
  [74] = {
    [sym_yield_expression] = STATE(113),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [75] = {
    [anon_sym_list] = ACTIONS(168),
    [anon_sym_self] = ACTIONS(168),
    [anon_sym_parent] = ACTIONS(168),
    [anon_sym_static] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(168),
    [anon_sym_namespace] = ACTIONS(168),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(32),
  },
  [76] = {
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_and] = ACTIONS(172),
    [anon_sym_or] = ACTIONS(172),
    [anon_sym_xor] = ACTIONS(172),
    [anon_sym_PIPE_PIPE] = ACTIONS(172),
    [anon_sym_AMP_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_QMARK_QMARK] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_LT_GT] = ACTIONS(172),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(172),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(172),
    [anon_sym_LT_EQ_GT] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_instanceof] = ACTIONS(172),
    [sym_comment] = ACTIONS(10),
  },
  [77] = {
    [sym_yield_expression] = STATE(115),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [78] = {
    [sym_include_expression] = STATE(117),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [79] = {
    [sym_scoped_property_access_expression] = STATE(119),
    [sym__callable_variable] = STATE(119),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(120),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [80] = {
    [anon_sym_yield] = ACTIONS(178),
    [sym_comment] = ACTIONS(10),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(180),
    [sym_comment] = ACTIONS(10),
  },
  [82] = {
    [sym_yield_expression] = STATE(122),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [83] = {
    [sym__expression] = STATE(123),
    [sym_assignment_expression] = STATE(70),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [84] = {
    [sym_arguments] = STATE(124),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(182),
    [anon_sym_STAR_EQ] = ACTIONS(182),
    [anon_sym_SLASH_EQ] = ACTIONS(182),
    [anon_sym_PLUS_EQ] = ACTIONS(182),
    [anon_sym_DASH_EQ] = ACTIONS(182),
    [anon_sym_DOT_EQ] = ACTIONS(182),
    [anon_sym_LT_LT_EQ] = ACTIONS(182),
    [anon_sym_GT_GT_EQ] = ACTIONS(182),
    [anon_sym_AMP_EQ] = ACTIONS(182),
    [anon_sym_CARET_EQ] = ACTIONS(182),
    [anon_sym_PIPE_EQ] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_yield] = ACTIONS(182),
    [sym_comment] = ACTIONS(10),
  },
  [85] = {
    [sym_arguments] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [86] = {
    [anon_sym_EQ] = ACTIONS(189),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(189),
    [anon_sym_PLUS_EQ] = ACTIONS(189),
    [anon_sym_DASH_EQ] = ACTIONS(189),
    [anon_sym_DOT_EQ] = ACTIONS(189),
    [anon_sym_LT_LT_EQ] = ACTIONS(189),
    [anon_sym_GT_GT_EQ] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(189),
    [anon_sym_CARET_EQ] = ACTIONS(189),
    [anon_sym_PIPE_EQ] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_yield] = ACTIONS(189),
    [sym_comment] = ACTIONS(10),
  },
  [87] = {
    [sym__expression] = STATE(125),
    [sym_assignment_expression] = STATE(126),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(191),
    [sym_comment] = ACTIONS(10),
  },
  [89] = {
    [sym_variadic_unpacking] = STATE(128),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(122),
    [sym_comment] = ACTIONS(10),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(195),
    [sym_comment] = ACTIONS(10),
  },
  [91] = {
    [sym__expression] = STATE(130),
    [sym_assignment_expression] = STATE(70),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [92] = {
    [sym_simple_variable] = STATE(36),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [93] = {
    [sym_arguments] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [94] = {
    [sym_arguments] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(197),
    [anon_sym_STAR_EQ] = ACTIONS(197),
    [anon_sym_SLASH_EQ] = ACTIONS(197),
    [anon_sym_PLUS_EQ] = ACTIONS(197),
    [anon_sym_DASH_EQ] = ACTIONS(197),
    [anon_sym_DOT_EQ] = ACTIONS(197),
    [anon_sym_LT_LT_EQ] = ACTIONS(197),
    [anon_sym_GT_GT_EQ] = ACTIONS(197),
    [anon_sym_AMP_EQ] = ACTIONS(197),
    [anon_sym_CARET_EQ] = ACTIONS(197),
    [anon_sym_PIPE_EQ] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_yield] = ACTIONS(197),
    [sym_comment] = ACTIONS(10),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(195),
    [sym_comment] = ACTIONS(10),
  },
  [97] = {
    [sym_yield_expression] = STATE(132),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [98] = {
    [anon_sym_BSLASH] = ACTIONS(199),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [99] = {
    [sym_name] = STATE(133),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [100] = {
    [sym_scoped_property_access_expression] = STATE(135),
    [sym_list_literal] = STATE(136),
    [sym__callable_variable] = STATE(135),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(137),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [101] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(138),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [102] = {
    [sym__expression] = STATE(139),
    [sym_assignment_expression] = STATE(62),
    [sym_scoped_property_access_expression] = STATE(140),
    [sym_list_literal] = STATE(141),
    [sym__callable_variable] = STATE(140),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(65),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [103] = {
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [sym_comment] = ACTIONS(10),
  },
  [104] = {
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(207),
    [sym_comment] = ACTIONS(10),
  },
  [105] = {
    [sym_simple_variable] = STATE(84),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(85),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [106] = {
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(209),
    [sym_comment] = ACTIONS(32),
  },
  [107] = {
    [anon_sym_EQ] = ACTIONS(211),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(211),
    [anon_sym_STAR_EQ] = ACTIONS(211),
    [anon_sym_SLASH_EQ] = ACTIONS(211),
    [anon_sym_PLUS_EQ] = ACTIONS(211),
    [anon_sym_DASH_EQ] = ACTIONS(211),
    [anon_sym_DOT_EQ] = ACTIONS(211),
    [anon_sym_LT_LT_EQ] = ACTIONS(211),
    [anon_sym_GT_GT_EQ] = ACTIONS(211),
    [anon_sym_AMP_EQ] = ACTIONS(211),
    [anon_sym_CARET_EQ] = ACTIONS(211),
    [anon_sym_PIPE_EQ] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_yield] = ACTIONS(211),
    [sym_comment] = ACTIONS(10),
  },
  [108] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(144),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [109] = {
    [anon_sym_list] = ACTIONS(213),
    [anon_sym_self] = ACTIONS(213),
    [anon_sym_parent] = ACTIONS(213),
    [anon_sym_static] = ACTIONS(213),
    [anon_sym_BSLASH] = ACTIONS(213),
    [anon_sym_namespace] = ACTIONS(213),
    [anon_sym_DOLLAR] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(213),
    [sym_comment] = ACTIONS(32),
  },
  [110] = {
    [sym_yield_expression] = STATE(145),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [111] = {
    [anon_sym_list] = ACTIONS(215),
    [anon_sym_self] = ACTIONS(215),
    [anon_sym_parent] = ACTIONS(215),
    [anon_sym_static] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(215),
    [anon_sym_namespace] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(215),
    [sym_comment] = ACTIONS(32),
  },
  [112] = {
    [sym__expression] = STATE(147),
    [sym_assignment_expression] = STATE(110),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [113] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(148),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [114] = {
    [sym__expression] = STATE(149),
    [sym_assignment_expression] = STATE(150),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [115] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(151),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [116] = {
    [sym__expression] = STATE(152),
    [sym_assignment_expression] = STATE(153),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [117] = {
    [sym_include_once_expression] = STATE(155),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [118] = {
    [sym_simple_variable] = STATE(36),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(221),
    [sym_comment] = ACTIONS(32),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_yield] = ACTIONS(223),
    [sym_comment] = ACTIONS(10),
  },
  [120] = {
    [anon_sym_COLON_COLON] = ACTIONS(225),
    [sym_comment] = ACTIONS(10),
  },
  [121] = {
    [sym_array_creation_expression] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_array] = ACTIONS(229),
    [sym_comment] = ACTIONS(10),
  },
  [122] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(162),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [123] = {
    [anon_sym_RBRACE] = ACTIONS(231),
    [sym_comment] = ACTIONS(10),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(233),
    [anon_sym_STAR_EQ] = ACTIONS(233),
    [anon_sym_SLASH_EQ] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(233),
    [anon_sym_DASH_EQ] = ACTIONS(233),
    [anon_sym_DOT_EQ] = ACTIONS(233),
    [anon_sym_LT_LT_EQ] = ACTIONS(233),
    [anon_sym_GT_GT_EQ] = ACTIONS(233),
    [anon_sym_AMP_EQ] = ACTIONS(233),
    [anon_sym_CARET_EQ] = ACTIONS(233),
    [anon_sym_PIPE_EQ] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_yield] = ACTIONS(233),
    [sym_comment] = ACTIONS(10),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(235),
    [sym_comment] = ACTIONS(10),
  },
  [126] = {
    [sym_yield_expression] = STATE(164),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [127] = {
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(237),
    [anon_sym_STAR_EQ] = ACTIONS(237),
    [anon_sym_SLASH_EQ] = ACTIONS(237),
    [anon_sym_PLUS_EQ] = ACTIONS(237),
    [anon_sym_DASH_EQ] = ACTIONS(237),
    [anon_sym_DOT_EQ] = ACTIONS(237),
    [anon_sym_LT_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_GT_EQ] = ACTIONS(237),
    [anon_sym_AMP_EQ] = ACTIONS(237),
    [anon_sym_CARET_EQ] = ACTIONS(237),
    [anon_sym_PIPE_EQ] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_yield] = ACTIONS(237),
    [sym_comment] = ACTIONS(10),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(239),
    [sym_comment] = ACTIONS(10),
  },
  [129] = {
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(241),
    [anon_sym_STAR_EQ] = ACTIONS(241),
    [anon_sym_SLASH_EQ] = ACTIONS(241),
    [anon_sym_PLUS_EQ] = ACTIONS(241),
    [anon_sym_DASH_EQ] = ACTIONS(241),
    [anon_sym_DOT_EQ] = ACTIONS(241),
    [anon_sym_LT_LT_EQ] = ACTIONS(241),
    [anon_sym_GT_GT_EQ] = ACTIONS(241),
    [anon_sym_AMP_EQ] = ACTIONS(241),
    [anon_sym_CARET_EQ] = ACTIONS(241),
    [anon_sym_PIPE_EQ] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_yield] = ACTIONS(241),
    [sym_comment] = ACTIONS(10),
  },
  [130] = {
    [anon_sym_RBRACE] = ACTIONS(243),
    [sym_comment] = ACTIONS(10),
  },
  [131] = {
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
  [132] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(166),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [133] = {
    [anon_sym_BSLASH] = ACTIONS(247),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(32),
  },
  [134] = {
    [sym_simple_variable] = STATE(36),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(37),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [135] = {
    [aux_sym_list_literal_repeat1] = STATE(168),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_comment] = ACTIONS(10),
  },
  [136] = {
    [aux_sym_list_literal_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(249),
    [sym_comment] = ACTIONS(10),
  },
  [137] = {
    [anon_sym_COLON_COLON] = ACTIONS(251),
    [sym_comment] = ACTIONS(10),
  },
  [138] = {
    [sym_include_expression] = STATE(170),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [139] = {
    [anon_sym_EQ_GT] = ACTIONS(253),
    [sym_comment] = ACTIONS(10),
  },
  [140] = {
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_DOT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_comment] = ACTIONS(10),
  },
  [141] = {
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym_comment] = ACTIONS(10),
  },
  [142] = {
    [sym__expression] = STATE(172),
    [sym_assignment_expression] = STATE(62),
    [sym_scoped_property_access_expression] = STATE(173),
    [sym_list_literal] = STATE(174),
    [sym__callable_variable] = STATE(173),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(65),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
    [anon_sym_RPAREN] = ACTIONS(257),
    [sym_comment] = ACTIONS(10),
  },
  [144] = {
    [sym_include_expression] = STATE(175),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [145] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(176),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [146] = {
    [sym__expression] = STATE(177),
    [sym_assignment_expression] = STATE(110),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [147] = {
    [anon_sym_list] = ACTIONS(259),
    [anon_sym_self] = ACTIONS(259),
    [anon_sym_parent] = ACTIONS(259),
    [anon_sym_static] = ACTIONS(259),
    [anon_sym_BSLASH] = ACTIONS(259),
    [anon_sym_namespace] = ACTIONS(259),
    [anon_sym_DOLLAR] = ACTIONS(259),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(259),
    [sym_comment] = ACTIONS(32),
  },
  [148] = {
    [sym_include_expression] = STATE(178),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [149] = {
    [anon_sym_include] = ACTIONS(261),
    [sym_comment] = ACTIONS(10),
  },
  [150] = {
    [sym_yield_expression] = STATE(179),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [151] = {
    [sym_include_expression] = STATE(180),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [152] = {
    [anon_sym_include_once] = ACTIONS(263),
    [sym_comment] = ACTIONS(10),
  },
  [153] = {
    [sym_yield_expression] = STATE(181),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [154] = {
    [sym__expression] = STATE(182),
    [sym_assignment_expression] = STATE(153),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [155] = {
    [sym_require_expression] = STATE(184),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [156] = {
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_yield] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(32),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_yield] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(267),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(267),
    [sym_comment] = ACTIONS(32),
  },
  [158] = {
    [sym_simple_variable] = STATE(84),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(85),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [159] = {
    [sym__expression] = STATE(189),
    [sym_assignment_expression] = STATE(190),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(191),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [160] = {
    [anon_sym_LPAREN] = ACTIONS(275),
    [sym_comment] = ACTIONS(10),
  },
  [161] = {
    [sym_string] = ACTIONS(277),
    [sym_comment] = ACTIONS(10),
  },
  [162] = {
    [sym_include_expression] = STATE(194),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [163] = {
    [sym_arguments] = STATE(195),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [164] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(196),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [165] = {
    [sym_arguments] = STATE(197),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_comment] = ACTIONS(10),
  },
  [166] = {
    [sym_include_expression] = STATE(198),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [167] = {
    [anon_sym_EQ] = ACTIONS(279),
    [anon_sym_COMMA] = ACTIONS(279),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym_comment] = ACTIONS(10),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(281),
    [sym_comment] = ACTIONS(10),
  },
  [169] = {
    [sym_simple_variable] = STATE(84),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(85),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [170] = {
    [sym_include_once_expression] = STATE(200),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [171] = {
    [sym_scoped_property_access_expression] = STATE(201),
    [sym_list_literal] = STATE(202),
    [sym__callable_variable] = STATE(201),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(137),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [172] = {
    [anon_sym_EQ_GT] = ACTIONS(283),
    [sym_comment] = ACTIONS(10),
  },
  [173] = {
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(62),
    [anon_sym_STAR_EQ] = ACTIONS(62),
    [anon_sym_SLASH_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(62),
    [anon_sym_DASH_EQ] = ACTIONS(62),
    [anon_sym_DOT_EQ] = ACTIONS(62),
    [anon_sym_LT_LT_EQ] = ACTIONS(62),
    [anon_sym_GT_GT_EQ] = ACTIONS(62),
    [anon_sym_AMP_EQ] = ACTIONS(62),
    [anon_sym_CARET_EQ] = ACTIONS(62),
    [anon_sym_PIPE_EQ] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [sym_comment] = ACTIONS(10),
  },
  [174] = {
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [sym_comment] = ACTIONS(10),
  },
  [175] = {
    [sym_include_once_expression] = STATE(204),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [176] = {
    [sym_include_expression] = STATE(205),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [177] = {
    [anon_sym_list] = ACTIONS(287),
    [anon_sym_self] = ACTIONS(287),
    [anon_sym_parent] = ACTIONS(287),
    [anon_sym_static] = ACTIONS(287),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_namespace] = ACTIONS(287),
    [anon_sym_DOLLAR] = ACTIONS(287),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(287),
    [sym_comment] = ACTIONS(32),
  },
  [178] = {
    [sym_include_once_expression] = STATE(206),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [179] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(207),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [180] = {
    [sym_include_once_expression] = STATE(208),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [181] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(209),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [182] = {
    [anon_sym_include_once] = ACTIONS(289),
    [sym_comment] = ACTIONS(10),
  },
  [183] = {
    [sym__expression] = STATE(210),
    [sym_assignment_expression] = STATE(153),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [184] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(291),
    [sym_comment] = ACTIONS(10),
  },
  [185] = {
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_yield] = ACTIONS(138),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_BSLASHd_SLASH] = ACTIONS(138),
    [sym_comment] = ACTIONS(32),
  },
  [186] = {
    [sym__expression] = STATE(213),
    [sym_assignment_expression] = STATE(214),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(10),
  },
  [188] = {
    [sym_string] = ACTIONS(295),
    [sym_comment] = ACTIONS(10),
  },
  [189] = {
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [sym_comment] = ACTIONS(10),
  },
  [190] = {
    [sym_yield_expression] = STATE(217),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [191] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(219),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym_comment] = ACTIONS(10),
  },
  [192] = {
    [sym__expression] = STATE(222),
    [sym_assignment_expression] = STATE(223),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(224),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [193] = {
    [anon_sym_LBRACE] = ACTIONS(309),
    [anon_sym_COLON_COLON] = ACTIONS(309),
    [anon_sym_DASH_GT] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [sym_comment] = ACTIONS(10),
  },
  [194] = {
    [sym_include_once_expression] = STATE(225),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [195] = {
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(311),
    [anon_sym_STAR_EQ] = ACTIONS(311),
    [anon_sym_SLASH_EQ] = ACTIONS(311),
    [anon_sym_PLUS_EQ] = ACTIONS(311),
    [anon_sym_DASH_EQ] = ACTIONS(311),
    [anon_sym_DOT_EQ] = ACTIONS(311),
    [anon_sym_LT_LT_EQ] = ACTIONS(311),
    [anon_sym_GT_GT_EQ] = ACTIONS(311),
    [anon_sym_AMP_EQ] = ACTIONS(311),
    [anon_sym_CARET_EQ] = ACTIONS(311),
    [anon_sym_PIPE_EQ] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_yield] = ACTIONS(311),
    [sym_comment] = ACTIONS(10),
  },
  [196] = {
    [sym_include_expression] = STATE(226),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [197] = {
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_DOT_EQ] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_yield] = ACTIONS(313),
    [sym_comment] = ACTIONS(10),
  },
  [198] = {
    [sym_include_once_expression] = STATE(227),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [199] = {
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym_comment] = ACTIONS(10),
  },
  [200] = {
    [sym_require_expression] = STATE(228),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [201] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(10),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_comment] = ACTIONS(10),
  },
  [203] = {
    [sym_scoped_property_access_expression] = STATE(229),
    [sym_list_literal] = STATE(230),
    [sym__callable_variable] = STATE(229),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(137),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [204] = {
    [sym_require_expression] = STATE(231),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [205] = {
    [sym_include_once_expression] = STATE(232),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [206] = {
    [sym_require_expression] = STATE(233),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [207] = {
    [sym_include_expression] = STATE(234),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [208] = {
    [sym_require_expression] = STATE(235),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [209] = {
    [sym_include_expression] = STATE(236),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [210] = {
    [anon_sym_include_once] = ACTIONS(319),
    [sym_comment] = ACTIONS(10),
  },
  [211] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(16),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [212] = {
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_EQ_GT] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_and] = ACTIONS(321),
    [anon_sym_or] = ACTIONS(321),
    [anon_sym_xor] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(321),
    [anon_sym_QMARK_QMARK] = ACTIONS(321),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_LT_GT] = ACTIONS(321),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(321),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(321),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_LT_EQ_GT] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [anon_sym_PLUS] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(321),
    [anon_sym_instanceof] = ACTIONS(321),
    [anon_sym_include] = ACTIONS(323),
    [anon_sym_include_once] = ACTIONS(321),
    [sym_comment] = ACTIONS(10),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_comment] = ACTIONS(10),
  },
  [214] = {
    [sym_yield_expression] = STATE(238),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [215] = {
    [sym_string] = ACTIONS(327),
    [sym_comment] = ACTIONS(10),
  },
  [216] = {
    [sym__expression] = STATE(240),
    [sym_assignment_expression] = STATE(214),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [217] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(241),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [218] = {
    [sym__expression] = STATE(189),
    [sym_assignment_expression] = STATE(190),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(243),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [219] = {
    [anon_sym_COMMA] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym_comment] = ACTIONS(10),
  },
  [220] = {
    [sym__expression] = STATE(213),
    [sym_assignment_expression] = STATE(245),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [221] = {
    [anon_sym_RPAREN] = ACTIONS(335),
    [sym_comment] = ACTIONS(10),
  },
  [222] = {
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [sym_comment] = ACTIONS(10),
  },
  [223] = {
    [sym_yield_expression] = STATE(247),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [224] = {
    [aux_sym_array_creation_expression_repeat1] = STATE(249),
    [anon_sym_COMMA] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(335),
    [sym_comment] = ACTIONS(10),
  },
  [225] = {
    [sym_require_expression] = STATE(250),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [226] = {
    [sym_include_once_expression] = STATE(251),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [227] = {
    [sym_require_expression] = STATE(252),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [228] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(341),
    [sym_comment] = ACTIONS(10),
  },
  [229] = {
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [sym_comment] = ACTIONS(10),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [sym_comment] = ACTIONS(10),
  },
  [231] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(345),
    [sym_comment] = ACTIONS(10),
  },
  [232] = {
    [sym_require_expression] = STATE(255),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [233] = {
    [sym_require_once_expression] = STATE(257),
    [anon_sym_include_once] = ACTIONS(347),
    [sym_comment] = ACTIONS(10),
  },
  [234] = {
    [sym_include_once_expression] = STATE(258),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [235] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(349),
    [sym_comment] = ACTIONS(10),
  },
  [236] = {
    [sym_include_once_expression] = STATE(260),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [237] = {
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_AMP] = ACTIONS(353),
    [anon_sym_EQ_GT] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(351),
    [anon_sym_or] = ACTIONS(351),
    [anon_sym_xor] = ACTIONS(351),
    [anon_sym_PIPE_PIPE] = ACTIONS(351),
    [anon_sym_AMP_AMP] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_CARET] = ACTIONS(351),
    [anon_sym_QMARK_QMARK] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(353),
    [anon_sym_BANG_EQ] = ACTIONS(353),
    [anon_sym_LT_GT] = ACTIONS(351),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(351),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(353),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_LT_EQ] = ACTIONS(353),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [anon_sym_LT_EQ_GT] = ACTIONS(351),
    [anon_sym_LT_LT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_DOT] = ACTIONS(353),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(353),
    [anon_sym_PERCENT] = ACTIONS(351),
    [anon_sym_instanceof] = ACTIONS(351),
    [anon_sym_include] = ACTIONS(353),
    [anon_sym_include_once] = ACTIONS(351),
    [sym_comment] = ACTIONS(10),
  },
  [238] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(261),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [239] = {
    [sym__expression] = STATE(262),
    [sym_assignment_expression] = STATE(214),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [240] = {
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [sym_comment] = ACTIONS(10),
  },
  [241] = {
    [sym_include_expression] = STATE(263),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [242] = {
    [sym_string] = ACTIONS(357),
    [sym_comment] = ACTIONS(10),
  },
  [243] = {
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_comment] = ACTIONS(10),
  },
  [244] = {
    [sym__expression] = STATE(189),
    [sym_assignment_expression] = STATE(190),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(265),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(269),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [245] = {
    [sym_yield_expression] = STATE(266),
    [anon_sym_yield] = ACTIONS(58),
    [sym_comment] = ACTIONS(10),
  },
  [246] = {
    [sym__expression] = STATE(240),
    [sym_assignment_expression] = STATE(245),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(363),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [247] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(268),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [248] = {
    [sym__expression] = STATE(222),
    [sym_assignment_expression] = STATE(223),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(243),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(367),
    [sym_comment] = ACTIONS(10),
  },
  [250] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(369),
    [sym_comment] = ACTIONS(10),
  },
  [251] = {
    [sym_require_expression] = STATE(271),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [252] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(371),
    [sym_comment] = ACTIONS(10),
  },
  [253] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(62),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [254] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(70),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [255] = {
    [sym_require_once_expression] = STATE(257),
    [anon_sym_include_once] = ACTIONS(373),
    [sym_comment] = ACTIONS(10),
  },
  [256] = {
    [sym__expression] = STATE(274),
    [sym_assignment_expression] = STATE(74),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [257] = {
    [anon_sym_list] = ACTIONS(375),
    [anon_sym_EQ_GT] = ACTIONS(375),
    [anon_sym_self] = ACTIONS(375),
    [anon_sym_parent] = ACTIONS(375),
    [anon_sym_static] = ACTIONS(375),
    [anon_sym_BSLASH] = ACTIONS(375),
    [anon_sym_namespace] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(375),
    [sym_comment] = ACTIONS(32),
  },
  [258] = {
    [sym_require_expression] = STATE(275),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [259] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [260] = {
    [sym_require_expression] = STATE(276),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [261] = {
    [sym_include_expression] = STATE(277),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [262] = {
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_comment] = ACTIONS(10),
  },
  [263] = {
    [sym_include_once_expression] = STATE(278),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [264] = {
    [sym_string] = ACTIONS(379),
    [sym_comment] = ACTIONS(10),
  },
  [265] = {
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_comment] = ACTIONS(10),
  },
  [266] = {
    [sym__expression] = STATE(76),
    [sym_assignment_expression] = STATE(77),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_binary_expression] = STATE(279),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [267] = {
    [sym__expression] = STATE(262),
    [sym_assignment_expression] = STATE(245),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [268] = {
    [sym_include_expression] = STATE(280),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [269] = {
    [sym__expression] = STATE(222),
    [sym_assignment_expression] = STATE(223),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_array_element_initializer] = STATE(265),
    [sym_name] = STATE(66),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [270] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(82),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [271] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(385),
    [sym_comment] = ACTIONS(10),
  },
  [272] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(97),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [273] = {
    [sym__expression] = STATE(274),
    [sym_assignment_expression] = STATE(110),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [274] = {
    [anon_sym_list] = ACTIONS(387),
    [anon_sym_EQ_GT] = ACTIONS(387),
    [anon_sym_self] = ACTIONS(387),
    [anon_sym_parent] = ACTIONS(387),
    [anon_sym_static] = ACTIONS(387),
    [anon_sym_BSLASH] = ACTIONS(387),
    [anon_sym_namespace] = ACTIONS(387),
    [anon_sym_DOLLAR] = ACTIONS(387),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(387),
    [sym_comment] = ACTIONS(32),
  },
  [275] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(389),
    [sym_comment] = ACTIONS(10),
  },
  [276] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(391),
    [sym_comment] = ACTIONS(10),
  },
  [277] = {
    [sym_include_once_expression] = STATE(285),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [278] = {
    [sym_require_expression] = STATE(286),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [279] = {
    [sym_include_expression] = STATE(287),
    [anon_sym_include] = ACTIONS(174),
    [sym_comment] = ACTIONS(10),
  },
  [280] = {
    [sym_include_once_expression] = STATE(288),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [281] = {
    [sym_string] = ACTIONS(393),
    [sym_comment] = ACTIONS(10),
  },
  [282] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(126),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [283] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(150),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [284] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(153),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [285] = {
    [sym_require_expression] = STATE(289),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [286] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(395),
    [sym_comment] = ACTIONS(10),
  },
  [287] = {
    [sym_include_once_expression] = STATE(291),
    [anon_sym_include_once] = ACTIONS(219),
    [sym_comment] = ACTIONS(10),
  },
  [288] = {
    [sym_require_expression] = STATE(292),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [289] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(397),
    [sym_comment] = ACTIONS(10),
  },
  [290] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(190),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [291] = {
    [sym_require_expression] = STATE(294),
    [anon_sym_include_once] = ACTIONS(265),
    [sym_comment] = ACTIONS(10),
  },
  [292] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(399),
    [sym_comment] = ACTIONS(10),
  },
  [293] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(214),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [294] = {
    [sym_require_once_expression] = STATE(212),
    [anon_sym_include_once] = ACTIONS(401),
    [sym_comment] = ACTIONS(10),
  },
  [295] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(223),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
  },
  [296] = {
    [sym__expression] = STATE(237),
    [sym_assignment_expression] = STATE(245),
    [sym_scoped_property_access_expression] = STATE(17),
    [sym_list_literal] = STATE(18),
    [sym__callable_variable] = STATE(17),
    [sym_function_call_expression] = STATE(19),
    [sym_scoped_call_expression] = STATE(19),
    [sym__scope_resolution_qualifier] = STATE(20),
    [sym_relative_scope] = STATE(21),
    [sym_qualified_name] = STATE(22),
    [sym_namespace_name_as_prefix] = STATE(23),
    [sym_namespace_name] = STATE(24),
    [sym_member_call_expression] = STATE(19),
    [sym_subscript_expression] = STATE(19),
    [sym_dereferencable_expression] = STATE(25),
    [sym_simple_variable] = STATE(19),
    [sym__variable_name] = STATE(26),
    [sym_name] = STATE(66),
    [anon_sym_list] = ACTIONS(20),
    [anon_sym_self] = ACTIONS(22),
    [anon_sym_parent] = ACTIONS(22),
    [anon_sym_static] = ACTIONS(22),
    [anon_sym_BSLASH] = ACTIONS(24),
    [anon_sym_namespace] = ACTIONS(26),
    [anon_sym_DOLLAR] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK_a_DASHzA_DASHZ_DASH_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
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
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relative_scope, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__callable_variable, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__scope_resolution_qualifier, 1),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 2),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 2),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 2),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_name, 2),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_expression_statement, 2),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_call_expression, 2),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 2),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 2, .fragile = true),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_named_label_statement, 2),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 3),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_compound_statement, 3),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 3),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 3),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 2),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_scoped_property_access_expression, 3, .fragile = true),
  [184] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_scoped_property_access_expression, 3, .fragile = true), SHIFT(45),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 2),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 3),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_name_repeat1, 2),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 4),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_namespace_name_as_prefix, 4),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_variable, 4),
  [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_yield_expression, 3),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 4),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_scoped_call_expression, 4),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variadic_unpacking, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_arguments, 3),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_arguments_repeat1, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_subscript_expression, 4),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_call_expression, 4),
  [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_namespace_name_repeat1, 3),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 5),
  [259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_expression, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [267] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 6),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 3),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_once_expression, 2),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(215),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 2),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 1),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(218),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(221),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(215),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_dereferencable_expression, 6),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_scoped_call_expression, 6),
  [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_member_call_expression, 6),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list_literal, 7),
  [317] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 4),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_expression, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 7),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 3),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(239),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(244),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(246),
  [339] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_list_literal_repeat1, 5),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_require_once_expression, 2),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 3),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 4),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 2),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 7),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_element_initializer, 4),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 5),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_array_creation_expression_repeat1, 3),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_require_once_expression, 2),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_creation_expression, 6),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
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
