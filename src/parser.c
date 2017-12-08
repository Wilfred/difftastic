#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 59
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_float = 1,
  anon_sym_SQUOTE = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 4,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 5,
  anon_sym__ = 6,
  sym__ascii_large = 7,
  anon_sym_BANG = 8,
  anon_sym_POUND = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_PERCENT = 11,
  anon_sym_AMP = 12,
  anon_sym_1 = 13,
  anon_sym_PLUS = 14,
  anon_sym_DOT = 15,
  anon_sym_SLASH = 16,
  anon_sym_LT = 17,
  anon_sym_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_QMARK = 20,
  anon_sym_AT = 21,
  anon_sym_CARET = 22,
  anon_sym_PIPE = 23,
  anon_sym_DASH = 24,
  anon_sym_TILDE = 25,
  anon_sym_COLON = 26,
  anon_sym_BSLASH = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_SEMI = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_BQUOTE = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  sym__space = 36,
  sym__newline = 37,
  sym__tab = 38,
  anon_sym_x = 39,
  anon_sym_X = 40,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 41,
  anon_sym_o = 42,
  anon_sym_O = 43,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 44,
  anon_sym_a = 45,
  anon_sym_b = 46,
  anon_sym_f = 47,
  anon_sym_n = 48,
  anon_sym_r = 49,
  anon_sym_t = 50,
  anon_sym_v = 51,
  anon_sym_NUL = 52,
  anon_sym_SOH = 53,
  anon_sym_STX = 54,
  anon_sym_ETX = 55,
  anon_sym_EOT = 56,
  anon_sym_ENQ = 57,
  anon_sym_ACK = 58,
  anon_sym_BEL = 59,
  anon_sym_BS = 60,
  anon_sym_HT = 61,
  anon_sym_LF = 62,
  anon_sym_VT = 63,
  anon_sym_FF = 64,
  anon_sym_CR = 65,
  anon_sym_SO = 66,
  anon_sym_SI = 67,
  anon_sym_DLE = 68,
  anon_sym_DC1 = 69,
  anon_sym_DC2 = 70,
  anon_sym_DC3 = 71,
  anon_sym_DC4 = 72,
  anon_sym_NAK = 73,
  anon_sym_SYN = 74,
  anon_sym_ETB = 75,
  anon_sym_CAN = 76,
  anon_sym_EM = 77,
  anon_sym_SUB = 78,
  anon_sym_ESC = 79,
  anon_sym_FS = 80,
  anon_sym_GS = 81,
  anon_sym_RS = 82,
  anon_sym_US = 83,
  anon_sym_SP = 84,
  anon_sym_DEL = 85,
  sym__integer_literal = 86,
  sym__octal_literal = 87,
  sym__hexidecimal_literal = 88,
  sym_program = 89,
  sym_statement = 90,
  sym__literal = 91,
  sym_integer = 92,
  sym_char = 93,
  sym_string = 94,
  sym__gap = 95,
  sym__graphic = 96,
  sym__small = 97,
  sym__large = 98,
  sym__symbol = 99,
  sym__special = 100,
  sym__escape = 101,
  sym__char_escape = 102,
  sym__ascii = 103,
  sym__cntrl = 104,
  aux_sym_program_repeat1 = 105,
  aux_sym_string_repeat1 = 106,
  aux_sym__escape_repeat1 = 107,
  aux_sym__escape_repeat2 = 108,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
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
  [sym__integer_literal] = "_integer_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hexidecimal_literal] = "_hexidecimal_literal",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym__literal] = "_literal",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__gap] = "_gap",
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
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexidecimal_literal] = {
    .visible = false,
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
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__gap] = {
    .visible = false,
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
  [aux_sym_string_repeat1] = {
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
      ACCEPT_TOKEN(sym_float);
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
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__integer_literal);
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
      ACCEPT_TOKEN(sym__integer_literal);
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
      ACCEPT_TOKEN(sym__octal_literal);
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
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == ' ')
        ADVANCE(84);
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
        SKIP(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 86:
      if (lookahead == '\t')
        ADVANCE(87);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        SKIP(86);
      if (lookahead == ' ')
        ADVANCE(84);
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
        ADVANCE(85);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 89:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
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
        ADVANCE(125);
      if (lookahead == 'H')
        ADVANCE(126);
      if (lookahead == 'L')
        ADVANCE(127);
      if (lookahead == 'N')
        ADVANCE(128);
      if (lookahead == 'O')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(129);
      if (lookahead == 'S')
        ADVANCE(130);
      if (lookahead == 'U')
        ADVANCE(131);
      if (lookahead == 'V')
        ADVANCE(132);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead == '\\')
        ADVANCE(53);
      if (lookahead == '^')
        ADVANCE(55);
      if (lookahead == 'a')
        ADVANCE(133);
      if (lookahead == 'b')
        ADVANCE(134);
      if (lookahead == 'f')
        ADVANCE(135);
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
        SKIP(89);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(85);
      END_STATE();
    case 90:
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
      if (lookahead == 'S')
        ADVANCE(23);
      END_STATE();
    case 126:
      if (lookahead == 'T')
        ADVANCE(25);
      END_STATE();
    case 127:
      if (lookahead == 'F')
        ADVANCE(27);
      END_STATE();
    case 128:
      if (lookahead == 'A')
        ADVANCE(29);
      if (lookahead == 'U')
        ADVANCE(31);
      END_STATE();
    case 129:
      if (lookahead == 'S')
        ADVANCE(35);
      END_STATE();
    case 130:
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
    case 131:
      if (lookahead == 'S')
        ADVANCE(48);
      END_STATE();
    case 132:
      if (lookahead == 'T')
        ADVANCE(50);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 136:
      if (lookahead == '\t')
        ADVANCE(87);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        SKIP(136);
      if (lookahead == ' ')
        ADVANCE(84);
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
        ADVANCE(137);
      if (lookahead == 'B')
        ADVANCE(138);
      if (lookahead == 'C')
        ADVANCE(139);
      if (lookahead == 'D')
        ADVANCE(140);
      if (lookahead == 'E')
        ADVANCE(141);
      if (lookahead == 'F')
        ADVANCE(142);
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
        ADVANCE(133);
      if (lookahead == 'b')
        ADVANCE(134);
      if (lookahead == 'f')
        ADVANCE(135);
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
        ADVANCE(85);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(75);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(76);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(91);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(94);
      if (lookahead == 'S')
        ADVANCE(96);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(98);
      if (lookahead == 'R')
        ADVANCE(100);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(102);
      if (lookahead == 'E')
        ADVANCE(107);
      if (lookahead == 'L')
        ADVANCE(109);
      END_STATE();
    case 141:
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
    case 142:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(123);
      if (lookahead == 'S')
        ADVANCE(124);
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
        ADVANCE(87);
      if (lookahead == '\n')
        ADVANCE(88);
      if (lookahead == '\r')
        SKIP(147);
      if (lookahead == ' ')
        ADVANCE(84);
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
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(85);
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
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 77},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 136},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 77},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 143},
  [32] = {.lex_state = 145},
  [33] = {.lex_state = 143},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 86},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 143},
  [38] = {.lex_state = 145},
  [39] = {.lex_state = 143},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 86},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 145},
  [46] = {.lex_state = 145},
  [47] = {.lex_state = 143},
  [48] = {.lex_state = 143},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 86},
  [53] = {.lex_state = 147},
  [54] = {.lex_state = 147},
  [55] = {.lex_state = 145},
  [56] = {.lex_state = 143},
  [57] = {.lex_state = 86},
  [58] = {.lex_state = 147},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_float] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(5),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym__] = ACTIONS(1),
    [sym__ascii_large] = ACTIONS(3),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(3),
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
    [anon_sym_SO] = ACTIONS(5),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym_statement] = STATE(7),
    [sym__literal] = STATE(8),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__integer_literal] = ACTIONS(15),
    [sym__octal_literal] = ACTIONS(15),
    [sym__hexidecimal_literal] = ACTIONS(15),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_float] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [sym__integer_literal] = ACTIONS(21),
    [sym__octal_literal] = ACTIONS(21),
    [sym__hexidecimal_literal] = ACTIONS(21),
  },
  [3] = {
    [sym__graphic] = STATE(10),
    [sym__small] = STATE(11),
    [sym__large] = STATE(11),
    [sym__symbol] = STATE(11),
    [sym__special] = STATE(11),
    [sym__escape] = STATE(10),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(25),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(27),
    [anon_sym__] = ACTIONS(27),
    [sym__ascii_large] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(31),
    [anon_sym_AMP] = ACTIONS(31),
    [anon_sym_1] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_EQ] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_QMARK] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(31),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym__space] = ACTIONS(23),
  },
  [4] = {
    [sym__gap] = STATE(17),
    [sym__graphic] = STATE(17),
    [sym__small] = STATE(19),
    [sym__large] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym__special] = STATE(19),
    [sym__escape] = STATE(17),
    [aux_sym_string_repeat1] = STATE(26),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [sym__ascii_large] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_1] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym__space] = ACTIONS(53),
    [sym__newline] = ACTIONS(53),
    [sym__tab] = ACTIONS(53),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_float] = ACTIONS(57),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [sym__integer_literal] = ACTIONS(59),
    [sym__octal_literal] = ACTIONS(59),
    [sym__hexidecimal_literal] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(63),
    [sym__integer_literal] = ACTIONS(67),
    [sym__octal_literal] = ACTIONS(67),
    [sym__hexidecimal_literal] = ACTIONS(67),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [9] = {
    [sym_statement] = STATE(27),
    [sym__literal] = STATE(8),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_string] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_float] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__integer_literal] = ACTIONS(15),
    [sym__octal_literal] = ACTIONS(15),
    [sym__hexidecimal_literal] = ACTIONS(15),
  },
  [10] = {
    [anon_sym_SQUOTE] = ACTIONS(77),
  },
  [11] = {
    [anon_sym_SQUOTE] = ACTIONS(79),
  },
  [12] = {
    [anon_sym_SQUOTE] = ACTIONS(81),
  },
  [13] = {
    [anon_sym_SQUOTE] = ACTIONS(83),
  },
  [14] = {
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [15] = {
    [sym__char_escape] = STATE(30),
    [sym__ascii] = STATE(30),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(89),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(91),
    [anon_sym_BSLASH] = ACTIONS(87),
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
    [anon_sym_SO] = ACTIONS(99),
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
    [anon_sym_SQUOTE] = ACTIONS(101),
  },
  [17] = {
    [anon_sym_SQUOTE] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(103),
    [anon_sym__] = ACTIONS(103),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(103),
    [anon_sym_DOLLAR] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_AMP] = ACTIONS(103),
    [anon_sym_1] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_LT] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_QMARK] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_BSLASH] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [sym__space] = ACTIONS(103),
    [sym__newline] = ACTIONS(103),
    [sym__tab] = ACTIONS(103),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_float] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym__integer_literal] = ACTIONS(109),
    [sym__octal_literal] = ACTIONS(109),
    [sym__hexidecimal_literal] = ACTIONS(109),
  },
  [19] = {
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(111),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [anon_sym__] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(111),
    [anon_sym_BANG] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [anon_sym_PERCENT] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_1] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_LT] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_QMARK] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_BSLASH] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [sym__space] = ACTIONS(111),
    [sym__newline] = ACTIONS(111),
    [sym__tab] = ACTIONS(111),
  },
  [20] = {
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(113),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(113),
    [anon_sym__] = ACTIONS(113),
    [sym__ascii_large] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_DOLLAR] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [anon_sym_1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_QMARK] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_CARET] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_BSLASH] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym__space] = ACTIONS(113),
    [sym__newline] = ACTIONS(113),
    [sym__tab] = ACTIONS(113),
  },
  [21] = {
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(115),
    [anon_sym__] = ACTIONS(115),
    [sym__ascii_large] = ACTIONS(115),
    [anon_sym_BANG] = ACTIONS(115),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_PERCENT] = ACTIONS(115),
    [anon_sym_AMP] = ACTIONS(115),
    [anon_sym_1] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_QMARK] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_COLON] = ACTIONS(115),
    [anon_sym_BSLASH] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [sym__space] = ACTIONS(115),
    [sym__newline] = ACTIONS(115),
    [sym__tab] = ACTIONS(115),
  },
  [22] = {
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_1] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym__space] = ACTIONS(117),
    [sym__newline] = ACTIONS(117),
    [sym__tab] = ACTIONS(117),
  },
  [23] = {
    [sym__char_escape] = STATE(36),
    [sym__ascii] = STATE(36),
    [anon_sym_SQUOTE] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(121),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(117),
    [anon_sym__] = ACTIONS(117),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_BANG] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(117),
    [anon_sym_DOLLAR] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(119),
    [anon_sym_1] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_QMARK] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_COLON] = ACTIONS(117),
    [anon_sym_BSLASH] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [sym__space] = ACTIONS(117),
    [sym__newline] = ACTIONS(117),
    [sym__tab] = ACTIONS(117),
    [anon_sym_x] = ACTIONS(125),
    [anon_sym_X] = ACTIONS(125),
    [anon_sym_o] = ACTIONS(127),
    [anon_sym_O] = ACTIONS(127),
    [anon_sym_a] = ACTIONS(119),
    [anon_sym_b] = ACTIONS(119),
    [anon_sym_f] = ACTIONS(119),
    [anon_sym_n] = ACTIONS(119),
    [anon_sym_r] = ACTIONS(119),
    [anon_sym_t] = ACTIONS(119),
    [anon_sym_v] = ACTIONS(119),
    [anon_sym_NUL] = ACTIONS(129),
    [anon_sym_SOH] = ACTIONS(129),
    [anon_sym_STX] = ACTIONS(129),
    [anon_sym_ETX] = ACTIONS(129),
    [anon_sym_EOT] = ACTIONS(129),
    [anon_sym_ENQ] = ACTIONS(129),
    [anon_sym_ACK] = ACTIONS(129),
    [anon_sym_BEL] = ACTIONS(129),
    [anon_sym_BS] = ACTIONS(129),
    [anon_sym_HT] = ACTIONS(129),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_VT] = ACTIONS(129),
    [anon_sym_FF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_SO] = ACTIONS(129),
    [anon_sym_SI] = ACTIONS(129),
    [anon_sym_DLE] = ACTIONS(129),
    [anon_sym_DC1] = ACTIONS(129),
    [anon_sym_DC2] = ACTIONS(129),
    [anon_sym_DC3] = ACTIONS(129),
    [anon_sym_DC4] = ACTIONS(129),
    [anon_sym_NAK] = ACTIONS(129),
    [anon_sym_SYN] = ACTIONS(129),
    [anon_sym_ETB] = ACTIONS(129),
    [anon_sym_CAN] = ACTIONS(129),
    [anon_sym_EM] = ACTIONS(129),
    [anon_sym_SUB] = ACTIONS(129),
    [anon_sym_ESC] = ACTIONS(129),
    [anon_sym_FS] = ACTIONS(129),
    [anon_sym_GS] = ACTIONS(129),
    [anon_sym_RS] = ACTIONS(129),
    [anon_sym_US] = ACTIONS(129),
    [anon_sym_SP] = ACTIONS(129),
    [anon_sym_DEL] = ACTIONS(129),
  },
  [24] = {
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(131),
    [anon_sym__] = ACTIONS(131),
    [sym__ascii_large] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_DOLLAR] = ACTIONS(131),
    [anon_sym_PERCENT] = ACTIONS(131),
    [anon_sym_AMP] = ACTIONS(131),
    [anon_sym_1] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [anon_sym_LT] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_QMARK] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_CARET] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(131),
    [anon_sym_BSLASH] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [sym__space] = ACTIONS(131),
    [sym__newline] = ACTIONS(131),
    [sym__tab] = ACTIONS(131),
  },
  [25] = {
    [anon_sym_SQUOTE] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(133),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(133),
    [anon_sym__] = ACTIONS(133),
    [sym__ascii_large] = ACTIONS(133),
    [anon_sym_BANG] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(133),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_AMP] = ACTIONS(133),
    [anon_sym_1] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_QMARK] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_COLON] = ACTIONS(133),
    [anon_sym_BSLASH] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [sym__space] = ACTIONS(133),
    [sym__newline] = ACTIONS(133),
    [sym__tab] = ACTIONS(133),
  },
  [26] = {
    [sym__gap] = STATE(41),
    [sym__graphic] = STATE(41),
    [sym__small] = STATE(19),
    [sym__large] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym__special] = STATE(19),
    [sym__escape] = STATE(41),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(43),
    [anon_sym__] = ACTIONS(43),
    [sym__ascii_large] = ACTIONS(45),
    [anon_sym_BANG] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [anon_sym_PERCENT] = ACTIONS(47),
    [anon_sym_AMP] = ACTIONS(47),
    [anon_sym_1] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_QMARK] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(47),
    [anon_sym_CARET] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(51),
    [anon_sym_BQUOTE] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(51),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym__space] = ACTIONS(53),
    [sym__newline] = ACTIONS(53),
    [sym__tab] = ACTIONS(53),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_float] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym__integer_literal] = ACTIONS(143),
    [sym__octal_literal] = ACTIONS(143),
    [sym__hexidecimal_literal] = ACTIONS(143),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [sym__integer_literal] = ACTIONS(149),
    [sym__octal_literal] = ACTIONS(149),
    [sym__hexidecimal_literal] = ACTIONS(149),
  },
  [29] = {
    [anon_sym_SQUOTE] = ACTIONS(151),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(153),
  },
  [31] = {
    [sym__cntrl] = STATE(44),
    [anon_sym__] = ACTIONS(155),
    [sym__ascii_large] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_CARET] = ACTIONS(155),
    [anon_sym_BSLASH] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
  },
  [32] = {
    [aux_sym__escape_repeat1] = STATE(46),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(157),
  },
  [33] = {
    [aux_sym__escape_repeat2] = STATE(48),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(159),
  },
  [34] = {
    [anon_sym_SQUOTE] = ACTIONS(161),
  },
  [35] = {
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(163),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(163),
    [anon_sym__] = ACTIONS(163),
    [sym__ascii_large] = ACTIONS(163),
    [anon_sym_BANG] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(163),
    [anon_sym_DOLLAR] = ACTIONS(163),
    [anon_sym_PERCENT] = ACTIONS(163),
    [anon_sym_AMP] = ACTIONS(163),
    [anon_sym_1] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(163),
    [anon_sym_DOT] = ACTIONS(163),
    [anon_sym_SLASH] = ACTIONS(163),
    [anon_sym_LT] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_QMARK] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_CARET] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_COLON] = ACTIONS(163),
    [anon_sym_BSLASH] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym__space] = ACTIONS(163),
    [sym__newline] = ACTIONS(163),
    [sym__tab] = ACTIONS(163),
  },
  [36] = {
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(165),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(165),
    [anon_sym__] = ACTIONS(165),
    [sym__ascii_large] = ACTIONS(165),
    [anon_sym_BANG] = ACTIONS(165),
    [anon_sym_POUND] = ACTIONS(165),
    [anon_sym_DOLLAR] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [anon_sym_1] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_CARET] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_COLON] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_BQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [sym__space] = ACTIONS(165),
    [sym__newline] = ACTIONS(165),
    [sym__tab] = ACTIONS(165),
  },
  [37] = {
    [sym__cntrl] = STATE(50),
    [anon_sym__] = ACTIONS(167),
    [sym__ascii_large] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_CARET] = ACTIONS(167),
    [anon_sym_BSLASH] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
  },
  [38] = {
    [aux_sym__escape_repeat1] = STATE(52),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(169),
  },
  [39] = {
    [aux_sym__escape_repeat2] = STATE(54),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(171),
  },
  [40] = {
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
    [sym__ascii_large] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BSLASH] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym__space] = ACTIONS(173),
    [sym__newline] = ACTIONS(173),
    [sym__tab] = ACTIONS(173),
  },
  [41] = {
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(175),
    [anon_sym__] = ACTIONS(175),
    [sym__ascii_large] = ACTIONS(175),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(175),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_PERCENT] = ACTIONS(175),
    [anon_sym_AMP] = ACTIONS(175),
    [anon_sym_1] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_COLON] = ACTIONS(175),
    [anon_sym_BSLASH] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [anon_sym_LBRACE] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(175),
    [sym__space] = ACTIONS(175),
    [sym__newline] = ACTIONS(175),
    [sym__tab] = ACTIONS(175),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_float] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym__integer_literal] = ACTIONS(181),
    [sym__octal_literal] = ACTIONS(181),
    [sym__hexidecimal_literal] = ACTIONS(181),
  },
  [43] = {
    [anon_sym_SQUOTE] = ACTIONS(183),
  },
  [44] = {
    [anon_sym_SQUOTE] = ACTIONS(185),
  },
  [45] = {
    [anon_sym_SQUOTE] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(187),
  },
  [46] = {
    [anon_sym_SQUOTE] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(191),
  },
  [47] = {
    [anon_sym_SQUOTE] = ACTIONS(193),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(193),
  },
  [48] = {
    [anon_sym_SQUOTE] = ACTIONS(189),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(195),
  },
  [49] = {
    [anon_sym_SQUOTE] = ACTIONS(197),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(197),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(197),
    [anon_sym__] = ACTIONS(197),
    [sym__ascii_large] = ACTIONS(197),
    [anon_sym_BANG] = ACTIONS(197),
    [anon_sym_POUND] = ACTIONS(197),
    [anon_sym_DOLLAR] = ACTIONS(197),
    [anon_sym_PERCENT] = ACTIONS(197),
    [anon_sym_AMP] = ACTIONS(197),
    [anon_sym_1] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(197),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_CARET] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_BSLASH] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(197),
    [sym__space] = ACTIONS(197),
    [sym__newline] = ACTIONS(197),
    [sym__tab] = ACTIONS(197),
  },
  [50] = {
    [anon_sym_SQUOTE] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(199),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(199),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(199),
    [anon_sym__] = ACTIONS(199),
    [sym__ascii_large] = ACTIONS(199),
    [anon_sym_BANG] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_DOLLAR] = ACTIONS(199),
    [anon_sym_PERCENT] = ACTIONS(199),
    [anon_sym_AMP] = ACTIONS(199),
    [anon_sym_1] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_SLASH] = ACTIONS(199),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_QMARK] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_CARET] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(199),
    [anon_sym_BSLASH] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_RBRACE] = ACTIONS(199),
    [sym__space] = ACTIONS(199),
    [sym__newline] = ACTIONS(199),
    [sym__tab] = ACTIONS(199),
  },
  [51] = {
    [anon_sym_SQUOTE] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(201),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(201),
    [anon_sym__] = ACTIONS(201),
    [sym__ascii_large] = ACTIONS(201),
    [anon_sym_BANG] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_DOLLAR] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_AMP] = ACTIONS(201),
    [anon_sym_1] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(201),
    [anon_sym_EQ] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_QMARK] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_CARET] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_BSLASH] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_RBRACE] = ACTIONS(201),
    [sym__space] = ACTIONS(201),
    [sym__newline] = ACTIONS(201),
    [sym__tab] = ACTIONS(201),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(201),
  },
  [52] = {
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [sym__ascii_large] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_1] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym__space] = ACTIONS(203),
    [sym__newline] = ACTIONS(203),
    [sym__tab] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(205),
  },
  [53] = {
    [anon_sym_SQUOTE] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(207),
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
  [54] = {
    [anon_sym_SQUOTE] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(203),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(203),
    [anon_sym__] = ACTIONS(203),
    [sym__ascii_large] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_DOLLAR] = ACTIONS(203),
    [anon_sym_PERCENT] = ACTIONS(203),
    [anon_sym_AMP] = ACTIONS(203),
    [anon_sym_1] = ACTIONS(203),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_SLASH] = ACTIONS(203),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_CARET] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_BSLASH] = ACTIONS(203),
    [anon_sym_LPAREN] = ACTIONS(203),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(203),
    [anon_sym_RBRACE] = ACTIONS(203),
    [sym__space] = ACTIONS(203),
    [sym__newline] = ACTIONS(203),
    [sym__tab] = ACTIONS(203),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(209),
  },
  [55] = {
    [anon_sym_SQUOTE] = ACTIONS(211),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(211),
  },
  [56] = {
    [anon_sym_SQUOTE] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(213),
  },
  [57] = {
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(215),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [sym__ascii_large] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_EQ] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_BSLASH] = ACTIONS(215),
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_BQUOTE] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(215),
    [sym__space] = ACTIONS(215),
    [sym__newline] = ACTIONS(215),
    [sym__tab] = ACTIONS(215),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(215),
  },
  [58] = {
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(217),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(217),
    [anon_sym__] = ACTIONS(217),
    [sym__ascii_large] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_1] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_EQ] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(217),
    [anon_sym_BSLASH] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
    [sym__space] = ACTIONS(217),
    [sym__newline] = ACTIONS(217),
    [sym__tab] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(217),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [147] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [179] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
