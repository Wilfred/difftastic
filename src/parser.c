#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 58
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_DQUOTE = 1,
  anon_sym_SQUOTE = 2,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 3,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 4,
  anon_sym__ = 5,
  sym__ascii_large = 6,
  anon_sym_BANG = 7,
  anon_sym_POUND = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_PERCENT = 10,
  anon_sym_AMP = 11,
  anon_sym_1 = 12,
  anon_sym_PLUS = 13,
  anon_sym_DOT = 14,
  anon_sym_SLASH = 15,
  anon_sym_LT = 16,
  anon_sym_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_QMARK = 19,
  anon_sym_AT = 20,
  anon_sym_CARET = 21,
  anon_sym_PIPE = 22,
  anon_sym_DASH = 23,
  anon_sym_TILDE = 24,
  anon_sym_COLON = 25,
  anon_sym_BSLASH = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_SEMI = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_BQUOTE = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym__space = 35,
  sym__newline = 36,
  sym__tab = 37,
  anon_sym_x = 38,
  anon_sym_X = 39,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 40,
  anon_sym_o = 41,
  anon_sym_O = 42,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 43,
  anon_sym_a = 44,
  anon_sym_b = 45,
  anon_sym_f = 46,
  anon_sym_n = 47,
  anon_sym_r = 48,
  anon_sym_t = 49,
  anon_sym_v = 50,
  anon_sym_NUL = 51,
  anon_sym_SOH = 52,
  anon_sym_STX = 53,
  anon_sym_ETX = 54,
  anon_sym_EOT = 55,
  anon_sym_ENQ = 56,
  anon_sym_ACK = 57,
  anon_sym_BEL = 58,
  anon_sym_BS = 59,
  anon_sym_HT = 60,
  anon_sym_LF = 61,
  anon_sym_VT = 62,
  anon_sym_FF = 63,
  anon_sym_CR = 64,
  anon_sym_SO = 65,
  anon_sym_SI = 66,
  anon_sym_DLE = 67,
  anon_sym_DC1 = 68,
  anon_sym_DC2 = 69,
  anon_sym_DC3 = 70,
  anon_sym_DC4 = 71,
  anon_sym_NAK = 72,
  anon_sym_SYN = 73,
  anon_sym_ETB = 74,
  anon_sym_CAN = 75,
  anon_sym_EM = 76,
  anon_sym_SUB = 77,
  anon_sym_ESC = 78,
  anon_sym_FS = 79,
  anon_sym_GS = 80,
  anon_sym_RS = 81,
  anon_sym_US = 82,
  anon_sym_SP = 83,
  anon_sym_DEL = 84,
  sym_integer_literal = 85,
  sym_float_literal = 86,
  sym_octal_literal = 87,
  sym_hexidecimal_literal = 88,
  sym_program = 89,
  sym_statement = 90,
  sym__literals = 91,
  sym_string_literal = 92,
  sym__gap = 93,
  sym_char_literal = 94,
  sym__graphic = 95,
  sym__small = 96,
  sym__large = 97,
  sym__symbol = 98,
  sym__special = 99,
  sym__escape = 100,
  sym__char_escape = 101,
  sym__ascii = 102,
  sym__cntrl = 103,
  aux_sym_program_repeat1 = 104,
  aux_sym_string_literal_repeat1 = 105,
  aux_sym__escape_repeat1 = 106,
  aux_sym__escape_repeat2 = 107,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [anon_sym__] = "_",
  [sym__ascii_large] = "_ascii_large",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_1] = "⋆",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "?",
  [anon_sym_AT] = "@",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__space] = "_space",
  [sym__newline] = "_newline",
  [sym__tab] = "_tab",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = "/[0-9a-fA-F]/",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = "/[0-7]/",
  [anon_sym_a] = "a",
  [anon_sym_b] = "b",
  [anon_sym_f] = "f",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_v] = "v",
  [anon_sym_NUL] = "NUL",
  [anon_sym_SOH] = "SOH",
  [anon_sym_STX] = "STX",
  [anon_sym_ETX] = "ETX",
  [anon_sym_EOT] = "EOT",
  [anon_sym_ENQ] = "ENQ",
  [anon_sym_ACK] = "ACK",
  [anon_sym_BEL] = "BEL",
  [anon_sym_BS] = "BS",
  [anon_sym_HT] = "HT",
  [anon_sym_LF] = "LF",
  [anon_sym_VT] = "VT",
  [anon_sym_FF] = "FF",
  [anon_sym_CR] = "CR",
  [anon_sym_SO] = "SO",
  [anon_sym_SI] = "SI",
  [anon_sym_DLE] = "DLE",
  [anon_sym_DC1] = "DC1",
  [anon_sym_DC2] = "DC2",
  [anon_sym_DC3] = "DC3",
  [anon_sym_DC4] = "DC4",
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
  [anon_sym_SP] = "SP",
  [anon_sym_DEL] = "DEL",
  [sym_integer_literal] = "integer_literal",
  [sym_float_literal] = "float_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_hexidecimal_literal] = "hexidecimal_literal",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym__literals] = "_literals",
  [sym_string_literal] = "string_literal",
  [sym__gap] = "_gap",
  [sym_char_literal] = "char_literal",
  [sym__graphic] = "_graphic",
  [sym__small] = "_small",
  [sym__large] = "_large",
  [sym__symbol] = "_symbol",
  [sym__special] = "_special",
  [sym__escape] = "_escape",
  [sym__char_escape] = "_char_escape",
  [sym__ascii] = "_ascii",
  [sym__cntrl] = "_cntrl",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym__ascii_large] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_SEMI] = {
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
  [anon_sym_BQUOTE] = {
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
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__tab] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f] = {
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
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
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
  [anon_sym_HT] = {
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
  [anon_sym_FF] = {
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
  [anon_sym_DC1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DC4] = {
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
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEL] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexidecimal_literal] = {
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
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
    .named = true,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__graphic] = {
    .visible = false,
    .named = true,
  },
  [sym__small] = {
    .visible = false,
    .named = true,
  },
  [sym__large] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [sym__special] = {
    .visible = false,
    .named = true,
  },
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__char_escape] = {
    .visible = false,
    .named = true,
  },
  [sym__ascii] = {
    .visible = false,
    .named = true,
  },
  [sym__cntrl] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_repeat2] = {
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
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == 'G')
        ADVANCE(22);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'L')
        ADVANCE(26);
      if (lookahead == 'N')
        ADVANCE(28);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(36);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead == 'V')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(57);
      if (lookahead == 'n')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(61);
      if (lookahead == 'v')
        ADVANCE(62);
      if (lookahead == 'x')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(66);
      if (lookahead == '~')
        ADVANCE(67);
      if (lookahead == 8902)
        ADVANCE(68);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(29);
      if (lookahead == 'U')
        ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'K')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 31:
      if (lookahead == 'L')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(37);
      if (lookahead == 'O')
        ADVANCE(38);
      if (lookahead == 'P')
        ADVANCE(40);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead == 'U')
        ADVANCE(43);
      if (lookahead == 'Y')
        ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 41:
      if (lookahead == 'X')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 43:
      if (lookahead == 'B')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 45:
      if (lookahead == 'N')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(70);
      if (lookahead == 'E')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '+')
        ADVANCE(72);
      if (lookahead == '-')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.')
        ADVANCE(70);
      if (lookahead == 'E')
        ADVANCE(71);
      if (lookahead == 'e')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 77:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(77);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.')
        ADVANCE(70);
      if (lookahead == 'E')
        ADVANCE(71);
      if (lookahead == 'O')
        ADVANCE(79);
      if (lookahead == 'X')
        ADVANCE(81);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(79);
      if (lookahead == 'x')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(80);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '\t')
        ADVANCE(84);
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '\r')
        SKIP(83);
      if (lookahead == ' ')
        ADVANCE(86);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(66);
      if (lookahead == '~')
        ADVANCE(67);
      if (lookahead == 8902)
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 88:
      if (lookahead == ' ')
        ADVANCE(86);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(66);
      if (lookahead == '~')
        ADVANCE(67);
      if (lookahead == 8902)
        ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == '\t')
        ADVANCE(84);
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '\r')
        SKIP(89);
      if (lookahead == ' ')
        ADVANCE(86);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == 'A')
        ADVANCE(90);
      if (lookahead == 'B')
        ADVANCE(93);
      if (lookahead == 'C')
        ADVANCE(97);
      if (lookahead == 'D')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(111);
      if (lookahead == 'F')
        ADVANCE(122);
      if (lookahead == 'G')
        ADVANCE(22);
      if (lookahead == 'H')
        ADVANCE(24);
      if (lookahead == 'L')
        ADVANCE(26);
      if (lookahead == 'N')
        ADVANCE(28);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(36);
      if (lookahead == 'U')
        ADVANCE(47);
      if (lookahead == 'V')
        ADVANCE(49);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(57);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(61);
      if (lookahead == 'v')
        ADVANCE(62);
      if (lookahead == 'x')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(66);
      if (lookahead == '~')
        ADVANCE(67);
      if (lookahead == 8902)
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'K')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(94);
      if (lookahead == 'S')
        ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'L')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(98);
      if (lookahead == 'R')
        ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'N')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(102);
      if (lookahead == 'E')
        ADVANCE(107);
      if (lookahead == 'L')
        ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == '1')
        ADVANCE(103);
      if (lookahead == '2')
        ADVANCE(104);
      if (lookahead == '3')
        ADVANCE(105);
      if (lookahead == '4')
        ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 107:
      if (lookahead == 'L')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 109:
      if (lookahead == 'E')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(112);
      if (lookahead == 'N')
        ADVANCE(113);
      if (lookahead == 'O')
        ADVANCE(115);
      if (lookahead == 'S')
        ADVANCE(117);
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 113:
      if (lookahead == 'Q')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 115:
      if (lookahead == 'T')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 117:
      if (lookahead == 'C')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 119:
      if (lookahead == 'B')
        ADVANCE(120);
      if (lookahead == 'X')
        ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'S')
        ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 128:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'A')
        ADVANCE(129);
      if (lookahead == 'B')
        ADVANCE(130);
      if (lookahead == 'C')
        ADVANCE(131);
      if (lookahead == 'D')
        ADVANCE(132);
      if (lookahead == 'E')
        ADVANCE(133);
      if (lookahead == 'F')
        ADVANCE(134);
      if (lookahead == 'G')
        ADVANCE(135);
      if (lookahead == 'H')
        ADVANCE(136);
      if (lookahead == 'L')
        ADVANCE(137);
      if (lookahead == 'N')
        ADVANCE(138);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(139);
      if (lookahead == 'S')
        ADVANCE(140);
      if (lookahead == 'U')
        ADVANCE(141);
      if (lookahead == 'V')
        ADVANCE(142);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(127);
      if (lookahead == 'n')
        ADVANCE(58);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == 't')
        ADVANCE(61);
      if (lookahead == 'v')
        ADVANCE(62);
      if (lookahead == 'x')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == 'C')
        ADVANCE(91);
      END_STATE();
    case 130:
      if (lookahead == 'E')
        ADVANCE(94);
      if (lookahead == 'S')
        ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == 'A')
        ADVANCE(98);
      if (lookahead == 'R')
        ADVANCE(100);
      END_STATE();
    case 132:
      if (lookahead == 'C')
        ADVANCE(102);
      if (lookahead == 'E')
        ADVANCE(107);
      if (lookahead == 'L')
        ADVANCE(109);
      END_STATE();
    case 133:
      if (lookahead == 'M')
        ADVANCE(112);
      if (lookahead == 'N')
        ADVANCE(113);
      if (lookahead == 'O')
        ADVANCE(115);
      if (lookahead == 'S')
        ADVANCE(117);
      if (lookahead == 'T')
        ADVANCE(119);
      END_STATE();
    case 134:
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'S')
        ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 'S')
        ADVANCE(23);
      END_STATE();
    case 136:
      if (lookahead == 'T')
        ADVANCE(25);
      END_STATE();
    case 137:
      if (lookahead == 'F')
        ADVANCE(27);
      END_STATE();
    case 138:
      if (lookahead == 'A')
        ADVANCE(29);
      if (lookahead == 'U')
        ADVANCE(31);
      END_STATE();
    case 139:
      if (lookahead == 'S')
        ADVANCE(35);
      END_STATE();
    case 140:
      if (lookahead == 'I')
        ADVANCE(37);
      if (lookahead == 'O')
        ADVANCE(38);
      if (lookahead == 'P')
        ADVANCE(40);
      if (lookahead == 'T')
        ADVANCE(41);
      if (lookahead == 'U')
        ADVANCE(43);
      if (lookahead == 'Y')
        ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'S')
        ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == 'T')
        ADVANCE(50);
      END_STATE();
    case 143:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(143);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 145:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 147:
      if (lookahead == '\t')
        ADVANCE(84);
      if (lookahead == '\n')
        ADVANCE(85);
      if (lookahead == '\r')
        SKIP(147);
      if (lookahead == ' ')
        ADVANCE(86);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '(')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '?')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(21);
      if (lookahead == '[')
        ADVANCE(52);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(54);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == '_')
        ADVANCE(56);
      if (lookahead == '`')
        ADVANCE(57);
      if (lookahead == '{')
        ADVANCE(64);
      if (lookahead == '|')
        ADVANCE(65);
      if (lookahead == '}')
        ADVANCE(66);
      if (lookahead == '~')
        ADVANCE(67);
      if (lookahead == 8902)
        ADVANCE(68);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 77},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 77},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 77},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 128},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 143},
  [30] = {.lex_state = 145},
  [31] = {.lex_state = 143},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 83},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 143},
  [39] = {.lex_state = 145},
  [40] = {.lex_state = 143},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 83},
  [43] = {.lex_state = 83},
  [44] = {.lex_state = 83},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 147},
  [47] = {.lex_state = 147},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 145},
  [51] = {.lex_state = 145},
  [52] = {.lex_state = 143},
  [53] = {.lex_state = 143},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 147},
  [56] = {.lex_state = 145},
  [57] = {.lex_state = 143},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(5),
    [anon_sym__] = ACTIONS(1),
    [sym__ascii_large] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(5),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_SOH] = ACTIONS(1),
    [anon_sym_STX] = ACTIONS(1),
    [anon_sym_HT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_VT] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym_statement] = STATE(6),
    [sym__literals] = STATE(7),
    [sym_string_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(15),
    [sym_octal_literal] = ACTIONS(13),
    [sym_hexidecimal_literal] = ACTIONS(13),
  },
  [2] = {
    [sym__gap] = STATE(10),
    [sym__graphic] = STATE(10),
    [sym__small] = STATE(11),
    [sym__large] = STATE(11),
    [sym__symbol] = STATE(11),
    [sym__special] = STATE(11),
    [sym__escape] = STATE(10),
    [aux_sym_string_literal_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [sym__ascii_large] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym__space] = ACTIONS(33),
    [sym__newline] = ACTIONS(33),
    [sym__tab] = ACTIONS(33),
  },
  [3] = {
    [sym__graphic] = STATE(19),
    [sym__small] = STATE(20),
    [sym__large] = STATE(20),
    [sym__symbol] = STATE(20),
    [sym__special] = STATE(20),
    [sym__escape] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(37),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(39),
    [anon_sym__] = ACTIONS(39),
    [sym__ascii_large] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(43),
    [anon_sym_DOLLAR] = ACTIONS(43),
    [anon_sym_PERCENT] = ACTIONS(43),
    [anon_sym_AMP] = ACTIONS(43),
    [anon_sym_1] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_QMARK] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_CARET] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(43),
    [anon_sym_BSLASH] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [sym__space] = ACTIONS(35),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [sym_integer_literal] = ACTIONS(51),
    [sym_float_literal] = ACTIONS(53),
    [sym_octal_literal] = ACTIONS(51),
    [sym_hexidecimal_literal] = ACTIONS(51),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(55),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_integer_literal] = ACTIONS(59),
    [sym_float_literal] = ACTIONS(61),
    [sym_octal_literal] = ACTIONS(59),
    [sym_hexidecimal_literal] = ACTIONS(59),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [sym_integer_literal] = ACTIONS(65),
    [sym_float_literal] = ACTIONS(67),
    [sym_octal_literal] = ACTIONS(65),
    [sym_hexidecimal_literal] = ACTIONS(65),
  },
  [8] = {
    [sym_statement] = STATE(26),
    [sym__literals] = STATE(7),
    [sym_string_literal] = STATE(4),
    [sym_char_literal] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [sym_integer_literal] = ACTIONS(13),
    [sym_float_literal] = ACTIONS(15),
    [sym_octal_literal] = ACTIONS(13),
    [sym_hexidecimal_literal] = ACTIONS(13),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [sym_integer_literal] = ACTIONS(73),
    [sym_float_literal] = ACTIONS(75),
    [sym_octal_literal] = ACTIONS(73),
    [sym_hexidecimal_literal] = ACTIONS(73),
  },
  [10] = {
    [anon_sym_DQUOTE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(77),
    [anon_sym__] = ACTIONS(77),
    [sym__ascii_large] = ACTIONS(77),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_DOLLAR] = ACTIONS(77),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_1] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_QMARK] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
    [anon_sym_CARET] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [sym__space] = ACTIONS(77),
    [sym__newline] = ACTIONS(77),
    [sym__tab] = ACTIONS(77),
  },
  [11] = {
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(79),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [sym__ascii_large] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [anon_sym_POUND] = ACTIONS(79),
    [anon_sym_DOLLAR] = ACTIONS(79),
    [anon_sym_PERCENT] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_1] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_QMARK] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_BSLASH] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [sym__space] = ACTIONS(79),
    [sym__newline] = ACTIONS(79),
    [sym__tab] = ACTIONS(79),
  },
  [12] = {
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [sym__ascii_large] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BSLASH] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [sym__space] = ACTIONS(81),
    [sym__newline] = ACTIONS(81),
    [sym__tab] = ACTIONS(81),
  },
  [13] = {
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(83),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(83),
    [anon_sym__] = ACTIONS(83),
    [sym__ascii_large] = ACTIONS(83),
    [anon_sym_BANG] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_DOLLAR] = ACTIONS(83),
    [anon_sym_PERCENT] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_1] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_QMARK] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_BSLASH] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [sym__space] = ACTIONS(83),
    [sym__newline] = ACTIONS(83),
    [sym__tab] = ACTIONS(83),
  },
  [14] = {
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(85),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym__ascii_large] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(85),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym__space] = ACTIONS(85),
    [sym__newline] = ACTIONS(85),
    [sym__tab] = ACTIONS(85),
  },
  [15] = {
    [sym__char_escape] = STATE(28),
    [sym__ascii] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym__ascii_large] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [anon_sym_POUND] = ACTIONS(85),
    [anon_sym_DOLLAR] = ACTIONS(85),
    [anon_sym_PERCENT] = ACTIONS(85),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_1] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_QMARK] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [sym__space] = ACTIONS(85),
    [sym__newline] = ACTIONS(85),
    [sym__tab] = ACTIONS(85),
    [anon_sym_x] = ACTIONS(93),
    [anon_sym_X] = ACTIONS(93),
    [anon_sym_o] = ACTIONS(95),
    [anon_sym_O] = ACTIONS(95),
    [anon_sym_a] = ACTIONS(87),
    [anon_sym_b] = ACTIONS(87),
    [anon_sym_f] = ACTIONS(87),
    [anon_sym_n] = ACTIONS(87),
    [anon_sym_r] = ACTIONS(87),
    [anon_sym_t] = ACTIONS(87),
    [anon_sym_v] = ACTIONS(87),
    [anon_sym_NUL] = ACTIONS(97),
    [anon_sym_SOH] = ACTIONS(97),
    [anon_sym_STX] = ACTIONS(97),
    [anon_sym_ETX] = ACTIONS(97),
    [anon_sym_EOT] = ACTIONS(97),
    [anon_sym_ENQ] = ACTIONS(97),
    [anon_sym_ACK] = ACTIONS(97),
    [anon_sym_BEL] = ACTIONS(97),
    [anon_sym_BS] = ACTIONS(97),
    [anon_sym_HT] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_VT] = ACTIONS(97),
    [anon_sym_FF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SO] = ACTIONS(97),
    [anon_sym_SI] = ACTIONS(97),
    [anon_sym_DLE] = ACTIONS(97),
    [anon_sym_DC1] = ACTIONS(97),
    [anon_sym_DC2] = ACTIONS(97),
    [anon_sym_DC3] = ACTIONS(97),
    [anon_sym_DC4] = ACTIONS(97),
    [anon_sym_NAK] = ACTIONS(97),
    [anon_sym_SYN] = ACTIONS(97),
    [anon_sym_ETB] = ACTIONS(97),
    [anon_sym_CAN] = ACTIONS(97),
    [anon_sym_EM] = ACTIONS(97),
    [anon_sym_SUB] = ACTIONS(97),
    [anon_sym_ESC] = ACTIONS(97),
    [anon_sym_FS] = ACTIONS(97),
    [anon_sym_GS] = ACTIONS(97),
    [anon_sym_RS] = ACTIONS(97),
    [anon_sym_US] = ACTIONS(97),
    [anon_sym_SP] = ACTIONS(97),
    [anon_sym_DEL] = ACTIONS(97),
  },
  [16] = {
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(99),
    [anon_sym__] = ACTIONS(99),
    [sym__ascii_large] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(99),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_PERCENT] = ACTIONS(99),
    [anon_sym_AMP] = ACTIONS(99),
    [anon_sym_1] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_QMARK] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_BSLASH] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym__space] = ACTIONS(99),
    [sym__newline] = ACTIONS(99),
    [sym__tab] = ACTIONS(99),
  },
  [17] = {
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(101),
    [anon_sym__] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(101),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_POUND] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_1] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_QMARK] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [sym__space] = ACTIONS(101),
    [sym__newline] = ACTIONS(101),
    [sym__tab] = ACTIONS(101),
  },
  [18] = {
    [sym__gap] = STATE(34),
    [sym__graphic] = STATE(34),
    [sym__small] = STATE(11),
    [sym__large] = STATE(11),
    [sym__symbol] = STATE(11),
    [sym__special] = STATE(11),
    [sym__escape] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(21),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(23),
    [anon_sym__] = ACTIONS(23),
    [sym__ascii_large] = ACTIONS(25),
    [anon_sym_BANG] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(27),
    [anon_sym_DOLLAR] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(27),
    [anon_sym_1] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_QMARK] = ACTIONS(27),
    [anon_sym_AT] = ACTIONS(27),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_BSLASH] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym__space] = ACTIONS(33),
    [sym__newline] = ACTIONS(33),
    [sym__tab] = ACTIONS(33),
  },
  [19] = {
    [anon_sym_SQUOTE] = ACTIONS(107),
  },
  [20] = {
    [anon_sym_SQUOTE] = ACTIONS(109),
  },
  [21] = {
    [anon_sym_SQUOTE] = ACTIONS(111),
  },
  [22] = {
    [anon_sym_SQUOTE] = ACTIONS(113),
  },
  [23] = {
    [anon_sym_SQUOTE] = ACTIONS(115),
  },
  [24] = {
    [sym__char_escape] = STATE(37),
    [sym__ascii] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(119),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(121),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(123),
    [anon_sym_X] = ACTIONS(123),
    [anon_sym_o] = ACTIONS(125),
    [anon_sym_O] = ACTIONS(125),
    [anon_sym_a] = ACTIONS(117),
    [anon_sym_b] = ACTIONS(117),
    [anon_sym_f] = ACTIONS(117),
    [anon_sym_n] = ACTIONS(117),
    [anon_sym_r] = ACTIONS(117),
    [anon_sym_t] = ACTIONS(117),
    [anon_sym_v] = ACTIONS(117),
    [anon_sym_NUL] = ACTIONS(127),
    [anon_sym_SOH] = ACTIONS(127),
    [anon_sym_STX] = ACTIONS(127),
    [anon_sym_ETX] = ACTIONS(127),
    [anon_sym_EOT] = ACTIONS(127),
    [anon_sym_ENQ] = ACTIONS(127),
    [anon_sym_ACK] = ACTIONS(127),
    [anon_sym_BEL] = ACTIONS(127),
    [anon_sym_BS] = ACTIONS(127),
    [anon_sym_HT] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_VT] = ACTIONS(127),
    [anon_sym_FF] = ACTIONS(127),
    [anon_sym_CR] = ACTIONS(127),
    [anon_sym_SO] = ACTIONS(129),
    [anon_sym_SI] = ACTIONS(127),
    [anon_sym_DLE] = ACTIONS(127),
    [anon_sym_DC1] = ACTIONS(127),
    [anon_sym_DC2] = ACTIONS(127),
    [anon_sym_DC3] = ACTIONS(127),
    [anon_sym_DC4] = ACTIONS(127),
    [anon_sym_NAK] = ACTIONS(127),
    [anon_sym_SYN] = ACTIONS(127),
    [anon_sym_ETB] = ACTIONS(127),
    [anon_sym_CAN] = ACTIONS(127),
    [anon_sym_EM] = ACTIONS(127),
    [anon_sym_SUB] = ACTIONS(127),
    [anon_sym_ESC] = ACTIONS(127),
    [anon_sym_FS] = ACTIONS(127),
    [anon_sym_GS] = ACTIONS(127),
    [anon_sym_RS] = ACTIONS(127),
    [anon_sym_US] = ACTIONS(127),
    [anon_sym_SP] = ACTIONS(127),
    [anon_sym_DEL] = ACTIONS(127),
  },
  [25] = {
    [anon_sym_SQUOTE] = ACTIONS(131),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_integer_literal] = ACTIONS(135),
    [sym_float_literal] = ACTIONS(137),
    [sym_octal_literal] = ACTIONS(135),
    [sym_hexidecimal_literal] = ACTIONS(135),
  },
  [27] = {
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(139),
    [anon_sym__] = ACTIONS(139),
    [sym__ascii_large] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [anon_sym_PERCENT] = ACTIONS(139),
    [anon_sym_AMP] = ACTIONS(139),
    [anon_sym_1] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [anon_sym_LT] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(139),
    [anon_sym_QMARK] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [anon_sym_CARET] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_BSLASH] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [sym__space] = ACTIONS(139),
    [sym__newline] = ACTIONS(139),
    [sym__tab] = ACTIONS(139),
  },
  [28] = {
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(141),
    [anon_sym__] = ACTIONS(141),
    [sym__ascii_large] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_POUND] = ACTIONS(141),
    [anon_sym_DOLLAR] = ACTIONS(141),
    [anon_sym_PERCENT] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [anon_sym_1] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_QMARK] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_CARET] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(141),
    [anon_sym_COLON] = ACTIONS(141),
    [anon_sym_BSLASH] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [anon_sym_BQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym__space] = ACTIONS(141),
    [sym__newline] = ACTIONS(141),
    [sym__tab] = ACTIONS(141),
  },
  [29] = {
    [sym__cntrl] = STATE(43),
    [anon_sym__] = ACTIONS(143),
    [sym__ascii_large] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(143),
    [anon_sym_CARET] = ACTIONS(143),
    [anon_sym_BSLASH] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
  },
  [30] = {
    [aux_sym__escape_repeat1] = STATE(45),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(145),
  },
  [31] = {
    [aux_sym__escape_repeat2] = STATE(47),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(147),
  },
  [32] = {
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(149),
    [anon_sym__] = ACTIONS(149),
    [sym__ascii_large] = ACTIONS(149),
    [anon_sym_BANG] = ACTIONS(149),
    [anon_sym_POUND] = ACTIONS(149),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [anon_sym_1] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_QMARK] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(149),
    [anon_sym_BSLASH] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym__space] = ACTIONS(149),
    [sym__newline] = ACTIONS(149),
    [sym__tab] = ACTIONS(149),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_integer_literal] = ACTIONS(153),
    [sym_float_literal] = ACTIONS(155),
    [sym_octal_literal] = ACTIONS(153),
    [sym_hexidecimal_literal] = ACTIONS(153),
  },
  [34] = {
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(157),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(157),
    [anon_sym__] = ACTIONS(157),
    [sym__ascii_large] = ACTIONS(157),
    [anon_sym_BANG] = ACTIONS(157),
    [anon_sym_POUND] = ACTIONS(157),
    [anon_sym_DOLLAR] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(157),
    [anon_sym_1] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_QMARK] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [anon_sym_CARET] = ACTIONS(157),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(157),
    [anon_sym_COLON] = ACTIONS(157),
    [anon_sym_BSLASH] = ACTIONS(157),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_RPAREN] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_BQUOTE] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
    [sym__space] = ACTIONS(157),
    [sym__newline] = ACTIONS(157),
    [sym__tab] = ACTIONS(157),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [sym_integer_literal] = ACTIONS(161),
    [sym_float_literal] = ACTIONS(163),
    [sym_octal_literal] = ACTIONS(161),
    [sym_hexidecimal_literal] = ACTIONS(161),
  },
  [36] = {
    [anon_sym_SQUOTE] = ACTIONS(165),
  },
  [37] = {
    [anon_sym_SQUOTE] = ACTIONS(167),
  },
  [38] = {
    [sym__cntrl] = STATE(49),
    [anon_sym__] = ACTIONS(169),
    [sym__ascii_large] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(169),
    [anon_sym_CARET] = ACTIONS(169),
    [anon_sym_BSLASH] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
  },
  [39] = {
    [aux_sym__escape_repeat1] = STATE(51),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(171),
  },
  [40] = {
    [aux_sym__escape_repeat2] = STATE(53),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(173),
  },
  [41] = {
    [anon_sym_SQUOTE] = ACTIONS(175),
  },
  [42] = {
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(177),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(177),
    [anon_sym__] = ACTIONS(177),
    [sym__ascii_large] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(177),
    [anon_sym_POUND] = ACTIONS(177),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_AMP] = ACTIONS(177),
    [anon_sym_1] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_COLON] = ACTIONS(177),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [sym__space] = ACTIONS(177),
    [sym__newline] = ACTIONS(177),
    [sym__tab] = ACTIONS(177),
  },
  [43] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(179),
    [anon_sym__] = ACTIONS(179),
    [sym__ascii_large] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_1] = ACTIONS(179),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_COLON] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym__space] = ACTIONS(179),
    [sym__newline] = ACTIONS(179),
    [sym__tab] = ACTIONS(179),
  },
  [44] = {
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(181),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(181),
    [anon_sym__] = ACTIONS(181),
    [sym__ascii_large] = ACTIONS(181),
    [anon_sym_BANG] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_DOLLAR] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_1] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_EQ] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(181),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(181),
    [sym__space] = ACTIONS(181),
    [sym__newline] = ACTIONS(181),
    [sym__tab] = ACTIONS(181),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(181),
  },
  [45] = {
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [sym__ascii_large] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym__space] = ACTIONS(183),
    [sym__newline] = ACTIONS(183),
    [sym__tab] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(185),
  },
  [46] = {
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(187),
    [anon_sym__] = ACTIONS(187),
    [sym__ascii_large] = ACTIONS(187),
    [anon_sym_BANG] = ACTIONS(187),
    [anon_sym_POUND] = ACTIONS(187),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_PERCENT] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(187),
    [anon_sym_1] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_SLASH] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_QMARK] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [anon_sym_LBRACE] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym__space] = ACTIONS(187),
    [sym__newline] = ACTIONS(187),
    [sym__tab] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(187),
  },
  [47] = {
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(183),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [sym__ascii_large] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym__space] = ACTIONS(183),
    [sym__newline] = ACTIONS(183),
    [sym__tab] = ACTIONS(183),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(189),
  },
  [48] = {
    [anon_sym_SQUOTE] = ACTIONS(191),
  },
  [49] = {
    [anon_sym_SQUOTE] = ACTIONS(193),
  },
  [50] = {
    [anon_sym_SQUOTE] = ACTIONS(195),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(195),
  },
  [51] = {
    [anon_sym_SQUOTE] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(199),
  },
  [52] = {
    [anon_sym_SQUOTE] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(201),
  },
  [53] = {
    [anon_sym_SQUOTE] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(203),
  },
  [54] = {
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(205),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(205),
    [anon_sym__] = ACTIONS(205),
    [sym__ascii_large] = ACTIONS(205),
    [anon_sym_BANG] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_DOLLAR] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_AMP] = ACTIONS(205),
    [anon_sym_1] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_QMARK] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_CARET] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_BSLASH] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
    [sym__space] = ACTIONS(205),
    [sym__newline] = ACTIONS(205),
    [sym__tab] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(205),
  },
  [55] = {
    [anon_sym_DQUOTE] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(207),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(207),
    [anon_sym__] = ACTIONS(207),
    [sym__ascii_large] = ACTIONS(207),
    [anon_sym_BANG] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_DOLLAR] = ACTIONS(207),
    [anon_sym_PERCENT] = ACTIONS(207),
    [anon_sym_AMP] = ACTIONS(207),
    [anon_sym_1] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_SLASH] = ACTIONS(207),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_CARET] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_BSLASH] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [sym__space] = ACTIONS(207),
    [sym__newline] = ACTIONS(207),
    [sym__tab] = ACTIONS(207),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(207),
  },
  [56] = {
    [anon_sym_SQUOTE] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(209),
  },
  [57] = {
    [anon_sym_SQUOTE] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(211),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [61] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 2),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 2),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 3),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 3),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [177] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [181] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [189] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haskell() {
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
