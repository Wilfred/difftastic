#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 152
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 11,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH = 13,
  sym_string_literal = 14,
  sym_null_literal = 15,
  aux_sym_SLASH_BSLASH_BSLASH_SLASH = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_AMP_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PERCENT_EQ = 26,
  anon_sym_LT_LT_EQ = 27,
  anon_sym_GT_GT_EQ = 28,
  anon_sym_GT_GT_GT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LT = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_AMP = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_GT_GT_GT = 48,
  anon_sym_QMARK = 49,
  anon_sym_COLON = 50,
  anon_sym_BANG = 51,
  anon_sym_TILDE = 52,
  anon_sym_PLUS_PLUS = 53,
  anon_sym_DASH_DASH = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_AT = 59,
  anon_sym_COMMA = 60,
  anon_sym_open = 61,
  anon_sym_module = 62,
  anon_sym_DOT = 63,
  sym_identifier = 64,
  sym_comment = 65,
  sym_program = 66,
  sym__statement = 67,
  sym__literal = 68,
  sym_integer_literal = 69,
  sym_floating_point_literal = 70,
  sym_boolean_literal = 71,
  sym_character_literal = 72,
  sym__expression = 73,
  sym_assignment_expression = 74,
  sym_binary_expression = 75,
  sym_ternary_expression = 76,
  sym_unary_expression = 77,
  sym_update_expression = 78,
  sym__annotation = 79,
  sym_normal_annotation = 80,
  sym_marker_annotation = 81,
  sym_single_element_annotation = 82,
  sym_element_value_pair_list = 83,
  sym_element_value_pair = 84,
  sym_element_value = 85,
  sym_element_value_array_initializer = 86,
  sym_conditional_expression = 87,
  sym_conditional_or_expression = 88,
  sym_conditional_and_expression = 89,
  sym_inclusive_or_expression = 90,
  sym_exclusive_or_expression = 91,
  sym_and_expression = 92,
  sym_relational_expression = 93,
  sym_equality_expression = 94,
  sym_shift_expression = 95,
  sym_additive_expression = 96,
  sym_multiplicative_expression = 97,
  sym__declaration = 98,
  sym_module_declaration = 99,
  sym_module_identifier = 100,
  sym_package_or_type_name = 101,
  aux_sym_program_repeat1 = 102,
  aux_sym_character_literal_repeat1 = 103,
  aux_sym_element_value_pair_list_repeat1 = 104,
  aux_sym_module_identifier_repeat1 = 105,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = "/\\\\\\n/",
  [sym_string_literal] = "string_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = "/\\\\/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_open] = "open",
  [anon_sym_module] = "module",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_update_expression] = "update_expression",
  [sym__annotation] = "_annotation",
  [sym_normal_annotation] = "normal_annotation",
  [sym_marker_annotation] = "marker_annotation",
  [sym_single_element_annotation] = "single_element_annotation",
  [sym_element_value_pair_list] = "element_value_pair_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym_element_value] = "element_value",
  [sym_element_value_array_initializer] = "element_value_array_initializer",
  [sym_conditional_expression] = "conditional_expression",
  [sym_conditional_or_expression] = "conditional_or_expression",
  [sym_conditional_and_expression] = "conditional_and_expression",
  [sym_inclusive_or_expression] = "inclusive_or_expression",
  [sym_exclusive_or_expression] = "exclusive_or_expression",
  [sym_and_expression] = "and_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_shift_expression] = "shift_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym__declaration] = "_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_module_identifier] = "module_identifier",
  [sym_package_or_type_name] = "package_or_type_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_element_value_pair_list_repeat1] = "element_value_pair_list_repeat1",
  [aux_sym_module_identifier_repeat1] = "module_identifier_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
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
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  [anon_sym_AMP] = {
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
  [anon_sym_PERCENT] = {
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
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_single_element_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_package_or_type_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '\\')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(83);
      if (lookahead == '{')
        ADVANCE(87);
      if (lookahead == '|')
        ADVANCE(88);
      if (lookahead == '}')
        ADVANCE(91);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(89);
      if (lookahead == '|')
        ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 93:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(94);
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(99);
      if (lookahead == '.')
        ADVANCE(100);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(109);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'm')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(127);
      if (lookahead == 'o')
        ADVANCE(131);
      if (lookahead == 't')
        ADVANCE(135);
      if (lookahead == '~')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(93);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(96);
      if (lookahead == '\\')
        ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 97:
      if (lookahead == '\n')
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 99:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '_')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(106);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '_')
        ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 108:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == 'B')
        ADVANCE(111);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(113);
      if (lookahead == '_')
        ADVANCE(114);
      if (lookahead == 'b')
        ADVANCE(111);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(112);
      END_STATE();
    case 113:
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == '_')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == '_')
        ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(103);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'd')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'u')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'l')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 127:
      if (lookahead == 'u')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'l')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 131:
      if (lookahead == 'p')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'e')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'n')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 135:
      if (lookahead == 'r')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'u')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'e')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 139:
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'm')
        ADVANCE(121);
      if (lookahead == 'o')
        ADVANCE(131);
      if (lookahead == '|')
        ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      END_STATE();
    case 140:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 141:
      if (lookahead == '\n')
        SKIP(141);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(146);
      if (lookahead != 0)
        ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(144);
      if (lookahead != 0)
        ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(95);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(100);
      if (lookahead == '/')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(149);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(148);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == 'B')
        ADVANCE(150);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(114);
      if (lookahead == 'b')
        ADVANCE(150);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(152);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(111);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(104);
      if (lookahead == '-')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(106);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == '_')
        ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(152);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 156:
      if (lookahead == '!')
        ADVANCE(140);
      if (lookahead == '%')
        ADVANCE(157);
      if (lookahead == '&')
        ADVANCE(158);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(159);
      if (lookahead == '+')
        ADVANCE(160);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '<')
        ADVANCE(163);
      if (lookahead == '=')
        ADVANCE(165);
      if (lookahead == '>')
        ADVANCE(166);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(169);
      if (lookahead == '|')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 158:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 165:
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 166:
      if (lookahead == '>')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 139},
  [3] = {.lex_state = 139},
  [4] = {.lex_state = 139},
  [5] = {.lex_state = 141},
  [6] = {.lex_state = 139},
  [7] = {.lex_state = 93},
  [8] = {.lex_state = 93},
  [9] = {.lex_state = 147},
  [10] = {.lex_state = 93},
  [11] = {.lex_state = 147},
  [12] = {.lex_state = 93},
  [13] = {.lex_state = 139},
  [14] = {.lex_state = 139},
  [15] = {.lex_state = 139},
  [16] = {.lex_state = 139},
  [17] = {.lex_state = 139},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 139},
  [20] = {.lex_state = 139},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 139},
  [23] = {.lex_state = 141},
  [24] = {.lex_state = 141},
  [25] = {.lex_state = 139},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 139},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 139},
  [32] = {.lex_state = 93},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 93},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 93},
  [40] = {.lex_state = 139},
  [41] = {.lex_state = 93},
  [42] = {.lex_state = 139},
  [43] = {.lex_state = 139},
  [44] = {.lex_state = 141},
  [45] = {.lex_state = 148},
  [46] = {.lex_state = 147},
  [47] = {.lex_state = 139},
  [48] = {.lex_state = 147},
  [49] = {.lex_state = 139},
  [50] = {.lex_state = 139},
  [51] = {.lex_state = 139},
  [52] = {.lex_state = 139},
  [53] = {.lex_state = 139},
  [54] = {.lex_state = 139},
  [55] = {.lex_state = 139},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 139},
  [59] = {.lex_state = 147},
  [60] = {.lex_state = 93},
  [61] = {.lex_state = 139},
  [62] = {.lex_state = 139},
  [63] = {.lex_state = 93},
  [64] = {.lex_state = 93},
  [65] = {.lex_state = 139},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 139},
  [68] = {.lex_state = 147},
  [69] = {.lex_state = 93},
  [70] = {.lex_state = 93},
  [71] = {.lex_state = 93},
  [72] = {.lex_state = 93},
  [73] = {.lex_state = 93},
  [74] = {.lex_state = 93},
  [75] = {.lex_state = 93},
  [76] = {.lex_state = 93},
  [77] = {.lex_state = 139},
  [78] = {.lex_state = 93},
  [79] = {.lex_state = 139},
  [80] = {.lex_state = 139},
  [81] = {.lex_state = 147},
  [82] = {.lex_state = 139},
  [83] = {.lex_state = 139},
  [84] = {.lex_state = 139},
  [85] = {.lex_state = 139},
  [86] = {.lex_state = 139},
  [87] = {.lex_state = 139},
  [88] = {.lex_state = 139},
  [89] = {.lex_state = 139},
  [90] = {.lex_state = 139},
  [91] = {.lex_state = 93},
  [92] = {.lex_state = 139},
  [93] = {.lex_state = 156},
  [94] = {.lex_state = 139},
  [95] = {.lex_state = 139},
  [96] = {.lex_state = 139},
  [97] = {.lex_state = 139},
  [98] = {.lex_state = 139},
  [99] = {.lex_state = 139},
  [100] = {.lex_state = 139},
  [101] = {.lex_state = 139},
  [102] = {.lex_state = 139},
  [103] = {.lex_state = 156},
  [104] = {.lex_state = 156},
  [105] = {.lex_state = 139},
  [106] = {.lex_state = 139},
  [107] = {.lex_state = 147},
  [108] = {.lex_state = 93},
  [109] = {.lex_state = 93},
  [110] = {.lex_state = 93},
  [111] = {.lex_state = 139},
  [112] = {.lex_state = 139},
  [113] = {.lex_state = 93},
  [114] = {.lex_state = 93},
  [115] = {.lex_state = 93},
  [116] = {.lex_state = 93},
  [117] = {.lex_state = 93},
  [118] = {.lex_state = 93},
  [119] = {.lex_state = 93},
  [120] = {.lex_state = 93},
  [121] = {.lex_state = 93},
  [122] = {.lex_state = 93},
  [123] = {.lex_state = 139},
  [124] = {.lex_state = 139},
  [125] = {.lex_state = 93},
  [126] = {.lex_state = 93},
  [127] = {.lex_state = 93},
  [128] = {.lex_state = 93},
  [129] = {.lex_state = 93},
  [130] = {.lex_state = 93},
  [131] = {.lex_state = 93},
  [132] = {.lex_state = 139},
  [133] = {.lex_state = 139},
  [134] = {.lex_state = 139},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 139},
  [137] = {.lex_state = 139},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 156},
  [140] = {.lex_state = 156},
  [141] = {.lex_state = 156},
  [142] = {.lex_state = 139},
  [143] = {.lex_state = 139},
  [144] = {.lex_state = 139},
  [145] = {.lex_state = 139},
  [146] = {.lex_state = 139},
  [147] = {.lex_state = 139},
  [148] = {.lex_state = 93},
  [149] = {.lex_state = 93},
  [150] = {.lex_state = 139},
  [151] = {.lex_state = 139},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(12),
    [sym__statement] = STATE(13),
    [sym__literal] = STATE(14),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [sym__annotation] = STATE(18),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_single_element_annotation] = STATE(19),
    [sym__declaration] = STATE(14),
    [sym_module_declaration] = STATE(20),
    [aux_sym_program_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [sym_comment] = ACTIONS(34),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [sym_comment] = ACTIONS(34),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(24),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(44),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [sym_comment] = ACTIONS(34),
  },
  [7] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [8] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [9] = {
    [sym_package_or_type_name] = STATE(28),
    [sym_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(52),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_module_identifier] = STATE(31),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(58),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(64),
    [anon_sym_DASH_EQ] = ACTIONS(64),
    [anon_sym_STAR_EQ] = ACTIONS(64),
    [anon_sym_SLASH_EQ] = ACTIONS(64),
    [anon_sym_AMP_EQ] = ACTIONS(64),
    [anon_sym_PIPE_EQ] = ACTIONS(64),
    [anon_sym_CARET_EQ] = ACTIONS(64),
    [anon_sym_PERCENT_EQ] = ACTIONS(64),
    [anon_sym_LT_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_PLUS_EQ] = ACTIONS(86),
    [anon_sym_DASH_EQ] = ACTIONS(86),
    [anon_sym_STAR_EQ] = ACTIONS(86),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [anon_sym_AMP_EQ] = ACTIONS(86),
    [anon_sym_PIPE_EQ] = ACTIONS(86),
    [anon_sym_CARET_EQ] = ACTIONS(86),
    [anon_sym_PERCENT_EQ] = ACTIONS(86),
    [anon_sym_LT_LT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [anon_sym_BANG_EQ] = ACTIONS(86),
    [anon_sym_AMP_AMP] = ACTIONS(86),
    [anon_sym_PIPE_PIPE] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_CARET] = ACTIONS(88),
    [anon_sym_PERCENT] = ACTIONS(88),
    [anon_sym_LT_LT] = ACTIONS(88),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_GT_GT_GT] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_PLUS_PLUS] = ACTIONS(86),
    [anon_sym_DASH_DASH] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_LT_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(90),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_LT] = ACTIONS(92),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_AMP_AMP] = ACTIONS(90),
    [anon_sym_PIPE_PIPE] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [anon_sym_STAR] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_AMP] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_CARET] = ACTIONS(92),
    [anon_sym_PERCENT] = ACTIONS(92),
    [anon_sym_LT_LT] = ACTIONS(92),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_GT_GT_GT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_PLUS_PLUS] = ACTIONS(90),
    [anon_sym_DASH_DASH] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_open] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(52),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_open] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(96),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(98),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [sym__statement] = STATE(42),
    [sym__literal] = STATE(14),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(15),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [sym__annotation] = STATE(18),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_single_element_annotation] = STATE(19),
    [sym__declaration] = STATE(14),
    [sym_module_declaration] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [sym_comment] = ACTIONS(34),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_COMMA] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [anon_sym_SQUOTE] = ACTIONS(104),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(104),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(104),
    [sym_comment] = ACTIONS(46),
  },
  [24] = {
    [anon_sym_SQUOTE] = ACTIONS(106),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(46),
  },
  [25] = {
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PLUS_EQ] = ACTIONS(110),
    [anon_sym_DASH_EQ] = ACTIONS(110),
    [anon_sym_STAR_EQ] = ACTIONS(110),
    [anon_sym_SLASH_EQ] = ACTIONS(110),
    [anon_sym_AMP_EQ] = ACTIONS(110),
    [anon_sym_PIPE_EQ] = ACTIONS(110),
    [anon_sym_CARET_EQ] = ACTIONS(110),
    [anon_sym_PERCENT_EQ] = ACTIONS(110),
    [anon_sym_LT_LT_EQ] = ACTIONS(110),
    [anon_sym_GT_GT_EQ] = ACTIONS(110),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(112),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_EQ_EQ] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(110),
    [anon_sym_LT_EQ] = ACTIONS(110),
    [anon_sym_BANG_EQ] = ACTIONS(110),
    [anon_sym_AMP_AMP] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_GT_GT_GT] = ACTIONS(112),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PLUS_EQ] = ACTIONS(114),
    [anon_sym_DASH_EQ] = ACTIONS(114),
    [anon_sym_STAR_EQ] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(114),
    [anon_sym_AMP_EQ] = ACTIONS(114),
    [anon_sym_PIPE_EQ] = ACTIONS(114),
    [anon_sym_CARET_EQ] = ACTIONS(114),
    [anon_sym_PERCENT_EQ] = ACTIONS(114),
    [anon_sym_LT_LT_EQ] = ACTIONS(114),
    [anon_sym_GT_GT_EQ] = ACTIONS(114),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_PIPE_PIPE] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_LT_LT] = ACTIONS(116),
    [anon_sym_GT_GT] = ACTIONS(116),
    [anon_sym_GT_GT_GT] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_open] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_open] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [sym_module_identifier] = STATE(47),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [aux_sym_module_identifier_repeat1] = STATE(49),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_decimal_integer_literal] = ACTIONS(134),
    [sym_hex_integer_literal] = ACTIONS(134),
    [sym_octal_integer_literal] = ACTIONS(134),
    [sym_binary_integer_literal] = ACTIONS(134),
    [sym_decimal_floating_point_literal] = ACTIONS(134),
    [sym_hex_floating_point_literal] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [sym_string_literal] = ACTIONS(132),
    [sym_null_literal] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_PLUS_PLUS] = ACTIONS(132),
    [anon_sym_DASH_DASH] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_open] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(132),
    [sym_comment] = ACTIONS(34),
  },
  [33] = {
    [sym__expression] = STATE(50),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [sym__expression] = STATE(58),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [anon_sym_SEMI] = ACTIONS(114),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PLUS_EQ] = ACTIONS(114),
    [anon_sym_DASH_EQ] = ACTIONS(114),
    [anon_sym_STAR_EQ] = ACTIONS(114),
    [anon_sym_SLASH_EQ] = ACTIONS(114),
    [anon_sym_AMP_EQ] = ACTIONS(114),
    [anon_sym_PIPE_EQ] = ACTIONS(114),
    [anon_sym_CARET_EQ] = ACTIONS(114),
    [anon_sym_PERCENT_EQ] = ACTIONS(114),
    [anon_sym_LT_LT_EQ] = ACTIONS(114),
    [anon_sym_GT_GT_EQ] = ACTIONS(114),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_EQ_EQ] = ACTIONS(114),
    [anon_sym_GT_EQ] = ACTIONS(114),
    [anon_sym_LT_EQ] = ACTIONS(114),
    [anon_sym_BANG_EQ] = ACTIONS(114),
    [anon_sym_AMP_AMP] = ACTIONS(114),
    [anon_sym_PIPE_PIPE] = ACTIONS(114),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_LT_LT] = ACTIONS(116),
    [anon_sym_GT_GT] = ACTIONS(116),
    [anon_sym_GT_GT_GT] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(114),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [anon_sym_module] = ACTIONS(142),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_comment] = ACTIONS(34),
  },
  [43] = {
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [anon_sym_SQUOTE] = ACTIONS(148),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(148),
    [sym_comment] = ACTIONS(46),
  },
  [45] = {
    [sym__literal] = STATE(63),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(64),
    [sym_element_value_pair] = STATE(65),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [sym_identifier] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_PLUS_EQ] = ACTIONS(64),
    [anon_sym_DASH_EQ] = ACTIONS(64),
    [anon_sym_STAR_EQ] = ACTIONS(64),
    [anon_sym_SLASH_EQ] = ACTIONS(64),
    [anon_sym_AMP_EQ] = ACTIONS(64),
    [anon_sym_PIPE_EQ] = ACTIONS(64),
    [anon_sym_CARET_EQ] = ACTIONS(64),
    [anon_sym_PERCENT_EQ] = ACTIONS(64),
    [anon_sym_LT_LT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_LT_LT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_GT_GT_GT] = ACTIONS(172),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [57] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(176),
    [anon_sym_DASH_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [anon_sym_AMP_EQ] = ACTIONS(176),
    [anon_sym_PIPE_EQ] = ACTIONS(176),
    [anon_sym_CARET_EQ] = ACTIONS(176),
    [anon_sym_PERCENT_EQ] = ACTIONS(176),
    [anon_sym_LT_LT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym_module_identifier] = STATE(77),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_decimal_integer_literal] = ACTIONS(200),
    [sym_hex_integer_literal] = ACTIONS(200),
    [sym_octal_integer_literal] = ACTIONS(200),
    [sym_binary_integer_literal] = ACTIONS(200),
    [sym_decimal_floating_point_literal] = ACTIONS(200),
    [sym_hex_floating_point_literal] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(198),
    [anon_sym_false] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [sym_string_literal] = ACTIONS(198),
    [sym_null_literal] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_PLUS_PLUS] = ACTIONS(198),
    [anon_sym_DASH_DASH] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_open] = ACTIONS(198),
    [anon_sym_module] = ACTIONS(198),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_open] = ACTIONS(204),
    [anon_sym_module] = ACTIONS(204),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(208),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(82),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(214),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_open] = ACTIONS(216),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym__expression] = STATE(84),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [sym__expression] = STATE(85),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [sym__expression] = STATE(86),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym__expression] = STATE(87),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym__expression] = STATE(88),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(89),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym__expression] = STATE(90),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__literal] = STATE(92),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(93),
    [sym__annotation] = STATE(92),
    [sym_normal_annotation] = STATE(19),
    [sym_marker_annotation] = STATE(19),
    [sym_single_element_annotation] = STATE(19),
    [sym_element_value] = STATE(94),
    [sym_element_value_array_initializer] = STATE(92),
    [sym_conditional_expression] = STATE(92),
    [sym_conditional_or_expression] = STATE(95),
    [sym_conditional_and_expression] = STATE(96),
    [sym_inclusive_or_expression] = STATE(97),
    [sym_exclusive_or_expression] = STATE(98),
    [sym_and_expression] = STATE(99),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_COMMA] = ACTIONS(226),
    [anon_sym_open] = ACTIONS(226),
    [anon_sym_module] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_open] = ACTIONS(228),
    [anon_sym_module] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym_element_value_pair] = STATE(106),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_COMMA] = ACTIONS(234),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(176),
    [anon_sym_DASH_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [anon_sym_AMP_EQ] = ACTIONS(176),
    [anon_sym_PIPE_EQ] = ACTIONS(176),
    [anon_sym_CARET_EQ] = ACTIONS(176),
    [anon_sym_PERCENT_EQ] = ACTIONS(176),
    [anon_sym_LT_LT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(176),
    [anon_sym_DASH_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [anon_sym_AMP_EQ] = ACTIONS(176),
    [anon_sym_PIPE_EQ] = ACTIONS(176),
    [anon_sym_CARET_EQ] = ACTIONS(176),
    [anon_sym_PERCENT_EQ] = ACTIONS(176),
    [anon_sym_LT_LT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_PLUS_EQ] = ACTIONS(240),
    [anon_sym_DASH_EQ] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(240),
    [anon_sym_SLASH_EQ] = ACTIONS(240),
    [anon_sym_AMP_EQ] = ACTIONS(240),
    [anon_sym_PIPE_EQ] = ACTIONS(240),
    [anon_sym_CARET_EQ] = ACTIONS(240),
    [anon_sym_PERCENT_EQ] = ACTIONS(240),
    [anon_sym_LT_LT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_EQ_EQ] = ACTIONS(68),
    [anon_sym_GT_EQ] = ACTIONS(68),
    [anon_sym_LT_EQ] = ACTIONS(68),
    [anon_sym_BANG_EQ] = ACTIONS(68),
    [anon_sym_AMP_AMP] = ACTIONS(70),
    [anon_sym_PIPE_PIPE] = ACTIONS(72),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [sym__expression] = STATE(111),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ] = ACTIONS(252),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_GT_GT_GT] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_COMMA] = ACTIONS(254),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_COMMA] = ACTIONS(260),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [anon_sym_AMP_AMP] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [anon_sym_AMP_AMP] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [anon_sym_AMP_AMP] = ACTIONS(276),
    [anon_sym_PIPE_PIPE] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(276),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(276),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(282),
    [anon_sym_BANG_EQ] = ACTIONS(282),
    [anon_sym_AMP_AMP] = ACTIONS(284),
    [anon_sym_PIPE_PIPE] = ACTIONS(284),
    [anon_sym_PIPE] = ACTIONS(286),
    [anon_sym_CARET] = ACTIONS(284),
    [anon_sym_QMARK] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [anon_sym_EQ_EQ] = ACTIONS(288),
    [anon_sym_BANG_EQ] = ACTIONS(288),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [anon_sym_LT] = ACTIONS(290),
    [anon_sym_EQ_EQ] = ACTIONS(292),
    [anon_sym_BANG_EQ] = ACTIONS(292),
    [anon_sym_AMP_AMP] = ACTIONS(292),
    [anon_sym_PIPE_PIPE] = ACTIONS(292),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_CARET] = ACTIONS(292),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
  },
  [103] = {
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(300),
    [anon_sym_BANG_EQ] = ACTIONS(300),
    [anon_sym_AMP_AMP] = ACTIONS(300),
    [anon_sym_PIPE_PIPE] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_GT_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(300),
    [anon_sym_QMARK] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [anon_sym_LT] = ACTIONS(304),
    [anon_sym_EQ_EQ] = ACTIONS(306),
    [anon_sym_BANG_EQ] = ACTIONS(306),
    [anon_sym_AMP_AMP] = ACTIONS(306),
    [anon_sym_PIPE_PIPE] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(306),
    [anon_sym_GT_GT] = ACTIONS(304),
    [anon_sym_GT_GT_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [anon_sym_EQ] = ACTIONS(206),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym_element_value_pair] = STATE(123),
    [sym_identifier] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(25),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym__expression] = STATE(26),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_PLUS_EQ] = ACTIONS(316),
    [anon_sym_DASH_EQ] = ACTIONS(316),
    [anon_sym_STAR_EQ] = ACTIONS(316),
    [anon_sym_SLASH_EQ] = ACTIONS(316),
    [anon_sym_AMP_EQ] = ACTIONS(316),
    [anon_sym_PIPE_EQ] = ACTIONS(316),
    [anon_sym_CARET_EQ] = ACTIONS(316),
    [anon_sym_PERCENT_EQ] = ACTIONS(316),
    [anon_sym_LT_LT_EQ] = ACTIONS(316),
    [anon_sym_GT_GT_EQ] = ACTIONS(316),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(112),
    [anon_sym_EQ_EQ] = ACTIONS(110),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(110),
    [anon_sym_AMP_AMP] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(112),
    [anon_sym_PERCENT] = ACTIONS(112),
    [anon_sym_LT_LT] = ACTIONS(112),
    [anon_sym_GT_GT] = ACTIONS(112),
    [anon_sym_GT_GT_GT] = ACTIONS(112),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym_unary_expression] = STATE(93),
    [sym_conditional_and_expression] = STATE(132),
    [sym_inclusive_or_expression] = STATE(97),
    [sym_exclusive_or_expression] = STATE(98),
    [sym_and_expression] = STATE(99),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(133),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym_unary_expression] = STATE(93),
    [sym_inclusive_or_expression] = STATE(134),
    [sym_exclusive_or_expression] = STATE(98),
    [sym_and_expression] = STATE(99),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym_unary_expression] = STATE(93),
    [sym_exclusive_or_expression] = STATE(135),
    [sym_and_expression] = STATE(99),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym_unary_expression] = STATE(93),
    [sym_and_expression] = STATE(136),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym_unary_expression] = STATE(93),
    [sym_shift_expression] = STATE(137),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym_unary_expression] = STATE(93),
    [sym_relational_expression] = STATE(138),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [sym_unary_expression] = STATE(93),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym_unary_expression] = STATE(93),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [sym_unary_expression] = STATE(141),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_PLUS_EQ] = ACTIONS(240),
    [anon_sym_DASH_EQ] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(240),
    [anon_sym_SLASH_EQ] = ACTIONS(240),
    [anon_sym_AMP_EQ] = ACTIONS(240),
    [anon_sym_PIPE_EQ] = ACTIONS(240),
    [anon_sym_CARET_EQ] = ACTIONS(240),
    [anon_sym_PERCENT_EQ] = ACTIONS(240),
    [anon_sym_LT_LT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(142),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(143),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [sym__expression] = STATE(144),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(145),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(146),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__expression] = STATE(147),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(140),
    [anon_sym_DASH_DASH] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_COMMA] = ACTIONS(328),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(176),
    [anon_sym_DASH_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [anon_sym_AMP_EQ] = ACTIONS(176),
    [anon_sym_PIPE_EQ] = ACTIONS(176),
    [anon_sym_CARET_EQ] = ACTIONS(176),
    [anon_sym_PERCENT_EQ] = ACTIONS(176),
    [anon_sym_LT_LT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(330),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [anon_sym_AMP_AMP] = ACTIONS(332),
    [anon_sym_PIPE_PIPE] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [anon_sym_AMP_AMP] = ACTIONS(334),
    [anon_sym_PIPE_PIPE] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(338),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [anon_sym_LT] = ACTIONS(342),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_PIPE] = ACTIONS(342),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(294),
    [anon_sym_GT_GT] = ACTIONS(296),
    [anon_sym_GT_GT_GT] = ACTIONS(294),
    [anon_sym_QMARK] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_COMMA] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_EQ_EQ] = ACTIONS(346),
    [anon_sym_BANG_EQ] = ACTIONS(346),
    [anon_sym_AMP_AMP] = ACTIONS(348),
    [anon_sym_PIPE_PIPE] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(348),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_PIPE_PIPE] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_CARET] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(352),
    [anon_sym_GT_GT_GT] = ACTIONS(354),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [anon_sym_BANG_EQ] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(356),
    [anon_sym_GT_GT_GT] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_LT] = ACTIONS(360),
    [anon_sym_EQ_EQ] = ACTIONS(362),
    [anon_sym_BANG_EQ] = ACTIONS(362),
    [anon_sym_AMP_AMP] = ACTIONS(362),
    [anon_sym_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_CARET] = ACTIONS(362),
    [anon_sym_PERCENT] = ACTIONS(362),
    [anon_sym_LT_LT] = ACTIONS(362),
    [anon_sym_GT_GT] = ACTIONS(360),
    [anon_sym_GT_GT_GT] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_COMMA] = ACTIONS(362),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
    [anon_sym_EQ] = ACTIONS(314),
    [anon_sym_PLUS_EQ] = ACTIONS(316),
    [anon_sym_DASH_EQ] = ACTIONS(316),
    [anon_sym_STAR_EQ] = ACTIONS(316),
    [anon_sym_SLASH_EQ] = ACTIONS(316),
    [anon_sym_AMP_EQ] = ACTIONS(316),
    [anon_sym_PIPE_EQ] = ACTIONS(316),
    [anon_sym_CARET_EQ] = ACTIONS(316),
    [anon_sym_PERCENT_EQ] = ACTIONS(316),
    [anon_sym_LT_LT_EQ] = ACTIONS(316),
    [anon_sym_GT_GT_EQ] = ACTIONS(316),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_GT_EQ] = ACTIONS(170),
    [anon_sym_LT_EQ] = ACTIONS(170),
    [anon_sym_BANG_EQ] = ACTIONS(170),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_PLUS_EQ] = ACTIONS(170),
    [anon_sym_DASH_EQ] = ACTIONS(170),
    [anon_sym_STAR_EQ] = ACTIONS(170),
    [anon_sym_SLASH_EQ] = ACTIONS(170),
    [anon_sym_AMP_EQ] = ACTIONS(170),
    [anon_sym_PIPE_EQ] = ACTIONS(170),
    [anon_sym_CARET_EQ] = ACTIONS(170),
    [anon_sym_PERCENT_EQ] = ACTIONS(170),
    [anon_sym_LT_LT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_PLUS_EQ] = ACTIONS(176),
    [anon_sym_DASH_EQ] = ACTIONS(176),
    [anon_sym_STAR_EQ] = ACTIONS(176),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [anon_sym_AMP_EQ] = ACTIONS(176),
    [anon_sym_PIPE_EQ] = ACTIONS(176),
    [anon_sym_CARET_EQ] = ACTIONS(176),
    [anon_sym_PERCENT_EQ] = ACTIONS(176),
    [anon_sym_LT_LT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_AMP_AMP] = ACTIONS(182),
    [anon_sym_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_LT_LT] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_GT_GT_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(376),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym_unary_expression] = STATE(93),
    [sym_conditional_expression] = STATE(150),
    [sym_conditional_or_expression] = STATE(95),
    [sym_conditional_and_expression] = STATE(96),
    [sym_inclusive_or_expression] = STATE(97),
    [sym_exclusive_or_expression] = STATE(98),
    [sym_and_expression] = STATE(99),
    [sym_relational_expression] = STATE(100),
    [sym_equality_expression] = STATE(101),
    [sym_shift_expression] = STATE(102),
    [sym_additive_expression] = STATE(103),
    [sym_multiplicative_expression] = STATE(104),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym__expression] = STATE(151),
    [sym_assignment_expression] = STATE(16),
    [sym_binary_expression] = STATE(16),
    [sym_ternary_expression] = STATE(16),
    [sym_unary_expression] = STATE(17),
    [sym_update_expression] = STATE(16),
    [anon_sym_BANG] = ACTIONS(244),
    [anon_sym_TILDE] = ACTIONS(244),
    [anon_sym_PLUS_PLUS] = ACTIONS(246),
    [anon_sym_DASH_DASH] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_PLUS_EQ] = ACTIONS(240),
    [anon_sym_DASH_EQ] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(240),
    [anon_sym_SLASH_EQ] = ACTIONS(240),
    [anon_sym_AMP_EQ] = ACTIONS(240),
    [anon_sym_PIPE_EQ] = ACTIONS(240),
    [anon_sym_CARET_EQ] = ACTIONS(240),
    [anon_sym_PERCENT_EQ] = ACTIONS(240),
    [anon_sym_LT_LT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(364),
    [anon_sym_PIPE_PIPE] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_DASH] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_LT_LT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(374),
    [anon_sym_PLUS_PLUS] = ACTIONS(84),
    [anon_sym_DASH_DASH] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 3),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
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
