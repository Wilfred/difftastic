#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 31
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SQUOTE = 1,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 2,
  anon_sym_DQUOTE = 3,
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
  anon_sym_x = 36,
  anon_sym_X = 37,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 38,
  anon_sym_o = 39,
  anon_sym_O = 40,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 41,
  anon_sym_a = 42,
  anon_sym_b = 43,
  anon_sym_f = 44,
  anon_sym_n = 45,
  anon_sym_r = 46,
  anon_sym_t = 47,
  anon_sym_v = 48,
  anon_sym_NUL = 49,
  anon_sym_SOH = 50,
  anon_sym_STX = 51,
  anon_sym_ETX = 52,
  anon_sym_EOT = 53,
  anon_sym_ENQ = 54,
  anon_sym_ACK = 55,
  anon_sym_BEL = 56,
  anon_sym_BS = 57,
  anon_sym_HT = 58,
  anon_sym_LF = 59,
  anon_sym_VT = 60,
  anon_sym_FF = 61,
  anon_sym_CR = 62,
  anon_sym_SO = 63,
  anon_sym_SI = 64,
  anon_sym_DLE = 65,
  anon_sym_DC1 = 66,
  anon_sym_DC2 = 67,
  anon_sym_DC3 = 68,
  anon_sym_DC4 = 69,
  anon_sym_NAK = 70,
  anon_sym_SYN = 71,
  anon_sym_ETB = 72,
  anon_sym_CAN = 73,
  anon_sym_EM = 74,
  anon_sym_SUB = 75,
  anon_sym_ESC = 76,
  anon_sym_FS = 77,
  anon_sym_GS = 78,
  anon_sym_RS = 79,
  anon_sym_US = 80,
  anon_sym_SP = 81,
  anon_sym_DEL = 82,
  sym_integer_literal = 83,
  sym_float_literal = 84,
  sym_octal_literal = 85,
  sym_hexidecimal_literal = 86,
  sym_program = 87,
  sym_statement = 88,
  sym_char_literal = 89,
  sym__graphic = 90,
  sym__small = 91,
  sym__large = 92,
  sym__symbol = 93,
  sym__special = 94,
  sym__escape = 95,
  sym__char_escape = 96,
  sym__ascii = 97,
  sym__cntrl = 98,
  sym__literals = 99,
  aux_sym_program_repeat1 = 100,
  aux_sym__escape_repeat1 = 101,
  aux_sym__escape_repeat2 = 102,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [anon_sym_DQUOTE] = "\"",
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
  [sym__literals] = "_literals",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
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
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      if (lookahead == '?')
        ADVANCE(30);
      if (lookahead == '@')
        ADVANCE(31);
      if (lookahead == 'B')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(34);
      if (lookahead == 'D')
        ADVANCE(36);
      if (lookahead == 'E')
        ADVANCE(39);
      if (lookahead == 'F')
        ADVANCE(50);
      if (lookahead == 'G')
        ADVANCE(52);
      if (lookahead == 'H')
        ADVANCE(54);
      if (lookahead == 'L')
        ADVANCE(56);
      if (lookahead == 'N')
        ADVANCE(58);
      if (lookahead == 'R')
        ADVANCE(63);
      if (lookahead == 'S')
        ADVANCE(65);
      if (lookahead == 'U')
        ADVANCE(76);
      if (lookahead == 'V')
        ADVANCE(78);
      if (lookahead == '[')
        ADVANCE(80);
      if (lookahead == '\\')
        ADVANCE(81);
      if (lookahead == ']')
        ADVANCE(82);
      if (lookahead == '^')
        ADVANCE(83);
      if (lookahead == '_')
        ADVANCE(84);
      if (lookahead == '`')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(86);
      if (lookahead == '|')
        ADVANCE(87);
      if (lookahead == '}')
        ADVANCE(88);
      if (lookahead == '~')
        ADVANCE(89);
      if (lookahead == 8902)
        ADVANCE(90);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '7'))
        ADVANCE(91);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'O')
        ADVANCE(20);
      if (lookahead == 'X')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(20);
      if (lookahead == 'x')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(21);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 32:
      if (lookahead == 'S')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 34:
      if (lookahead == 'R')
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 36:
      if (lookahead == 'L')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'E')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 39:
      if (lookahead == 'M')
        ADVANCE(40);
      if (lookahead == 'N')
        ADVANCE(41);
      if (lookahead == 'O')
        ADVANCE(43);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 41:
      if (lookahead == 'Q')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 43:
      if (lookahead == 'T')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 45:
      if (lookahead == 'C')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 47:
      if (lookahead == 'B')
        ADVANCE(48);
      if (lookahead == 'X')
        ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 50:
      if (lookahead == 'S')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 52:
      if (lookahead == 'S')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 54:
      if (lookahead == 'T')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 56:
      if (lookahead == 'F')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 58:
      if (lookahead == 'A')
        ADVANCE(59);
      if (lookahead == 'U')
        ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'K')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 61:
      if (lookahead == 'L')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 63:
      if (lookahead == 'S')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 65:
      if (lookahead == 'I')
        ADVANCE(66);
      if (lookahead == 'O')
        ADVANCE(67);
      if (lookahead == 'P')
        ADVANCE(69);
      if (lookahead == 'T')
        ADVANCE(70);
      if (lookahead == 'U')
        ADVANCE(72);
      if (lookahead == 'Y')
        ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 70:
      if (lookahead == 'X')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 72:
      if (lookahead == 'B')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 74:
      if (lookahead == 'N')
        ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 76:
      if (lookahead == 'S')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 78:
      if (lookahead == 'T')
        ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 92:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(92);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == 'E')
        ADVANCE(17);
      if (lookahead == 'O')
        ADVANCE(20);
      if (lookahead == 'X')
        ADVANCE(22);
      if (lookahead == 'e')
        ADVANCE(17);
      if (lookahead == 'o')
        ADVANCE(20);
      if (lookahead == 'x')
        ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(24);
      END_STATE();
    case 94:
      if (lookahead == ' ')
        ADVANCE(95);
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
        ADVANCE(25);
      if (lookahead == ';')
        ADVANCE(26);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      if (lookahead == '>')
        ADVANCE(29);
      if (lookahead == '?')
        ADVANCE(30);
      if (lookahead == '@')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(80);
      if (lookahead == '\\')
        ADVANCE(81);
      if (lookahead == ']')
        ADVANCE(82);
      if (lookahead == '^')
        ADVANCE(83);
      if (lookahead == '_')
        ADVANCE(84);
      if (lookahead == '`')
        ADVANCE(85);
      if (lookahead == '{')
        ADVANCE(86);
      if (lookahead == '|')
        ADVANCE(87);
      if (lookahead == '}')
        ADVANCE(88);
      if (lookahead == '~')
        ADVANCE(89);
      if (lookahead == 8902)
        ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(94);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 99:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'A')
        ADVANCE(100);
      if (lookahead == 'B')
        ADVANCE(103);
      if (lookahead == 'C')
        ADVANCE(106);
      if (lookahead == 'D')
        ADVANCE(109);
      if (lookahead == 'E')
        ADVANCE(39);
      if (lookahead == 'F')
        ADVANCE(117);
      if (lookahead == 'G')
        ADVANCE(52);
      if (lookahead == 'H')
        ADVANCE(54);
      if (lookahead == 'L')
        ADVANCE(56);
      if (lookahead == 'N')
        ADVANCE(58);
      if (lookahead == 'O')
        ADVANCE(119);
      if (lookahead == 'R')
        ADVANCE(63);
      if (lookahead == 'S')
        ADVANCE(65);
      if (lookahead == 'U')
        ADVANCE(76);
      if (lookahead == 'V')
        ADVANCE(78);
      if (lookahead == 'X')
        ADVANCE(120);
      if (lookahead == '\\')
        ADVANCE(81);
      if (lookahead == '^')
        ADVANCE(83);
      if (lookahead == 'a')
        ADVANCE(121);
      if (lookahead == 'b')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'n')
        ADVANCE(124);
      if (lookahead == 'o')
        ADVANCE(125);
      if (lookahead == 'r')
        ADVANCE(126);
      if (lookahead == 't')
        ADVANCE(127);
      if (lookahead == 'v')
        ADVANCE(128);
      if (lookahead == 'x')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == 'C')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'K')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 103:
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'S')
        ADVANCE(33);
      END_STATE();
    case 104:
      if (lookahead == 'L')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 106:
      if (lookahead == 'A')
        ADVANCE(107);
      if (lookahead == 'R')
        ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 'N')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 109:
      if (lookahead == 'C')
        ADVANCE(110);
      if (lookahead == 'E')
        ADVANCE(115);
      if (lookahead == 'L')
        ADVANCE(37);
      END_STATE();
    case 110:
      if (lookahead == '1')
        ADVANCE(111);
      if (lookahead == '2')
        ADVANCE(112);
      if (lookahead == '3')
        ADVANCE(113);
      if (lookahead == '4')
        ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 115:
      if (lookahead == 'L')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 117:
      if (lookahead == 'F')
        ADVANCE(118);
      if (lookahead == 'S')
        ADVANCE(51);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 130:
      if (lookahead == '@')
        ADVANCE(31);
      if (lookahead == '[')
        ADVANCE(80);
      if (lookahead == '\\')
        ADVANCE(81);
      if (lookahead == ']')
        ADVANCE(82);
      if (lookahead == '^')
        ADVANCE(83);
      if (lookahead == '_')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(97);
      END_STATE();
    case 131:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 133:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 130},
  [19] = {.lex_state = 131},
  [20] = {.lex_state = 133},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 133},
  [28] = {.lex_state = 133},
  [29] = {.lex_state = 131},
  [30] = {.lex_state = 133},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_NUL] = ACTIONS(1),
    [anon_sym_SOH] = ACTIONS(1),
    [anon_sym_STX] = ACTIONS(1),
    [anon_sym_ETX] = ACTIONS(1),
    [anon_sym_EOT] = ACTIONS(1),
    [anon_sym_ENQ] = ACTIONS(1),
    [anon_sym_BS] = ACTIONS(1),
    [anon_sym_HT] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_VT] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_DLE] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_ETB] = ACTIONS(1),
    [anon_sym_EM] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_ESC] = ACTIONS(1),
    [anon_sym_FS] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(5),
    [sym_float_literal] = ACTIONS(5),
    [sym_octal_literal] = ACTIONS(3),
    [sym_hexidecimal_literal] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym_statement] = STATE(5),
    [sym_char_literal] = STATE(3),
    [sym__literals] = STATE(6),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_integer_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [sym_octal_literal] = ACTIONS(11),
    [sym_hexidecimal_literal] = ACTIONS(11),
  },
  [2] = {
    [sym__graphic] = STATE(14),
    [sym__small] = STATE(8),
    [sym__large] = STATE(8),
    [sym__symbol] = STATE(8),
    [sym__special] = STATE(8),
    [sym__escape] = STATE(14),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(17),
    [anon_sym__] = ACTIONS(17),
    [sym__ascii_large] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym_POUND] = ACTIONS(21),
    [anon_sym_DOLLAR] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_1] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_QMARK] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [sym__space] = ACTIONS(27),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_integer_literal] = ACTIONS(31),
    [sym_float_literal] = ACTIONS(33),
    [sym_octal_literal] = ACTIONS(31),
    [sym_hexidecimal_literal] = ACTIONS(31),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_integer_literal] = ACTIONS(39),
    [sym_float_literal] = ACTIONS(41),
    [sym_octal_literal] = ACTIONS(39),
    [sym_hexidecimal_literal] = ACTIONS(39),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_integer_literal] = ACTIONS(45),
    [sym_float_literal] = ACTIONS(47),
    [sym_octal_literal] = ACTIONS(45),
    [sym_hexidecimal_literal] = ACTIONS(45),
  },
  [7] = {
    [sym_statement] = STATE(15),
    [sym_char_literal] = STATE(3),
    [sym__literals] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_integer_literal] = ACTIONS(11),
    [sym_float_literal] = ACTIONS(13),
    [sym_octal_literal] = ACTIONS(11),
    [sym_hexidecimal_literal] = ACTIONS(11),
  },
  [8] = {
    [anon_sym_SQUOTE] = ACTIONS(51),
  },
  [9] = {
    [anon_sym_SQUOTE] = ACTIONS(53),
  },
  [10] = {
    [anon_sym_SQUOTE] = ACTIONS(55),
  },
  [11] = {
    [anon_sym_SQUOTE] = ACTIONS(57),
  },
  [12] = {
    [sym__char_escape] = STATE(17),
    [sym__ascii] = STATE(17),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(61),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(59),
    [anon_sym_x] = ACTIONS(65),
    [anon_sym_X] = ACTIONS(65),
    [anon_sym_o] = ACTIONS(67),
    [anon_sym_O] = ACTIONS(67),
    [anon_sym_a] = ACTIONS(59),
    [anon_sym_b] = ACTIONS(59),
    [anon_sym_f] = ACTIONS(59),
    [anon_sym_n] = ACTIONS(59),
    [anon_sym_r] = ACTIONS(59),
    [anon_sym_t] = ACTIONS(59),
    [anon_sym_v] = ACTIONS(59),
    [anon_sym_NUL] = ACTIONS(69),
    [anon_sym_SOH] = ACTIONS(69),
    [anon_sym_STX] = ACTIONS(69),
    [anon_sym_ETX] = ACTIONS(69),
    [anon_sym_EOT] = ACTIONS(69),
    [anon_sym_ENQ] = ACTIONS(69),
    [anon_sym_ACK] = ACTIONS(69),
    [anon_sym_BEL] = ACTIONS(69),
    [anon_sym_BS] = ACTIONS(69),
    [anon_sym_HT] = ACTIONS(69),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_VT] = ACTIONS(69),
    [anon_sym_FF] = ACTIONS(69),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_SO] = ACTIONS(71),
    [anon_sym_SI] = ACTIONS(69),
    [anon_sym_DLE] = ACTIONS(69),
    [anon_sym_DC1] = ACTIONS(69),
    [anon_sym_DC2] = ACTIONS(69),
    [anon_sym_DC3] = ACTIONS(69),
    [anon_sym_DC4] = ACTIONS(69),
    [anon_sym_NAK] = ACTIONS(69),
    [anon_sym_SYN] = ACTIONS(69),
    [anon_sym_ETB] = ACTIONS(69),
    [anon_sym_CAN] = ACTIONS(69),
    [anon_sym_EM] = ACTIONS(69),
    [anon_sym_SUB] = ACTIONS(69),
    [anon_sym_ESC] = ACTIONS(69),
    [anon_sym_FS] = ACTIONS(69),
    [anon_sym_GS] = ACTIONS(69),
    [anon_sym_RS] = ACTIONS(69),
    [anon_sym_US] = ACTIONS(69),
    [anon_sym_SP] = ACTIONS(69),
    [anon_sym_DEL] = ACTIONS(69),
  },
  [13] = {
    [anon_sym_SQUOTE] = ACTIONS(73),
  },
  [14] = {
    [anon_sym_SQUOTE] = ACTIONS(75),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_integer_literal] = ACTIONS(79),
    [sym_float_literal] = ACTIONS(81),
    [sym_octal_literal] = ACTIONS(79),
    [sym_hexidecimal_literal] = ACTIONS(79),
  },
  [16] = {
    [anon_sym_SQUOTE] = ACTIONS(83),
  },
  [17] = {
    [anon_sym_SQUOTE] = ACTIONS(85),
  },
  [18] = {
    [sym__cntrl] = STATE(24),
    [anon_sym__] = ACTIONS(87),
    [sym__ascii_large] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
  },
  [19] = {
    [aux_sym__escape_repeat1] = STATE(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(89),
  },
  [20] = {
    [aux_sym__escape_repeat2] = STATE(28),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(91),
  },
  [21] = {
    [anon_sym_SQUOTE] = ACTIONS(93),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [sym_integer_literal] = ACTIONS(97),
    [sym_float_literal] = ACTIONS(99),
    [sym_octal_literal] = ACTIONS(97),
    [sym_hexidecimal_literal] = ACTIONS(97),
  },
  [23] = {
    [anon_sym_SQUOTE] = ACTIONS(101),
  },
  [24] = {
    [anon_sym_SQUOTE] = ACTIONS(103),
  },
  [25] = {
    [anon_sym_SQUOTE] = ACTIONS(105),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(105),
  },
  [26] = {
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(109),
  },
  [27] = {
    [anon_sym_SQUOTE] = ACTIONS(111),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(111),
  },
  [28] = {
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(113),
  },
  [29] = {
    [anon_sym_SQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(115),
  },
  [30] = {
    [anon_sym_SQUOTE] = ACTIONS(117),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(117),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literals, 1),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literals, 1),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement, 1),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement, 1),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char_literal, 3),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char_literal, 3),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
