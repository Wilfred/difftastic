#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 60
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_variable_identifier = 1,
  sym_comment = 2,
  sym_float = 3,
  anon_sym_SQUOTE = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 6,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 7,
  anon_sym__ = 8,
  sym__ascii_large = 9,
  anon_sym_BANG = 10,
  anon_sym_POUND = 11,
  anon_sym_DOLLAR = 12,
  anon_sym_PERCENT = 13,
  anon_sym_AMP = 14,
  anon_sym_1 = 15,
  anon_sym_PLUS = 16,
  anon_sym_DOT = 17,
  anon_sym_SLASH = 18,
  anon_sym_LT = 19,
  anon_sym_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_QMARK = 22,
  anon_sym_AT = 23,
  anon_sym_CARET = 24,
  anon_sym_PIPE = 25,
  anon_sym_DASH = 26,
  anon_sym_TILDE = 27,
  anon_sym_COLON = 28,
  anon_sym_BSLASH = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_SEMI = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_BQUOTE = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  sym__space = 38,
  sym__newline = 39,
  sym__tab = 40,
  sym__vertical_tab = 41,
  anon_sym_x = 42,
  anon_sym_X = 43,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 44,
  anon_sym_o = 45,
  anon_sym_O = 46,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 47,
  anon_sym_a = 48,
  anon_sym_b = 49,
  anon_sym_f = 50,
  anon_sym_n = 51,
  anon_sym_r = 52,
  anon_sym_t = 53,
  anon_sym_v = 54,
  anon_sym_NUL = 55,
  anon_sym_SOH = 56,
  anon_sym_STX = 57,
  anon_sym_ETX = 58,
  anon_sym_EOT = 59,
  anon_sym_ENQ = 60,
  anon_sym_ACK = 61,
  anon_sym_BEL = 62,
  anon_sym_BS = 63,
  anon_sym_HT = 64,
  anon_sym_LF = 65,
  anon_sym_VT = 66,
  anon_sym_FF = 67,
  anon_sym_CR = 68,
  anon_sym_SO = 69,
  anon_sym_SI = 70,
  anon_sym_DLE = 71,
  anon_sym_DC1 = 72,
  anon_sym_DC2 = 73,
  anon_sym_DC3 = 74,
  anon_sym_DC4 = 75,
  anon_sym_NAK = 76,
  anon_sym_SYN = 77,
  anon_sym_ETB = 78,
  anon_sym_CAN = 79,
  anon_sym_EM = 80,
  anon_sym_SUB = 81,
  anon_sym_ESC = 82,
  anon_sym_FS = 83,
  anon_sym_GS = 84,
  anon_sym_RS = 85,
  anon_sym_US = 86,
  anon_sym_SP = 87,
  anon_sym_DEL = 88,
  sym__integer_literal = 89,
  sym__octal_literal = 90,
  sym__hexidecimal_literal = 91,
  sym_program = 92,
  sym__statement = 93,
  sym__literal = 94,
  sym__identifier = 95,
  sym_integer = 96,
  sym_char = 97,
  sym_string = 98,
  sym__gap = 99,
  sym__graphic = 100,
  sym__small = 101,
  sym__large = 102,
  sym__symbol = 103,
  sym__special = 104,
  sym__escape = 105,
  sym__char_escape = 106,
  sym__ascii = 107,
  sym__cntrl = 108,
  aux_sym_program_repeat1 = 109,
  aux_sym_string_repeat1 = 110,
  aux_sym__escape_repeat1 = 111,
  aux_sym__escape_repeat2 = 112,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_variable_identifier] = "variable_identifier",
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
  [sym__vertical_tab] = "_vertical_tab",
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
  [sym__identifier] = "_identifier",
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
  [sym_variable_identifier] = {
    .visible = true,
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
  [sym__vertical_tab] = {
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
  [sym__identifier] = {
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
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(79);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'G')
        ADVANCE(80);
      if (lookahead == 'H')
        ADVANCE(81);
      if (lookahead == 'L')
        ADVANCE(82);
      if (lookahead == 'N')
        ADVANCE(83);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(86);
      if (lookahead == 'S')
        ADVANCE(87);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'V')
        ADVANCE(93);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(2);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'G')
        ADVANCE(24);
      if (lookahead == 'H')
        ADVANCE(26);
      if (lookahead == 'L')
        ADVANCE(28);
      if (lookahead == 'N')
        ADVANCE(30);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(41);
      if (lookahead == 'S')
        ADVANCE(43);
      if (lookahead == 'U')
        ADVANCE(54);
      if (lookahead == 'V')
        ADVANCE(56);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      ADVANCE(36);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(31);
      if (lookahead == 'U')
        ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'K')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 33:
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '\r')
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 35:
      if (lookahead == '\n')
        ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(45);
      if (lookahead == 'P')
        ADVANCE(47);
      if (lookahead == 'T')
        ADVANCE(48);
      if (lookahead == 'U')
        ADVANCE(50);
      if (lookahead == 'Y')
        ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 48:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 50:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'B')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(71);
      if (lookahead == 'E')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == '+')
        ADVANCE(73);
      if (lookahead == '-')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 73:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '}')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(74);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(71);
      if (lookahead == 'E')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 79:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(79);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'G')
        ADVANCE(80);
      if (lookahead == 'H')
        ADVANCE(81);
      if (lookahead == 'L')
        ADVANCE(82);
      if (lookahead == 'N')
        ADVANCE(83);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(86);
      if (lookahead == 'S')
        ADVANCE(87);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'V')
        ADVANCE(93);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(94);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(84);
      if (lookahead == 'U')
        ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == 'K')
        ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'L')
        ADVANCE(39);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(42);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(88);
      if (lookahead == 'P')
        ADVANCE(47);
      if (lookahead == 'T')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      if (lookahead == 'Y')
        ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'X')
        ADVANCE(49);
      END_STATE();
    case 90:
      if (lookahead == 'B')
        ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'N')
        ADVANCE(53);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(55);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(57);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(96);
      if (lookahead == 'E')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == '+')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(96);
      if (lookahead == 'E')
        ADVANCE(97);
      if (lookahead == 'e')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(102);
      if (lookahead == '\r')
        ADVANCE(116);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(118);
      if (lookahead == '\\')
        SKIP(123);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(101);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|')
        ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(102);
      if (lookahead == '\r')
        ADVANCE(102);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '0')
        ADVANCE(109);
      if (lookahead == '\\')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|')
        ADVANCE(115);
      ADVANCE(36);
      END_STATE();
    case 103:
      if (lookahead == '-')
        ADVANCE(104);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead != 0)
        ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead != 0)
        ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '\r')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(71);
      if (lookahead == 'E')
        ADVANCE(72);
      if (lookahead == 'O')
        ADVANCE(110);
      if (lookahead == 'X')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(110);
      if (lookahead == 'x')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 110:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(111);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(102);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(102);
      if (lookahead == '\r')
        ADVANCE(116);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '0')
        ADVANCE(118);
      if (lookahead == '\\')
        SKIP(123);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(101);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(100);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|')
        ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == '-')
        ADVANCE(108);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(96);
      if (lookahead == 'E')
        ADVANCE(97);
      if (lookahead == 'O')
        ADVANCE(119);
      if (lookahead == 'X')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 'x')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(100);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        SKIP(101);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(124);
      END_STATE();
    case 125:
      if (lookahead == '\t')
        SKIP(125);
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(130);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 126:
      if (lookahead == '\t')
        ADVANCE(126);
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(126);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 130:
      if (lookahead == '\t')
        SKIP(125);
      if (lookahead == '\n')
        ADVANCE(126);
      if (lookahead == '\r')
        ADVANCE(130);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(134);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 134:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(134);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(189);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(190);
      if (lookahead == 'B')
        ADVANCE(192);
      if (lookahead == 'C')
        ADVANCE(194);
      if (lookahead == 'D')
        ADVANCE(196);
      if (lookahead == 'E')
        ADVANCE(200);
      if (lookahead == 'F')
        ADVANCE(205);
      if (lookahead == 'G')
        ADVANCE(206);
      if (lookahead == 'H')
        ADVANCE(207);
      if (lookahead == 'L')
        ADVANCE(208);
      if (lookahead == 'N')
        ADVANCE(209);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(210);
      if (lookahead == 'S')
        ADVANCE(211);
      if (lookahead == 'U')
        ADVANCE(212);
      if (lookahead == 'V')
        ADVANCE(213);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(136);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == 'A')
        ADVANCE(137);
      if (lookahead == 'B')
        ADVANCE(140);
      if (lookahead == 'C')
        ADVANCE(144);
      if (lookahead == 'D')
        ADVANCE(148);
      if (lookahead == 'E')
        ADVANCE(158);
      if (lookahead == 'F')
        ADVANCE(169);
      if (lookahead == 'G')
        ADVANCE(172);
      if (lookahead == 'H')
        ADVANCE(173);
      if (lookahead == 'L')
        ADVANCE(174);
      if (lookahead == 'N')
        ADVANCE(175);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(176);
      if (lookahead == 'S')
        ADVANCE(177);
      if (lookahead == 'U')
        ADVANCE(178);
      if (lookahead == 'V')
        ADVANCE(179);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 137:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(138);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 138:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'K')
        ADVANCE(139);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 140:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(141);
      if (lookahead == 'S')
        ADVANCE(143);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 141:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(142);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 144:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(145);
      if (lookahead == 'R')
        ADVANCE(147);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 145:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N')
        ADVANCE(146);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 148:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(149);
      if (lookahead == 'E')
        ADVANCE(154);
      if (lookahead == 'L')
        ADVANCE(156);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 149:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '1')
        ADVANCE(150);
      if (lookahead == '2')
        ADVANCE(151);
      if (lookahead == '3')
        ADVANCE(152);
      if (lookahead == '4')
        ADVANCE(153);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 154:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(155);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 156:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(157);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 158:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'M')
        ADVANCE(159);
      if (lookahead == 'N')
        ADVANCE(160);
      if (lookahead == 'O')
        ADVANCE(162);
      if (lookahead == 'S')
        ADVANCE(164);
      if (lookahead == 'T')
        ADVANCE(166);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 160:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'Q')
        ADVANCE(161);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 162:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(163);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 164:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 166:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'B')
        ADVANCE(167);
      if (lookahead == 'X')
        ADVANCE(168);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 169:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(170);
      if (lookahead == 'S')
        ADVANCE(171);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 172:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 173:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 174:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 175:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(31);
      if (lookahead == 'U')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 176:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 177:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'I')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(45);
      if (lookahead == 'P')
        ADVANCE(47);
      if (lookahead == 'T')
        ADVANCE(48);
      if (lookahead == 'U')
        ADVANCE(50);
      if (lookahead == 'Y')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 178:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 179:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 189:
      if (lookahead == '\n')
        ADVANCE(136);
      if (lookahead == '\r')
        ADVANCE(189);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == 'A')
        ADVANCE(190);
      if (lookahead == 'B')
        ADVANCE(192);
      if (lookahead == 'C')
        ADVANCE(194);
      if (lookahead == 'D')
        ADVANCE(196);
      if (lookahead == 'E')
        ADVANCE(200);
      if (lookahead == 'F')
        ADVANCE(205);
      if (lookahead == 'G')
        ADVANCE(206);
      if (lookahead == 'H')
        ADVANCE(207);
      if (lookahead == 'L')
        ADVANCE(208);
      if (lookahead == 'N')
        ADVANCE(209);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(210);
      if (lookahead == 'S')
        ADVANCE(211);
      if (lookahead == 'U')
        ADVANCE(212);
      if (lookahead == 'V')
        ADVANCE(213);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(135);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 190:
      if (lookahead == 'C')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'K')
        ADVANCE(139);
      END_STATE();
    case 192:
      if (lookahead == 'E')
        ADVANCE(193);
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 193:
      if (lookahead == 'L')
        ADVANCE(142);
      END_STATE();
    case 194:
      if (lookahead == 'A')
        ADVANCE(195);
      if (lookahead == 'R')
        ADVANCE(147);
      END_STATE();
    case 195:
      if (lookahead == 'N')
        ADVANCE(146);
      END_STATE();
    case 196:
      if (lookahead == 'C')
        ADVANCE(197);
      if (lookahead == 'E')
        ADVANCE(198);
      if (lookahead == 'L')
        ADVANCE(199);
      END_STATE();
    case 197:
      if (lookahead == '1')
        ADVANCE(150);
      if (lookahead == '2')
        ADVANCE(151);
      if (lookahead == '3')
        ADVANCE(152);
      if (lookahead == '4')
        ADVANCE(153);
      END_STATE();
    case 198:
      if (lookahead == 'L')
        ADVANCE(155);
      END_STATE();
    case 199:
      if (lookahead == 'E')
        ADVANCE(157);
      END_STATE();
    case 200:
      if (lookahead == 'M')
        ADVANCE(159);
      if (lookahead == 'N')
        ADVANCE(201);
      if (lookahead == 'O')
        ADVANCE(202);
      if (lookahead == 'S')
        ADVANCE(203);
      if (lookahead == 'T')
        ADVANCE(204);
      END_STATE();
    case 201:
      if (lookahead == 'Q')
        ADVANCE(161);
      END_STATE();
    case 202:
      if (lookahead == 'T')
        ADVANCE(163);
      END_STATE();
    case 203:
      if (lookahead == 'C')
        ADVANCE(165);
      END_STATE();
    case 204:
      if (lookahead == 'B')
        ADVANCE(167);
      if (lookahead == 'X')
        ADVANCE(168);
      END_STATE();
    case 205:
      if (lookahead == 'F')
        ADVANCE(170);
      if (lookahead == 'S')
        ADVANCE(171);
      END_STATE();
    case 206:
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 207:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 208:
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 209:
      if (lookahead == 'A')
        ADVANCE(84);
      if (lookahead == 'U')
        ADVANCE(85);
      END_STATE();
    case 210:
      if (lookahead == 'S')
        ADVANCE(42);
      END_STATE();
    case 211:
      if (lookahead == 'I')
        ADVANCE(44);
      if (lookahead == 'O')
        ADVANCE(88);
      if (lookahead == 'P')
        ADVANCE(47);
      if (lookahead == 'T')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      if (lookahead == 'Y')
        ADVANCE(91);
      END_STATE();
    case 212:
      if (lookahead == 'S')
        ADVANCE(55);
      END_STATE();
    case 213:
      if (lookahead == 'T')
        ADVANCE(57);
      END_STATE();
    case 214:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(215);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'A')
        ADVANCE(216);
      if (lookahead == 'B')
        ADVANCE(217);
      if (lookahead == 'C')
        ADVANCE(218);
      if (lookahead == 'D')
        ADVANCE(219);
      if (lookahead == 'E')
        ADVANCE(220);
      if (lookahead == 'F')
        ADVANCE(221);
      if (lookahead == 'G')
        ADVANCE(80);
      if (lookahead == 'H')
        ADVANCE(81);
      if (lookahead == 'L')
        ADVANCE(82);
      if (lookahead == 'N')
        ADVANCE(83);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(86);
      if (lookahead == 'S')
        ADVANCE(87);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'V')
        ADVANCE(93);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(188);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 215:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(215);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == 'A')
        ADVANCE(216);
      if (lookahead == 'B')
        ADVANCE(217);
      if (lookahead == 'C')
        ADVANCE(218);
      if (lookahead == 'D')
        ADVANCE(219);
      if (lookahead == 'E')
        ADVANCE(220);
      if (lookahead == 'F')
        ADVANCE(221);
      if (lookahead == 'G')
        ADVANCE(80);
      if (lookahead == 'H')
        ADVANCE(81);
      if (lookahead == 'L')
        ADVANCE(82);
      if (lookahead == 'N')
        ADVANCE(83);
      if (lookahead == 'O')
        ADVANCE(40);
      if (lookahead == 'R')
        ADVANCE(86);
      if (lookahead == 'S')
        ADVANCE(87);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'V')
        ADVANCE(93);
      if (lookahead == 'X')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(180);
      if (lookahead == 'b')
        ADVANCE(181);
      if (lookahead == 'f')
        ADVANCE(182);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == 'r')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == 'v')
        ADVANCE(187);
      if (lookahead == 'x')
        ADVANCE(188);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(191);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(193);
      if (lookahead == 'S')
        ADVANCE(143);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(195);
      if (lookahead == 'R')
        ADVANCE(147);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(197);
      if (lookahead == 'E')
        ADVANCE(198);
      if (lookahead == 'L')
        ADVANCE(199);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(159);
      if (lookahead == 'N')
        ADVANCE(201);
      if (lookahead == 'O')
        ADVANCE(202);
      if (lookahead == 'S')
        ADVANCE(203);
      if (lookahead == 'T')
        ADVANCE(204);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(170);
      if (lookahead == 'S')
        ADVANCE(171);
      END_STATE();
    case 222:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(224);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(222);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      END_STATE();
    case 223:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(223);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 224:
      if (lookahead == '\n')
        ADVANCE(223);
      if (lookahead == '\r')
        ADVANCE(224);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(222);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      END_STATE();
    case 225:
      if (lookahead == '\n')
        ADVANCE(226);
      if (lookahead == '\r')
        ADVANCE(229);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(230);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(228);
      END_STATE();
    case 226:
      if (lookahead == '\n')
        ADVANCE(226);
      if (lookahead == '\r')
        ADVANCE(226);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '\\')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(228);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 227:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(226);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 229:
      if (lookahead == '\n')
        ADVANCE(226);
      if (lookahead == '\r')
        ADVANCE(229);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(230);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(228);
      END_STATE();
    case 230:
      if (lookahead == 'n')
        SKIP(225);
      END_STATE();
    case 231:
      if (lookahead == '\n')
        ADVANCE(232);
      if (lookahead == '\r')
        ADVANCE(235);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(231);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(234);
      END_STATE();
    case 232:
      if (lookahead == '\n')
        ADVANCE(232);
      if (lookahead == '\r')
        ADVANCE(232);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(103);
      if (lookahead == '\\')
        ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(234);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 233:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 235:
      if (lookahead == '\n')
        ADVANCE(232);
      if (lookahead == '\r')
        ADVANCE(235);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(117);
      if (lookahead == '\\')
        SKIP(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(231);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'n')
        SKIP(231);
      END_STATE();
    case 237:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(238);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 238:
      if (lookahead == '\t')
        ADVANCE(132);
      if (lookahead == '\n')
        ADVANCE(133);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(238);
      if (lookahead == ' ')
        ADVANCE(127);
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '#')
        ADVANCE(6);
      if (lookahead == '$')
        ADVANCE(7);
      if (lookahead == '%')
        ADVANCE(8);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(13);
      if (lookahead == '-')
        ADVANCE(14);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(18);
      if (lookahead == '<')
        ADVANCE(19);
      if (lookahead == '=')
        ADVANCE(20);
      if (lookahead == '>')
        ADVANCE(21);
      if (lookahead == '?')
        ADVANCE(22);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(65);
      if (lookahead == '|')
        ADVANCE(66);
      if (lookahead == '}')
        ADVANCE(67);
      if (lookahead == '~')
        ADVANCE(68);
      if (lookahead == 8902)
        ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 101},
  [4] = {.lex_state = 125},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 101},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 135},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 131},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 131},
  [23] = {.lex_state = 131},
  [24] = {.lex_state = 214},
  [25] = {.lex_state = 131},
  [26] = {.lex_state = 131},
  [27] = {.lex_state = 131},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 222},
  [33] = {.lex_state = 225},
  [34] = {.lex_state = 231},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 131},
  [37] = {.lex_state = 131},
  [38] = {.lex_state = 222},
  [39] = {.lex_state = 225},
  [40] = {.lex_state = 231},
  [41] = {.lex_state = 131},
  [42] = {.lex_state = 131},
  [43] = {.lex_state = 101},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 225},
  [47] = {.lex_state = 225},
  [48] = {.lex_state = 231},
  [49] = {.lex_state = 231},
  [50] = {.lex_state = 131},
  [51] = {.lex_state = 131},
  [52] = {.lex_state = 131},
  [53] = {.lex_state = 131},
  [54] = {.lex_state = 237},
  [55] = {.lex_state = 237},
  [56] = {.lex_state = 225},
  [57] = {.lex_state = 231},
  [58] = {.lex_state = 131},
  [59] = {.lex_state = 237},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(6),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(8),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1),
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
    [sym__vertical_tab] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(6),
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
    [sym_program] = STATE(7),
    [sym__statement] = STATE(8),
    [sym__literal] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_variable_identifier] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [anon_sym_DQUOTE] = ACTIONS(20),
    [sym__integer_literal] = ACTIONS(22),
    [sym__octal_literal] = ACTIONS(22),
    [sym__hexidecimal_literal] = ACTIONS(22),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_variable_identifier] = ACTIONS(26),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [sym__integer_literal] = ACTIONS(26),
    [sym__octal_literal] = ACTIONS(26),
    [sym__hexidecimal_literal] = ACTIONS(26),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_variable_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(34),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [4] = {
    [sym__graphic] = STATE(11),
    [sym__small] = STATE(12),
    [sym__large] = STATE(12),
    [sym__symbol] = STATE(12),
    [sym__special] = STATE(12),
    [sym__escape] = STATE(11),
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(38),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym__ascii_large] = ACTIONS(42),
    [anon_sym_BANG] = ACTIONS(44),
    [anon_sym_POUND] = ACTIONS(44),
    [anon_sym_DOLLAR] = ACTIONS(44),
    [anon_sym_PERCENT] = ACTIONS(44),
    [anon_sym_AMP] = ACTIONS(44),
    [anon_sym_1] = ACTIONS(44),
    [anon_sym_PLUS] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(44),
    [anon_sym_LT] = ACTIONS(44),
    [anon_sym_EQ] = ACTIONS(44),
    [anon_sym_GT] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_CARET] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(44),
    [anon_sym_DASH] = ACTIONS(44),
    [anon_sym_TILDE] = ACTIONS(44),
    [anon_sym_COLON] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_BQUOTE] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(48),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym__space] = ACTIONS(36),
  },
  [5] = {
    [sym__gap] = STATE(18),
    [sym__graphic] = STATE(18),
    [sym__small] = STATE(20),
    [sym__large] = STATE(20),
    [sym__symbol] = STATE(20),
    [sym__special] = STATE(20),
    [sym__escape] = STATE(18),
    [aux_sym_string_repeat1] = STATE(27),
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym__space] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
    [sym__tab] = ACTIONS(66),
    [sym__vertical_tab] = ACTIONS(66),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_variable_identifier] = ACTIONS(70),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [sym__integer_literal] = ACTIONS(70),
    [sym__octal_literal] = ACTIONS(70),
    [sym__hexidecimal_literal] = ACTIONS(70),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_comment] = ACTIONS(76),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym__integer_literal] = ACTIONS(80),
    [sym__octal_literal] = ACTIONS(80),
    [sym__hexidecimal_literal] = ACTIONS(80),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [sym__integer_literal] = ACTIONS(86),
    [sym__octal_literal] = ACTIONS(86),
    [sym__hexidecimal_literal] = ACTIONS(86),
  },
  [10] = {
    [sym__statement] = STATE(28),
    [sym__literal] = STATE(9),
    [sym__identifier] = STATE(9),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_string] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_variable_identifier] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(16),
    [anon_sym_SQUOTE] = ACTIONS(18),
    [anon_sym_DQUOTE] = ACTIONS(20),
    [sym__integer_literal] = ACTIONS(22),
    [sym__octal_literal] = ACTIONS(22),
    [sym__hexidecimal_literal] = ACTIONS(22),
  },
  [11] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(92),
  },
  [12] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(94),
  },
  [13] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(96),
  },
  [14] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(98),
  },
  [15] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(100),
  },
  [16] = {
    [sym__char_escape] = STATE(31),
    [sym__ascii] = STATE(31),
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(104),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(106),
    [anon_sym_BSLASH] = ACTIONS(102),
    [anon_sym_x] = ACTIONS(108),
    [anon_sym_X] = ACTIONS(108),
    [anon_sym_o] = ACTIONS(110),
    [anon_sym_O] = ACTIONS(110),
    [anon_sym_a] = ACTIONS(102),
    [anon_sym_b] = ACTIONS(102),
    [anon_sym_f] = ACTIONS(102),
    [anon_sym_n] = ACTIONS(102),
    [anon_sym_r] = ACTIONS(102),
    [anon_sym_t] = ACTIONS(102),
    [anon_sym_v] = ACTIONS(102),
    [anon_sym_NUL] = ACTIONS(112),
    [anon_sym_SOH] = ACTIONS(112),
    [anon_sym_STX] = ACTIONS(112),
    [anon_sym_ETX] = ACTIONS(112),
    [anon_sym_EOT] = ACTIONS(112),
    [anon_sym_ENQ] = ACTIONS(112),
    [anon_sym_ACK] = ACTIONS(112),
    [anon_sym_BEL] = ACTIONS(112),
    [anon_sym_BS] = ACTIONS(112),
    [anon_sym_HT] = ACTIONS(112),
    [anon_sym_LF] = ACTIONS(112),
    [anon_sym_VT] = ACTIONS(112),
    [anon_sym_FF] = ACTIONS(112),
    [anon_sym_CR] = ACTIONS(112),
    [anon_sym_SO] = ACTIONS(112),
    [anon_sym_SI] = ACTIONS(112),
    [anon_sym_DLE] = ACTIONS(112),
    [anon_sym_DC1] = ACTIONS(112),
    [anon_sym_DC2] = ACTIONS(112),
    [anon_sym_DC3] = ACTIONS(112),
    [anon_sym_DC4] = ACTIONS(112),
    [anon_sym_NAK] = ACTIONS(112),
    [anon_sym_SYN] = ACTIONS(112),
    [anon_sym_ETB] = ACTIONS(112),
    [anon_sym_CAN] = ACTIONS(112),
    [anon_sym_EM] = ACTIONS(112),
    [anon_sym_SUB] = ACTIONS(112),
    [anon_sym_ESC] = ACTIONS(112),
    [anon_sym_FS] = ACTIONS(112),
    [anon_sym_GS] = ACTIONS(112),
    [anon_sym_RS] = ACTIONS(112),
    [anon_sym_US] = ACTIONS(112),
    [anon_sym_SP] = ACTIONS(112),
    [anon_sym_DEL] = ACTIONS(112),
  },
  [17] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(114),
  },
  [18] = {
    [sym_comment] = ACTIONS(14),
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
    [sym__vertical_tab] = ACTIONS(116),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_variable_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__integer_literal] = ACTIONS(120),
    [sym__octal_literal] = ACTIONS(120),
    [sym__hexidecimal_literal] = ACTIONS(120),
  },
  [20] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym__] = ACTIONS(124),
    [sym__ascii_large] = ACTIONS(124),
    [anon_sym_BANG] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(124),
    [anon_sym_DOLLAR] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_1] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_LT] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_AT] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_TILDE] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_BSLASH] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym__space] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
    [sym__tab] = ACTIONS(124),
    [sym__vertical_tab] = ACTIONS(124),
  },
  [21] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
    [anon_sym__] = ACTIONS(126),
    [sym__ascii_large] = ACTIONS(126),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_POUND] = ACTIONS(126),
    [anon_sym_DOLLAR] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(126),
    [anon_sym_AMP] = ACTIONS(126),
    [anon_sym_1] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(126),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_TILDE] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_BSLASH] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_BQUOTE] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym__space] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
    [sym__tab] = ACTIONS(126),
    [sym__vertical_tab] = ACTIONS(126),
  },
  [22] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(128),
    [anon_sym__] = ACTIONS(128),
    [sym__ascii_large] = ACTIONS(128),
    [anon_sym_BANG] = ACTIONS(128),
    [anon_sym_POUND] = ACTIONS(128),
    [anon_sym_DOLLAR] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_1] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_BSLASH] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [sym__space] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
    [sym__tab] = ACTIONS(128),
    [sym__vertical_tab] = ACTIONS(128),
  },
  [23] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym__] = ACTIONS(130),
    [sym__ascii_large] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(130),
    [anon_sym_1] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym__space] = ACTIONS(130),
    [sym__newline] = ACTIONS(130),
    [sym__tab] = ACTIONS(130),
    [sym__vertical_tab] = ACTIONS(130),
  },
  [24] = {
    [sym__char_escape] = STATE(37),
    [sym__ascii] = STATE(37),
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(130),
    [anon_sym__] = ACTIONS(130),
    [sym__ascii_large] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_POUND] = ACTIONS(130),
    [anon_sym_DOLLAR] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_1] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DOT] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_QMARK] = ACTIONS(130),
    [anon_sym_AT] = ACTIONS(130),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_TILDE] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(130),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [sym__space] = ACTIONS(130),
    [sym__newline] = ACTIONS(130),
    [sym__tab] = ACTIONS(130),
    [sym__vertical_tab] = ACTIONS(130),
    [anon_sym_x] = ACTIONS(138),
    [anon_sym_X] = ACTIONS(138),
    [anon_sym_o] = ACTIONS(140),
    [anon_sym_O] = ACTIONS(140),
    [anon_sym_a] = ACTIONS(132),
    [anon_sym_b] = ACTIONS(132),
    [anon_sym_f] = ACTIONS(132),
    [anon_sym_n] = ACTIONS(132),
    [anon_sym_r] = ACTIONS(132),
    [anon_sym_t] = ACTIONS(132),
    [anon_sym_v] = ACTIONS(132),
    [anon_sym_NUL] = ACTIONS(142),
    [anon_sym_SOH] = ACTIONS(142),
    [anon_sym_STX] = ACTIONS(142),
    [anon_sym_ETX] = ACTIONS(142),
    [anon_sym_EOT] = ACTIONS(142),
    [anon_sym_ENQ] = ACTIONS(142),
    [anon_sym_ACK] = ACTIONS(142),
    [anon_sym_BEL] = ACTIONS(142),
    [anon_sym_BS] = ACTIONS(142),
    [anon_sym_HT] = ACTIONS(142),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_VT] = ACTIONS(142),
    [anon_sym_FF] = ACTIONS(142),
    [anon_sym_CR] = ACTIONS(142),
    [anon_sym_SO] = ACTIONS(142),
    [anon_sym_SI] = ACTIONS(142),
    [anon_sym_DLE] = ACTIONS(142),
    [anon_sym_DC1] = ACTIONS(142),
    [anon_sym_DC2] = ACTIONS(142),
    [anon_sym_DC3] = ACTIONS(142),
    [anon_sym_DC4] = ACTIONS(142),
    [anon_sym_NAK] = ACTIONS(142),
    [anon_sym_SYN] = ACTIONS(142),
    [anon_sym_ETB] = ACTIONS(142),
    [anon_sym_CAN] = ACTIONS(142),
    [anon_sym_EM] = ACTIONS(142),
    [anon_sym_SUB] = ACTIONS(142),
    [anon_sym_ESC] = ACTIONS(142),
    [anon_sym_FS] = ACTIONS(142),
    [anon_sym_GS] = ACTIONS(142),
    [anon_sym_RS] = ACTIONS(142),
    [anon_sym_US] = ACTIONS(142),
    [anon_sym_SP] = ACTIONS(142),
    [anon_sym_DEL] = ACTIONS(142),
  },
  [25] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(144),
    [anon_sym__] = ACTIONS(144),
    [sym__ascii_large] = ACTIONS(144),
    [anon_sym_BANG] = ACTIONS(144),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_DOLLAR] = ACTIONS(144),
    [anon_sym_PERCENT] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_1] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_QMARK] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [sym__space] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
    [sym__tab] = ACTIONS(144),
    [sym__vertical_tab] = ACTIONS(144),
  },
  [26] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym__ascii_large] = ACTIONS(146),
    [anon_sym_BANG] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [anon_sym_PERCENT] = ACTIONS(146),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_1] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [sym__space] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
    [sym__tab] = ACTIONS(146),
    [sym__vertical_tab] = ACTIONS(146),
  },
  [27] = {
    [sym__gap] = STATE(42),
    [sym__graphic] = STATE(42),
    [sym__small] = STATE(20),
    [sym__large] = STATE(20),
    [sym__symbol] = STATE(20),
    [sym__special] = STATE(20),
    [sym__escape] = STATE(42),
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym__ascii_large] = ACTIONS(58),
    [anon_sym_BANG] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(60),
    [anon_sym_DOLLAR] = ACTIONS(60),
    [anon_sym_PERCENT] = ACTIONS(60),
    [anon_sym_AMP] = ACTIONS(60),
    [anon_sym_1] = ACTIONS(60),
    [anon_sym_PLUS] = ACTIONS(60),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SLASH] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_QMARK] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_CARET] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(60),
    [anon_sym_TILDE] = ACTIONS(60),
    [anon_sym_COLON] = ACTIONS(60),
    [anon_sym_BSLASH] = ACTIONS(62),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym__space] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
    [sym__tab] = ACTIONS(66),
    [sym__vertical_tab] = ACTIONS(66),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(154),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym__integer_literal] = ACTIONS(154),
    [sym__octal_literal] = ACTIONS(154),
    [sym__hexidecimal_literal] = ACTIONS(154),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_variable_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [sym__integer_literal] = ACTIONS(160),
    [sym__octal_literal] = ACTIONS(160),
    [sym__hexidecimal_literal] = ACTIONS(160),
  },
  [30] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(164),
  },
  [31] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(166),
  },
  [32] = {
    [sym__cntrl] = STATE(45),
    [sym_comment] = ACTIONS(14),
    [anon_sym__] = ACTIONS(168),
    [sym__ascii_large] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
  },
  [33] = {
    [aux_sym__escape_repeat1] = STATE(47),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(170),
  },
  [34] = {
    [aux_sym__escape_repeat2] = STATE(49),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(172),
  },
  [35] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [36] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [sym__ascii_large] = ACTIONS(176),
    [anon_sym_BANG] = ACTIONS(176),
    [anon_sym_POUND] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(176),
    [anon_sym_1] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(176),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [sym__space] = ACTIONS(176),
    [sym__newline] = ACTIONS(176),
    [sym__tab] = ACTIONS(176),
    [sym__vertical_tab] = ACTIONS(176),
  },
  [37] = {
    [sym_comment] = ACTIONS(14),
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
    [sym__vertical_tab] = ACTIONS(178),
  },
  [38] = {
    [sym__cntrl] = STATE(51),
    [sym_comment] = ACTIONS(14),
    [anon_sym__] = ACTIONS(180),
    [sym__ascii_large] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
  },
  [39] = {
    [aux_sym__escape_repeat1] = STATE(53),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(182),
  },
  [40] = {
    [aux_sym__escape_repeat2] = STATE(55),
    [sym_comment] = ACTIONS(14),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(184),
  },
  [41] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [sym__ascii_large] = ACTIONS(186),
    [anon_sym_BANG] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_DOLLAR] = ACTIONS(186),
    [anon_sym_PERCENT] = ACTIONS(186),
    [anon_sym_AMP] = ACTIONS(186),
    [anon_sym_1] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(186),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [sym__space] = ACTIONS(186),
    [sym__newline] = ACTIONS(186),
    [sym__tab] = ACTIONS(186),
    [sym__vertical_tab] = ACTIONS(186),
  },
  [42] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [sym__ascii_large] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(188),
    [anon_sym_DOLLAR] = ACTIONS(188),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_1] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [sym__space] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
    [sym__tab] = ACTIONS(188),
    [sym__vertical_tab] = ACTIONS(188),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_variable_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(14),
    [sym_float] = ACTIONS(194),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [sym__integer_literal] = ACTIONS(192),
    [sym__octal_literal] = ACTIONS(192),
    [sym__hexidecimal_literal] = ACTIONS(192),
  },
  [44] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(196),
  },
  [45] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(198),
  },
  [46] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(200),
  },
  [47] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(204),
  },
  [48] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(206),
  },
  [49] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(208),
  },
  [50] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(210),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(210),
    [anon_sym__] = ACTIONS(210),
    [sym__ascii_large] = ACTIONS(210),
    [anon_sym_BANG] = ACTIONS(210),
    [anon_sym_POUND] = ACTIONS(210),
    [anon_sym_DOLLAR] = ACTIONS(210),
    [anon_sym_PERCENT] = ACTIONS(210),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_1] = ACTIONS(210),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DOT] = ACTIONS(210),
    [anon_sym_SLASH] = ACTIONS(210),
    [anon_sym_LT] = ACTIONS(210),
    [anon_sym_EQ] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [anon_sym_QMARK] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(210),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(210),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_LBRACK] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(210),
    [anon_sym_BQUOTE] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(210),
    [anon_sym_RBRACE] = ACTIONS(210),
    [sym__space] = ACTIONS(210),
    [sym__newline] = ACTIONS(210),
    [sym__tab] = ACTIONS(210),
    [sym__vertical_tab] = ACTIONS(210),
  },
  [51] = {
    [sym_comment] = ACTIONS(14),
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
    [sym__vertical_tab] = ACTIONS(212),
  },
  [52] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [sym__ascii_large] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(214),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_DOLLAR] = ACTIONS(214),
    [anon_sym_PERCENT] = ACTIONS(214),
    [anon_sym_AMP] = ACTIONS(214),
    [anon_sym_1] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(214),
    [anon_sym_LT] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(214),
    [anon_sym_GT] = ACTIONS(214),
    [anon_sym_QMARK] = ACTIONS(214),
    [anon_sym_AT] = ACTIONS(214),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(214),
    [anon_sym_BSLASH] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_SEMI] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_BQUOTE] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [sym__space] = ACTIONS(214),
    [sym__newline] = ACTIONS(214),
    [sym__tab] = ACTIONS(214),
    [sym__vertical_tab] = ACTIONS(214),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(214),
  },
  [53] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym__ascii_large] = ACTIONS(216),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_POUND] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [anon_sym_PERCENT] = ACTIONS(216),
    [anon_sym_AMP] = ACTIONS(216),
    [anon_sym_1] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_QMARK] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym__space] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
    [sym__tab] = ACTIONS(216),
    [sym__vertical_tab] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(218),
  },
  [54] = {
    [sym_comment] = ACTIONS(14),
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
    [sym__vertical_tab] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(220),
  },
  [55] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym__ascii_large] = ACTIONS(216),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_POUND] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(216),
    [anon_sym_PERCENT] = ACTIONS(216),
    [anon_sym_AMP] = ACTIONS(216),
    [anon_sym_1] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_LT] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_GT] = ACTIONS(216),
    [anon_sym_QMARK] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_CARET] = ACTIONS(216),
    [anon_sym_PIPE] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_COLON] = ACTIONS(216),
    [anon_sym_BSLASH] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(216),
    [anon_sym_BQUOTE] = ACTIONS(216),
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_RBRACE] = ACTIONS(216),
    [sym__space] = ACTIONS(216),
    [sym__newline] = ACTIONS(216),
    [sym__tab] = ACTIONS(216),
    [sym__vertical_tab] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(222),
  },
  [56] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(224),
  },
  [57] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(226),
  },
  [58] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(228),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(228),
    [anon_sym__] = ACTIONS(228),
    [sym__ascii_large] = ACTIONS(228),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_DOLLAR] = ACTIONS(228),
    [anon_sym_PERCENT] = ACTIONS(228),
    [anon_sym_AMP] = ACTIONS(228),
    [anon_sym_1] = ACTIONS(228),
    [anon_sym_PLUS] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_LT] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(228),
    [anon_sym_GT] = ACTIONS(228),
    [anon_sym_QMARK] = ACTIONS(228),
    [anon_sym_AT] = ACTIONS(228),
    [anon_sym_CARET] = ACTIONS(228),
    [anon_sym_PIPE] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(228),
    [anon_sym_TILDE] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_RBRACK] = ACTIONS(228),
    [anon_sym_BQUOTE] = ACTIONS(228),
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym__space] = ACTIONS(228),
    [sym__newline] = ACTIONS(228),
    [sym__tab] = ACTIONS(228),
    [sym__vertical_tab] = ACTIONS(228),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(228),
  },
  [59] = {
    [sym_comment] = ACTIONS(14),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym__ascii_large] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(230),
    [anon_sym_DOLLAR] = ACTIONS(230),
    [anon_sym_PERCENT] = ACTIONS(230),
    [anon_sym_AMP] = ACTIONS(230),
    [anon_sym_1] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(230),
    [anon_sym_DOT] = ACTIONS(230),
    [anon_sym_SLASH] = ACTIONS(230),
    [anon_sym_LT] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(230),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(230),
    [anon_sym_CARET] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(230),
    [anon_sym_DASH] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_BSLASH] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym__space] = ACTIONS(230),
    [sym__newline] = ACTIONS(230),
    [sym__tab] = ACTIONS(230),
    [sym__vertical_tab] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(230),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [6] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
