#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 61
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_variable_identifier = 1,
  sym_constructor_identifier = 2,
  anon_sym_case = 3,
  anon_sym_class = 4,
  anon_sym_data = 5,
  anon_sym_default = 6,
  anon_sym_deriving = 7,
  anon_sym_do = 8,
  anon_sym_else = 9,
  anon_sym_foreign = 10,
  anon_sym_if = 11,
  anon_sym_import = 12,
  anon_sym_in = 13,
  anon_sym_infix = 14,
  anon_sym_infixl = 15,
  anon_sym_infixr = 16,
  anon_sym_instance = 17,
  anon_sym_let = 18,
  anon_sym_module = 19,
  anon_sym_newtype = 20,
  anon_sym_of = 21,
  anon_sym_then = 22,
  anon_sym_type = 23,
  anon_sym_where = 24,
  anon_sym__ = 25,
  sym_comment = 26,
  sym_float = 27,
  anon_sym_SQUOTE = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 30,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 31,
  sym__ascii_large = 32,
  anon_sym_BANG = 33,
  anon_sym_POUND = 34,
  anon_sym_DOLLAR = 35,
  anon_sym_PERCENT = 36,
  anon_sym_AMP = 37,
  anon_sym_1 = 38,
  anon_sym_PLUS = 39,
  anon_sym_DOT = 40,
  anon_sym_SLASH = 41,
  anon_sym_LT = 42,
  anon_sym_EQ = 43,
  anon_sym_GT = 44,
  anon_sym_QMARK = 45,
  anon_sym_AT = 46,
  anon_sym_CARET = 47,
  anon_sym_PIPE = 48,
  anon_sym_DASH = 49,
  anon_sym_TILDE = 50,
  anon_sym_COLON = 51,
  anon_sym_BSLASH = 52,
  anon_sym_LPAREN = 53,
  anon_sym_RPAREN = 54,
  anon_sym_SEMI = 55,
  anon_sym_LBRACK = 56,
  anon_sym_RBRACK = 57,
  anon_sym_BQUOTE = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  sym__space = 61,
  sym__newline = 62,
  sym__tab = 63,
  sym__vertical_tab = 64,
  anon_sym_x = 65,
  anon_sym_X = 66,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 67,
  anon_sym_o = 68,
  anon_sym_O = 69,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 70,
  anon_sym_a = 71,
  anon_sym_b = 72,
  anon_sym_f = 73,
  anon_sym_n = 74,
  anon_sym_r = 75,
  anon_sym_t = 76,
  anon_sym_v = 77,
  anon_sym_NUL = 78,
  anon_sym_SOH = 79,
  anon_sym_STX = 80,
  anon_sym_ETX = 81,
  anon_sym_EOT = 82,
  anon_sym_ENQ = 83,
  anon_sym_ACK = 84,
  anon_sym_BEL = 85,
  anon_sym_BS = 86,
  anon_sym_HT = 87,
  anon_sym_LF = 88,
  anon_sym_VT = 89,
  anon_sym_FF = 90,
  anon_sym_CR = 91,
  anon_sym_SO = 92,
  anon_sym_SI = 93,
  anon_sym_DLE = 94,
  anon_sym_DC1 = 95,
  anon_sym_DC2 = 96,
  anon_sym_DC3 = 97,
  anon_sym_DC4 = 98,
  anon_sym_NAK = 99,
  anon_sym_SYN = 100,
  anon_sym_ETB = 101,
  anon_sym_CAN = 102,
  anon_sym_EM = 103,
  anon_sym_SUB = 104,
  anon_sym_ESC = 105,
  anon_sym_FS = 106,
  anon_sym_GS = 107,
  anon_sym_RS = 108,
  anon_sym_US = 109,
  anon_sym_SP = 110,
  anon_sym_DEL = 111,
  sym__integer_literal = 112,
  sym__octal_literal = 113,
  sym__hexidecimal_literal = 114,
  sym_program = 115,
  sym__statement = 116,
  sym__literal = 117,
  sym__identifier = 118,
  sym_reserved_identifier = 119,
  sym_integer = 120,
  sym_char = 121,
  sym_string = 122,
  sym__gap = 123,
  sym__graphic = 124,
  sym__small = 125,
  sym__large = 126,
  sym__symbol = 127,
  sym__special = 128,
  sym__escape = 129,
  sym__char_escape = 130,
  sym__ascii = 131,
  sym__cntrl = 132,
  aux_sym_program_repeat1 = 133,
  aux_sym_string_repeat1 = 134,
  aux_sym__escape_repeat1 = 135,
  aux_sym__escape_repeat2 = 136,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
  [anon_sym_data] = "data",
  [anon_sym_default] = "default",
  [anon_sym_deriving] = "deriving",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
  [anon_sym_foreign] = "foreign",
  [anon_sym_if] = "if",
  [anon_sym_import] = "import",
  [anon_sym_in] = "in",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_instance] = "instance",
  [anon_sym_let] = "let",
  [anon_sym_module] = "module",
  [anon_sym_newtype] = "newtype",
  [anon_sym_of] = "of",
  [anon_sym_then] = "then",
  [anon_sym_type] = "type",
  [anon_sym_where] = "where",
  [anon_sym__] = "_",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
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
  [sym_reserved_identifier] = "reserved_identifier",
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
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infixr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
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
  [sym_reserved_identifier] = {
    .visible = true,
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
        ADVANCE(81);
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
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(96);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
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
      if (lookahead == 'R')
        ADVANCE(40);
      if (lookahead == 'S')
        ADVANCE(42);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead == 'V')
        ADVANCE(55);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(58);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
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
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 49:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'B')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(36);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(73);
      if (lookahead == 'E')
        ADVANCE(74);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(74);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '+')
        ADVANCE(75);
      if (lookahead == '-')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 75:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '}')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(76);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(73);
      if (lookahead == 'E')
        ADVANCE(74);
      if (lookahead == 'e')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 81:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(81);
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
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        SKIP(96);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'U')
        ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == 'K')
        ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 'L')
        ADVANCE(39);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(90);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'Y')
        ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 'X')
        ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'B')
        ADVANCE(50);
      END_STATE();
    case 93:
      if (lookahead == 'N')
        ADVANCE(52);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 96:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'E')
        ADVANCE(99);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(99);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'E')
        ADVANCE(99);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(104);
      if (lookahead == '\r')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(207);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == '_')
        ADVANCE(213);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'f')
        ADVANCE(244);
      if (lookahead == 'i')
        ADVANCE(251);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(288);
      if (lookahead == 'w')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(103);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(300);
      END_STATE();
    case 104:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(104);
      if (lookahead == '\r')
        ADVANCE(104);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '0')
        ADVANCE(111);
      if (lookahead == '\\')
        ADVANCE(116);
      if (lookahead == '_')
        ADVANCE(117);
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'd')
        ADVANCE(127);
      if (lookahead == 'e')
        ADVANCE(144);
      if (lookahead == 'f')
        ADVANCE(148);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 'l')
        ADVANCE(174);
      if (lookahead == 'm')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(183);
      if (lookahead == 'o')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(192);
      if (lookahead == 'w')
        ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(204);
      ADVANCE(36);
      END_STATE();
    case 105:
      if (lookahead == '-')
        ADVANCE(106);
      if (lookahead == '}')
        ADVANCE(33);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '-')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead != 0)
        ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead == '\r')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(73);
      if (lookahead == 'E')
        ADVANCE(74);
      if (lookahead == 'O')
        ADVANCE(112);
      if (lookahead == 'X')
        ADVANCE(114);
      if (lookahead == 'e')
        ADVANCE(74);
      if (lookahead == 'o')
        ADVANCE(112);
      if (lookahead == 'x')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 112:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(113);
      END_STATE();
    case 114:
      if (lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(104);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead == 'l')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(131);
      if (lookahead == 'o')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'f')
        ADVANCE(132);
      if (lookahead == 'r')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'u')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'i')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'v')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'i')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'n')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'g')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 's')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'r')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'i')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'g')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'n')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'f')
        ADVANCE(156);
      if (lookahead == 'm')
        ADVANCE(157);
      if (lookahead == 'n')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'r')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'f')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'i')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'x')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(166);
      if (lookahead == 'r')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'a')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'n')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'c')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'o')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'd')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'u')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'l')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'w')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 't')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'y')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'f')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'h')
        ADVANCE(193);
      if (lookahead == 'y')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'n')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'p')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'h')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'r')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(118);
      if (lookahead == 'e')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(204);
      END_STATE();
    case 205:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(104);
      if (lookahead == '\r')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(207);
      if (lookahead == '\\')
        SKIP(212);
      if (lookahead == '_')
        ADVANCE(213);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'f')
        ADVANCE(244);
      if (lookahead == 'i')
        ADVANCE(251);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'm')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(286);
      if (lookahead == 't')
        ADVANCE(288);
      if (lookahead == 'w')
        ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(103);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(300);
      END_STATE();
    case 206:
      if (lookahead == '-')
        ADVANCE(110);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(98);
      if (lookahead == 'E')
        ADVANCE(99);
      if (lookahead == 'O')
        ADVANCE(208);
      if (lookahead == 'X')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(99);
      if (lookahead == 'o')
        ADVANCE(208);
      if (lookahead == 'x')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(102);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(209);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(211);
      END_STATE();
    case 212:
      if (lookahead == 'n')
        SKIP(103);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(216);
      if (lookahead == 'l')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 's')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 's')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 's')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(224);
      if (lookahead == 'e')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'f')
        ADVANCE(228);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'i')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'v')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'i')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'g')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 's')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'o')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'i')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'g')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'f')
        ADVANCE(252);
      if (lookahead == 'm')
        ADVANCE(253);
      if (lookahead == 'n')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'p')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'o')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'f')
        ADVANCE(259);
      if (lookahead == 's')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'i')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'x')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(262);
      if (lookahead == 'r')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'a')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'o')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'd')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'u')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'w')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'y')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'p')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'f')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'h')
        ADVANCE(289);
      if (lookahead == 'y')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'p')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'h')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == '\t')
        SKIP(301);
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(306);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 302:
      if (lookahead == '\t')
        ADVANCE(302);
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(302);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 306:
      if (lookahead == '\t')
        SKIP(301);
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(306);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 307:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(310);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 310:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(310);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 311:
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == 'A')
        ADVANCE(364);
      if (lookahead == 'B')
        ADVANCE(366);
      if (lookahead == 'C')
        ADVANCE(368);
      if (lookahead == 'D')
        ADVANCE(370);
      if (lookahead == 'E')
        ADVANCE(374);
      if (lookahead == 'F')
        ADVANCE(379);
      if (lookahead == 'G')
        ADVANCE(380);
      if (lookahead == 'H')
        ADVANCE(381);
      if (lookahead == 'L')
        ADVANCE(382);
      if (lookahead == 'N')
        ADVANCE(383);
      if (lookahead == 'O')
        ADVANCE(352);
      if (lookahead == 'R')
        ADVANCE(384);
      if (lookahead == 'S')
        ADVANCE(385);
      if (lookahead == 'U')
        ADVANCE(386);
      if (lookahead == 'V')
        ADVANCE(387);
      if (lookahead == 'X')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'b')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(311);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      END_STATE();
    case 312:
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(312);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == 'A')
        ADVANCE(313);
      if (lookahead == 'B')
        ADVANCE(316);
      if (lookahead == 'C')
        ADVANCE(320);
      if (lookahead == 'D')
        ADVANCE(324);
      if (lookahead == 'E')
        ADVANCE(334);
      if (lookahead == 'F')
        ADVANCE(345);
      if (lookahead == 'G')
        ADVANCE(348);
      if (lookahead == 'H')
        ADVANCE(349);
      if (lookahead == 'L')
        ADVANCE(350);
      if (lookahead == 'N')
        ADVANCE(351);
      if (lookahead == 'O')
        ADVANCE(352);
      if (lookahead == 'R')
        ADVANCE(353);
      if (lookahead == 'S')
        ADVANCE(354);
      if (lookahead == 'U')
        ADVANCE(355);
      if (lookahead == 'V')
        ADVANCE(356);
      if (lookahead == 'X')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'b')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 313:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(314);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 314:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'K')
        ADVANCE(315);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 316:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(317);
      if (lookahead == 'S')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(318);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(321);
      if (lookahead == 'R')
        ADVANCE(323);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 324:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(325);
      if (lookahead == 'E')
        ADVANCE(330);
      if (lookahead == 'L')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 325:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '1')
        ADVANCE(326);
      if (lookahead == '2')
        ADVANCE(327);
      if (lookahead == '3')
        ADVANCE(328);
      if (lookahead == '4')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'M')
        ADVANCE(335);
      if (lookahead == 'N')
        ADVANCE(336);
      if (lookahead == 'O')
        ADVANCE(338);
      if (lookahead == 'S')
        ADVANCE(340);
      if (lookahead == 'T')
        ADVANCE(342);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'Q')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 338:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 340:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(341);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 342:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'B')
        ADVANCE(343);
      if (lookahead == 'X')
        ADVANCE(344);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 345:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(346);
      if (lookahead == 'S')
        ADVANCE(347);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 348:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 349:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 351:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(31);
      if (lookahead == 'U')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(32);
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
        ADVANCE(36);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == 'A')
        ADVANCE(364);
      if (lookahead == 'B')
        ADVANCE(366);
      if (lookahead == 'C')
        ADVANCE(368);
      if (lookahead == 'D')
        ADVANCE(370);
      if (lookahead == 'E')
        ADVANCE(374);
      if (lookahead == 'F')
        ADVANCE(379);
      if (lookahead == 'G')
        ADVANCE(380);
      if (lookahead == 'H')
        ADVANCE(381);
      if (lookahead == 'L')
        ADVANCE(382);
      if (lookahead == 'N')
        ADVANCE(383);
      if (lookahead == 'O')
        ADVANCE(352);
      if (lookahead == 'R')
        ADVANCE(384);
      if (lookahead == 'S')
        ADVANCE(385);
      if (lookahead == 'U')
        ADVANCE(386);
      if (lookahead == 'V')
        ADVANCE(387);
      if (lookahead == 'X')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'b')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(311);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      END_STATE();
    case 364:
      if (lookahead == 'C')
        ADVANCE(365);
      END_STATE();
    case 365:
      if (lookahead == 'K')
        ADVANCE(315);
      END_STATE();
    case 366:
      if (lookahead == 'E')
        ADVANCE(367);
      if (lookahead == 'S')
        ADVANCE(319);
      END_STATE();
    case 367:
      if (lookahead == 'L')
        ADVANCE(318);
      END_STATE();
    case 368:
      if (lookahead == 'A')
        ADVANCE(369);
      if (lookahead == 'R')
        ADVANCE(323);
      END_STATE();
    case 369:
      if (lookahead == 'N')
        ADVANCE(322);
      END_STATE();
    case 370:
      if (lookahead == 'C')
        ADVANCE(371);
      if (lookahead == 'E')
        ADVANCE(372);
      if (lookahead == 'L')
        ADVANCE(373);
      END_STATE();
    case 371:
      if (lookahead == '1')
        ADVANCE(326);
      if (lookahead == '2')
        ADVANCE(327);
      if (lookahead == '3')
        ADVANCE(328);
      if (lookahead == '4')
        ADVANCE(329);
      END_STATE();
    case 372:
      if (lookahead == 'L')
        ADVANCE(331);
      END_STATE();
    case 373:
      if (lookahead == 'E')
        ADVANCE(333);
      END_STATE();
    case 374:
      if (lookahead == 'M')
        ADVANCE(335);
      if (lookahead == 'N')
        ADVANCE(375);
      if (lookahead == 'O')
        ADVANCE(376);
      if (lookahead == 'S')
        ADVANCE(377);
      if (lookahead == 'T')
        ADVANCE(378);
      END_STATE();
    case 375:
      if (lookahead == 'Q')
        ADVANCE(337);
      END_STATE();
    case 376:
      if (lookahead == 'T')
        ADVANCE(339);
      END_STATE();
    case 377:
      if (lookahead == 'C')
        ADVANCE(341);
      END_STATE();
    case 378:
      if (lookahead == 'B')
        ADVANCE(343);
      if (lookahead == 'X')
        ADVANCE(344);
      END_STATE();
    case 379:
      if (lookahead == 'F')
        ADVANCE(346);
      if (lookahead == 'S')
        ADVANCE(347);
      END_STATE();
    case 380:
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 381:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 382:
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 383:
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'U')
        ADVANCE(87);
      END_STATE();
    case 384:
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 385:
      if (lookahead == 'I')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(90);
      if (lookahead == 'P')
        ADVANCE(46);
      if (lookahead == 'T')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      if (lookahead == 'Y')
        ADVANCE(93);
      END_STATE();
    case 386:
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 387:
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 388:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(389);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(390);
      if (lookahead == 'B')
        ADVANCE(391);
      if (lookahead == 'C')
        ADVANCE(392);
      if (lookahead == 'D')
        ADVANCE(393);
      if (lookahead == 'E')
        ADVANCE(394);
      if (lookahead == 'F')
        ADVANCE(395);
      if (lookahead == 'G')
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'O')
        ADVANCE(352);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == 'X')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'b')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 389:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(389);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(390);
      if (lookahead == 'B')
        ADVANCE(391);
      if (lookahead == 'C')
        ADVANCE(392);
      if (lookahead == 'D')
        ADVANCE(393);
      if (lookahead == 'E')
        ADVANCE(394);
      if (lookahead == 'F')
        ADVANCE(395);
      if (lookahead == 'G')
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'O')
        ADVANCE(352);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == 'X')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'b')
        ADVANCE(359);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(362);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(305);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(365);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(367);
      if (lookahead == 'S')
        ADVANCE(319);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(369);
      if (lookahead == 'R')
        ADVANCE(323);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(371);
      if (lookahead == 'E')
        ADVANCE(372);
      if (lookahead == 'L')
        ADVANCE(373);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(335);
      if (lookahead == 'N')
        ADVANCE(375);
      if (lookahead == 'O')
        ADVANCE(376);
      if (lookahead == 'S')
        ADVANCE(377);
      if (lookahead == 'T')
        ADVANCE(378);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(346);
      if (lookahead == 'S')
        ADVANCE(347);
      END_STATE();
    case 396:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(396);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(397);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(397);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        ADVANCE(397);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(396);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(402);
      END_STATE();
    case 400:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(400);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 403:
      if (lookahead == '\n')
        ADVANCE(400);
      if (lookahead == '\r')
        ADVANCE(403);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(404);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(402);
      END_STATE();
    case 404:
      if (lookahead == 'n')
        SKIP(399);
      END_STATE();
    case 405:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(409);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(408);
      END_STATE();
    case 406:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 409:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(409);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(405);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(408);
      END_STATE();
    case 410:
      if (lookahead == 'n')
        SKIP(405);
      END_STATE();
    case 411:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 412:
      if (lookahead == '\t')
        ADVANCE(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(412);
      if (lookahead == ' ')
        ADVANCE(303);
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
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == '{')
        ADVANCE(67);
      if (lookahead == '|')
        ADVANCE(68);
      if (lookahead == '}')
        ADVANCE(69);
      if (lookahead == '~')
        ADVANCE(70);
      if (lookahead == 8902)
        ADVANCE(71);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 103},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 301},
  [6] = {.lex_state = 307},
  [7] = {.lex_state = 103},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 103},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 311},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 307},
  [20] = {.lex_state = 307},
  [21] = {.lex_state = 103},
  [22] = {.lex_state = 307},
  [23] = {.lex_state = 307},
  [24] = {.lex_state = 307},
  [25] = {.lex_state = 388},
  [26] = {.lex_state = 307},
  [27] = {.lex_state = 307},
  [28] = {.lex_state = 307},
  [29] = {.lex_state = 103},
  [30] = {.lex_state = 103},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 396},
  [34] = {.lex_state = 399},
  [35] = {.lex_state = 405},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 307},
  [38] = {.lex_state = 307},
  [39] = {.lex_state = 396},
  [40] = {.lex_state = 399},
  [41] = {.lex_state = 405},
  [42] = {.lex_state = 307},
  [43] = {.lex_state = 307},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 399},
  [48] = {.lex_state = 399},
  [49] = {.lex_state = 405},
  [50] = {.lex_state = 405},
  [51] = {.lex_state = 307},
  [52] = {.lex_state = 307},
  [53] = {.lex_state = 307},
  [54] = {.lex_state = 307},
  [55] = {.lex_state = 411},
  [56] = {.lex_state = 411},
  [57] = {.lex_state = 399},
  [58] = {.lex_state = 405},
  [59] = {.lex_state = 307},
  [60] = {.lex_state = 411},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym__] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__vertical_tab] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(8),
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
    [sym__integer_literal] = ACTIONS(8),
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym__statement] = STATE(9),
    [sym__literal] = STATE(10),
    [sym__identifier] = STATE(10),
    [sym_reserved_identifier] = STATE(2),
    [sym_integer] = STATE(4),
    [sym_char] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_variable_identifier] = ACTIONS(12),
    [sym_constructor_identifier] = ACTIONS(14),
    [anon_sym_case] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_deriving] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_else] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_in] = ACTIONS(16),
    [anon_sym_infix] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(16),
    [anon_sym_infixr] = ACTIONS(16),
    [anon_sym_instance] = ACTIONS(16),
    [anon_sym_let] = ACTIONS(16),
    [anon_sym_module] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(16),
    [anon_sym_of] = ACTIONS(16),
    [anon_sym_then] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_where] = ACTIONS(16),
    [anon_sym__] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [sym__integer_literal] = ACTIONS(26),
    [sym__octal_literal] = ACTIONS(26),
    [sym__hexidecimal_literal] = ACTIONS(26),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_variable_identifier] = ACTIONS(30),
    [sym_constructor_identifier] = ACTIONS(32),
    [anon_sym_case] = ACTIONS(32),
    [anon_sym_class] = ACTIONS(32),
    [anon_sym_data] = ACTIONS(32),
    [anon_sym_default] = ACTIONS(32),
    [anon_sym_deriving] = ACTIONS(32),
    [anon_sym_do] = ACTIONS(32),
    [anon_sym_else] = ACTIONS(32),
    [anon_sym_foreign] = ACTIONS(32),
    [anon_sym_if] = ACTIONS(32),
    [anon_sym_import] = ACTIONS(32),
    [anon_sym_in] = ACTIONS(32),
    [anon_sym_infix] = ACTIONS(32),
    [anon_sym_infixl] = ACTIONS(32),
    [anon_sym_infixr] = ACTIONS(32),
    [anon_sym_instance] = ACTIONS(32),
    [anon_sym_let] = ACTIONS(32),
    [anon_sym_module] = ACTIONS(32),
    [anon_sym_newtype] = ACTIONS(32),
    [anon_sym_of] = ACTIONS(32),
    [anon_sym_then] = ACTIONS(32),
    [anon_sym_type] = ACTIONS(32),
    [anon_sym_where] = ACTIONS(32),
    [anon_sym__] = ACTIONS(32),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(30),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(38),
    [anon_sym_case] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(38),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_deriving] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_foreign] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_infix] = ACTIONS(38),
    [anon_sym_infixl] = ACTIONS(38),
    [anon_sym_infixr] = ACTIONS(38),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_let] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_of] = ACTIONS(38),
    [anon_sym_then] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym__] = ACTIONS(38),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(44),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_data] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_deriving] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_foreign] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_import] = ACTIONS(44),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
    [anon_sym_instance] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(44),
    [anon_sym_module] = ACTIONS(44),
    [anon_sym_newtype] = ACTIONS(44),
    [anon_sym_of] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym_type] = ACTIONS(44),
    [anon_sym_where] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(44),
    [sym__octal_literal] = ACTIONS(44),
    [sym__hexidecimal_literal] = ACTIONS(44),
  },
  [5] = {
    [sym__graphic] = STATE(13),
    [sym__small] = STATE(14),
    [sym__large] = STATE(14),
    [sym__symbol] = STATE(14),
    [sym__special] = STATE(14),
    [sym__escape] = STATE(13),
    [anon_sym__] = ACTIONS(46),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(46),
    [sym__ascii_large] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_POUND] = ACTIONS(54),
    [anon_sym_DOLLAR] = ACTIONS(54),
    [anon_sym_PERCENT] = ACTIONS(54),
    [anon_sym_AMP] = ACTIONS(54),
    [anon_sym_1] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_QMARK] = ACTIONS(54),
    [anon_sym_AT] = ACTIONS(54),
    [anon_sym_CARET] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(54),
    [anon_sym_BSLASH] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_BQUOTE] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [sym__space] = ACTIONS(48),
  },
  [6] = {
    [sym__gap] = STATE(20),
    [sym__graphic] = STATE(20),
    [sym__small] = STATE(22),
    [sym__large] = STATE(22),
    [sym__symbol] = STATE(22),
    [sym__special] = STATE(22),
    [sym__escape] = STATE(20),
    [aux_sym_string_repeat1] = STATE(28),
    [anon_sym__] = ACTIONS(60),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(60),
    [sym__ascii_large] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym__space] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
    [sym__tab] = ACTIONS(76),
    [sym__vertical_tab] = ACTIONS(76),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_variable_identifier] = ACTIONS(80),
    [sym_constructor_identifier] = ACTIONS(82),
    [anon_sym_case] = ACTIONS(82),
    [anon_sym_class] = ACTIONS(82),
    [anon_sym_data] = ACTIONS(82),
    [anon_sym_default] = ACTIONS(82),
    [anon_sym_deriving] = ACTIONS(82),
    [anon_sym_do] = ACTIONS(82),
    [anon_sym_else] = ACTIONS(82),
    [anon_sym_foreign] = ACTIONS(82),
    [anon_sym_if] = ACTIONS(82),
    [anon_sym_import] = ACTIONS(82),
    [anon_sym_in] = ACTIONS(82),
    [anon_sym_infix] = ACTIONS(82),
    [anon_sym_infixl] = ACTIONS(82),
    [anon_sym_infixr] = ACTIONS(82),
    [anon_sym_instance] = ACTIONS(82),
    [anon_sym_let] = ACTIONS(82),
    [anon_sym_module] = ACTIONS(82),
    [anon_sym_newtype] = ACTIONS(82),
    [anon_sym_of] = ACTIONS(82),
    [anon_sym_then] = ACTIONS(82),
    [anon_sym_type] = ACTIONS(82),
    [anon_sym_where] = ACTIONS(82),
    [anon_sym__] = ACTIONS(82),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym__integer_literal] = ACTIONS(82),
    [sym__octal_literal] = ACTIONS(82),
    [sym__hexidecimal_literal] = ACTIONS(82),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_comment] = ACTIONS(86),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_variable_identifier] = ACTIONS(90),
    [sym_constructor_identifier] = ACTIONS(92),
    [anon_sym_case] = ACTIONS(92),
    [anon_sym_class] = ACTIONS(92),
    [anon_sym_data] = ACTIONS(92),
    [anon_sym_default] = ACTIONS(92),
    [anon_sym_deriving] = ACTIONS(92),
    [anon_sym_do] = ACTIONS(92),
    [anon_sym_else] = ACTIONS(92),
    [anon_sym_foreign] = ACTIONS(92),
    [anon_sym_if] = ACTIONS(92),
    [anon_sym_import] = ACTIONS(92),
    [anon_sym_in] = ACTIONS(92),
    [anon_sym_infix] = ACTIONS(92),
    [anon_sym_infixl] = ACTIONS(92),
    [anon_sym_infixr] = ACTIONS(92),
    [anon_sym_instance] = ACTIONS(92),
    [anon_sym_let] = ACTIONS(92),
    [anon_sym_module] = ACTIONS(92),
    [anon_sym_newtype] = ACTIONS(92),
    [anon_sym_of] = ACTIONS(92),
    [anon_sym_then] = ACTIONS(92),
    [anon_sym_type] = ACTIONS(92),
    [anon_sym_where] = ACTIONS(92),
    [anon_sym__] = ACTIONS(92),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [sym__integer_literal] = ACTIONS(92),
    [sym__octal_literal] = ACTIONS(92),
    [sym__hexidecimal_literal] = ACTIONS(92),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(98),
    [anon_sym_case] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_data] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_deriving] = ACTIONS(98),
    [anon_sym_do] = ACTIONS(98),
    [anon_sym_else] = ACTIONS(98),
    [anon_sym_foreign] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(98),
    [anon_sym_import] = ACTIONS(98),
    [anon_sym_in] = ACTIONS(98),
    [anon_sym_infix] = ACTIONS(98),
    [anon_sym_infixl] = ACTIONS(98),
    [anon_sym_infixr] = ACTIONS(98),
    [anon_sym_instance] = ACTIONS(98),
    [anon_sym_let] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_newtype] = ACTIONS(98),
    [anon_sym_of] = ACTIONS(98),
    [anon_sym_then] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [11] = {
    [sym__statement] = STATE(29),
    [sym__literal] = STATE(10),
    [sym__identifier] = STATE(10),
    [sym_reserved_identifier] = STATE(2),
    [sym_integer] = STATE(4),
    [sym_char] = STATE(4),
    [sym_string] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(12),
    [sym_constructor_identifier] = ACTIONS(14),
    [anon_sym_case] = ACTIONS(16),
    [anon_sym_class] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(16),
    [anon_sym_default] = ACTIONS(16),
    [anon_sym_deriving] = ACTIONS(16),
    [anon_sym_do] = ACTIONS(16),
    [anon_sym_else] = ACTIONS(16),
    [anon_sym_foreign] = ACTIONS(16),
    [anon_sym_if] = ACTIONS(16),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_in] = ACTIONS(16),
    [anon_sym_infix] = ACTIONS(16),
    [anon_sym_infixl] = ACTIONS(16),
    [anon_sym_infixr] = ACTIONS(16),
    [anon_sym_instance] = ACTIONS(16),
    [anon_sym_let] = ACTIONS(16),
    [anon_sym_module] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(16),
    [anon_sym_of] = ACTIONS(16),
    [anon_sym_then] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(16),
    [anon_sym_where] = ACTIONS(16),
    [anon_sym__] = ACTIONS(16),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [anon_sym_DQUOTE] = ACTIONS(24),
    [sym__integer_literal] = ACTIONS(26),
    [sym__octal_literal] = ACTIONS(26),
    [sym__hexidecimal_literal] = ACTIONS(26),
  },
  [12] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(102),
  },
  [13] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(104),
  },
  [14] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(106),
  },
  [15] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(108),
  },
  [16] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(110),
  },
  [17] = {
    [sym__char_escape] = STATE(32),
    [sym__ascii] = STATE(32),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(114),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_CARET] = ACTIONS(116),
    [anon_sym_BSLASH] = ACTIONS(112),
    [anon_sym_x] = ACTIONS(118),
    [anon_sym_X] = ACTIONS(118),
    [anon_sym_o] = ACTIONS(120),
    [anon_sym_O] = ACTIONS(120),
    [anon_sym_a] = ACTIONS(112),
    [anon_sym_b] = ACTIONS(112),
    [anon_sym_f] = ACTIONS(112),
    [anon_sym_n] = ACTIONS(112),
    [anon_sym_r] = ACTIONS(112),
    [anon_sym_t] = ACTIONS(112),
    [anon_sym_v] = ACTIONS(112),
    [anon_sym_NUL] = ACTIONS(122),
    [anon_sym_SOH] = ACTIONS(122),
    [anon_sym_STX] = ACTIONS(122),
    [anon_sym_ETX] = ACTIONS(122),
    [anon_sym_EOT] = ACTIONS(122),
    [anon_sym_ENQ] = ACTIONS(122),
    [anon_sym_ACK] = ACTIONS(122),
    [anon_sym_BEL] = ACTIONS(122),
    [anon_sym_BS] = ACTIONS(122),
    [anon_sym_HT] = ACTIONS(122),
    [anon_sym_LF] = ACTIONS(122),
    [anon_sym_VT] = ACTIONS(122),
    [anon_sym_FF] = ACTIONS(122),
    [anon_sym_CR] = ACTIONS(122),
    [anon_sym_SO] = ACTIONS(122),
    [anon_sym_SI] = ACTIONS(122),
    [anon_sym_DLE] = ACTIONS(122),
    [anon_sym_DC1] = ACTIONS(122),
    [anon_sym_DC2] = ACTIONS(122),
    [anon_sym_DC3] = ACTIONS(122),
    [anon_sym_DC4] = ACTIONS(122),
    [anon_sym_NAK] = ACTIONS(122),
    [anon_sym_SYN] = ACTIONS(122),
    [anon_sym_ETB] = ACTIONS(122),
    [anon_sym_CAN] = ACTIONS(122),
    [anon_sym_EM] = ACTIONS(122),
    [anon_sym_SUB] = ACTIONS(122),
    [anon_sym_ESC] = ACTIONS(122),
    [anon_sym_FS] = ACTIONS(122),
    [anon_sym_GS] = ACTIONS(122),
    [anon_sym_RS] = ACTIONS(122),
    [anon_sym_US] = ACTIONS(122),
    [anon_sym_SP] = ACTIONS(122),
    [anon_sym_DEL] = ACTIONS(122),
  },
  [18] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(124),
  },
  [19] = {
    [anon_sym__] = ACTIONS(126),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(126),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(126),
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
  [20] = {
    [anon_sym__] = ACTIONS(128),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(128),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(134),
    [anon_sym_case] = ACTIONS(134),
    [anon_sym_class] = ACTIONS(134),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_deriving] = ACTIONS(134),
    [anon_sym_do] = ACTIONS(134),
    [anon_sym_else] = ACTIONS(134),
    [anon_sym_foreign] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_infix] = ACTIONS(134),
    [anon_sym_infixl] = ACTIONS(134),
    [anon_sym_infixr] = ACTIONS(134),
    [anon_sym_instance] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(134),
    [anon_sym_newtype] = ACTIONS(134),
    [anon_sym_of] = ACTIONS(134),
    [anon_sym_then] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym__] = ACTIONS(134),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym__integer_literal] = ACTIONS(134),
    [sym__octal_literal] = ACTIONS(134),
    [sym__hexidecimal_literal] = ACTIONS(134),
  },
  [22] = {
    [anon_sym__] = ACTIONS(136),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(136),
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
    [sym__vertical_tab] = ACTIONS(136),
  },
  [23] = {
    [anon_sym__] = ACTIONS(138),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(138),
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
    [sym__vertical_tab] = ACTIONS(138),
  },
  [24] = {
    [anon_sym__] = ACTIONS(140),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(140),
    [sym__ascii_large] = ACTIONS(140),
    [anon_sym_BANG] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_1] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_BSLASH] = ACTIONS(140),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym__space] = ACTIONS(140),
    [sym__newline] = ACTIONS(140),
    [sym__tab] = ACTIONS(140),
    [sym__vertical_tab] = ACTIONS(140),
  },
  [25] = {
    [sym__char_escape] = STATE(38),
    [sym__ascii] = STATE(38),
    [anon_sym__] = ACTIONS(140),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(140),
    [sym__ascii_large] = ACTIONS(140),
    [anon_sym_BANG] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_DOLLAR] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_1] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DOT] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_QMARK] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_BSLASH] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [sym__space] = ACTIONS(140),
    [sym__newline] = ACTIONS(140),
    [sym__tab] = ACTIONS(140),
    [sym__vertical_tab] = ACTIONS(140),
    [anon_sym_x] = ACTIONS(148),
    [anon_sym_X] = ACTIONS(148),
    [anon_sym_o] = ACTIONS(150),
    [anon_sym_O] = ACTIONS(150),
    [anon_sym_a] = ACTIONS(142),
    [anon_sym_b] = ACTIONS(142),
    [anon_sym_f] = ACTIONS(142),
    [anon_sym_n] = ACTIONS(142),
    [anon_sym_r] = ACTIONS(142),
    [anon_sym_t] = ACTIONS(142),
    [anon_sym_v] = ACTIONS(142),
    [anon_sym_NUL] = ACTIONS(152),
    [anon_sym_SOH] = ACTIONS(152),
    [anon_sym_STX] = ACTIONS(152),
    [anon_sym_ETX] = ACTIONS(152),
    [anon_sym_EOT] = ACTIONS(152),
    [anon_sym_ENQ] = ACTIONS(152),
    [anon_sym_ACK] = ACTIONS(152),
    [anon_sym_BEL] = ACTIONS(152),
    [anon_sym_BS] = ACTIONS(152),
    [anon_sym_HT] = ACTIONS(152),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_VT] = ACTIONS(152),
    [anon_sym_FF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SO] = ACTIONS(152),
    [anon_sym_SI] = ACTIONS(152),
    [anon_sym_DLE] = ACTIONS(152),
    [anon_sym_DC1] = ACTIONS(152),
    [anon_sym_DC2] = ACTIONS(152),
    [anon_sym_DC3] = ACTIONS(152),
    [anon_sym_DC4] = ACTIONS(152),
    [anon_sym_NAK] = ACTIONS(152),
    [anon_sym_SYN] = ACTIONS(152),
    [anon_sym_ETB] = ACTIONS(152),
    [anon_sym_CAN] = ACTIONS(152),
    [anon_sym_EM] = ACTIONS(152),
    [anon_sym_SUB] = ACTIONS(152),
    [anon_sym_ESC] = ACTIONS(152),
    [anon_sym_FS] = ACTIONS(152),
    [anon_sym_GS] = ACTIONS(152),
    [anon_sym_RS] = ACTIONS(152),
    [anon_sym_US] = ACTIONS(152),
    [anon_sym_SP] = ACTIONS(152),
    [anon_sym_DEL] = ACTIONS(152),
  },
  [26] = {
    [anon_sym__] = ACTIONS(154),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(154),
    [sym__ascii_large] = ACTIONS(154),
    [anon_sym_BANG] = ACTIONS(154),
    [anon_sym_POUND] = ACTIONS(154),
    [anon_sym_DOLLAR] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(154),
    [anon_sym_AMP] = ACTIONS(154),
    [anon_sym_1] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_LT] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_QMARK] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_TILDE] = ACTIONS(154),
    [anon_sym_COLON] = ACTIONS(154),
    [anon_sym_BSLASH] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_BQUOTE] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [sym__space] = ACTIONS(154),
    [sym__newline] = ACTIONS(154),
    [sym__tab] = ACTIONS(154),
    [sym__vertical_tab] = ACTIONS(154),
  },
  [27] = {
    [anon_sym__] = ACTIONS(156),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(156),
    [sym__ascii_large] = ACTIONS(156),
    [anon_sym_BANG] = ACTIONS(156),
    [anon_sym_POUND] = ACTIONS(156),
    [anon_sym_DOLLAR] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(156),
    [anon_sym_1] = ACTIONS(156),
    [anon_sym_PLUS] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_LT] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_QMARK] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_BSLASH] = ACTIONS(156),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(156),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [sym__space] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
    [sym__tab] = ACTIONS(156),
    [sym__vertical_tab] = ACTIONS(156),
  },
  [28] = {
    [sym__gap] = STATE(43),
    [sym__graphic] = STATE(43),
    [sym__small] = STATE(22),
    [sym__large] = STATE(22),
    [sym__symbol] = STATE(22),
    [sym__special] = STATE(22),
    [sym__escape] = STATE(43),
    [anon_sym__] = ACTIONS(60),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(60),
    [sym__ascii_large] = ACTIONS(68),
    [anon_sym_BANG] = ACTIONS(70),
    [anon_sym_POUND] = ACTIONS(70),
    [anon_sym_DOLLAR] = ACTIONS(70),
    [anon_sym_PERCENT] = ACTIONS(70),
    [anon_sym_AMP] = ACTIONS(70),
    [anon_sym_1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_LT] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_CARET] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [anon_sym_TILDE] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym__space] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
    [sym__tab] = ACTIONS(76),
    [sym__vertical_tab] = ACTIONS(76),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_variable_identifier] = ACTIONS(164),
    [sym_constructor_identifier] = ACTIONS(166),
    [anon_sym_case] = ACTIONS(166),
    [anon_sym_class] = ACTIONS(166),
    [anon_sym_data] = ACTIONS(166),
    [anon_sym_default] = ACTIONS(166),
    [anon_sym_deriving] = ACTIONS(166),
    [anon_sym_do] = ACTIONS(166),
    [anon_sym_else] = ACTIONS(166),
    [anon_sym_foreign] = ACTIONS(166),
    [anon_sym_if] = ACTIONS(166),
    [anon_sym_import] = ACTIONS(166),
    [anon_sym_in] = ACTIONS(166),
    [anon_sym_infix] = ACTIONS(166),
    [anon_sym_infixl] = ACTIONS(166),
    [anon_sym_infixr] = ACTIONS(166),
    [anon_sym_instance] = ACTIONS(166),
    [anon_sym_let] = ACTIONS(166),
    [anon_sym_module] = ACTIONS(166),
    [anon_sym_newtype] = ACTIONS(166),
    [anon_sym_of] = ACTIONS(166),
    [anon_sym_then] = ACTIONS(166),
    [anon_sym_type] = ACTIONS(166),
    [anon_sym_where] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(166),
    [sym__octal_literal] = ACTIONS(166),
    [sym__hexidecimal_literal] = ACTIONS(166),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [sym_variable_identifier] = ACTIONS(170),
    [sym_constructor_identifier] = ACTIONS(172),
    [anon_sym_case] = ACTIONS(172),
    [anon_sym_class] = ACTIONS(172),
    [anon_sym_data] = ACTIONS(172),
    [anon_sym_default] = ACTIONS(172),
    [anon_sym_deriving] = ACTIONS(172),
    [anon_sym_do] = ACTIONS(172),
    [anon_sym_else] = ACTIONS(172),
    [anon_sym_foreign] = ACTIONS(172),
    [anon_sym_if] = ACTIONS(172),
    [anon_sym_import] = ACTIONS(172),
    [anon_sym_in] = ACTIONS(172),
    [anon_sym_infix] = ACTIONS(172),
    [anon_sym_infixl] = ACTIONS(172),
    [anon_sym_infixr] = ACTIONS(172),
    [anon_sym_instance] = ACTIONS(172),
    [anon_sym_let] = ACTIONS(172),
    [anon_sym_module] = ACTIONS(172),
    [anon_sym_newtype] = ACTIONS(172),
    [anon_sym_of] = ACTIONS(172),
    [anon_sym_then] = ACTIONS(172),
    [anon_sym_type] = ACTIONS(172),
    [anon_sym_where] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
  },
  [31] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [32] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(176),
  },
  [33] = {
    [sym__cntrl] = STATE(46),
    [anon_sym__] = ACTIONS(178),
    [sym_comment] = ACTIONS(18),
    [sym__ascii_large] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(178),
  },
  [34] = {
    [aux_sym__escape_repeat1] = STATE(48),
    [sym_comment] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(180),
  },
  [35] = {
    [aux_sym__escape_repeat2] = STATE(50),
    [sym_comment] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(182),
  },
  [36] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(184),
  },
  [37] = {
    [anon_sym__] = ACTIONS(186),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(186),
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
  [38] = {
    [anon_sym__] = ACTIONS(188),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(188),
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
  [39] = {
    [sym__cntrl] = STATE(52),
    [anon_sym__] = ACTIONS(190),
    [sym_comment] = ACTIONS(18),
    [sym__ascii_large] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
  },
  [40] = {
    [aux_sym__escape_repeat1] = STATE(54),
    [sym_comment] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(192),
  },
  [41] = {
    [aux_sym__escape_repeat2] = STATE(56),
    [sym_comment] = ACTIONS(18),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(194),
  },
  [42] = {
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [sym__ascii_large] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
  },
  [43] = {
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(198),
    [sym__ascii_large] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_1] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_QMARK] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [sym__space] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
    [sym__tab] = ACTIONS(198),
    [sym__vertical_tab] = ACTIONS(198),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(202),
    [sym_constructor_identifier] = ACTIONS(204),
    [anon_sym_case] = ACTIONS(204),
    [anon_sym_class] = ACTIONS(204),
    [anon_sym_data] = ACTIONS(204),
    [anon_sym_default] = ACTIONS(204),
    [anon_sym_deriving] = ACTIONS(204),
    [anon_sym_do] = ACTIONS(204),
    [anon_sym_else] = ACTIONS(204),
    [anon_sym_foreign] = ACTIONS(204),
    [anon_sym_if] = ACTIONS(204),
    [anon_sym_import] = ACTIONS(204),
    [anon_sym_in] = ACTIONS(204),
    [anon_sym_infix] = ACTIONS(204),
    [anon_sym_infixl] = ACTIONS(204),
    [anon_sym_infixr] = ACTIONS(204),
    [anon_sym_instance] = ACTIONS(204),
    [anon_sym_let] = ACTIONS(204),
    [anon_sym_module] = ACTIONS(204),
    [anon_sym_newtype] = ACTIONS(204),
    [anon_sym_of] = ACTIONS(204),
    [anon_sym_then] = ACTIONS(204),
    [anon_sym_type] = ACTIONS(204),
    [anon_sym_where] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [sym_comment] = ACTIONS(18),
    [sym_float] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [sym__integer_literal] = ACTIONS(204),
    [sym__octal_literal] = ACTIONS(204),
    [sym__hexidecimal_literal] = ACTIONS(204),
  },
  [45] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(206),
  },
  [46] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(208),
  },
  [47] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(210),
  },
  [48] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(214),
  },
  [49] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(216),
  },
  [50] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(218),
  },
  [51] = {
    [anon_sym__] = ACTIONS(220),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(220),
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
  },
  [52] = {
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
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
    [sym__vertical_tab] = ACTIONS(222),
  },
  [53] = {
    [anon_sym__] = ACTIONS(224),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(224),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(224),
    [sym__ascii_large] = ACTIONS(224),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_DOLLAR] = ACTIONS(224),
    [anon_sym_PERCENT] = ACTIONS(224),
    [anon_sym_AMP] = ACTIONS(224),
    [anon_sym_1] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_SLASH] = ACTIONS(224),
    [anon_sym_LT] = ACTIONS(224),
    [anon_sym_EQ] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_QMARK] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(224),
    [anon_sym_CARET] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(224),
    [anon_sym_BSLASH] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [sym__space] = ACTIONS(224),
    [sym__newline] = ACTIONS(224),
    [sym__tab] = ACTIONS(224),
    [sym__vertical_tab] = ACTIONS(224),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(224),
  },
  [54] = {
    [anon_sym__] = ACTIONS(226),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(226),
    [sym__ascii_large] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_1] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_BQUOTE] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym__space] = ACTIONS(226),
    [sym__newline] = ACTIONS(226),
    [sym__tab] = ACTIONS(226),
    [sym__vertical_tab] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(228),
  },
  [55] = {
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(230),
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
  [56] = {
    [anon_sym__] = ACTIONS(226),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(226),
    [sym__ascii_large] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(226),
    [anon_sym_POUND] = ACTIONS(226),
    [anon_sym_DOLLAR] = ACTIONS(226),
    [anon_sym_PERCENT] = ACTIONS(226),
    [anon_sym_AMP] = ACTIONS(226),
    [anon_sym_1] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_SLASH] = ACTIONS(226),
    [anon_sym_LT] = ACTIONS(226),
    [anon_sym_EQ] = ACTIONS(226),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_QMARK] = ACTIONS(226),
    [anon_sym_AT] = ACTIONS(226),
    [anon_sym_CARET] = ACTIONS(226),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_TILDE] = ACTIONS(226),
    [anon_sym_COLON] = ACTIONS(226),
    [anon_sym_BSLASH] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_RPAREN] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
    [anon_sym_BQUOTE] = ACTIONS(226),
    [anon_sym_LBRACE] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym__space] = ACTIONS(226),
    [sym__newline] = ACTIONS(226),
    [sym__tab] = ACTIONS(226),
    [sym__vertical_tab] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(232),
  },
  [57] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(234),
  },
  [58] = {
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(236),
  },
  [59] = {
    [anon_sym__] = ACTIONS(238),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(238),
    [sym__ascii_large] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(238),
    [anon_sym_POUND] = ACTIONS(238),
    [anon_sym_DOLLAR] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(238),
    [anon_sym_AMP] = ACTIONS(238),
    [anon_sym_1] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_SLASH] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_QMARK] = ACTIONS(238),
    [anon_sym_AT] = ACTIONS(238),
    [anon_sym_CARET] = ACTIONS(238),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_TILDE] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(238),
    [anon_sym_BSLASH] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_RBRACK] = ACTIONS(238),
    [anon_sym_BQUOTE] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym__space] = ACTIONS(238),
    [sym__newline] = ACTIONS(238),
    [sym__tab] = ACTIONS(238),
    [sym__vertical_tab] = ACTIONS(238),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(238),
  },
  [60] = {
    [anon_sym__] = ACTIONS(240),
    [sym_comment] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(240),
    [sym__ascii_large] = ACTIONS(240),
    [anon_sym_BANG] = ACTIONS(240),
    [anon_sym_POUND] = ACTIONS(240),
    [anon_sym_DOLLAR] = ACTIONS(240),
    [anon_sym_PERCENT] = ACTIONS(240),
    [anon_sym_AMP] = ACTIONS(240),
    [anon_sym_1] = ACTIONS(240),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_LT] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [anon_sym_QMARK] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(240),
    [anon_sym_CARET] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [anon_sym_BSLASH] = ACTIONS(240),
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(240),
    [anon_sym_RBRACK] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(240),
    [anon_sym_RBRACE] = ACTIONS(240),
    [sym__space] = ACTIONS(240),
    [sym__newline] = ACTIONS(240),
    [sym__tab] = ACTIONS(240),
    [sym__vertical_tab] = ACTIONS(240),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(240),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [30] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(15),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
