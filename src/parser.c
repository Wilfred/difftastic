#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 65
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  sym_variable_identifier = 3,
  sym_constructor_identifier = 4,
  sym_module_identifier = 5,
  anon_sym_case = 6,
  anon_sym_class = 7,
  anon_sym_data = 8,
  anon_sym_default = 9,
  anon_sym_deriving = 10,
  anon_sym_do = 11,
  anon_sym_else = 12,
  anon_sym_foreign = 13,
  anon_sym_if = 14,
  anon_sym_import = 15,
  anon_sym_in = 16,
  anon_sym_infix = 17,
  anon_sym_infixl = 18,
  anon_sym_infixr = 19,
  anon_sym_instance = 20,
  anon_sym_let = 21,
  anon_sym_newtype = 22,
  anon_sym_of = 23,
  anon_sym_then = 24,
  anon_sym_type = 25,
  anon_sym__ = 26,
  sym_comment = 27,
  sym_float = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 31,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 32,
  sym__ascii_large = 33,
  anon_sym_BANG = 34,
  anon_sym_POUND = 35,
  anon_sym_DOLLAR = 36,
  anon_sym_PERCENT = 37,
  anon_sym_AMP = 38,
  anon_sym_1 = 39,
  anon_sym_PLUS = 40,
  anon_sym_DOT = 41,
  anon_sym_SLASH = 42,
  anon_sym_LT = 43,
  anon_sym_EQ = 44,
  anon_sym_GT = 45,
  anon_sym_QMARK = 46,
  anon_sym_AT = 47,
  anon_sym_CARET = 48,
  anon_sym_PIPE = 49,
  anon_sym_DASH = 50,
  anon_sym_TILDE = 51,
  anon_sym_COLON = 52,
  anon_sym_BSLASH = 53,
  anon_sym_LPAREN = 54,
  anon_sym_RPAREN = 55,
  anon_sym_SEMI = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_BQUOTE = 59,
  anon_sym_LBRACE = 60,
  anon_sym_RBRACE = 61,
  sym__space = 62,
  sym__newline = 63,
  sym__tab = 64,
  sym__vertical_tab = 65,
  anon_sym_x = 66,
  anon_sym_X = 67,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 68,
  anon_sym_o = 69,
  anon_sym_O = 70,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 71,
  anon_sym_a = 72,
  anon_sym_b = 73,
  anon_sym_f = 74,
  anon_sym_n = 75,
  anon_sym_r = 76,
  anon_sym_t = 77,
  anon_sym_v = 78,
  anon_sym_NUL = 79,
  anon_sym_SOH = 80,
  anon_sym_STX = 81,
  anon_sym_ETX = 82,
  anon_sym_EOT = 83,
  anon_sym_ENQ = 84,
  anon_sym_ACK = 85,
  anon_sym_BEL = 86,
  anon_sym_BS = 87,
  anon_sym_HT = 88,
  anon_sym_LF = 89,
  anon_sym_VT = 90,
  anon_sym_FF = 91,
  anon_sym_CR = 92,
  anon_sym_SO = 93,
  anon_sym_SI = 94,
  anon_sym_DLE = 95,
  anon_sym_DC1 = 96,
  anon_sym_DC2 = 97,
  anon_sym_DC3 = 98,
  anon_sym_DC4 = 99,
  anon_sym_NAK = 100,
  anon_sym_SYN = 101,
  anon_sym_ETB = 102,
  anon_sym_CAN = 103,
  anon_sym_EM = 104,
  anon_sym_SUB = 105,
  anon_sym_ESC = 106,
  anon_sym_FS = 107,
  anon_sym_GS = 108,
  anon_sym_RS = 109,
  anon_sym_US = 110,
  anon_sym_SP = 111,
  anon_sym_DEL = 112,
  sym__integer_literal = 113,
  sym__octal_literal = 114,
  sym__hexidecimal_literal = 115,
  sym_program = 116,
  sym__statement = 117,
  sym_module = 118,
  sym__literal = 119,
  sym__identifier = 120,
  sym_reserved_identifier = 121,
  sym_integer = 122,
  sym_char = 123,
  sym_string = 124,
  sym__gap = 125,
  sym__graphic = 126,
  sym__small = 127,
  sym__large = 128,
  sym__symbol = 129,
  sym__special = 130,
  sym__escape = 131,
  sym__char_escape = 132,
  sym__ascii = 133,
  sym__cntrl = 134,
  aux_sym_program_repeat1 = 135,
  aux_sym_string_repeat1 = 136,
  aux_sym__escape_repeat1 = 137,
  aux_sym__escape_repeat2 = 138,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym_module_identifier] = "module_identifier",
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
  [anon_sym_newtype] = "newtype",
  [anon_sym_of] = "of",
  [anon_sym_then] = "then",
  [anon_sym_type] = "type",
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
  [sym_module] = "module",
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
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
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
  [sym_module] = {
    .visible = true,
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
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(305);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(301);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(307);
      END_STATE();
    case 302:
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(302);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 303:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(302);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(304);
      if (lookahead == '.')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(304);
      END_STATE();
    case 305:
      if (lookahead == '\n')
        ADVANCE(302);
      if (lookahead == '\r')
        ADVANCE(305);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(301);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == 'n')
        SKIP(301);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(307);
      if (lookahead == '.')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(307);
      END_STATE();
    case 308:
      if (lookahead == '\t')
        SKIP(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(313);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 309:
      if (lookahead == '\t')
        ADVANCE(309);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(309);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 313:
      if (lookahead == '\t')
        SKIP(308);
      if (lookahead == '\n')
        ADVANCE(309);
      if (lookahead == '\r')
        ADVANCE(313);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 314:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(317);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 317:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(317);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 318:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(327);
      if (lookahead == 'w')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(318);
      END_STATE();
    case 319:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(319);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'h')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 322:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(323);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 323:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'r')
        ADVANCE(324);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 324:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(319);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(327);
      if (lookahead == 'w')
        ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(318);
      END_STATE();
    case 327:
      if (lookahead == 'n')
        SKIP(318);
      END_STATE();
    case 328:
      if (lookahead == 'h')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'e')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'r')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(384);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == 'A')
        ADVANCE(385);
      if (lookahead == 'B')
        ADVANCE(387);
      if (lookahead == 'C')
        ADVANCE(389);
      if (lookahead == 'D')
        ADVANCE(391);
      if (lookahead == 'E')
        ADVANCE(395);
      if (lookahead == 'F')
        ADVANCE(400);
      if (lookahead == 'G')
        ADVANCE(401);
      if (lookahead == 'H')
        ADVANCE(402);
      if (lookahead == 'L')
        ADVANCE(403);
      if (lookahead == 'N')
        ADVANCE(404);
      if (lookahead == 'O')
        ADVANCE(373);
      if (lookahead == 'R')
        ADVANCE(405);
      if (lookahead == 'S')
        ADVANCE(406);
      if (lookahead == 'U')
        ADVANCE(407);
      if (lookahead == 'V')
        ADVANCE(408);
      if (lookahead == 'X')
        ADVANCE(378);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(381);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(312);
      END_STATE();
    case 333:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(333);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == 'A')
        ADVANCE(334);
      if (lookahead == 'B')
        ADVANCE(337);
      if (lookahead == 'C')
        ADVANCE(341);
      if (lookahead == 'D')
        ADVANCE(345);
      if (lookahead == 'E')
        ADVANCE(355);
      if (lookahead == 'F')
        ADVANCE(366);
      if (lookahead == 'G')
        ADVANCE(369);
      if (lookahead == 'H')
        ADVANCE(370);
      if (lookahead == 'L')
        ADVANCE(371);
      if (lookahead == 'N')
        ADVANCE(372);
      if (lookahead == 'O')
        ADVANCE(373);
      if (lookahead == 'R')
        ADVANCE(374);
      if (lookahead == 'S')
        ADVANCE(375);
      if (lookahead == 'U')
        ADVANCE(376);
      if (lookahead == 'V')
        ADVANCE(377);
      if (lookahead == 'X')
        ADVANCE(378);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(381);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(312);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'K')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(338);
      if (lookahead == 'S')
        ADVANCE(340);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 338:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 341:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(342);
      if (lookahead == 'R')
        ADVANCE(344);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 342:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'N')
        ADVANCE(343);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 345:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(346);
      if (lookahead == 'E')
        ADVANCE(351);
      if (lookahead == 'L')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 346:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == '1')
        ADVANCE(347);
      if (lookahead == '2')
        ADVANCE(348);
      if (lookahead == '3')
        ADVANCE(349);
      if (lookahead == '4')
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 351:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'E')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'M')
        ADVANCE(356);
      if (lookahead == 'N')
        ADVANCE(357);
      if (lookahead == 'O')
        ADVANCE(359);
      if (lookahead == 'S')
        ADVANCE(361);
      if (lookahead == 'T')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'Q')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'C')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'B')
        ADVANCE(364);
      if (lookahead == 'X')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(367);
      if (lookahead == 'S')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'A')
        ADVANCE(31);
      if (lookahead == 'U')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 375:
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
    case 376:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'S')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'T')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 384:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(384);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == 'A')
        ADVANCE(385);
      if (lookahead == 'B')
        ADVANCE(387);
      if (lookahead == 'C')
        ADVANCE(389);
      if (lookahead == 'D')
        ADVANCE(391);
      if (lookahead == 'E')
        ADVANCE(395);
      if (lookahead == 'F')
        ADVANCE(400);
      if (lookahead == 'G')
        ADVANCE(401);
      if (lookahead == 'H')
        ADVANCE(402);
      if (lookahead == 'L')
        ADVANCE(403);
      if (lookahead == 'N')
        ADVANCE(404);
      if (lookahead == 'O')
        ADVANCE(373);
      if (lookahead == 'R')
        ADVANCE(405);
      if (lookahead == 'S')
        ADVANCE(406);
      if (lookahead == 'U')
        ADVANCE(407);
      if (lookahead == 'V')
        ADVANCE(408);
      if (lookahead == 'X')
        ADVANCE(378);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(381);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(312);
      END_STATE();
    case 385:
      if (lookahead == 'C')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'K')
        ADVANCE(336);
      END_STATE();
    case 387:
      if (lookahead == 'E')
        ADVANCE(388);
      if (lookahead == 'S')
        ADVANCE(340);
      END_STATE();
    case 388:
      if (lookahead == 'L')
        ADVANCE(339);
      END_STATE();
    case 389:
      if (lookahead == 'A')
        ADVANCE(390);
      if (lookahead == 'R')
        ADVANCE(344);
      END_STATE();
    case 390:
      if (lookahead == 'N')
        ADVANCE(343);
      END_STATE();
    case 391:
      if (lookahead == 'C')
        ADVANCE(392);
      if (lookahead == 'E')
        ADVANCE(393);
      if (lookahead == 'L')
        ADVANCE(394);
      END_STATE();
    case 392:
      if (lookahead == '1')
        ADVANCE(347);
      if (lookahead == '2')
        ADVANCE(348);
      if (lookahead == '3')
        ADVANCE(349);
      if (lookahead == '4')
        ADVANCE(350);
      END_STATE();
    case 393:
      if (lookahead == 'L')
        ADVANCE(352);
      END_STATE();
    case 394:
      if (lookahead == 'E')
        ADVANCE(354);
      END_STATE();
    case 395:
      if (lookahead == 'M')
        ADVANCE(356);
      if (lookahead == 'N')
        ADVANCE(396);
      if (lookahead == 'O')
        ADVANCE(397);
      if (lookahead == 'S')
        ADVANCE(398);
      if (lookahead == 'T')
        ADVANCE(399);
      END_STATE();
    case 396:
      if (lookahead == 'Q')
        ADVANCE(358);
      END_STATE();
    case 397:
      if (lookahead == 'T')
        ADVANCE(360);
      END_STATE();
    case 398:
      if (lookahead == 'C')
        ADVANCE(362);
      END_STATE();
    case 399:
      if (lookahead == 'B')
        ADVANCE(364);
      if (lookahead == 'X')
        ADVANCE(365);
      END_STATE();
    case 400:
      if (lookahead == 'F')
        ADVANCE(367);
      if (lookahead == 'S')
        ADVANCE(368);
      END_STATE();
    case 401:
      if (lookahead == 'S')
        ADVANCE(25);
      END_STATE();
    case 402:
      if (lookahead == 'T')
        ADVANCE(27);
      END_STATE();
    case 403:
      if (lookahead == 'F')
        ADVANCE(29);
      END_STATE();
    case 404:
      if (lookahead == 'A')
        ADVANCE(86);
      if (lookahead == 'U')
        ADVANCE(87);
      END_STATE();
    case 405:
      if (lookahead == 'S')
        ADVANCE(41);
      END_STATE();
    case 406:
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
    case 407:
      if (lookahead == 'S')
        ADVANCE(54);
      END_STATE();
    case 408:
      if (lookahead == 'T')
        ADVANCE(56);
      END_STATE();
    case 409:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(411);
      if (lookahead == 'B')
        ADVANCE(412);
      if (lookahead == 'C')
        ADVANCE(413);
      if (lookahead == 'D')
        ADVANCE(414);
      if (lookahead == 'E')
        ADVANCE(415);
      if (lookahead == 'F')
        ADVANCE(416);
      if (lookahead == 'G')
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'O')
        ADVANCE(373);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == 'X')
        ADVANCE(378);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(381);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(383);
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
        ADVANCE(312);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 410:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(410);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(411);
      if (lookahead == 'B')
        ADVANCE(412);
      if (lookahead == 'C')
        ADVANCE(413);
      if (lookahead == 'D')
        ADVANCE(414);
      if (lookahead == 'E')
        ADVANCE(415);
      if (lookahead == 'F')
        ADVANCE(416);
      if (lookahead == 'G')
        ADVANCE(82);
      if (lookahead == 'H')
        ADVANCE(83);
      if (lookahead == 'L')
        ADVANCE(84);
      if (lookahead == 'N')
        ADVANCE(85);
      if (lookahead == 'O')
        ADVANCE(373);
      if (lookahead == 'R')
        ADVANCE(88);
      if (lookahead == 'S')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(94);
      if (lookahead == 'V')
        ADVANCE(95);
      if (lookahead == 'X')
        ADVANCE(378);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '`')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead == 'f')
        ADVANCE(381);
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'o')
        ADVANCE(382);
      if (lookahead == 'r')
        ADVANCE(64);
      if (lookahead == 't')
        ADVANCE(65);
      if (lookahead == 'v')
        ADVANCE(66);
      if (lookahead == 'x')
        ADVANCE(383);
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
        ADVANCE(312);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(386);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(388);
      if (lookahead == 'S')
        ADVANCE(340);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(390);
      if (lookahead == 'R')
        ADVANCE(344);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(392);
      if (lookahead == 'E')
        ADVANCE(393);
      if (lookahead == 'L')
        ADVANCE(394);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(356);
      if (lookahead == 'N')
        ADVANCE(396);
      if (lookahead == 'O')
        ADVANCE(397);
      if (lookahead == 'S')
        ADVANCE(398);
      if (lookahead == 'T')
        ADVANCE(399);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(367);
      if (lookahead == 'S')
        ADVANCE(368);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      END_STATE();
    case 418:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(418);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 419:
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '@')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(57);
      if (lookahead == '\\')
        ADVANCE(311);
      if (lookahead == ']')
        ADVANCE(59);
      if (lookahead == '^')
        ADVANCE(60);
      if (lookahead == '_')
        ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(417);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      END_STATE();
    case 420:
      if (lookahead == '\n')
        ADVANCE(421);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(423);
      END_STATE();
    case 421:
      if (lookahead == '\n')
        ADVANCE(421);
      if (lookahead == '\r')
        ADVANCE(421);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 422:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(421);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 424:
      if (lookahead == '\n')
        ADVANCE(421);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(425);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(423);
      END_STATE();
    case 425:
      if (lookahead == 'n')
        SKIP(420);
      END_STATE();
    case 426:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(431);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      END_STATE();
    case 427:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(427);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(105);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(36);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 430:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '\\')
        SKIP(431);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      END_STATE();
    case 431:
      if (lookahead == 'n')
        SKIP(426);
      END_STATE();
    case 432:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(80);
      END_STATE();
    case 433:
      if (lookahead == '\t')
        ADVANCE(315);
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(433);
      if (lookahead == ' ')
        ADVANCE(310);
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
        ADVANCE(311);
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
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(312);
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
  [2] = {.lex_state = 301},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 103},
  [6] = {.lex_state = 308},
  [7] = {.lex_state = 314},
  [8] = {.lex_state = 103},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 103},
  [13] = {.lex_state = 318},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 332},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 314},
  [22] = {.lex_state = 314},
  [23] = {.lex_state = 103},
  [24] = {.lex_state = 314},
  [25] = {.lex_state = 314},
  [26] = {.lex_state = 314},
  [27] = {.lex_state = 409},
  [28] = {.lex_state = 314},
  [29] = {.lex_state = 314},
  [30] = {.lex_state = 314},
  [31] = {.lex_state = 103},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 103},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 417},
  [37] = {.lex_state = 420},
  [38] = {.lex_state = 426},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 314},
  [41] = {.lex_state = 314},
  [42] = {.lex_state = 417},
  [43] = {.lex_state = 420},
  [44] = {.lex_state = 426},
  [45] = {.lex_state = 314},
  [46] = {.lex_state = 314},
  [47] = {.lex_state = 103},
  [48] = {.lex_state = 103},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 420},
  [52] = {.lex_state = 420},
  [53] = {.lex_state = 426},
  [54] = {.lex_state = 426},
  [55] = {.lex_state = 314},
  [56] = {.lex_state = 314},
  [57] = {.lex_state = 314},
  [58] = {.lex_state = 314},
  [59] = {.lex_state = 432},
  [60] = {.lex_state = 432},
  [61] = {.lex_state = 420},
  [62] = {.lex_state = 426},
  [63] = {.lex_state = 314},
  [64] = {.lex_state = 432},
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
    [sym_program] = STATE(9),
    [sym__statement] = STATE(10),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(16),
    [sym_constructor_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_newtype] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym__integer_literal] = ACTIONS(28),
    [sym__octal_literal] = ACTIONS(28),
    [sym__hexidecimal_literal] = ACTIONS(28),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(30),
    [sym_comment] = ACTIONS(20),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(32),
    [anon_sym_module] = ACTIONS(34),
    [anon_sym_where] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(36),
    [sym_constructor_identifier] = ACTIONS(34),
    [anon_sym_case] = ACTIONS(34),
    [anon_sym_class] = ACTIONS(34),
    [anon_sym_data] = ACTIONS(34),
    [anon_sym_default] = ACTIONS(34),
    [anon_sym_deriving] = ACTIONS(34),
    [anon_sym_do] = ACTIONS(34),
    [anon_sym_else] = ACTIONS(34),
    [anon_sym_foreign] = ACTIONS(34),
    [anon_sym_if] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(34),
    [anon_sym_in] = ACTIONS(34),
    [anon_sym_infix] = ACTIONS(34),
    [anon_sym_infixl] = ACTIONS(34),
    [anon_sym_infixr] = ACTIONS(34),
    [anon_sym_instance] = ACTIONS(34),
    [anon_sym_let] = ACTIONS(34),
    [anon_sym_newtype] = ACTIONS(34),
    [anon_sym_of] = ACTIONS(34),
    [anon_sym_then] = ACTIONS(34),
    [anon_sym_type] = ACTIONS(34),
    [anon_sym__] = ACTIONS(34),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(36),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(40),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(38),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_module] = ACTIONS(46),
    [anon_sym_where] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(46),
    [anon_sym_case] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_deriving] = ACTIONS(46),
    [anon_sym_do] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_foreign] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_import] = ACTIONS(46),
    [anon_sym_in] = ACTIONS(46),
    [anon_sym_infix] = ACTIONS(46),
    [anon_sym_infixl] = ACTIONS(46),
    [anon_sym_infixr] = ACTIONS(46),
    [anon_sym_instance] = ACTIONS(46),
    [anon_sym_let] = ACTIONS(46),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_of] = ACTIONS(46),
    [anon_sym_then] = ACTIONS(46),
    [anon_sym_type] = ACTIONS(46),
    [anon_sym__] = ACTIONS(46),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym__integer_literal] = ACTIONS(46),
    [sym__octal_literal] = ACTIONS(46),
    [sym__hexidecimal_literal] = ACTIONS(46),
  },
  [6] = {
    [sym__graphic] = STATE(15),
    [sym__small] = STATE(16),
    [sym__large] = STATE(16),
    [sym__symbol] = STATE(16),
    [sym__special] = STATE(16),
    [sym__escape] = STATE(15),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(50),
    [sym__ascii_large] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(58),
    [anon_sym_POUND] = ACTIONS(58),
    [anon_sym_DOLLAR] = ACTIONS(58),
    [anon_sym_PERCENT] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_1] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_QMARK] = ACTIONS(58),
    [anon_sym_AT] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_TILDE] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(58),
    [anon_sym_BSLASH] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [sym__space] = ACTIONS(52),
  },
  [7] = {
    [sym__gap] = STATE(22),
    [sym__graphic] = STATE(22),
    [sym__small] = STATE(24),
    [sym__large] = STATE(24),
    [sym__symbol] = STATE(24),
    [sym__special] = STATE(24),
    [sym__escape] = STATE(22),
    [aux_sym_string_repeat1] = STATE(30),
    [anon_sym__] = ACTIONS(64),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(64),
    [sym__ascii_large] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_1] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym__space] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
    [sym__tab] = ACTIONS(80),
    [sym__vertical_tab] = ACTIONS(80),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_module] = ACTIONS(84),
    [anon_sym_where] = ACTIONS(84),
    [sym_variable_identifier] = ACTIONS(86),
    [sym_constructor_identifier] = ACTIONS(84),
    [anon_sym_case] = ACTIONS(84),
    [anon_sym_class] = ACTIONS(84),
    [anon_sym_data] = ACTIONS(84),
    [anon_sym_default] = ACTIONS(84),
    [anon_sym_deriving] = ACTIONS(84),
    [anon_sym_do] = ACTIONS(84),
    [anon_sym_else] = ACTIONS(84),
    [anon_sym_foreign] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_in] = ACTIONS(84),
    [anon_sym_infix] = ACTIONS(84),
    [anon_sym_infixl] = ACTIONS(84),
    [anon_sym_infixr] = ACTIONS(84),
    [anon_sym_instance] = ACTIONS(84),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_newtype] = ACTIONS(84),
    [anon_sym_of] = ACTIONS(84),
    [anon_sym_then] = ACTIONS(84),
    [anon_sym_type] = ACTIONS(84),
    [anon_sym__] = ACTIONS(84),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym__integer_literal] = ACTIONS(84),
    [sym__octal_literal] = ACTIONS(84),
    [sym__hexidecimal_literal] = ACTIONS(84),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_comment] = ACTIONS(90),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(94),
    [anon_sym_case] = ACTIONS(94),
    [anon_sym_class] = ACTIONS(94),
    [anon_sym_data] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(94),
    [anon_sym_deriving] = ACTIONS(94),
    [anon_sym_do] = ACTIONS(94),
    [anon_sym_else] = ACTIONS(94),
    [anon_sym_foreign] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(94),
    [anon_sym_import] = ACTIONS(94),
    [anon_sym_in] = ACTIONS(94),
    [anon_sym_infix] = ACTIONS(94),
    [anon_sym_infixl] = ACTIONS(94),
    [anon_sym_infixr] = ACTIONS(94),
    [anon_sym_instance] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_newtype] = ACTIONS(94),
    [anon_sym_of] = ACTIONS(94),
    [anon_sym_then] = ACTIONS(94),
    [anon_sym_type] = ACTIONS(94),
    [anon_sym__] = ACTIONS(94),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(94),
    [sym__octal_literal] = ACTIONS(94),
    [sym__hexidecimal_literal] = ACTIONS(94),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(100),
    [anon_sym_where] = ACTIONS(100),
    [sym_variable_identifier] = ACTIONS(102),
    [sym_constructor_identifier] = ACTIONS(100),
    [anon_sym_case] = ACTIONS(100),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_data] = ACTIONS(100),
    [anon_sym_default] = ACTIONS(100),
    [anon_sym_deriving] = ACTIONS(100),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_foreign] = ACTIONS(100),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_import] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
    [anon_sym_infix] = ACTIONS(100),
    [anon_sym_infixl] = ACTIONS(100),
    [anon_sym_infixr] = ACTIONS(100),
    [anon_sym_instance] = ACTIONS(100),
    [anon_sym_let] = ACTIONS(100),
    [anon_sym_newtype] = ACTIONS(100),
    [anon_sym_of] = ACTIONS(100),
    [anon_sym_then] = ACTIONS(100),
    [anon_sym_type] = ACTIONS(100),
    [anon_sym__] = ACTIONS(100),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym__integer_literal] = ACTIONS(100),
    [sym__octal_literal] = ACTIONS(100),
    [sym__hexidecimal_literal] = ACTIONS(100),
  },
  [12] = {
    [sym__statement] = STATE(31),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(16),
    [sym_constructor_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_newtype] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym__integer_literal] = ACTIONS(28),
    [sym__octal_literal] = ACTIONS(28),
    [sym__hexidecimal_literal] = ACTIONS(28),
  },
  [13] = {
    [anon_sym_where] = ACTIONS(106),
    [sym_comment] = ACTIONS(20),
  },
  [14] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(108),
  },
  [15] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(110),
  },
  [16] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [17] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(114),
  },
  [18] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(116),
  },
  [19] = {
    [sym__char_escape] = STATE(35),
    [sym__ascii] = STATE(35),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(120),
    [anon_sym_AMP] = ACTIONS(118),
    [anon_sym_CARET] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(118),
    [anon_sym_x] = ACTIONS(124),
    [anon_sym_X] = ACTIONS(124),
    [anon_sym_o] = ACTIONS(126),
    [anon_sym_O] = ACTIONS(126),
    [anon_sym_a] = ACTIONS(118),
    [anon_sym_b] = ACTIONS(118),
    [anon_sym_f] = ACTIONS(118),
    [anon_sym_n] = ACTIONS(118),
    [anon_sym_r] = ACTIONS(118),
    [anon_sym_t] = ACTIONS(118),
    [anon_sym_v] = ACTIONS(118),
    [anon_sym_NUL] = ACTIONS(128),
    [anon_sym_SOH] = ACTIONS(128),
    [anon_sym_STX] = ACTIONS(128),
    [anon_sym_ETX] = ACTIONS(128),
    [anon_sym_EOT] = ACTIONS(128),
    [anon_sym_ENQ] = ACTIONS(128),
    [anon_sym_ACK] = ACTIONS(128),
    [anon_sym_BEL] = ACTIONS(128),
    [anon_sym_BS] = ACTIONS(128),
    [anon_sym_HT] = ACTIONS(128),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_VT] = ACTIONS(128),
    [anon_sym_FF] = ACTIONS(128),
    [anon_sym_CR] = ACTIONS(128),
    [anon_sym_SO] = ACTIONS(128),
    [anon_sym_SI] = ACTIONS(128),
    [anon_sym_DLE] = ACTIONS(128),
    [anon_sym_DC1] = ACTIONS(128),
    [anon_sym_DC2] = ACTIONS(128),
    [anon_sym_DC3] = ACTIONS(128),
    [anon_sym_DC4] = ACTIONS(128),
    [anon_sym_NAK] = ACTIONS(128),
    [anon_sym_SYN] = ACTIONS(128),
    [anon_sym_ETB] = ACTIONS(128),
    [anon_sym_CAN] = ACTIONS(128),
    [anon_sym_EM] = ACTIONS(128),
    [anon_sym_SUB] = ACTIONS(128),
    [anon_sym_ESC] = ACTIONS(128),
    [anon_sym_FS] = ACTIONS(128),
    [anon_sym_GS] = ACTIONS(128),
    [anon_sym_RS] = ACTIONS(128),
    [anon_sym_US] = ACTIONS(128),
    [anon_sym_SP] = ACTIONS(128),
    [anon_sym_DEL] = ACTIONS(128),
  },
  [20] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(130),
  },
  [21] = {
    [anon_sym__] = ACTIONS(132),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(132),
    [sym__ascii_large] = ACTIONS(132),
    [anon_sym_BANG] = ACTIONS(132),
    [anon_sym_POUND] = ACTIONS(132),
    [anon_sym_DOLLAR] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [anon_sym_AMP] = ACTIONS(132),
    [anon_sym_1] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_QMARK] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_CARET] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_BQUOTE] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [sym__space] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
    [sym__tab] = ACTIONS(132),
    [sym__vertical_tab] = ACTIONS(132),
  },
  [22] = {
    [anon_sym__] = ACTIONS(134),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(134),
    [sym__ascii_large] = ACTIONS(134),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(134),
    [anon_sym_DOLLAR] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [anon_sym_AMP] = ACTIONS(134),
    [anon_sym_1] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DOT] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(134),
    [anon_sym_CARET] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_TILDE] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_BSLASH] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [sym__space] = ACTIONS(134),
    [sym__newline] = ACTIONS(134),
    [sym__tab] = ACTIONS(134),
    [sym__vertical_tab] = ACTIONS(134),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_module] = ACTIONS(138),
    [anon_sym_where] = ACTIONS(138),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(138),
    [anon_sym_class] = ACTIONS(138),
    [anon_sym_data] = ACTIONS(138),
    [anon_sym_default] = ACTIONS(138),
    [anon_sym_deriving] = ACTIONS(138),
    [anon_sym_do] = ACTIONS(138),
    [anon_sym_else] = ACTIONS(138),
    [anon_sym_foreign] = ACTIONS(138),
    [anon_sym_if] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(138),
    [anon_sym_in] = ACTIONS(138),
    [anon_sym_infix] = ACTIONS(138),
    [anon_sym_infixl] = ACTIONS(138),
    [anon_sym_infixr] = ACTIONS(138),
    [anon_sym_instance] = ACTIONS(138),
    [anon_sym_let] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(138),
    [anon_sym_of] = ACTIONS(138),
    [anon_sym_then] = ACTIONS(138),
    [anon_sym_type] = ACTIONS(138),
    [anon_sym__] = ACTIONS(138),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(138),
    [sym__octal_literal] = ACTIONS(138),
    [sym__hexidecimal_literal] = ACTIONS(138),
  },
  [24] = {
    [anon_sym__] = ACTIONS(142),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(142),
    [sym__ascii_large] = ACTIONS(142),
    [anon_sym_BANG] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(142),
    [anon_sym_DOLLAR] = ACTIONS(142),
    [anon_sym_PERCENT] = ACTIONS(142),
    [anon_sym_AMP] = ACTIONS(142),
    [anon_sym_1] = ACTIONS(142),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_QMARK] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_CARET] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_TILDE] = ACTIONS(142),
    [anon_sym_COLON] = ACTIONS(142),
    [anon_sym_BSLASH] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK] = ACTIONS(142),
    [anon_sym_BQUOTE] = ACTIONS(142),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_RBRACE] = ACTIONS(142),
    [sym__space] = ACTIONS(142),
    [sym__newline] = ACTIONS(142),
    [sym__tab] = ACTIONS(142),
    [sym__vertical_tab] = ACTIONS(142),
  },
  [25] = {
    [anon_sym__] = ACTIONS(144),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(144),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(144),
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
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(146),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(146),
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
    [sym__char_escape] = STATE(41),
    [sym__ascii] = STATE(41),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(146),
    [sym__ascii_large] = ACTIONS(146),
    [anon_sym_BANG] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_DOLLAR] = ACTIONS(146),
    [anon_sym_PERCENT] = ACTIONS(146),
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_1] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_QMARK] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_DASH] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(146),
    [anon_sym_COLON] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(148),
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
    [anon_sym_x] = ACTIONS(154),
    [anon_sym_X] = ACTIONS(154),
    [anon_sym_o] = ACTIONS(156),
    [anon_sym_O] = ACTIONS(156),
    [anon_sym_a] = ACTIONS(148),
    [anon_sym_b] = ACTIONS(148),
    [anon_sym_f] = ACTIONS(148),
    [anon_sym_n] = ACTIONS(148),
    [anon_sym_r] = ACTIONS(148),
    [anon_sym_t] = ACTIONS(148),
    [anon_sym_v] = ACTIONS(148),
    [anon_sym_NUL] = ACTIONS(158),
    [anon_sym_SOH] = ACTIONS(158),
    [anon_sym_STX] = ACTIONS(158),
    [anon_sym_ETX] = ACTIONS(158),
    [anon_sym_EOT] = ACTIONS(158),
    [anon_sym_ENQ] = ACTIONS(158),
    [anon_sym_ACK] = ACTIONS(158),
    [anon_sym_BEL] = ACTIONS(158),
    [anon_sym_BS] = ACTIONS(158),
    [anon_sym_HT] = ACTIONS(158),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_VT] = ACTIONS(158),
    [anon_sym_FF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SO] = ACTIONS(158),
    [anon_sym_SI] = ACTIONS(158),
    [anon_sym_DLE] = ACTIONS(158),
    [anon_sym_DC1] = ACTIONS(158),
    [anon_sym_DC2] = ACTIONS(158),
    [anon_sym_DC3] = ACTIONS(158),
    [anon_sym_DC4] = ACTIONS(158),
    [anon_sym_NAK] = ACTIONS(158),
    [anon_sym_SYN] = ACTIONS(158),
    [anon_sym_ETB] = ACTIONS(158),
    [anon_sym_CAN] = ACTIONS(158),
    [anon_sym_EM] = ACTIONS(158),
    [anon_sym_SUB] = ACTIONS(158),
    [anon_sym_ESC] = ACTIONS(158),
    [anon_sym_FS] = ACTIONS(158),
    [anon_sym_GS] = ACTIONS(158),
    [anon_sym_RS] = ACTIONS(158),
    [anon_sym_US] = ACTIONS(158),
    [anon_sym_SP] = ACTIONS(158),
    [anon_sym_DEL] = ACTIONS(158),
  },
  [28] = {
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(160),
    [sym__ascii_large] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(160),
    [anon_sym_POUND] = ACTIONS(160),
    [anon_sym_DOLLAR] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(160),
    [anon_sym_AMP] = ACTIONS(160),
    [anon_sym_1] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_QMARK] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_CARET] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(160),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [sym__space] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
    [sym__tab] = ACTIONS(160),
    [sym__vertical_tab] = ACTIONS(160),
  },
  [29] = {
    [anon_sym__] = ACTIONS(162),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(162),
    [sym__ascii_large] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(162),
    [anon_sym_DOLLAR] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(162),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_1] = ACTIONS(162),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(162),
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_QMARK] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [sym__space] = ACTIONS(162),
    [sym__newline] = ACTIONS(162),
    [sym__tab] = ACTIONS(162),
    [sym__vertical_tab] = ACTIONS(162),
  },
  [30] = {
    [sym__gap] = STATE(46),
    [sym__graphic] = STATE(46),
    [sym__small] = STATE(24),
    [sym__large] = STATE(24),
    [sym__symbol] = STATE(24),
    [sym__special] = STATE(24),
    [sym__escape] = STATE(46),
    [anon_sym__] = ACTIONS(64),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(64),
    [sym__ascii_large] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(74),
    [anon_sym_DOLLAR] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [anon_sym_AMP] = ACTIONS(74),
    [anon_sym_1] = ACTIONS(74),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_LT] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
    [anon_sym_CARET] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_TILDE] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym__space] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
    [sym__tab] = ACTIONS(80),
    [sym__vertical_tab] = ACTIONS(80),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_module] = ACTIONS(170),
    [anon_sym_where] = ACTIONS(170),
    [sym_variable_identifier] = ACTIONS(172),
    [sym_constructor_identifier] = ACTIONS(170),
    [anon_sym_case] = ACTIONS(170),
    [anon_sym_class] = ACTIONS(170),
    [anon_sym_data] = ACTIONS(170),
    [anon_sym_default] = ACTIONS(170),
    [anon_sym_deriving] = ACTIONS(170),
    [anon_sym_do] = ACTIONS(170),
    [anon_sym_else] = ACTIONS(170),
    [anon_sym_foreign] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(170),
    [anon_sym_import] = ACTIONS(170),
    [anon_sym_in] = ACTIONS(170),
    [anon_sym_infix] = ACTIONS(170),
    [anon_sym_infixl] = ACTIONS(170),
    [anon_sym_infixr] = ACTIONS(170),
    [anon_sym_instance] = ACTIONS(170),
    [anon_sym_let] = ACTIONS(170),
    [anon_sym_newtype] = ACTIONS(170),
    [anon_sym_of] = ACTIONS(170),
    [anon_sym_then] = ACTIONS(170),
    [anon_sym_type] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [sym__integer_literal] = ACTIONS(170),
    [sym__octal_literal] = ACTIONS(170),
    [sym__hexidecimal_literal] = ACTIONS(170),
  },
  [32] = {
    [sym__statement] = STATE(10),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_program_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(16),
    [sym_constructor_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_newtype] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym__integer_literal] = ACTIONS(28),
    [sym__octal_literal] = ACTIONS(28),
    [sym__hexidecimal_literal] = ACTIONS(28),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_module] = ACTIONS(178),
    [anon_sym_where] = ACTIONS(178),
    [sym_variable_identifier] = ACTIONS(180),
    [sym_constructor_identifier] = ACTIONS(178),
    [anon_sym_case] = ACTIONS(178),
    [anon_sym_class] = ACTIONS(178),
    [anon_sym_data] = ACTIONS(178),
    [anon_sym_default] = ACTIONS(178),
    [anon_sym_deriving] = ACTIONS(178),
    [anon_sym_do] = ACTIONS(178),
    [anon_sym_else] = ACTIONS(178),
    [anon_sym_foreign] = ACTIONS(178),
    [anon_sym_if] = ACTIONS(178),
    [anon_sym_import] = ACTIONS(178),
    [anon_sym_in] = ACTIONS(178),
    [anon_sym_infix] = ACTIONS(178),
    [anon_sym_infixl] = ACTIONS(178),
    [anon_sym_infixr] = ACTIONS(178),
    [anon_sym_instance] = ACTIONS(178),
    [anon_sym_let] = ACTIONS(178),
    [anon_sym_newtype] = ACTIONS(178),
    [anon_sym_of] = ACTIONS(178),
    [anon_sym_then] = ACTIONS(178),
    [anon_sym_type] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [sym__integer_literal] = ACTIONS(178),
    [sym__octal_literal] = ACTIONS(178),
    [sym__hexidecimal_literal] = ACTIONS(178),
  },
  [34] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(182),
  },
  [35] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(184),
  },
  [36] = {
    [sym__cntrl] = STATE(50),
    [anon_sym__] = ACTIONS(186),
    [sym_comment] = ACTIONS(20),
    [sym__ascii_large] = ACTIONS(186),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_CARET] = ACTIONS(186),
    [anon_sym_BSLASH] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
  },
  [37] = {
    [aux_sym__escape_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(188),
  },
  [38] = {
    [aux_sym__escape_repeat2] = STATE(54),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(190),
  },
  [39] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(192),
  },
  [40] = {
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
  },
  [41] = {
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(20),
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
  [42] = {
    [sym__cntrl] = STATE(56),
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(20),
    [sym__ascii_large] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
  },
  [43] = {
    [aux_sym__escape_repeat1] = STATE(58),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(200),
  },
  [44] = {
    [aux_sym__escape_repeat2] = STATE(60),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(202),
  },
  [45] = {
    [anon_sym__] = ACTIONS(204),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(204),
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
    [sym__vertical_tab] = ACTIONS(204),
  },
  [46] = {
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
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
    [sym__vertical_tab] = ACTIONS(206),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_module] = ACTIONS(210),
    [anon_sym_where] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(212),
    [sym_constructor_identifier] = ACTIONS(210),
    [anon_sym_case] = ACTIONS(210),
    [anon_sym_class] = ACTIONS(210),
    [anon_sym_data] = ACTIONS(210),
    [anon_sym_default] = ACTIONS(210),
    [anon_sym_deriving] = ACTIONS(210),
    [anon_sym_do] = ACTIONS(210),
    [anon_sym_else] = ACTIONS(210),
    [anon_sym_foreign] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(210),
    [anon_sym_import] = ACTIONS(210),
    [anon_sym_in] = ACTIONS(210),
    [anon_sym_infix] = ACTIONS(210),
    [anon_sym_infixl] = ACTIONS(210),
    [anon_sym_infixr] = ACTIONS(210),
    [anon_sym_instance] = ACTIONS(210),
    [anon_sym_let] = ACTIONS(210),
    [anon_sym_newtype] = ACTIONS(210),
    [anon_sym_of] = ACTIONS(210),
    [anon_sym_then] = ACTIONS(210),
    [anon_sym_type] = ACTIONS(210),
    [anon_sym__] = ACTIONS(210),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__integer_literal] = ACTIONS(210),
    [sym__octal_literal] = ACTIONS(210),
    [sym__hexidecimal_literal] = ACTIONS(210),
  },
  [48] = {
    [sym__statement] = STATE(31),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(16),
    [sym_constructor_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_newtype] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym_type] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(24),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym__integer_literal] = ACTIONS(28),
    [sym__octal_literal] = ACTIONS(28),
    [sym__hexidecimal_literal] = ACTIONS(28),
  },
  [49] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(216),
  },
  [50] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(218),
  },
  [51] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(220),
  },
  [52] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(224),
  },
  [53] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(226),
  },
  [54] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(228),
  },
  [55] = {
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(20),
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
  },
  [56] = {
    [anon_sym__] = ACTIONS(232),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(232),
    [sym__ascii_large] = ACTIONS(232),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_POUND] = ACTIONS(232),
    [anon_sym_DOLLAR] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_1] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DOT] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_TILDE] = ACTIONS(232),
    [anon_sym_COLON] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_BQUOTE] = ACTIONS(232),
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [sym__space] = ACTIONS(232),
    [sym__newline] = ACTIONS(232),
    [sym__tab] = ACTIONS(232),
    [sym__vertical_tab] = ACTIONS(232),
  },
  [57] = {
    [anon_sym__] = ACTIONS(234),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(234),
    [sym__ascii_large] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(234),
    [anon_sym_DOLLAR] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(234),
    [anon_sym_AMP] = ACTIONS(234),
    [anon_sym_1] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_LT] = ACTIONS(234),
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(234),
    [anon_sym_QMARK] = ACTIONS(234),
    [anon_sym_AT] = ACTIONS(234),
    [anon_sym_CARET] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(234),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(234),
    [anon_sym_BSLASH] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_BQUOTE] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym__space] = ACTIONS(234),
    [sym__newline] = ACTIONS(234),
    [sym__tab] = ACTIONS(234),
    [sym__vertical_tab] = ACTIONS(234),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(234),
  },
  [58] = {
    [anon_sym__] = ACTIONS(236),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(236),
    [sym__ascii_large] = ACTIONS(236),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_1] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_BQUOTE] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym__space] = ACTIONS(236),
    [sym__newline] = ACTIONS(236),
    [sym__tab] = ACTIONS(236),
    [sym__vertical_tab] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(238),
  },
  [59] = {
    [anon_sym__] = ACTIONS(240),
    [sym_comment] = ACTIONS(20),
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
  [60] = {
    [anon_sym__] = ACTIONS(236),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(236),
    [sym__ascii_large] = ACTIONS(236),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(236),
    [anon_sym_DOLLAR] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(236),
    [anon_sym_AMP] = ACTIONS(236),
    [anon_sym_1] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DOT] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_LT] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(236),
    [anon_sym_CARET] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [anon_sym_BSLASH] = ACTIONS(236),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_RBRACK] = ACTIONS(236),
    [anon_sym_BQUOTE] = ACTIONS(236),
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [sym__space] = ACTIONS(236),
    [sym__newline] = ACTIONS(236),
    [sym__tab] = ACTIONS(236),
    [sym__vertical_tab] = ACTIONS(236),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(242),
  },
  [61] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(244),
  },
  [62] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(246),
  },
  [63] = {
    [anon_sym__] = ACTIONS(248),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(248),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(248),
    [sym__ascii_large] = ACTIONS(248),
    [anon_sym_BANG] = ACTIONS(248),
    [anon_sym_POUND] = ACTIONS(248),
    [anon_sym_DOLLAR] = ACTIONS(248),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(248),
    [anon_sym_1] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_LT] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(248),
    [anon_sym_CARET] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(248),
    [anon_sym_BSLASH] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [sym__space] = ACTIONS(248),
    [sym__newline] = ACTIONS(248),
    [sym__tab] = ACTIONS(248),
    [sym__vertical_tab] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(248),
  },
  [64] = {
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(250),
    [sym__ascii_large] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(250),
    [anon_sym_DOLLAR] = ACTIONS(250),
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_1] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_DOT] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_QMARK] = ACTIONS(250),
    [anon_sym_AT] = ACTIONS(250),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_TILDE] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(250),
    [anon_sym_BSLASH] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_RBRACK] = ACTIONS(250),
    [anon_sym_BQUOTE] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [sym__space] = ACTIONS(250),
    [sym__newline] = ACTIONS(250),
    [sym__tab] = ACTIONS(250),
    [sym__vertical_tab] = ACTIONS(250),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(250),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
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
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
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
