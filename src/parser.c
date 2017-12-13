#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 19
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  anon_sym_DASH_GT = 83,
  anon_sym_QMARK = 84,
  anon_sym_COLON = 85,
  anon_sym_BANG = 86,
  anon_sym_TILDE = 87,
  anon_sym_PLUS_PLUS = 88,
  anon_sym_DASH_DASH = 89,
  sym_comment = 90,
  sym_program = 91,
  sym__statement = 92,
  sym__literal = 93,
  sym_integer_literal = 94,
  sym_floating_point_literal = 95,
  sym_boolean_literal = 96,
  sym_character_literal = 97,
  aux_sym_program_repeat1 = 98,
  aux_sym_character_literal_repeat1 = 99,
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
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
  [anon_sym_DASH_GT] = {
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
      if (lookahead == '*')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(16);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == '0')
        ADVANCE(34);
      if (lookahead == ':')
        ADVANCE(57);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '<')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(63);
      if (lookahead == '>')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(71);
      if (lookahead == 'A')
        ADVANCE(72);
      if (lookahead == 'B')
        ADVANCE(75);
      if (lookahead == 'C')
        ADVANCE(79);
      if (lookahead == 'D')
        ADVANCE(83);
      if (lookahead == 'E')
        ADVANCE(86);
      if (lookahead == 'F')
        ADVANCE(97);
      if (lookahead == 'G')
        ADVANCE(99);
      if (lookahead == 'H')
        ADVANCE(101);
      if (lookahead == 'L')
        ADVANCE(103);
      if (lookahead == 'N')
        ADVANCE(105);
      if (lookahead == 'R')
        ADVANCE(110);
      if (lookahead == 'S')
        ADVANCE(112);
      if (lookahead == 'T')
        ADVANCE(123);
      if (lookahead == 'U')
        ADVANCE(126);
      if (lookahead == 'V')
        ADVANCE(128);
      if (lookahead == '\\')
        ADVANCE(130);
      if (lookahead == '^')
        ADVANCE(131);
      if (lookahead == 'f')
        ADVANCE(133);
      if (lookahead == 'n')
        ADVANCE(138);
      if (lookahead == 'r')
        ADVANCE(142);
      if (lookahead == 't')
        ADVANCE(143);
      if (lookahead == 'u')
        ADVANCE(147);
      if (lookahead == '|')
        ADVANCE(148);
      if (lookahead == '~')
        ADVANCE(151);
      if (('1' <= lookahead && lookahead <= '3'))
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('4' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
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
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == '=')
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '_')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '+')
        ADVANCE(24);
      if (lookahead == '-')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '_')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '/')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == 'O')
        ADVANCE(36);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'o')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(21);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '.')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(50);
      if (lookahead == '_')
        ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '_')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == '_')
        ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 72:
      if (lookahead == 'C')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'K')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 75:
      if (lookahead == 'E')
        ADVANCE(76);
      if (lookahead == 'S')
        ADVANCE(78);
      END_STATE();
    case 76:
      if (lookahead == 'L')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 79:
      if (lookahead == 'A')
        ADVANCE(80);
      if (lookahead == 'R')
        ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'N')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 83:
      if (lookahead == 'L')
        ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'E')
        ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 86:
      if (lookahead == 'M')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(90);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'T')
        ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 88:
      if (lookahead == 'Q')
        ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 90:
      if (lookahead == 'T')
        ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 92:
      if (lookahead == 'C')
        ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 94:
      if (lookahead == 'B')
        ADVANCE(95);
      if (lookahead == 'X')
        ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 97:
      if (lookahead == 'S')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 99:
      if (lookahead == 'S')
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 101:
      if (lookahead == 'T')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_horizontal_tab);
      END_STATE();
    case 103:
      if (lookahead == 'F')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 105:
      if (lookahead == 'A')
        ADVANCE(106);
      if (lookahead == 'U')
        ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == 'K')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 108:
      if (lookahead == 'L')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 110:
      if (lookahead == 'S')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 112:
      if (lookahead == 'I')
        ADVANCE(113);
      if (lookahead == 'O')
        ADVANCE(114);
      if (lookahead == 'P')
        ADVANCE(116);
      if (lookahead == 'T')
        ADVANCE(117);
      if (lookahead == 'U')
        ADVANCE(119);
      if (lookahead == 'Y')
        ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_space);
      END_STATE();
    case 117:
      if (lookahead == 'X')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 119:
      if (lookahead == 'B')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 121:
      if (lookahead == 'N')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 123:
      if (lookahead == 'A')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'B')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 126:
      if (lookahead == 'S')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 128:
      if (lookahead == 'T')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 133:
      if (lookahead == 'a')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 's')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'e')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'l')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'l')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == 'r')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'u')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(149);
      if (lookahead == '|')
        ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH3_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(55);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(56);
      END_STATE();
    case 153:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(154);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(157);
      if (lookahead == '0')
        ADVANCE(158);
      if (lookahead == 'f')
        ADVANCE(133);
      if (lookahead == 'n')
        ADVANCE(163);
      if (lookahead == 't')
        ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(153);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 154:
      if (lookahead == '\"')
        ADVANCE(155);
      if (lookahead == '\\')
        ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 156:
      if (lookahead == '\n')
        ADVANCE(154);
      if (lookahead != 0)
        ADVANCE(154);
      END_STATE();
    case 157:
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == 'B')
        ADVANCE(159);
      if (lookahead == 'O')
        ADVANCE(36);
      if (lookahead == 'X')
        ADVANCE(38);
      if (lookahead == '_')
        ADVANCE(161);
      if (lookahead == 'b')
        ADVANCE(159);
      if (lookahead == 'o')
        ADVANCE(36);
      if (lookahead == 'x')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 159:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(159);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(160);
      END_STATE();
    case 161:
      if (lookahead == '_')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(161);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 163:
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(144);
      END_STATE();
    case 165:
      if (lookahead == '/')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(165);
      END_STATE();
    case 166:
      if (lookahead == '\n')
        SKIP(166);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(171);
      if (lookahead != 0)
        ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(29);
      if (lookahead == '/')
        ADVANCE(32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(169);
      if (lookahead != 0)
        ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 166},
  [6] = {.lex_state = 165},
  [7] = {.lex_state = 153},
  [8] = {.lex_state = 165},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 153},
  [11] = {.lex_state = 165},
  [12] = {.lex_state = 166},
  [13] = {.lex_state = 166},
  [14] = {.lex_state = 153},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 166},
  [18] = {.lex_state = 153},
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
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(3),
    [anon_sym_n] = ACTIONS(3),
    [anon_sym_r] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym__statement] = STATE(8),
    [sym__literal] = STATE(9),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [aux_sym_program_repeat1] = STATE(10),
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
    [sym_comment] = ACTIONS(24),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(26),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(28),
    [sym_comment] = ACTIONS(24),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(13),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [10] = {
    [sym__statement] = STATE(15),
    [sym__literal] = STATE(9),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(46),
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
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [12] = {
    [anon_sym_SQUOTE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [13] = {
    [anon_sym_SQUOTE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_decimal_integer_literal] = ACTIONS(58),
    [sym_hex_integer_literal] = ACTIONS(58),
    [sym_octal_integer_literal] = ACTIONS(58),
    [sym_binary_integer_literal] = ACTIONS(58),
    [sym_decimal_floating_point_literal] = ACTIONS(58),
    [sym_hex_floating_point_literal] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [sym_string_literal] = ACTIONS(56),
    [sym_null_literal] = ACTIONS(56),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(62),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(64),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [anon_sym_SQUOTE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_decimal_integer_literal] = ACTIONS(70),
    [sym_hex_integer_literal] = ACTIONS(70),
    [sym_octal_integer_literal] = ACTIONS(70),
    [sym_binary_integer_literal] = ACTIONS(70),
    [sym_decimal_floating_point_literal] = ACTIONS(70),
    [sym_hex_floating_point_literal] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [sym_string_literal] = ACTIONS(68),
    [sym_null_literal] = ACTIONS(68),
    [sym_comment] = ACTIONS(24),
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
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
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
