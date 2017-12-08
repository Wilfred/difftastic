#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 59
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comment = 1,
  sym_float = 2,
  anon_sym_SQUOTE = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 5,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 6,
  anon_sym__ = 7,
  sym__ascii_large = 8,
  anon_sym_BANG = 9,
  anon_sym_POUND = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_PERCENT = 12,
  anon_sym_AMP = 13,
  anon_sym_1 = 14,
  anon_sym_PLUS = 15,
  anon_sym_DOT = 16,
  anon_sym_SLASH = 17,
  anon_sym_LT = 18,
  anon_sym_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_QMARK = 21,
  anon_sym_AT = 22,
  anon_sym_CARET = 23,
  anon_sym_PIPE = 24,
  anon_sym_DASH = 25,
  anon_sym_TILDE = 26,
  anon_sym_COLON = 27,
  anon_sym_BSLASH = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_SEMI = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_BQUOTE = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  sym__space = 37,
  sym__newline = 38,
  sym__tab = 39,
  anon_sym_x = 40,
  anon_sym_X = 41,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 42,
  anon_sym_o = 43,
  anon_sym_O = 44,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 45,
  anon_sym_a = 46,
  anon_sym_b = 47,
  anon_sym_f = 48,
  anon_sym_n = 49,
  anon_sym_r = 50,
  anon_sym_t = 51,
  anon_sym_v = 52,
  anon_sym_NUL = 53,
  anon_sym_SOH = 54,
  anon_sym_STX = 55,
  anon_sym_ETX = 56,
  anon_sym_EOT = 57,
  anon_sym_ENQ = 58,
  anon_sym_ACK = 59,
  anon_sym_BEL = 60,
  anon_sym_BS = 61,
  anon_sym_HT = 62,
  anon_sym_LF = 63,
  anon_sym_VT = 64,
  anon_sym_FF = 65,
  anon_sym_CR = 66,
  anon_sym_SO = 67,
  anon_sym_SI = 68,
  anon_sym_DLE = 69,
  anon_sym_DC1 = 70,
  anon_sym_DC2 = 71,
  anon_sym_DC3 = 72,
  anon_sym_DC4 = 73,
  anon_sym_NAK = 74,
  anon_sym_SYN = 75,
  anon_sym_ETB = 76,
  anon_sym_CAN = 77,
  anon_sym_EM = 78,
  anon_sym_SUB = 79,
  anon_sym_ESC = 80,
  anon_sym_FS = 81,
  anon_sym_GS = 82,
  anon_sym_RS = 83,
  anon_sym_US = 84,
  anon_sym_SP = 85,
  anon_sym_DEL = 86,
  sym__integer_literal = 87,
  sym__octal_literal = 88,
  sym__hexidecimal_literal = 89,
  sym_program = 90,
  sym__statement = 91,
  sym__literal = 92,
  sym_integer = 93,
  sym_char = 94,
  sym_string = 95,
  sym__gap = 96,
  sym__graphic = 97,
  sym__small = 98,
  sym__large = 99,
  sym__symbol = 100,
  sym__special = 101,
  sym__escape = 102,
  sym__char_escape = 103,
  sym__ascii = 104,
  sym__cntrl = 105,
  aux_sym_program_repeat1 = 106,
  aux_sym_string_repeat1 = 107,
  aux_sym__escape_repeat1 = 108,
  aux_sym__escape_repeat2 = 109,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comment] = "comment",
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
  [sym__statement] = "_statement",
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
  [sym_comment] = {
    .visible = true,
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
  [sym__statement] = {
    .visible = false,
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
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(84);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(23);
      if (lookahead == 'H')
        ADVANCE(25);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'N')
        ADVANCE(29);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(40);
      if (lookahead == 'S')
        ADVANCE(42);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead == 'V')
        ADVANCE(55);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(59);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      ADVANCE(35);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(30);
      if (lookahead == 'U')
        ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'K')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '\r')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 34:
      if (lookahead == '\n')
        ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 37:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'L')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(44);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead == 'U')
        ADVANCE(49);
      if (lookahead == 'Y')
        ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 47:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'X')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 49:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'B')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'N')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '+')
        ADVANCE(78);
      if (lookahead == '-')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '}')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 84:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\r')
        ADVANCE(84);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(24);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'K')
        ADVANCE(36);
      END_STATE();
    case 90:
      if (lookahead == 'L')
        ADVANCE(38);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(93);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(95);
      if (lookahead == 'Y')
        ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(45);
      END_STATE();
    case 94:
      if (lookahead == 'X')
        ADVANCE(48);
      END_STATE();
    case 95:
      if (lookahead == 'B')
        ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'N')
        ADVANCE(52);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == '+')
        ADVANCE(103);
      if (lookahead == '-')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(104);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(107);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == '\\')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == '-')
        ADVANCE(109);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(111);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead == '\r')
        ADVANCE(112);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'O')
        ADVANCE(115);
      if (lookahead == 'X')
        ADVANCE(117);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == 'x')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 120:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(120);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '0')
        ADVANCE(122);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 121:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'O')
        ADVANCE(123);
      if (lookahead == 'X')
        ADVANCE(125);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 'x')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 123:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(124);
      END_STATE();
    case 125:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == 'n')
        SKIP(106);
      END_STATE();
    case 128:
      if (lookahead == '\t')
        SKIP(128);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '\r')
        ADVANCE(133);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == '\t')
        ADVANCE(129);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '\r')
        ADVANCE(129);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 133:
      if (lookahead == '\t')
        SKIP(128);
      if (lookahead == '\n')
        ADVANCE(129);
      if (lookahead == '\r')
        ADVANCE(133);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 134:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(137);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 137:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(137);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 138:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\r')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == 'A')
        ADVANCE(187);
      if (lookahead == 'B')
        ADVANCE(189);
      if (lookahead == 'C')
        ADVANCE(191);
      if (lookahead == 'D')
        ADVANCE(193);
      if (lookahead == 'E')
        ADVANCE(197);
      if (lookahead == 'F')
        ADVANCE(202);
      if (lookahead == 'G')
        ADVANCE(203);
      if (lookahead == 'H')
        ADVANCE(204);
      if (lookahead == 'L')
        ADVANCE(205);
      if (lookahead == 'N')
        ADVANCE(206);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(207);
      if (lookahead == 'S')
        ADVANCE(208);
      if (lookahead == 'U')
        ADVANCE(209);
      if (lookahead == 'V')
        ADVANCE(210);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(138);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\r')
        ADVANCE(139);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == 'A')
        ADVANCE(140);
      if (lookahead == 'B')
        ADVANCE(143);
      if (lookahead == 'C')
        ADVANCE(147);
      if (lookahead == 'D')
        ADVANCE(151);
      if (lookahead == 'E')
        ADVANCE(161);
      if (lookahead == 'F')
        ADVANCE(172);
      if (lookahead == 'G')
        ADVANCE(175);
      if (lookahead == 'H')
        ADVANCE(176);
      if (lookahead == 'L')
        ADVANCE(177);
      if (lookahead == 'N')
        ADVANCE(178);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(179);
      if (lookahead == 'S')
        ADVANCE(180);
      if (lookahead == 'U')
        ADVANCE(181);
      if (lookahead == 'V')
        ADVANCE(182);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 140:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'C')
        ADVANCE(141);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 141:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'K')
        ADVANCE(142);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 143:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'E')
        ADVANCE(144);
      if (lookahead == 'S')
        ADVANCE(146);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 144:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'L')
        ADVANCE(145);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 147:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'A')
        ADVANCE(148);
      if (lookahead == 'R')
        ADVANCE(150);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 148:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'N')
        ADVANCE(149);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 151:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'C')
        ADVANCE(152);
      if (lookahead == 'E')
        ADVANCE(157);
      if (lookahead == 'L')
        ADVANCE(159);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 152:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == '1')
        ADVANCE(153);
      if (lookahead == '2')
        ADVANCE(154);
      if (lookahead == '3')
        ADVANCE(155);
      if (lookahead == '4')
        ADVANCE(156);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 157:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'L')
        ADVANCE(158);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 159:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'E')
        ADVANCE(160);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 161:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'M')
        ADVANCE(162);
      if (lookahead == 'N')
        ADVANCE(163);
      if (lookahead == 'O')
        ADVANCE(165);
      if (lookahead == 'S')
        ADVANCE(167);
      if (lookahead == 'T')
        ADVANCE(169);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 163:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'Q')
        ADVANCE(164);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 165:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'T')
        ADVANCE(166);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 167:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'C')
        ADVANCE(168);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 169:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'B')
        ADVANCE(170);
      if (lookahead == 'X')
        ADVANCE(171);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 172:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'F')
        ADVANCE(173);
      if (lookahead == 'S')
        ADVANCE(174);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 175:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 176:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'T')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 177:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'F')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'A')
        ADVANCE(30);
      if (lookahead == 'U')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 180:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(44);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead == 'U')
        ADVANCE(49);
      if (lookahead == 'Y')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 181:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'S')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 182:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'T')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 186:
      if (lookahead == '\n')
        ADVANCE(139);
      if (lookahead == '\r')
        ADVANCE(186);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == 'A')
        ADVANCE(187);
      if (lookahead == 'B')
        ADVANCE(189);
      if (lookahead == 'C')
        ADVANCE(191);
      if (lookahead == 'D')
        ADVANCE(193);
      if (lookahead == 'E')
        ADVANCE(197);
      if (lookahead == 'F')
        ADVANCE(202);
      if (lookahead == 'G')
        ADVANCE(203);
      if (lookahead == 'H')
        ADVANCE(204);
      if (lookahead == 'L')
        ADVANCE(205);
      if (lookahead == 'N')
        ADVANCE(206);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(207);
      if (lookahead == 'S')
        ADVANCE(208);
      if (lookahead == 'U')
        ADVANCE(209);
      if (lookahead == 'V')
        ADVANCE(210);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(138);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      END_STATE();
    case 187:
      if (lookahead == 'C')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'K')
        ADVANCE(142);
      END_STATE();
    case 189:
      if (lookahead == 'E')
        ADVANCE(190);
      if (lookahead == 'S')
        ADVANCE(146);
      END_STATE();
    case 190:
      if (lookahead == 'L')
        ADVANCE(145);
      END_STATE();
    case 191:
      if (lookahead == 'A')
        ADVANCE(192);
      if (lookahead == 'R')
        ADVANCE(150);
      END_STATE();
    case 192:
      if (lookahead == 'N')
        ADVANCE(149);
      END_STATE();
    case 193:
      if (lookahead == 'C')
        ADVANCE(194);
      if (lookahead == 'E')
        ADVANCE(195);
      if (lookahead == 'L')
        ADVANCE(196);
      END_STATE();
    case 194:
      if (lookahead == '1')
        ADVANCE(153);
      if (lookahead == '2')
        ADVANCE(154);
      if (lookahead == '3')
        ADVANCE(155);
      if (lookahead == '4')
        ADVANCE(156);
      END_STATE();
    case 195:
      if (lookahead == 'L')
        ADVANCE(158);
      END_STATE();
    case 196:
      if (lookahead == 'E')
        ADVANCE(160);
      END_STATE();
    case 197:
      if (lookahead == 'M')
        ADVANCE(162);
      if (lookahead == 'N')
        ADVANCE(198);
      if (lookahead == 'O')
        ADVANCE(199);
      if (lookahead == 'S')
        ADVANCE(200);
      if (lookahead == 'T')
        ADVANCE(201);
      END_STATE();
    case 198:
      if (lookahead == 'Q')
        ADVANCE(164);
      END_STATE();
    case 199:
      if (lookahead == 'T')
        ADVANCE(166);
      END_STATE();
    case 200:
      if (lookahead == 'C')
        ADVANCE(168);
      END_STATE();
    case 201:
      if (lookahead == 'B')
        ADVANCE(170);
      if (lookahead == 'X')
        ADVANCE(171);
      END_STATE();
    case 202:
      if (lookahead == 'F')
        ADVANCE(173);
      if (lookahead == 'S')
        ADVANCE(174);
      END_STATE();
    case 203:
      if (lookahead == 'S')
        ADVANCE(24);
      END_STATE();
    case 204:
      if (lookahead == 'T')
        ADVANCE(26);
      END_STATE();
    case 205:
      if (lookahead == 'F')
        ADVANCE(28);
      END_STATE();
    case 206:
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 207:
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 208:
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(93);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(95);
      if (lookahead == 'Y')
        ADVANCE(96);
      END_STATE();
    case 209:
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 210:
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 211:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(212);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == 'A')
        ADVANCE(213);
      if (lookahead == 'B')
        ADVANCE(214);
      if (lookahead == 'C')
        ADVANCE(215);
      if (lookahead == 'D')
        ADVANCE(216);
      if (lookahead == 'E')
        ADVANCE(217);
      if (lookahead == 'F')
        ADVANCE(218);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 212:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(212);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == 'A')
        ADVANCE(213);
      if (lookahead == 'B')
        ADVANCE(214);
      if (lookahead == 'C')
        ADVANCE(215);
      if (lookahead == 'D')
        ADVANCE(216);
      if (lookahead == 'E')
        ADVANCE(217);
      if (lookahead == 'F')
        ADVANCE(218);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(39);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(57);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(183);
      if (lookahead == 'b')
        ADVANCE(184);
      if (lookahead == 'f')
        ADVANCE(185);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead == 'o')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(69);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(188);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(190);
      if (lookahead == 'S')
        ADVANCE(146);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(192);
      if (lookahead == 'R')
        ADVANCE(150);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(194);
      if (lookahead == 'E')
        ADVANCE(195);
      if (lookahead == 'L')
        ADVANCE(196);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(162);
      if (lookahead == 'N')
        ADVANCE(198);
      if (lookahead == 'O')
        ADVANCE(199);
      if (lookahead == 'S')
        ADVANCE(200);
      if (lookahead == 'T')
        ADVANCE(201);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(173);
      if (lookahead == 'S')
        ADVANCE(174);
      END_STATE();
    case 219:
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(221);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(219);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(220);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 221:
      if (lookahead == '\n')
        ADVANCE(220);
      if (lookahead == '\r')
        ADVANCE(221);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(219);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(226);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(225);
      END_STATE();
    case 223:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(223);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(225);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 224:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(226);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(225);
      END_STATE();
    case 227:
      if (lookahead == 'n')
        SKIP(222);
      END_STATE();
    case 228:
      if (lookahead == '\n')
        ADVANCE(229);
      if (lookahead == '\r')
        ADVANCE(232);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(228);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(231);
      END_STATE();
    case 229:
      if (lookahead == '\n')
        ADVANCE(229);
      if (lookahead == '\r')
        ADVANCE(229);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(231);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(229);
      if (lookahead != 0)
        ADVANCE(35);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 232:
      if (lookahead == '\n')
        ADVANCE(229);
      if (lookahead == '\r')
        ADVANCE(232);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(233);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(228);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead == 'n')
        SKIP(228);
      END_STATE();
    case 234:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(235);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 235:
      if (lookahead == '\t')
        ADVANCE(135);
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(235);
      if (lookahead == ' ')
        ADVANCE(130);
      if (lookahead == '!')
        ADVANCE(3);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '\'')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '+')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '?')
        ADVANCE(21);
      if (lookahead == '@')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(131);
      if (lookahead == ']')
        ADVANCE(60);
      if (lookahead == '^')
        ADVANCE(61);
      if (lookahead == '_')
        ADVANCE(62);
      if (lookahead == '`')
        ADVANCE(63);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '|')
        ADVANCE(71);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '~')
        ADVANCE(73);
      if (lookahead == 8902)
        ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 134},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 138},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 134},
  [18] = {.lex_state = 106},
  [19] = {.lex_state = 134},
  [20] = {.lex_state = 134},
  [21] = {.lex_state = 134},
  [22] = {.lex_state = 134},
  [23] = {.lex_state = 211},
  [24] = {.lex_state = 134},
  [25] = {.lex_state = 134},
  [26] = {.lex_state = 134},
  [27] = {.lex_state = 106},
  [28] = {.lex_state = 106},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 219},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 228},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 134},
  [36] = {.lex_state = 134},
  [37] = {.lex_state = 219},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 228},
  [40] = {.lex_state = 134},
  [41] = {.lex_state = 134},
  [42] = {.lex_state = 106},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 222},
  [46] = {.lex_state = 222},
  [47] = {.lex_state = 228},
  [48] = {.lex_state = 228},
  [49] = {.lex_state = 134},
  [50] = {.lex_state = 134},
  [51] = {.lex_state = 134},
  [52] = {.lex_state = 134},
  [53] = {.lex_state = 234},
  [54] = {.lex_state = 234},
  [55] = {.lex_state = 222},
  [56] = {.lex_state = 228},
  [57] = {.lex_state = 134},
  [58] = {.lex_state = 234},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(6),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(6),
    [anon_sym__] = ACTIONS(1),
    [sym__ascii_large] = ACTIONS(6),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(6),
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
    [anon_sym_SO] = ACTIONS(8),
    [anon_sym_SI] = ACTIONS(1),
    [anon_sym_NAK] = ACTIONS(1),
    [anon_sym_SYN] = ACTIONS(1),
    [anon_sym_SUB] = ACTIONS(1),
    [anon_sym_GS] = ACTIONS(1),
    [anon_sym_RS] = ACTIONS(1),
    [anon_sym_US] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(6),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__statement] = STATE(7),
    [sym__literal] = STATE(8),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(16),
    [anon_sym_DQUOTE] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(20),
    [sym__octal_literal] = ACTIONS(20),
    [sym__hexidecimal_literal] = ACTIONS(20),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [sym__integer_literal] = ACTIONS(26),
    [sym__octal_literal] = ACTIONS(26),
    [sym__hexidecimal_literal] = ACTIONS(26),
  },
  [3] = {
    [sym__graphic] = STATE(10),
    [sym__small] = STATE(11),
    [sym__large] = STATE(11),
    [sym__symbol] = STATE(11),
    [sym__special] = STATE(11),
    [sym__escape] = STATE(10),
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(32),
    [anon_sym__] = ACTIONS(32),
    [sym__ascii_large] = ACTIONS(34),
    [anon_sym_BANG] = ACTIONS(36),
    [anon_sym_POUND] = ACTIONS(36),
    [anon_sym_DOLLAR] = ACTIONS(36),
    [anon_sym_PERCENT] = ACTIONS(36),
    [anon_sym_AMP] = ACTIONS(36),
    [anon_sym_1] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DOT] = ACTIONS(36),
    [anon_sym_SLASH] = ACTIONS(36),
    [anon_sym_LT] = ACTIONS(36),
    [anon_sym_EQ] = ACTIONS(36),
    [anon_sym_GT] = ACTIONS(36),
    [anon_sym_QMARK] = ACTIONS(36),
    [anon_sym_AT] = ACTIONS(36),
    [anon_sym_CARET] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [anon_sym_TILDE] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_BSLASH] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_BQUOTE] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [sym__space] = ACTIONS(28),
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
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym__ascii_large] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(52),
    [anon_sym_DOLLAR] = ACTIONS(52),
    [anon_sym_PERCENT] = ACTIONS(52),
    [anon_sym_AMP] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(52),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(52),
    [anon_sym_QMARK] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_CARET] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [anon_sym_TILDE] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(60),
    [anon_sym_DQUOTE] = ACTIONS(60),
    [sym__integer_literal] = ACTIONS(64),
    [sym__octal_literal] = ACTIONS(64),
    [sym__hexidecimal_literal] = ACTIONS(64),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_comment] = ACTIONS(68),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym__integer_literal] = ACTIONS(74),
    [sym__octal_literal] = ACTIONS(74),
    [sym__hexidecimal_literal] = ACTIONS(74),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [sym__integer_literal] = ACTIONS(80),
    [sym__octal_literal] = ACTIONS(80),
    [sym__hexidecimal_literal] = ACTIONS(80),
  },
  [9] = {
    [sym__statement] = STATE(27),
    [sym__literal] = STATE(8),
    [sym_integer] = STATE(2),
    [sym_char] = STATE(2),
    [sym_string] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(16),
    [anon_sym_DQUOTE] = ACTIONS(18),
    [sym__integer_literal] = ACTIONS(20),
    [sym__octal_literal] = ACTIONS(20),
    [sym__hexidecimal_literal] = ACTIONS(20),
  },
  [10] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(84),
  },
  [11] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(86),
  },
  [12] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(88),
  },
  [13] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(90),
  },
  [14] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(92),
  },
  [15] = {
    [sym__char_escape] = STATE(30),
    [sym__ascii] = STATE(30),
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(94),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(94),
    [anon_sym_x] = ACTIONS(100),
    [anon_sym_X] = ACTIONS(100),
    [anon_sym_o] = ACTIONS(102),
    [anon_sym_O] = ACTIONS(102),
    [anon_sym_a] = ACTIONS(94),
    [anon_sym_b] = ACTIONS(94),
    [anon_sym_f] = ACTIONS(94),
    [anon_sym_n] = ACTIONS(94),
    [anon_sym_r] = ACTIONS(94),
    [anon_sym_t] = ACTIONS(94),
    [anon_sym_v] = ACTIONS(94),
    [anon_sym_NUL] = ACTIONS(104),
    [anon_sym_SOH] = ACTIONS(104),
    [anon_sym_STX] = ACTIONS(104),
    [anon_sym_ETX] = ACTIONS(104),
    [anon_sym_EOT] = ACTIONS(104),
    [anon_sym_ENQ] = ACTIONS(104),
    [anon_sym_ACK] = ACTIONS(104),
    [anon_sym_BEL] = ACTIONS(104),
    [anon_sym_BS] = ACTIONS(104),
    [anon_sym_HT] = ACTIONS(104),
    [anon_sym_LF] = ACTIONS(104),
    [anon_sym_VT] = ACTIONS(104),
    [anon_sym_FF] = ACTIONS(104),
    [anon_sym_CR] = ACTIONS(104),
    [anon_sym_SO] = ACTIONS(104),
    [anon_sym_SI] = ACTIONS(104),
    [anon_sym_DLE] = ACTIONS(104),
    [anon_sym_DC1] = ACTIONS(104),
    [anon_sym_DC2] = ACTIONS(104),
    [anon_sym_DC3] = ACTIONS(104),
    [anon_sym_DC4] = ACTIONS(104),
    [anon_sym_NAK] = ACTIONS(104),
    [anon_sym_SYN] = ACTIONS(104),
    [anon_sym_ETB] = ACTIONS(104),
    [anon_sym_CAN] = ACTIONS(104),
    [anon_sym_EM] = ACTIONS(104),
    [anon_sym_SUB] = ACTIONS(104),
    [anon_sym_ESC] = ACTIONS(104),
    [anon_sym_FS] = ACTIONS(104),
    [anon_sym_GS] = ACTIONS(104),
    [anon_sym_RS] = ACTIONS(104),
    [anon_sym_US] = ACTIONS(104),
    [anon_sym_SP] = ACTIONS(104),
    [anon_sym_DEL] = ACTIONS(104),
  },
  [16] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(106),
  },
  [17] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(108),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
    [sym__ascii_large] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_POUND] = ACTIONS(108),
    [anon_sym_DOLLAR] = ACTIONS(108),
    [anon_sym_PERCENT] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(108),
    [anon_sym_1] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_LT] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(108),
    [anon_sym_QMARK] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_CARET] = ACTIONS(108),
    [anon_sym_PIPE] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_BSLASH] = ACTIONS(108),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_BQUOTE] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [sym__space] = ACTIONS(108),
    [sym__newline] = ACTIONS(108),
    [sym__tab] = ACTIONS(108),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym__integer_literal] = ACTIONS(114),
    [sym__octal_literal] = ACTIONS(114),
    [sym__hexidecimal_literal] = ACTIONS(114),
  },
  [19] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(116),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym__ascii_large] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_DOLLAR] = ACTIONS(116),
    [anon_sym_PERCENT] = ACTIONS(116),
    [anon_sym_AMP] = ACTIONS(116),
    [anon_sym_1] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_LT] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [anon_sym_TILDE] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_BSLASH] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_BQUOTE] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [sym__space] = ACTIONS(116),
    [sym__newline] = ACTIONS(116),
    [sym__tab] = ACTIONS(116),
  },
  [20] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [sym__ascii_large] = ACTIONS(118),
    [anon_sym_BANG] = ACTIONS(118),
    [anon_sym_POUND] = ACTIONS(118),
    [anon_sym_DOLLAR] = ACTIONS(118),
    [anon_sym_PERCENT] = ACTIONS(118),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_1] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [anon_sym_EQ] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_AT] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_TILDE] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(118),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym__space] = ACTIONS(118),
    [sym__newline] = ACTIONS(118),
    [sym__tab] = ACTIONS(118),
  },
  [21] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [sym__ascii_large] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(120),
    [anon_sym_DOLLAR] = ACTIONS(120),
    [anon_sym_PERCENT] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(120),
    [anon_sym_1] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_LT] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(120),
    [anon_sym_AT] = ACTIONS(120),
    [anon_sym_CARET] = ACTIONS(120),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_BSLASH] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_BQUOTE] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym__space] = ACTIONS(120),
    [sym__newline] = ACTIONS(120),
    [sym__tab] = ACTIONS(120),
  },
  [22] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym__ascii_large] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym__space] = ACTIONS(122),
    [sym__newline] = ACTIONS(122),
    [sym__tab] = ACTIONS(122),
  },
  [23] = {
    [sym__char_escape] = STATE(36),
    [sym__ascii] = STATE(36),
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym__ascii_large] = ACTIONS(122),
    [anon_sym_BANG] = ACTIONS(122),
    [anon_sym_POUND] = ACTIONS(122),
    [anon_sym_DOLLAR] = ACTIONS(122),
    [anon_sym_PERCENT] = ACTIONS(122),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(122),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(122),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
    [anon_sym_BQUOTE] = ACTIONS(122),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [sym__space] = ACTIONS(122),
    [sym__newline] = ACTIONS(122),
    [sym__tab] = ACTIONS(122),
    [anon_sym_x] = ACTIONS(130),
    [anon_sym_X] = ACTIONS(130),
    [anon_sym_o] = ACTIONS(132),
    [anon_sym_O] = ACTIONS(132),
    [anon_sym_a] = ACTIONS(124),
    [anon_sym_b] = ACTIONS(124),
    [anon_sym_f] = ACTIONS(124),
    [anon_sym_n] = ACTIONS(124),
    [anon_sym_r] = ACTIONS(124),
    [anon_sym_t] = ACTIONS(124),
    [anon_sym_v] = ACTIONS(124),
    [anon_sym_NUL] = ACTIONS(134),
    [anon_sym_SOH] = ACTIONS(134),
    [anon_sym_STX] = ACTIONS(134),
    [anon_sym_ETX] = ACTIONS(134),
    [anon_sym_EOT] = ACTIONS(134),
    [anon_sym_ENQ] = ACTIONS(134),
    [anon_sym_ACK] = ACTIONS(134),
    [anon_sym_BEL] = ACTIONS(134),
    [anon_sym_BS] = ACTIONS(134),
    [anon_sym_HT] = ACTIONS(134),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_VT] = ACTIONS(134),
    [anon_sym_FF] = ACTIONS(134),
    [anon_sym_CR] = ACTIONS(134),
    [anon_sym_SO] = ACTIONS(134),
    [anon_sym_SI] = ACTIONS(134),
    [anon_sym_DLE] = ACTIONS(134),
    [anon_sym_DC1] = ACTIONS(134),
    [anon_sym_DC2] = ACTIONS(134),
    [anon_sym_DC3] = ACTIONS(134),
    [anon_sym_DC4] = ACTIONS(134),
    [anon_sym_NAK] = ACTIONS(134),
    [anon_sym_SYN] = ACTIONS(134),
    [anon_sym_ETB] = ACTIONS(134),
    [anon_sym_CAN] = ACTIONS(134),
    [anon_sym_EM] = ACTIONS(134),
    [anon_sym_SUB] = ACTIONS(134),
    [anon_sym_ESC] = ACTIONS(134),
    [anon_sym_FS] = ACTIONS(134),
    [anon_sym_GS] = ACTIONS(134),
    [anon_sym_RS] = ACTIONS(134),
    [anon_sym_US] = ACTIONS(134),
    [anon_sym_SP] = ACTIONS(134),
    [anon_sym_DEL] = ACTIONS(134),
  },
  [24] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [sym__ascii_large] = ACTIONS(136),
    [anon_sym_BANG] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(136),
    [anon_sym_DOLLAR] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_1] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_BSLASH] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [sym__space] = ACTIONS(136),
    [sym__newline] = ACTIONS(136),
    [sym__tab] = ACTIONS(136),
  },
  [25] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(138),
    [anon_sym__] = ACTIONS(138),
    [sym__ascii_large] = ACTIONS(138),
    [anon_sym_BANG] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(138),
    [anon_sym_DOLLAR] = ACTIONS(138),
    [anon_sym_PERCENT] = ACTIONS(138),
    [anon_sym_AMP] = ACTIONS(138),
    [anon_sym_1] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(138),
    [anon_sym_SLASH] = ACTIONS(138),
    [anon_sym_LT] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(138),
    [anon_sym_CARET] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_BSLASH] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(138),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(138),
    [anon_sym_RBRACE] = ACTIONS(138),
    [sym__space] = ACTIONS(138),
    [sym__newline] = ACTIONS(138),
    [sym__tab] = ACTIONS(138),
  },
  [26] = {
    [sym__gap] = STATE(41),
    [sym__graphic] = STATE(41),
    [sym__small] = STATE(19),
    [sym__large] = STATE(19),
    [sym__symbol] = STATE(19),
    [sym__special] = STATE(19),
    [sym__escape] = STATE(41),
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym__ascii_large] = ACTIONS(50),
    [anon_sym_BANG] = ACTIONS(52),
    [anon_sym_POUND] = ACTIONS(52),
    [anon_sym_DOLLAR] = ACTIONS(52),
    [anon_sym_PERCENT] = ACTIONS(52),
    [anon_sym_AMP] = ACTIONS(52),
    [anon_sym_1] = ACTIONS(52),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(52),
    [anon_sym_SLASH] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_GT] = ACTIONS(52),
    [anon_sym_QMARK] = ACTIONS(52),
    [anon_sym_AT] = ACTIONS(52),
    [anon_sym_CARET] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [anon_sym_TILDE] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(52),
    [anon_sym_BSLASH] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_BQUOTE] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [sym__space] = ACTIONS(58),
    [sym__newline] = ACTIONS(58),
    [sym__tab] = ACTIONS(58),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(148),
    [sym__octal_literal] = ACTIONS(148),
    [sym__hexidecimal_literal] = ACTIONS(148),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym__integer_literal] = ACTIONS(154),
    [sym__octal_literal] = ACTIONS(154),
    [sym__hexidecimal_literal] = ACTIONS(154),
  },
  [29] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(156),
  },
  [30] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(158),
  },
  [31] = {
    [sym__cntrl] = STATE(44),
    [sym_comment] = ACTIONS(12),
    [anon_sym__] = ACTIONS(160),
    [sym__ascii_large] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
  },
  [32] = {
    [aux_sym__escape_repeat1] = STATE(46),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(162),
  },
  [33] = {
    [aux_sym__escape_repeat2] = STATE(48),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(164),
  },
  [34] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(166),
  },
  [35] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(168),
    [anon_sym__] = ACTIONS(168),
    [sym__ascii_large] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_POUND] = ACTIONS(168),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(168),
    [anon_sym_1] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(168),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [sym__space] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
    [sym__tab] = ACTIONS(168),
  },
  [36] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym__ascii_large] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(170),
    [anon_sym_POUND] = ACTIONS(170),
    [anon_sym_DOLLAR] = ACTIONS(170),
    [anon_sym_PERCENT] = ACTIONS(170),
    [anon_sym_AMP] = ACTIONS(170),
    [anon_sym_1] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_DOT] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_LT] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_QMARK] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_COLON] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [sym__space] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
    [sym__tab] = ACTIONS(170),
  },
  [37] = {
    [sym__cntrl] = STATE(50),
    [sym_comment] = ACTIONS(12),
    [anon_sym__] = ACTIONS(172),
    [sym__ascii_large] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_BSLASH] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
  },
  [38] = {
    [aux_sym__escape_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(174),
  },
  [39] = {
    [aux_sym__escape_repeat2] = STATE(54),
    [sym_comment] = ACTIONS(12),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(176),
  },
  [40] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [sym__ascii_large] = ACTIONS(178),
    [anon_sym_BANG] = ACTIONS(178),
    [anon_sym_POUND] = ACTIONS(178),
    [anon_sym_DOLLAR] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_1] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DOT] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [sym__space] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
    [sym__tab] = ACTIONS(178),
  },
  [41] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [sym__ascii_large] = ACTIONS(180),
    [anon_sym_BANG] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_1] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym__space] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
    [sym__tab] = ACTIONS(180),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym_comment] = ACTIONS(12),
    [sym_float] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym__integer_literal] = ACTIONS(186),
    [sym__octal_literal] = ACTIONS(186),
    [sym__hexidecimal_literal] = ACTIONS(186),
  },
  [43] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(188),
  },
  [44] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(190),
  },
  [45] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(192),
  },
  [46] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(196),
  },
  [47] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(198),
  },
  [48] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(200),
  },
  [49] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym__ascii_large] = ACTIONS(202),
    [anon_sym_BANG] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_1] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(202),
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [sym__space] = ACTIONS(202),
    [sym__newline] = ACTIONS(202),
    [sym__tab] = ACTIONS(202),
  },
  [50] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [sym__ascii_large] = ACTIONS(204),
    [anon_sym_BANG] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(204),
    [anon_sym_DOLLAR] = ACTIONS(204),
    [anon_sym_PERCENT] = ACTIONS(204),
    [anon_sym_AMP] = ACTIONS(204),
    [anon_sym_1] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_SLASH] = ACTIONS(204),
    [anon_sym_LT] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_QMARK] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_BSLASH] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [sym__space] = ACTIONS(204),
    [sym__newline] = ACTIONS(204),
    [sym__tab] = ACTIONS(204),
  },
  [51] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_1] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(206),
  },
  [52] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_1] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(210),
  },
  [53] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [sym__ascii_large] = ACTIONS(212),
    [anon_sym_BANG] = ACTIONS(212),
    [anon_sym_POUND] = ACTIONS(212),
    [anon_sym_DOLLAR] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(212),
    [anon_sym_1] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [anon_sym_SLASH] = ACTIONS(212),
    [anon_sym_LT] = ACTIONS(212),
    [anon_sym_EQ] = ACTIONS(212),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_QMARK] = ACTIONS(212),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_CARET] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_DASH] = ACTIONS(212),
    [anon_sym_TILDE] = ACTIONS(212),
    [anon_sym_COLON] = ACTIONS(212),
    [anon_sym_BSLASH] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_SEMI] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_BQUOTE] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [sym__space] = ACTIONS(212),
    [sym__newline] = ACTIONS(212),
    [sym__tab] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(212),
  },
  [54] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_1] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(214),
  },
  [55] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(216),
  },
  [56] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(218),
  },
  [57] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(220),
    [anon_sym__] = ACTIONS(220),
    [sym__ascii_large] = ACTIONS(220),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(220),
    [anon_sym_DOLLAR] = ACTIONS(220),
    [anon_sym_PERCENT] = ACTIONS(220),
    [anon_sym_AMP] = ACTIONS(220),
    [anon_sym_1] = ACTIONS(220),
    [anon_sym_PLUS] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(220),
    [anon_sym_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(220),
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_GT] = ACTIONS(220),
    [anon_sym_QMARK] = ACTIONS(220),
    [anon_sym_AT] = ACTIONS(220),
    [anon_sym_CARET] = ACTIONS(220),
    [anon_sym_PIPE] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [anon_sym_TILDE] = ACTIONS(220),
    [anon_sym_COLON] = ACTIONS(220),
    [anon_sym_BSLASH] = ACTIONS(220),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(220),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(220),
    [anon_sym_BQUOTE] = ACTIONS(220),
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [sym__space] = ACTIONS(220),
    [sym__newline] = ACTIONS(220),
    [sym__tab] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(220),
  },
  [58] = {
    [sym_comment] = ACTIONS(12),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(222),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [6] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(10),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
