#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 60
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
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
  anon_sym_NUL = 16,
  anon_sym_SOH = 17,
  anon_sym_STX = 18,
  anon_sym_ETX = 19,
  anon_sym_EOT = 20,
  anon_sym_ENQ = 21,
  anon_sym_ACK = 22,
  anon_sym_BEL = 23,
  anon_sym_BS = 24,
  anon_sym_TAB = 25,
  anon_sym_LF = 26,
  anon_sym_VT = 27,
  anon_sym_CR = 28,
  anon_sym_SO = 29,
  anon_sym_SI = 30,
  anon_sym_DLE = 31,
  anon_sym_NAK = 32,
  anon_sym_SYN = 33,
  anon_sym_ETB = 34,
  anon_sym_CAN = 35,
  anon_sym_EM = 36,
  anon_sym_SUB = 37,
  anon_sym_ESC = 38,
  anon_sym_FS = 39,
  anon_sym_GS = 40,
  anon_sym_RS = 41,
  anon_sym_US = 42,
  sym_space = 43,
  sym_horizontal_tab = 44,
  aux_sym_SLASH_BSLASH_BSLASH_SLASH = 45,
  anon_sym_u = 46,
  anon_sym_t = 47,
  anon_sym_n = 48,
  anon_sym_r = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH = 51,
  anon_sym_EQ = 52,
  anon_sym_PLUS_EQ = 53,
  anon_sym_DASH_EQ = 54,
  anon_sym_STAR_EQ = 55,
  anon_sym_SLASH_EQ = 56,
  anon_sym_AMP_EQ = 57,
  anon_sym_PIPE_EQ = 58,
  anon_sym_CARET_EQ = 59,
  anon_sym_PERCENT_EQ = 60,
  anon_sym_LT_LT_EQ = 61,
  anon_sym_GT_GT_EQ = 62,
  anon_sym_GT_GT_GT_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_LT = 65,
  anon_sym_EQ_EQ = 66,
  anon_sym_GT_EQ = 67,
  anon_sym_LT_EQ = 68,
  anon_sym_BANG_EQ = 69,
  anon_sym_AMP_AMP = 70,
  anon_sym_PIPE_PIPE = 71,
  anon_sym_PLUS = 72,
  anon_sym_DASH = 73,
  anon_sym_STAR = 74,
  anon_sym_SLASH = 75,
  anon_sym_AMP = 76,
  anon_sym_PIPE = 77,
  anon_sym_CARET = 78,
  anon_sym_PERCENT = 79,
  anon_sym_LT_LT = 80,
  anon_sym_GT_GT = 81,
  anon_sym_GT_GT_GT = 82,
  anon_sym_QMARK = 83,
  anon_sym_COLON = 84,
  anon_sym_BANG = 85,
  anon_sym_TILDE = 86,
  anon_sym_PLUS_PLUS = 87,
  anon_sym_DASH_DASH = 88,
  anon_sym_LPAREN = 89,
  anon_sym_RPAREN = 90,
  anon_sym_LBRACE = 91,
  anon_sym_RBRACE = 92,
  anon_sym_elseif = 93,
  anon_sym_else = 94,
  anon_sym_byte = 95,
  anon_sym_short = 96,
  anon_sym_int = 97,
  anon_sym_long = 98,
  anon_sym_char = 99,
  anon_sym_float = 100,
  anon_sym_double = 101,
  sym_identifier = 102,
  sym_comment = 103,
  sym_program = 104,
  sym__statement = 105,
  sym__literal = 106,
  sym_integer_literal = 107,
  sym_floating_point_literal = 108,
  sym_boolean_literal = 109,
  sym_character_literal = 110,
  sym__expression = 111,
  sym_assignment_expression = 112,
  sym_binary_expression = 113,
  sym_ternary_expression = 114,
  sym_unary_expression = 115,
  sym_update_expression = 116,
  aux_sym_program_repeat1 = 117,
  aux_sym_character_literal_repeat1 = 118,
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
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_TAB] = "TAB",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_NAK] = "NAK",
  [anon_sym_SYN] = "SYN",
  [anon_sym_ETB] = "ETB",
  [anon_sym_CAN] = "CAN",
  [anon_sym_EM] = "EM",
  [anon_sym_SUB] = "SUB",
  [anon_sym_ESC] = "ESC",
  [anon_sym_FS] = "FS",
  [anon_sym_GS] = "GS",
  [anon_sym_RS] = "RS",
  [anon_sym_US] = "US",
  [sym_space] = "space",
  [sym_horizontal_tab] = "horizontal_tab",
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = "/\\\\/",
  [anon_sym_u] = "u",
  [anon_sym_t] = "t",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH] = "/[0-3]/",
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
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
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
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
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
  [anon_sym_NUL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BEL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NAK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ETB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CAN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ESC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_US] = {
    .visible = true,
    .named = false,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal_tab] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH] = {
    .visible = false,
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
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
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
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == '0')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(58);
      if (lookahead == ';')
        ADVANCE(59);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(72);
      if (lookahead == 'A')
        ADVANCE(73);
      if (lookahead == 'B')
        ADVANCE(76);
      if (lookahead == 'C')
        ADVANCE(80);
      if (lookahead == 'D')
        ADVANCE(84);
      if (lookahead == 'E')
        ADVANCE(87);
      if (lookahead == 'F')
        ADVANCE(98);
      if (lookahead == 'G')
        ADVANCE(100);
      if (lookahead == 'H')
        ADVANCE(102);
      if (lookahead == 'L')
        ADVANCE(104);
      if (lookahead == 'N')
        ADVANCE(106);
      if (lookahead == 'R')
        ADVANCE(111);
      if (lookahead == 'S')
        ADVANCE(113);
      if (lookahead == 'T')
        ADVANCE(124);
      if (lookahead == 'U')
        ADVANCE(127);
      if (lookahead == 'V')
        ADVANCE(129);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == '^')
        ADVANCE(132);
      if (lookahead == 'b')
        ADVANCE(134);
      if (lookahead == 'c')
        ADVANCE(139);
      if (lookahead == 'd')
        ADVANCE(143);
      if (lookahead == 'e')
        ADVANCE(149);
      if (lookahead == 'f')
        ADVANCE(156);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'l')
        ADVANCE(168);
      if (lookahead == 'n')
        ADVANCE(172);
      if (lookahead == 'r')
        ADVANCE(176);
      if (lookahead == 's')
        ADVANCE(177);
      if (lookahead == 't')
        ADVANCE(182);
      if (lookahead == 'u')
        ADVANCE(186);
      if (lookahead == '{')
        ADVANCE(187);
      if (lookahead == '|')
        ADVANCE(188);
      if (lookahead == '}')
        ADVANCE(191);
      if (lookahead == '~')
        ADVANCE(192);
      if (('1' <= lookahead && lookahead <= '3'))
        ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('4' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(194);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '+')
        ADVANCE(25);
      if (lookahead == '-')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(27);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '_')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*')
        ADVANCE(31);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'O')
        ADVANCE(37);
      if (lookahead == 'X')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'x')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(22);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '.')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(45);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '_')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(42);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '_')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(51);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(41);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(43);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(51);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(51);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '_')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == '_')
        ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(61);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '>')
        ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(69);
      if (lookahead == '>')
        ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 73:
      if (lookahead == 'C')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'K')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 76:
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'S')
        ADVANCE(79);
      END_STATE();
    case 77:
      if (lookahead == 'L')
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 80:
      if (lookahead == 'A')
        ADVANCE(81);
      if (lookahead == 'R')
        ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 'N')
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 84:
      if (lookahead == 'L')
        ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'E')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 87:
      if (lookahead == 'M')
        ADVANCE(88);
      if (lookahead == 'N')
        ADVANCE(89);
      if (lookahead == 'O')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(93);
      if (lookahead == 'T')
        ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 89:
      if (lookahead == 'Q')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 91:
      if (lookahead == 'T')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 93:
      if (lookahead == 'C')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 95:
      if (lookahead == 'B')
        ADVANCE(96);
      if (lookahead == 'X')
        ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 98:
      if (lookahead == 'S')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 100:
      if (lookahead == 'S')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 102:
      if (lookahead == 'T')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_horizontal_tab);
      END_STATE();
    case 104:
      if (lookahead == 'F')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 106:
      if (lookahead == 'A')
        ADVANCE(107);
      if (lookahead == 'U')
        ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'K')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 109:
      if (lookahead == 'L')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 111:
      if (lookahead == 'S')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 113:
      if (lookahead == 'I')
        ADVANCE(114);
      if (lookahead == 'O')
        ADVANCE(115);
      if (lookahead == 'P')
        ADVANCE(117);
      if (lookahead == 'T')
        ADVANCE(118);
      if (lookahead == 'U')
        ADVANCE(120);
      if (lookahead == 'Y')
        ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_space);
      END_STATE();
    case 118:
      if (lookahead == 'X')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 120:
      if (lookahead == 'B')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 122:
      if (lookahead == 'N')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 124:
      if (lookahead == 'A')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'B')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 127:
      if (lookahead == 'S')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 129:
      if (lookahead == 'T')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 134:
      if (lookahead == 'y')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 139:
      if (lookahead == 'h')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'r')
        ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 143:
      if (lookahead == 'o')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'b')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'l')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'e')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'f')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 156:
      if (lookahead == 'a')
        ADVANCE(157);
      if (lookahead == 'l')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 's')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'e')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 165:
      if (lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 168:
      if (lookahead == 'o')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'g')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'u')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'l')
        ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_r);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 177:
      if (lookahead == 'h')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_u);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(189);
      if (lookahead == '|')
        ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(57);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(138);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(196);
      if (lookahead == '\"')
        ADVANCE(197);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(200);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '.')
        ADVANCE(21);
      if (lookahead == '/')
        ADVANCE(202);
      if (lookahead == '0')
        ADVANCE(203);
      if (lookahead == 'f')
        ADVANCE(208);
      if (lookahead == 'n')
        ADVANCE(210);
      if (lookahead == 't')
        ADVANCE(212);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 197:
      if (lookahead == '\"')
        ADVANCE(198);
      if (lookahead == '\\')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 199:
      if (lookahead == '\n')
        ADVANCE(197);
      if (lookahead != 0)
        ADVANCE(197);
      END_STATE();
    case 200:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 201:
      if (lookahead == '-')
        ADVANCE(19);
      END_STATE();
    case 202:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(33);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'B')
        ADVANCE(204);
      if (lookahead == 'O')
        ADVANCE(37);
      if (lookahead == 'X')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(206);
      if (lookahead == 'b')
        ADVANCE(204);
      if (lookahead == 'o')
        ADVANCE(37);
      if (lookahead == 'x')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      END_STATE();
    case 204:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(205);
      END_STATE();
    case 206:
      if (lookahead == '_')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '_')
        ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(24);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == 'a')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 210:
      if (lookahead == 'u')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 212:
      if (lookahead == 'r')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'u')
        ADVANCE(184);
      END_STATE();
    case 214:
      if (lookahead == '!')
        ADVANCE(215);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(18);
      if (lookahead == '/')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(58);
      if (lookahead == ';')
        ADVANCE(59);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(66);
      if (lookahead == '?')
        ADVANCE(72);
      if (lookahead == '^')
        ADVANCE(132);
      if (lookahead == '|')
        ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 216:
      if (lookahead == '\n')
        SKIP(216);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '\\')
        ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(221);
      if (lookahead != 0)
        ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(33);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(219);
      if (lookahead != 0)
        ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 195},
  [2] = {.lex_state = 214},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 214},
  [5] = {.lex_state = 216},
  [6] = {.lex_state = 214},
  [7] = {.lex_state = 195},
  [8] = {.lex_state = 195},
  [9] = {.lex_state = 195},
  [10] = {.lex_state = 214},
  [11] = {.lex_state = 214},
  [12] = {.lex_state = 214},
  [13] = {.lex_state = 214},
  [14] = {.lex_state = 214},
  [15] = {.lex_state = 195},
  [16] = {.lex_state = 214},
  [17] = {.lex_state = 216},
  [18] = {.lex_state = 216},
  [19] = {.lex_state = 214},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 195},
  [22] = {.lex_state = 195},
  [23] = {.lex_state = 195},
  [24] = {.lex_state = 195},
  [25] = {.lex_state = 195},
  [26] = {.lex_state = 195},
  [27] = {.lex_state = 195},
  [28] = {.lex_state = 195},
  [29] = {.lex_state = 214},
  [30] = {.lex_state = 214},
  [31] = {.lex_state = 214},
  [32] = {.lex_state = 216},
  [33] = {.lex_state = 214},
  [34] = {.lex_state = 214},
  [35] = {.lex_state = 214},
  [36] = {.lex_state = 214},
  [37] = {.lex_state = 214},
  [38] = {.lex_state = 214},
  [39] = {.lex_state = 195},
  [40] = {.lex_state = 195},
  [41] = {.lex_state = 214},
  [42] = {.lex_state = 195},
  [43] = {.lex_state = 195},
  [44] = {.lex_state = 195},
  [45] = {.lex_state = 195},
  [46] = {.lex_state = 195},
  [47] = {.lex_state = 195},
  [48] = {.lex_state = 195},
  [49] = {.lex_state = 195},
  [50] = {.lex_state = 195},
  [51] = {.lex_state = 214},
  [52] = {.lex_state = 214},
  [53] = {.lex_state = 214},
  [54] = {.lex_state = 214},
  [55] = {.lex_state = 214},
  [56] = {.lex_state = 214},
  [57] = {.lex_state = 214},
  [58] = {.lex_state = 195},
  [59] = {.lex_state = 214},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_decimal_floating_point_literal] = ACTIONS(3),
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_SOH] = ACTIONS(1),
    [anon_sym_STX] = ACTIONS(1),
    [anon_sym_ETX] = ACTIONS(1),
    [anon_sym_EOT] = ACTIONS(1),
    [anon_sym_ENQ] = ACTIONS(1),
    [anon_sym_ACK] = ACTIONS(1),
    [anon_sym_BEL] = ACTIONS(1),
    [anon_sym_BS] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_VT] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_DLE] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_ETB] = ACTIONS(1),
    [anon_sym_CAN] = ACTIONS(1),
    [anon_sym_EM] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_ESC] = ACTIONS(1),
    [anon_sym_FS] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [sym_space] = ACTIONS(1),
    [sym_horizontal_tab] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(3),
    [anon_sym_t] = ACTIONS(3),
    [anon_sym_n] = ACTIONS(3),
    [anon_sym_r] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH] = ACTIONS(3),
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
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(3),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [sym_identifier] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(9),
    [sym__statement] = STATE(10),
    [sym__literal] = STATE(11),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [aux_sym_program_repeat1] = STATE(15),
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
    [sym_comment] = ACTIONS(28),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(30),
    [sym_comment] = ACTIONS(28),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(32),
    [sym_comment] = ACTIONS(28),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_comment] = ACTIONS(28),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(18),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(38),
    [sym_comment] = ACTIONS(40),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_comment] = ACTIONS(28),
  },
  [7] = {
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [8] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_comment] = ACTIONS(28),
  },
  [10] = {
    [anon_sym_SEMI] = ACTIONS(46),
    [sym_comment] = ACTIONS(28),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_comment] = ACTIONS(28),
  },
  [12] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PERCENT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [13] = {
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS_EQ] = ACTIONS(74),
    [anon_sym_DASH_EQ] = ACTIONS(74),
    [anon_sym_STAR_EQ] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(74),
    [anon_sym_AMP_EQ] = ACTIONS(74),
    [anon_sym_PIPE_EQ] = ACTIONS(74),
    [anon_sym_CARET_EQ] = ACTIONS(74),
    [anon_sym_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_LT_LT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(74),
    [anon_sym_BANG_EQ] = ACTIONS(74),
    [anon_sym_AMP_AMP] = ACTIONS(74),
    [anon_sym_PIPE_PIPE] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_LT_LT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_GT_GT_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_PLUS_PLUS] = ACTIONS(74),
    [anon_sym_DASH_DASH] = ACTIONS(74),
    [sym_comment] = ACTIONS(28),
  },
  [14] = {
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_PLUS_EQ] = ACTIONS(78),
    [anon_sym_DASH_EQ] = ACTIONS(78),
    [anon_sym_STAR_EQ] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [anon_sym_AMP_EQ] = ACTIONS(78),
    [anon_sym_PIPE_EQ] = ACTIONS(78),
    [anon_sym_CARET_EQ] = ACTIONS(78),
    [anon_sym_PERCENT_EQ] = ACTIONS(78),
    [anon_sym_LT_LT_EQ] = ACTIONS(78),
    [anon_sym_GT_GT_EQ] = ACTIONS(78),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(78),
    [anon_sym_PIPE_PIPE] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_LT_LT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_GT_GT_GT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_PLUS_PLUS] = ACTIONS(78),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [sym_comment] = ACTIONS(28),
  },
  [15] = {
    [sym__statement] = STATE(30),
    [sym__literal] = STATE(11),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(12),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(82),
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
    [sym_comment] = ACTIONS(28),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(84),
    [sym_comment] = ACTIONS(28),
  },
  [17] = {
    [anon_sym_SQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(86),
    [sym_comment] = ACTIONS(40),
  },
  [18] = {
    [anon_sym_SQUOTE] = ACTIONS(88),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(90),
    [sym_comment] = ACTIONS(40),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(94),
    [anon_sym_PLUS_EQ] = ACTIONS(92),
    [anon_sym_DASH_EQ] = ACTIONS(92),
    [anon_sym_STAR_EQ] = ACTIONS(92),
    [anon_sym_SLASH_EQ] = ACTIONS(92),
    [anon_sym_AMP_EQ] = ACTIONS(92),
    [anon_sym_PIPE_EQ] = ACTIONS(92),
    [anon_sym_CARET_EQ] = ACTIONS(92),
    [anon_sym_PERCENT_EQ] = ACTIONS(92),
    [anon_sym_LT_LT_EQ] = ACTIONS(92),
    [anon_sym_GT_GT_EQ] = ACTIONS(92),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_EQ_EQ] = ACTIONS(92),
    [anon_sym_GT_EQ] = ACTIONS(92),
    [anon_sym_LT_EQ] = ACTIONS(92),
    [anon_sym_BANG_EQ] = ACTIONS(92),
    [anon_sym_AMP_AMP] = ACTIONS(92),
    [anon_sym_PIPE_PIPE] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(94),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(94),
    [anon_sym_LT_LT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_GT_GT_GT] = ACTIONS(94),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [20] = {
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PLUS_EQ] = ACTIONS(96),
    [anon_sym_DASH_EQ] = ACTIONS(96),
    [anon_sym_STAR_EQ] = ACTIONS(96),
    [anon_sym_SLASH_EQ] = ACTIONS(96),
    [anon_sym_AMP_EQ] = ACTIONS(96),
    [anon_sym_PIPE_EQ] = ACTIONS(96),
    [anon_sym_CARET_EQ] = ACTIONS(96),
    [anon_sym_PERCENT_EQ] = ACTIONS(96),
    [anon_sym_LT_LT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(28),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_decimal_integer_literal] = ACTIONS(102),
    [sym_hex_integer_literal] = ACTIONS(102),
    [sym_octal_integer_literal] = ACTIONS(102),
    [sym_binary_integer_literal] = ACTIONS(102),
    [sym_decimal_floating_point_literal] = ACTIONS(102),
    [sym_hex_floating_point_literal] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [sym_string_literal] = ACTIONS(100),
    [sym_null_literal] = ACTIONS(100),
    [anon_sym_BANG] = ACTIONS(100),
    [anon_sym_TILDE] = ACTIONS(100),
    [anon_sym_PLUS_PLUS] = ACTIONS(100),
    [anon_sym_DASH_DASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(28),
  },
  [22] = {
    [sym__expression] = STATE(33),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [23] = {
    [sym__expression] = STATE(34),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [24] = {
    [sym__expression] = STATE(35),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [25] = {
    [sym__expression] = STATE(36),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [26] = {
    [sym__expression] = STATE(37),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [27] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [28] = {
    [sym__expression] = STATE(41),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PLUS_EQ] = ACTIONS(96),
    [anon_sym_DASH_EQ] = ACTIONS(96),
    [anon_sym_STAR_EQ] = ACTIONS(96),
    [anon_sym_SLASH_EQ] = ACTIONS(96),
    [anon_sym_AMP_EQ] = ACTIONS(96),
    [anon_sym_PIPE_EQ] = ACTIONS(96),
    [anon_sym_CARET_EQ] = ACTIONS(96),
    [anon_sym_PERCENT_EQ] = ACTIONS(96),
    [anon_sym_LT_LT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [sym_comment] = ACTIONS(28),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(110),
    [sym_comment] = ACTIONS(28),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(112),
    [sym_comment] = ACTIONS(28),
  },
  [32] = {
    [anon_sym_SQUOTE] = ACTIONS(114),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(114),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(40),
  },
  [33] = {
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(50),
    [anon_sym_PLUS_EQ] = ACTIONS(52),
    [anon_sym_DASH_EQ] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(52),
    [anon_sym_SLASH_EQ] = ACTIONS(52),
    [anon_sym_AMP_EQ] = ACTIONS(52),
    [anon_sym_PIPE_EQ] = ACTIONS(52),
    [anon_sym_CARET_EQ] = ACTIONS(52),
    [anon_sym_PERCENT_EQ] = ACTIONS(52),
    [anon_sym_LT_LT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [35] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [36] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [37] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [38] = {
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_LT_LT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(120),
    [anon_sym_GT_GT_GT] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [39] = {
    [sym__expression] = STATE(19),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [40] = {
    [sym__expression] = STATE(20),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [41] = {
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PLUS_EQ] = ACTIONS(124),
    [anon_sym_DASH_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [anon_sym_AMP_EQ] = ACTIONS(124),
    [anon_sym_PIPE_EQ] = ACTIONS(124),
    [anon_sym_CARET_EQ] = ACTIONS(124),
    [anon_sym_PERCENT_EQ] = ACTIONS(124),
    [anon_sym_LT_LT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym_decimal_integer_literal] = ACTIONS(148),
    [sym_hex_integer_literal] = ACTIONS(148),
    [sym_octal_integer_literal] = ACTIONS(148),
    [sym_binary_integer_literal] = ACTIONS(148),
    [sym_decimal_floating_point_literal] = ACTIONS(148),
    [sym_hex_floating_point_literal] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [sym_string_literal] = ACTIONS(146),
    [sym_null_literal] = ACTIONS(146),
    [anon_sym_BANG] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(146),
    [anon_sym_PLUS_PLUS] = ACTIONS(146),
    [anon_sym_DASH_DASH] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [43] = {
    [sym__expression] = STATE(51),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [44] = {
    [sym__expression] = STATE(52),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [45] = {
    [sym__expression] = STATE(53),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [46] = {
    [sym__expression] = STATE(54),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [47] = {
    [sym__expression] = STATE(55),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [48] = {
    [sym__expression] = STATE(38),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [49] = {
    [sym__expression] = STATE(56),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [50] = {
    [sym__expression] = STATE(57),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [51] = {
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PLUS_EQ] = ACTIONS(124),
    [anon_sym_DASH_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [anon_sym_AMP_EQ] = ACTIONS(124),
    [anon_sym_PIPE_EQ] = ACTIONS(124),
    [anon_sym_CARET_EQ] = ACTIONS(124),
    [anon_sym_PERCENT_EQ] = ACTIONS(124),
    [anon_sym_LT_LT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [52] = {
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_EQ_EQ] = ACTIONS(118),
    [anon_sym_GT_EQ] = ACTIONS(118),
    [anon_sym_LT_EQ] = ACTIONS(118),
    [anon_sym_BANG_EQ] = ACTIONS(118),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [53] = {
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [54] = {
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS_EQ] = ACTIONS(118),
    [anon_sym_DASH_EQ] = ACTIONS(118),
    [anon_sym_STAR_EQ] = ACTIONS(118),
    [anon_sym_SLASH_EQ] = ACTIONS(118),
    [anon_sym_AMP_EQ] = ACTIONS(118),
    [anon_sym_PIPE_EQ] = ACTIONS(118),
    [anon_sym_CARET_EQ] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(118),
    [anon_sym_LT_LT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(118),
    [anon_sym_PIPE_PIPE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_PLUS_EQ] = ACTIONS(124),
    [anon_sym_DASH_EQ] = ACTIONS(124),
    [anon_sym_STAR_EQ] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(124),
    [anon_sym_AMP_EQ] = ACTIONS(124),
    [anon_sym_PIPE_EQ] = ACTIONS(124),
    [anon_sym_CARET_EQ] = ACTIONS(124),
    [anon_sym_PERCENT_EQ] = ACTIONS(124),
    [anon_sym_LT_LT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [57] = {
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_AMP_AMP] = ACTIONS(58),
    [anon_sym_PIPE_PIPE] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_LT_LT] = ACTIONS(64),
    [anon_sym_GT_GT] = ACTIONS(64),
    [anon_sym_GT_GT_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
  },
  [58] = {
    [sym__expression] = STATE(59),
    [sym_assignment_expression] = STATE(13),
    [sym_binary_expression] = STATE(13),
    [sym_ternary_expression] = STATE(13),
    [sym_unary_expression] = STATE(14),
    [sym_update_expression] = STATE(13),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_TILDE] = ACTIONS(106),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(28),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_AMP_AMP] = ACTIONS(130),
    [anon_sym_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_PLUS_PLUS] = ACTIONS(72),
    [anon_sym_DASH_DASH] = ACTIONS(72),
    [sym_comment] = ACTIONS(28),
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
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
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
