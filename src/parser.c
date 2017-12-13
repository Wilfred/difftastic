#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 90
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 1
#define TOKEN_COUNT 118
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT_DOT = 6,
  sym_variable_identifier = 7,
  sym_constructor_identifier = 8,
  sym_module_identifier = 9,
  anon_sym_case = 10,
  anon_sym_class = 11,
  anon_sym_data = 12,
  anon_sym_default = 13,
  anon_sym_deriving = 14,
  anon_sym_do = 15,
  anon_sym_else = 16,
  anon_sym_foreign = 17,
  anon_sym_if = 18,
  anon_sym_import = 19,
  anon_sym_in = 20,
  anon_sym_infix = 21,
  anon_sym_infixl = 22,
  anon_sym_infixr = 23,
  anon_sym_instance = 24,
  anon_sym_let = 25,
  anon_sym_newtype = 26,
  anon_sym_of = 27,
  anon_sym_then = 28,
  anon_sym_type = 29,
  anon_sym__ = 30,
  sym_comment = 31,
  sym_float = 32,
  anon_sym_SQUOTE = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 35,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 36,
  sym__ascii_large = 37,
  anon_sym_BANG = 38,
  anon_sym_POUND = 39,
  anon_sym_DOLLAR = 40,
  anon_sym_PERCENT = 41,
  anon_sym_AMP = 42,
  anon_sym_1 = 43,
  anon_sym_PLUS = 44,
  anon_sym_DOT = 45,
  anon_sym_SLASH = 46,
  anon_sym_LT = 47,
  anon_sym_EQ = 48,
  anon_sym_GT = 49,
  anon_sym_QMARK = 50,
  anon_sym_AT = 51,
  anon_sym_CARET = 52,
  anon_sym_PIPE = 53,
  anon_sym_DASH = 54,
  anon_sym_TILDE = 55,
  anon_sym_COLON = 56,
  anon_sym_BSLASH = 57,
  anon_sym_SEMI = 58,
  anon_sym_LBRACK = 59,
  anon_sym_RBRACK = 60,
  anon_sym_BQUOTE = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  sym__space = 64,
  sym__newline = 65,
  sym__tab = 66,
  sym__vertical_tab = 67,
  anon_sym_x = 68,
  anon_sym_X = 69,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 70,
  anon_sym_o = 71,
  anon_sym_O = 72,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 73,
  anon_sym_a = 74,
  anon_sym_b = 75,
  anon_sym_f = 76,
  anon_sym_n = 77,
  anon_sym_r = 78,
  anon_sym_t = 79,
  anon_sym_v = 80,
  anon_sym_NUL = 81,
  anon_sym_SOH = 82,
  anon_sym_STX = 83,
  anon_sym_ETX = 84,
  anon_sym_EOT = 85,
  anon_sym_ENQ = 86,
  anon_sym_ACK = 87,
  anon_sym_BEL = 88,
  anon_sym_BS = 89,
  anon_sym_HT = 90,
  anon_sym_LF = 91,
  anon_sym_VT = 92,
  anon_sym_FF = 93,
  anon_sym_CR = 94,
  anon_sym_SO = 95,
  anon_sym_SI = 96,
  anon_sym_DLE = 97,
  anon_sym_DC1 = 98,
  anon_sym_DC2 = 99,
  anon_sym_DC3 = 100,
  anon_sym_DC4 = 101,
  anon_sym_NAK = 102,
  anon_sym_SYN = 103,
  anon_sym_ETB = 104,
  anon_sym_CAN = 105,
  anon_sym_EM = 106,
  anon_sym_SUB = 107,
  anon_sym_ESC = 108,
  anon_sym_FS = 109,
  anon_sym_GS = 110,
  anon_sym_RS = 111,
  anon_sym_US = 112,
  anon_sym_SP = 113,
  anon_sym_DEL = 114,
  sym__integer_literal = 115,
  sym__octal_literal = 116,
  sym__hexidecimal_literal = 117,
  sym_program = 118,
  sym__statement = 119,
  sym_module = 120,
  sym_module_exports = 121,
  sym_export = 122,
  sym__literal = 123,
  sym__identifier = 124,
  sym_reserved_identifier = 125,
  sym_integer = 126,
  sym_char = 127,
  sym_string = 128,
  sym__gap = 129,
  sym__graphic = 130,
  sym__small = 131,
  sym__large = 132,
  sym__symbol = 133,
  sym__special = 134,
  sym__escape = 135,
  sym__char_escape = 136,
  sym__ascii = 137,
  sym__cntrl = 138,
  aux_sym_program_repeat1 = 139,
  aux_sym_module_exports_repeat1 = 140,
  aux_sym_export_repeat1 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym__escape_repeat1 = 143,
  aux_sym__escape_repeat2 = 144,
  alias_sym_module_body = 145,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
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
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
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
  [aux_sym_module_exports_repeat1] = "module_exports_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [alias_sym_module_body] = "module_body",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_module_exports] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
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
  [aux_sym_module_exports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
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
  [alias_sym_module_body] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = alias_sym_module_body,
  },
  [2] = {
    [4] = alias_sym_module_body,
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
        ADVANCE(83);
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
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(84);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
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
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'G')
        ADVANCE(26);
      if (lookahead == 'H')
        ADVANCE(28);
      if (lookahead == 'L')
        ADVANCE(30);
      if (lookahead == 'N')
        ADVANCE(32);
      if (lookahead == 'R')
        ADVANCE(42);
      if (lookahead == 'S')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(55);
      if (lookahead == 'V')
        ADVANCE(57);
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
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      ADVANCE(38);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'U')
        ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'K')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '}')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '\r')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 40:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(46);
      if (lookahead == 'P')
        ADVANCE(48);
      if (lookahead == 'T')
        ADVANCE(49);
      if (lookahead == 'U')
        ADVANCE(51);
      if (lookahead == 'Y')
        ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 49:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'X')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 51:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'B')
        ADVANCE(52);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'N')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(38);
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
      ACCEPT_TOKEN(anon_sym_n);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(75);
      if (lookahead == 'E')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == '+')
        ADVANCE(77);
      if (lookahead == '-')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == '-')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '}')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(78);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(75);
      if (lookahead == 'E')
        ADVANCE(76);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 83:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(83);
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
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(84);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        SKIP(99);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(31);
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
        ADVANCE(39);
      END_STATE();
    case 90:
      if (lookahead == 'L')
        ADVANCE(41);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(93);
      if (lookahead == 'P')
        ADVANCE(48);
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
        ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'X')
        ADVANCE(50);
      END_STATE();
    case 95:
      if (lookahead == 'B')
        ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 'N')
        ADVANCE(54);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(58);
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
        ADVANCE(208);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '0')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'm')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(107);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == '\\')
        ADVANCE(119);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead == 'm')
        ADVANCE(180);
      if (lookahead == 'n')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 108:
      if (lookahead == '-')
        ADVANCE(109);
      if (lookahead == '}')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(111);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '\r')
        ADVANCE(112);
      if (lookahead != 0)
        ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(36);
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
        ADVANCE(75);
      if (lookahead == 'E')
        ADVANCE(76);
      if (lookahead == 'O')
        ADVANCE(115);
      if (lookahead == 'X')
        ADVANCE(117);
      if (lookahead == 'e')
        ADVANCE(76);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == 'x')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      END_STATE();
    case 115:
      if (lookahead == '-')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '-')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(38);
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
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(123);
      if (lookahead == 'l')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(131);
      if (lookahead == 'e')
        ADVANCE(134);
      if (lookahead == 'o')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'r')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'v')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'g')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'o')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'r')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'g')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'm')
        ADVANCE(160);
      if (lookahead == 'n')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'p')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'o')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'r')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(166);
      if (lookahead == 's')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'x')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(169);
      if (lookahead == 'r')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'c')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'o')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'd')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'u')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'w')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 't')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'y')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'p')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'h')
        ADVANCE(196);
      if (lookahead == 'y')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'p')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'h')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'r')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(207);
      END_STATE();
    case 208:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(208);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '0')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(215);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'm')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 209:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'O')
        ADVANCE(211);
      if (lookahead == 'X')
        ADVANCE(213);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(211);
      if (lookahead == 'x')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(212);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(214);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        SKIP(106);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(230);
      if (lookahead == 'o')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(231);
      if (lookahead == 'r')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'u')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'v')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'l')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'o')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'r')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'g')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'm')
        ADVANCE(256);
      if (lookahead == 'n')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'p')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'o')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'r')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(262);
      if (lookahead == 's')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'x')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'l')
        ADVANCE(265);
      if (lookahead == 'r')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'o')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'd')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'u')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'l')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'w')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 't')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'y')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'p')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'h')
        ADVANCE(292);
      if (lookahead == 'y')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'p')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'h')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(303);
      END_STATE();
    case 304:
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\r')
        ADVANCE(308);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(309);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(304);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(310);
      END_STATE();
    case 305:
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\r')
        ADVANCE(305);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 306:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead != 0)
        ADVANCE(38);
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
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\r')
        ADVANCE(308);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(309);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(304);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(310);
      END_STATE();
    case 309:
      if (lookahead == 'n')
        SKIP(304);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(310);
      if (lookahead == '.')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(310);
      END_STATE();
    case 311:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '0')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(315);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'm')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(311);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 312:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(312);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == '\\')
        ADVANCE(313);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead == 'm')
        ADVANCE(180);
      if (lookahead == 'n')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(312);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 313:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 314:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(312);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '0')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(315);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'm')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(311);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 315:
      if (lookahead == 'n')
        SKIP(311);
      END_STATE();
    case 316:
      if (lookahead == '\t')
        SKIP(316);
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '\r')
        ADVANCE(322);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 317:
      if (lookahead == '\t')
        ADVANCE(317);
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '\r')
        ADVANCE(317);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 322:
      if (lookahead == '\t')
        SKIP(316);
      if (lookahead == '\n')
        ADVANCE(317);
      if (lookahead == '\r')
        ADVANCE(322);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 323:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 326:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(335);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(336);
      if (lookahead == 'w')
        ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 328:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(328);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == 'w')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'h')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'r')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 335:
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(335);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(336);
      if (lookahead == 'w')
        ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      END_STATE();
    case 336:
      if (lookahead == 'n')
        SKIP(327);
      END_STATE();
    case 337:
      if (lookahead == 'h')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'r')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'e')
        ADVANCE(334);
      END_STATE();
    case 341:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == 'A')
        ADVANCE(394);
      if (lookahead == 'B')
        ADVANCE(396);
      if (lookahead == 'C')
        ADVANCE(398);
      if (lookahead == 'D')
        ADVANCE(400);
      if (lookahead == 'E')
        ADVANCE(404);
      if (lookahead == 'F')
        ADVANCE(409);
      if (lookahead == 'G')
        ADVANCE(410);
      if (lookahead == 'H')
        ADVANCE(411);
      if (lookahead == 'L')
        ADVANCE(412);
      if (lookahead == 'N')
        ADVANCE(413);
      if (lookahead == 'O')
        ADVANCE(382);
      if (lookahead == 'R')
        ADVANCE(414);
      if (lookahead == 'S')
        ADVANCE(415);
      if (lookahead == 'U')
        ADVANCE(416);
      if (lookahead == 'V')
        ADVANCE(417);
      if (lookahead == 'X')
        ADVANCE(387);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 'b')
        ADVANCE(389);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      END_STATE();
    case 342:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(342);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == 'A')
        ADVANCE(343);
      if (lookahead == 'B')
        ADVANCE(346);
      if (lookahead == 'C')
        ADVANCE(350);
      if (lookahead == 'D')
        ADVANCE(354);
      if (lookahead == 'E')
        ADVANCE(364);
      if (lookahead == 'F')
        ADVANCE(375);
      if (lookahead == 'G')
        ADVANCE(378);
      if (lookahead == 'H')
        ADVANCE(379);
      if (lookahead == 'L')
        ADVANCE(380);
      if (lookahead == 'N')
        ADVANCE(381);
      if (lookahead == 'O')
        ADVANCE(382);
      if (lookahead == 'R')
        ADVANCE(383);
      if (lookahead == 'S')
        ADVANCE(384);
      if (lookahead == 'U')
        ADVANCE(385);
      if (lookahead == 'V')
        ADVANCE(386);
      if (lookahead == 'X')
        ADVANCE(387);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 'b')
        ADVANCE(389);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 343:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(344);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 344:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'K')
        ADVANCE(345);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 346:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(347);
      if (lookahead == 'S')
        ADVANCE(349);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 347:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(348);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 350:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(351);
      if (lookahead == 'R')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 351:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'N')
        ADVANCE(352);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(355);
      if (lookahead == 'E')
        ADVANCE(360);
      if (lookahead == 'L')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '1')
        ADVANCE(356);
      if (lookahead == '2')
        ADVANCE(357);
      if (lookahead == '3')
        ADVANCE(358);
      if (lookahead == '4')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'M')
        ADVANCE(365);
      if (lookahead == 'N')
        ADVANCE(366);
      if (lookahead == 'O')
        ADVANCE(368);
      if (lookahead == 'S')
        ADVANCE(370);
      if (lookahead == 'T')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'Q')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'B')
        ADVANCE(373);
      if (lookahead == 'X')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(376);
      if (lookahead == 'S')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'I')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(46);
      if (lookahead == 'P')
        ADVANCE(48);
      if (lookahead == 'T')
        ADVANCE(49);
      if (lookahead == 'U')
        ADVANCE(51);
      if (lookahead == 'Y')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 393:
      if (lookahead == '\n')
        ADVANCE(342);
      if (lookahead == '\r')
        ADVANCE(393);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == 'A')
        ADVANCE(394);
      if (lookahead == 'B')
        ADVANCE(396);
      if (lookahead == 'C')
        ADVANCE(398);
      if (lookahead == 'D')
        ADVANCE(400);
      if (lookahead == 'E')
        ADVANCE(404);
      if (lookahead == 'F')
        ADVANCE(409);
      if (lookahead == 'G')
        ADVANCE(410);
      if (lookahead == 'H')
        ADVANCE(411);
      if (lookahead == 'L')
        ADVANCE(412);
      if (lookahead == 'N')
        ADVANCE(413);
      if (lookahead == 'O')
        ADVANCE(382);
      if (lookahead == 'R')
        ADVANCE(414);
      if (lookahead == 'S')
        ADVANCE(415);
      if (lookahead == 'U')
        ADVANCE(416);
      if (lookahead == 'V')
        ADVANCE(417);
      if (lookahead == 'X')
        ADVANCE(387);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 'b')
        ADVANCE(389);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(341);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      END_STATE();
    case 394:
      if (lookahead == 'C')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'K')
        ADVANCE(345);
      END_STATE();
    case 396:
      if (lookahead == 'E')
        ADVANCE(397);
      if (lookahead == 'S')
        ADVANCE(349);
      END_STATE();
    case 397:
      if (lookahead == 'L')
        ADVANCE(348);
      END_STATE();
    case 398:
      if (lookahead == 'A')
        ADVANCE(399);
      if (lookahead == 'R')
        ADVANCE(353);
      END_STATE();
    case 399:
      if (lookahead == 'N')
        ADVANCE(352);
      END_STATE();
    case 400:
      if (lookahead == 'C')
        ADVANCE(401);
      if (lookahead == 'E')
        ADVANCE(402);
      if (lookahead == 'L')
        ADVANCE(403);
      END_STATE();
    case 401:
      if (lookahead == '1')
        ADVANCE(356);
      if (lookahead == '2')
        ADVANCE(357);
      if (lookahead == '3')
        ADVANCE(358);
      if (lookahead == '4')
        ADVANCE(359);
      END_STATE();
    case 402:
      if (lookahead == 'L')
        ADVANCE(361);
      END_STATE();
    case 403:
      if (lookahead == 'E')
        ADVANCE(363);
      END_STATE();
    case 404:
      if (lookahead == 'M')
        ADVANCE(365);
      if (lookahead == 'N')
        ADVANCE(405);
      if (lookahead == 'O')
        ADVANCE(406);
      if (lookahead == 'S')
        ADVANCE(407);
      if (lookahead == 'T')
        ADVANCE(408);
      END_STATE();
    case 405:
      if (lookahead == 'Q')
        ADVANCE(367);
      END_STATE();
    case 406:
      if (lookahead == 'T')
        ADVANCE(369);
      END_STATE();
    case 407:
      if (lookahead == 'C')
        ADVANCE(371);
      END_STATE();
    case 408:
      if (lookahead == 'B')
        ADVANCE(373);
      if (lookahead == 'X')
        ADVANCE(374);
      END_STATE();
    case 409:
      if (lookahead == 'F')
        ADVANCE(376);
      if (lookahead == 'S')
        ADVANCE(377);
      END_STATE();
    case 410:
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 411:
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 412:
      if (lookahead == 'F')
        ADVANCE(31);
      END_STATE();
    case 413:
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 414:
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 415:
      if (lookahead == 'I')
        ADVANCE(45);
      if (lookahead == 'O')
        ADVANCE(93);
      if (lookahead == 'P')
        ADVANCE(48);
      if (lookahead == 'T')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(95);
      if (lookahead == 'Y')
        ADVANCE(96);
      END_STATE();
    case 416:
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 417:
      if (lookahead == 'T')
        ADVANCE(58);
      END_STATE();
    case 418:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(420);
      if (lookahead == 'B')
        ADVANCE(421);
      if (lookahead == 'C')
        ADVANCE(422);
      if (lookahead == 'D')
        ADVANCE(423);
      if (lookahead == 'E')
        ADVANCE(424);
      if (lookahead == 'F')
        ADVANCE(425);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(382);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 'b')
        ADVANCE(389);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 419:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(419);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == 'A')
        ADVANCE(420);
      if (lookahead == 'B')
        ADVANCE(421);
      if (lookahead == 'C')
        ADVANCE(422);
      if (lookahead == 'D')
        ADVANCE(423);
      if (lookahead == 'E')
        ADVANCE(424);
      if (lookahead == 'F')
        ADVANCE(425);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(382);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(387);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead == 'b')
        ADVANCE(389);
      if (lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(391);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(321);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(395);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(397);
      if (lookahead == 'S')
        ADVANCE(349);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(399);
      if (lookahead == 'R')
        ADVANCE(353);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(401);
      if (lookahead == 'E')
        ADVANCE(402);
      if (lookahead == 'L')
        ADVANCE(403);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(365);
      if (lookahead == 'N')
        ADVANCE(405);
      if (lookahead == 'O')
        ADVANCE(406);
      if (lookahead == 'S')
        ADVANCE(407);
      if (lookahead == 'T')
        ADVANCE(408);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(376);
      if (lookahead == 'S')
        ADVANCE(377);
      END_STATE();
    case 426:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(431);
      if (lookahead == '\\')
        SKIP(432);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 427:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(427);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '.')
        ADVANCE(428);
      if (lookahead == '\\')
        ADVANCE(429);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(158);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(427);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 430:
      if (lookahead == '\n')
        ADVANCE(427);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(431);
      if (lookahead == '\\')
        SKIP(432);
      if (lookahead == '_')
        ADVANCE(216);
      if (lookahead == 'c')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'f')
        ADVANCE(247);
      if (lookahead == 'i')
        ADVANCE(254);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'n')
        ADVANCE(282);
      if (lookahead == 'o')
        ADVANCE(289);
      if (lookahead == 't')
        ADVANCE(291);
      if (lookahead == 'w')
        ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(426);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(303);
      END_STATE();
    case 431:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 432:
      if (lookahead == 'n')
        SKIP(426);
      END_STATE();
    case 433:
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(433);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 434:
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == '\r')
        ADVANCE(434);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(434);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 435:
      if (lookahead == '\n')
        ADVANCE(434);
      if (lookahead == '\r')
        ADVANCE(435);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(433);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 436:
      if (lookahead == '\n')
        ADVANCE(437);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(441);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(439);
      END_STATE();
    case 437:
      if (lookahead == '\n')
        ADVANCE(437);
      if (lookahead == '\r')
        ADVANCE(437);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(439);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 438:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(437);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 440:
      if (lookahead == '\n')
        ADVANCE(437);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(441);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(439);
      END_STATE();
    case 441:
      if (lookahead == 'n')
        SKIP(436);
      END_STATE();
    case 442:
      if (lookahead == '\n')
        ADVANCE(443);
      if (lookahead == '\r')
        ADVANCE(446);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(447);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(442);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(445);
      END_STATE();
    case 443:
      if (lookahead == '\n')
        ADVANCE(443);
      if (lookahead == '\r')
        ADVANCE(443);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(444);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(445);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 444:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(443);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 446:
      if (lookahead == '\n')
        ADVANCE(443);
      if (lookahead == '\r')
        ADVANCE(446);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '\\')
        SKIP(447);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(442);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(445);
      END_STATE();
    case 447:
      if (lookahead == 'n')
        SKIP(442);
      END_STATE();
    case 448:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 449:
      if (lookahead == '\t')
        ADVANCE(324);
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == ' ')
        ADVANCE(318);
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
        ADVANCE(15);
      if (lookahead == '.')
        ADVANCE(319);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(20);
      if (lookahead == '<')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '>')
        ADVANCE(23);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(320);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == '{')
        ADVANCE(69);
      if (lookahead == '|')
        ADVANCE(70);
      if (lookahead == '}')
        ADVANCE(71);
      if (lookahead == '~')
        ADVANCE(72);
      if (lookahead == 8902)
        ADVANCE(73);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 304},
  [3] = {.lex_state = 311},
  [4] = {.lex_state = 311},
  [5] = {.lex_state = 106},
  [6] = {.lex_state = 316},
  [7] = {.lex_state = 323},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 327},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 341},
  [21] = {.lex_state = 323},
  [22] = {.lex_state = 323},
  [23] = {.lex_state = 323},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 323},
  [26] = {.lex_state = 323},
  [27] = {.lex_state = 323},
  [28] = {.lex_state = 418},
  [29] = {.lex_state = 323},
  [30] = {.lex_state = 323},
  [31] = {.lex_state = 106},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 426},
  [34] = {.lex_state = 327},
  [35] = {.lex_state = 106},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 433},
  [39] = {.lex_state = 436},
  [40] = {.lex_state = 442},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 323},
  [43] = {.lex_state = 323},
  [44] = {.lex_state = 433},
  [45] = {.lex_state = 436},
  [46] = {.lex_state = 442},
  [47] = {.lex_state = 323},
  [48] = {.lex_state = 323},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 426},
  [52] = {.lex_state = 327},
  [53] = {.lex_state = 327},
  [54] = {.lex_state = 327},
  [55] = {.lex_state = 327},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 436},
  [60] = {.lex_state = 436},
  [61] = {.lex_state = 442},
  [62] = {.lex_state = 442},
  [63] = {.lex_state = 323},
  [64] = {.lex_state = 323},
  [65] = {.lex_state = 323},
  [66] = {.lex_state = 323},
  [67] = {.lex_state = 448},
  [68] = {.lex_state = 448},
  [69] = {.lex_state = 327},
  [70] = {.lex_state = 327},
  [71] = {.lex_state = 327},
  [72] = {.lex_state = 426},
  [73] = {.lex_state = 426},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 436},
  [76] = {.lex_state = 442},
  [77] = {.lex_state = 323},
  [78] = {.lex_state = 448},
  [79] = {.lex_state = 327},
  [80] = {.lex_state = 327},
  [81] = {.lex_state = 327},
  [82] = {.lex_state = 327},
  [83] = {.lex_state = 327},
  [84] = {.lex_state = 426},
  [85] = {.lex_state = 327},
  [86] = {.lex_state = 327},
  [87] = {.lex_state = 426},
  [88] = {.lex_state = 327},
  [89] = {.lex_state = 327},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(32),
    [anon_sym_COMMA] = ACTIONS(32),
    [anon_sym_RPAREN] = ACTIONS(32),
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
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
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
    [sym__graphic] = STATE(16),
    [sym__small] = STATE(17),
    [sym__large] = STATE(17),
    [sym__symbol] = STATE(17),
    [sym__special] = STATE(17),
    [sym__escape] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym__] = ACTIONS(52),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(52),
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
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(50),
    [anon_sym_BQUOTE] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [sym__space] = ACTIONS(54),
  },
  [7] = {
    [sym__gap] = STATE(23),
    [sym__graphic] = STATE(23),
    [sym__small] = STATE(25),
    [sym__large] = STATE(25),
    [sym__symbol] = STATE(25),
    [sym__special] = STATE(25),
    [sym__escape] = STATE(23),
    [aux_sym_string_repeat1] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(66),
    [sym__ascii_large] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_1] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
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
    [sym_module_exports] = STATE(34),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(20),
  },
  [14] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(110),
  },
  [15] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(112),
  },
  [16] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(114),
  },
  [17] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(116),
  },
  [18] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(118),
  },
  [19] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(120),
  },
  [20] = {
    [sym__char_escape] = STATE(37),
    [sym__ascii] = STATE(37),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(122),
    [anon_sym_CARET] = ACTIONS(126),
    [anon_sym_BSLASH] = ACTIONS(122),
    [anon_sym_x] = ACTIONS(128),
    [anon_sym_X] = ACTIONS(128),
    [anon_sym_o] = ACTIONS(130),
    [anon_sym_O] = ACTIONS(130),
    [anon_sym_a] = ACTIONS(122),
    [anon_sym_b] = ACTIONS(122),
    [anon_sym_f] = ACTIONS(122),
    [anon_sym_n] = ACTIONS(122),
    [anon_sym_r] = ACTIONS(122),
    [anon_sym_t] = ACTIONS(122),
    [anon_sym_v] = ACTIONS(122),
    [anon_sym_NUL] = ACTIONS(132),
    [anon_sym_SOH] = ACTIONS(132),
    [anon_sym_STX] = ACTIONS(132),
    [anon_sym_ETX] = ACTIONS(132),
    [anon_sym_EOT] = ACTIONS(132),
    [anon_sym_ENQ] = ACTIONS(132),
    [anon_sym_ACK] = ACTIONS(132),
    [anon_sym_BEL] = ACTIONS(132),
    [anon_sym_BS] = ACTIONS(132),
    [anon_sym_HT] = ACTIONS(132),
    [anon_sym_LF] = ACTIONS(132),
    [anon_sym_VT] = ACTIONS(132),
    [anon_sym_FF] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(132),
    [anon_sym_SO] = ACTIONS(132),
    [anon_sym_SI] = ACTIONS(132),
    [anon_sym_DLE] = ACTIONS(132),
    [anon_sym_DC1] = ACTIONS(132),
    [anon_sym_DC2] = ACTIONS(132),
    [anon_sym_DC3] = ACTIONS(132),
    [anon_sym_DC4] = ACTIONS(132),
    [anon_sym_NAK] = ACTIONS(132),
    [anon_sym_SYN] = ACTIONS(132),
    [anon_sym_ETB] = ACTIONS(132),
    [anon_sym_CAN] = ACTIONS(132),
    [anon_sym_EM] = ACTIONS(132),
    [anon_sym_SUB] = ACTIONS(132),
    [anon_sym_ESC] = ACTIONS(132),
    [anon_sym_FS] = ACTIONS(132),
    [anon_sym_GS] = ACTIONS(132),
    [anon_sym_RS] = ACTIONS(132),
    [anon_sym_US] = ACTIONS(132),
    [anon_sym_SP] = ACTIONS(132),
    [anon_sym_DEL] = ACTIONS(132),
  },
  [21] = {
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
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
  [22] = {
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [sym_comment] = ACTIONS(20),
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
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym__] = ACTIONS(138),
    [sym_comment] = ACTIONS(20),
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
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_where] = ACTIONS(142),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(142),
    [anon_sym_case] = ACTIONS(142),
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_default] = ACTIONS(142),
    [anon_sym_deriving] = ACTIONS(142),
    [anon_sym_do] = ACTIONS(142),
    [anon_sym_else] = ACTIONS(142),
    [anon_sym_foreign] = ACTIONS(142),
    [anon_sym_if] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(142),
    [anon_sym_in] = ACTIONS(142),
    [anon_sym_infix] = ACTIONS(142),
    [anon_sym_infixl] = ACTIONS(142),
    [anon_sym_infixr] = ACTIONS(142),
    [anon_sym_instance] = ACTIONS(142),
    [anon_sym_let] = ACTIONS(142),
    [anon_sym_newtype] = ACTIONS(142),
    [anon_sym_of] = ACTIONS(142),
    [anon_sym_then] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [anon_sym__] = ACTIONS(142),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__integer_literal] = ACTIONS(142),
    [sym__octal_literal] = ACTIONS(142),
    [sym__hexidecimal_literal] = ACTIONS(142),
  },
  [25] = {
    [anon_sym_LPAREN] = ACTIONS(146),
    [anon_sym_RPAREN] = ACTIONS(146),
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
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym__] = ACTIONS(148),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(148),
    [sym__ascii_large] = ACTIONS(148),
    [anon_sym_BANG] = ACTIONS(148),
    [anon_sym_POUND] = ACTIONS(148),
    [anon_sym_DOLLAR] = ACTIONS(148),
    [anon_sym_PERCENT] = ACTIONS(148),
    [anon_sym_AMP] = ACTIONS(148),
    [anon_sym_1] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(148),
    [anon_sym_LT] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_QMARK] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_CARET] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_BSLASH] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [sym__space] = ACTIONS(148),
    [sym__newline] = ACTIONS(148),
    [sym__tab] = ACTIONS(148),
    [sym__vertical_tab] = ACTIONS(148),
  },
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym__] = ACTIONS(150),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(150),
    [sym__ascii_large] = ACTIONS(150),
    [anon_sym_BANG] = ACTIONS(150),
    [anon_sym_POUND] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(150),
    [anon_sym_1] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_QMARK] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_BSLASH] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym__space] = ACTIONS(150),
    [sym__newline] = ACTIONS(150),
    [sym__tab] = ACTIONS(150),
    [sym__vertical_tab] = ACTIONS(150),
  },
  [28] = {
    [sym__char_escape] = STATE(43),
    [sym__ascii] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym__] = ACTIONS(150),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(150),
    [sym__ascii_large] = ACTIONS(150),
    [anon_sym_BANG] = ACTIONS(150),
    [anon_sym_POUND] = ACTIONS(150),
    [anon_sym_DOLLAR] = ACTIONS(150),
    [anon_sym_PERCENT] = ACTIONS(150),
    [anon_sym_AMP] = ACTIONS(152),
    [anon_sym_1] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [anon_sym_LT] = ACTIONS(150),
    [anon_sym_EQ] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_QMARK] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(150),
    [anon_sym_CARET] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(150),
    [anon_sym_BSLASH] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [sym__space] = ACTIONS(150),
    [sym__newline] = ACTIONS(150),
    [sym__tab] = ACTIONS(150),
    [sym__vertical_tab] = ACTIONS(150),
    [anon_sym_x] = ACTIONS(158),
    [anon_sym_X] = ACTIONS(158),
    [anon_sym_o] = ACTIONS(160),
    [anon_sym_O] = ACTIONS(160),
    [anon_sym_a] = ACTIONS(152),
    [anon_sym_b] = ACTIONS(152),
    [anon_sym_f] = ACTIONS(152),
    [anon_sym_n] = ACTIONS(152),
    [anon_sym_r] = ACTIONS(152),
    [anon_sym_t] = ACTIONS(152),
    [anon_sym_v] = ACTIONS(152),
    [anon_sym_NUL] = ACTIONS(162),
    [anon_sym_SOH] = ACTIONS(162),
    [anon_sym_STX] = ACTIONS(162),
    [anon_sym_ETX] = ACTIONS(162),
    [anon_sym_EOT] = ACTIONS(162),
    [anon_sym_ENQ] = ACTIONS(162),
    [anon_sym_ACK] = ACTIONS(162),
    [anon_sym_BEL] = ACTIONS(162),
    [anon_sym_BS] = ACTIONS(162),
    [anon_sym_HT] = ACTIONS(162),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_VT] = ACTIONS(162),
    [anon_sym_FF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SO] = ACTIONS(162),
    [anon_sym_SI] = ACTIONS(162),
    [anon_sym_DLE] = ACTIONS(162),
    [anon_sym_DC1] = ACTIONS(162),
    [anon_sym_DC2] = ACTIONS(162),
    [anon_sym_DC3] = ACTIONS(162),
    [anon_sym_DC4] = ACTIONS(162),
    [anon_sym_NAK] = ACTIONS(162),
    [anon_sym_SYN] = ACTIONS(162),
    [anon_sym_ETB] = ACTIONS(162),
    [anon_sym_CAN] = ACTIONS(162),
    [anon_sym_EM] = ACTIONS(162),
    [anon_sym_SUB] = ACTIONS(162),
    [anon_sym_ESC] = ACTIONS(162),
    [anon_sym_FS] = ACTIONS(162),
    [anon_sym_GS] = ACTIONS(162),
    [anon_sym_RS] = ACTIONS(162),
    [anon_sym_US] = ACTIONS(162),
    [anon_sym_SP] = ACTIONS(162),
    [anon_sym_DEL] = ACTIONS(162),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym__] = ACTIONS(164),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(164),
    [sym__ascii_large] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(164),
    [anon_sym_POUND] = ACTIONS(164),
    [anon_sym_DOLLAR] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(164),
    [anon_sym_1] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DOT] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_LT] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_QMARK] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_CARET] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_BSLASH] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [sym__space] = ACTIONS(164),
    [sym__newline] = ACTIONS(164),
    [sym__tab] = ACTIONS(164),
    [sym__vertical_tab] = ACTIONS(164),
  },
  [30] = {
    [sym__gap] = STATE(48),
    [sym__graphic] = STATE(48),
    [sym__small] = STATE(25),
    [sym__large] = STATE(25),
    [sym__symbol] = STATE(25),
    [sym__special] = STATE(25),
    [sym__escape] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(66),
    [sym__ascii_large] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(76),
    [anon_sym_POUND] = ACTIONS(76),
    [anon_sym_DOLLAR] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_AMP] = ACTIONS(76),
    [anon_sym_1] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_CARET] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_TILDE] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym__space] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
    [sym__tab] = ACTIONS(80),
    [sym__vertical_tab] = ACTIONS(80),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_module] = ACTIONS(172),
    [anon_sym_where] = ACTIONS(172),
    [sym_variable_identifier] = ACTIONS(174),
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
    [anon_sym_newtype] = ACTIONS(172),
    [anon_sym_of] = ACTIONS(172),
    [anon_sym_then] = ACTIONS(172),
    [anon_sym_type] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym__integer_literal] = ACTIONS(172),
    [sym__octal_literal] = ACTIONS(172),
    [sym__hexidecimal_literal] = ACTIONS(172),
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
    [aux_sym_program_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(176),
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
    [sym_export] = STATE(53),
    [sym__identifier] = STATE(54),
    [sym_reserved_identifier] = STATE(4),
    [aux_sym_module_exports_repeat1] = STATE(55),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(180),
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
  },
  [34] = {
    [anon_sym_where] = ACTIONS(182),
    [sym_comment] = ACTIONS(20),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_module] = ACTIONS(186),
    [anon_sym_where] = ACTIONS(186),
    [sym_variable_identifier] = ACTIONS(188),
    [sym_constructor_identifier] = ACTIONS(186),
    [anon_sym_case] = ACTIONS(186),
    [anon_sym_class] = ACTIONS(186),
    [anon_sym_data] = ACTIONS(186),
    [anon_sym_default] = ACTIONS(186),
    [anon_sym_deriving] = ACTIONS(186),
    [anon_sym_do] = ACTIONS(186),
    [anon_sym_else] = ACTIONS(186),
    [anon_sym_foreign] = ACTIONS(186),
    [anon_sym_if] = ACTIONS(186),
    [anon_sym_import] = ACTIONS(186),
    [anon_sym_in] = ACTIONS(186),
    [anon_sym_infix] = ACTIONS(186),
    [anon_sym_infixl] = ACTIONS(186),
    [anon_sym_infixr] = ACTIONS(186),
    [anon_sym_instance] = ACTIONS(186),
    [anon_sym_let] = ACTIONS(186),
    [anon_sym_newtype] = ACTIONS(186),
    [anon_sym_of] = ACTIONS(186),
    [anon_sym_then] = ACTIONS(186),
    [anon_sym_type] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym__integer_literal] = ACTIONS(186),
    [sym__octal_literal] = ACTIONS(186),
    [sym__hexidecimal_literal] = ACTIONS(186),
  },
  [36] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(190),
  },
  [37] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(192),
  },
  [38] = {
    [sym__cntrl] = STATE(58),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(20),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
  },
  [39] = {
    [aux_sym__escape_repeat1] = STATE(60),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(196),
  },
  [40] = {
    [aux_sym__escape_repeat2] = STATE(62),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(198),
  },
  [41] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(200),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(202),
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
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [sym__space] = ACTIONS(202),
    [sym__newline] = ACTIONS(202),
    [sym__tab] = ACTIONS(202),
    [sym__vertical_tab] = ACTIONS(202),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
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
  [44] = {
    [sym__cntrl] = STATE(64),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(20),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
  },
  [45] = {
    [aux_sym__escape_repeat1] = STATE(66),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(208),
  },
  [46] = {
    [aux_sym__escape_repeat2] = STATE(68),
    [sym_comment] = ACTIONS(20),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(210),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(212),
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
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(214),
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
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_module] = ACTIONS(218),
    [anon_sym_where] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_constructor_identifier] = ACTIONS(218),
    [anon_sym_case] = ACTIONS(218),
    [anon_sym_class] = ACTIONS(218),
    [anon_sym_data] = ACTIONS(218),
    [anon_sym_default] = ACTIONS(218),
    [anon_sym_deriving] = ACTIONS(218),
    [anon_sym_do] = ACTIONS(218),
    [anon_sym_else] = ACTIONS(218),
    [anon_sym_foreign] = ACTIONS(218),
    [anon_sym_if] = ACTIONS(218),
    [anon_sym_import] = ACTIONS(218),
    [anon_sym_in] = ACTIONS(218),
    [anon_sym_infix] = ACTIONS(218),
    [anon_sym_infixl] = ACTIONS(218),
    [anon_sym_infixr] = ACTIONS(218),
    [anon_sym_instance] = ACTIONS(218),
    [anon_sym_let] = ACTIONS(218),
    [anon_sym_newtype] = ACTIONS(218),
    [anon_sym_of] = ACTIONS(218),
    [anon_sym_then] = ACTIONS(218),
    [anon_sym_type] = ACTIONS(218),
    [anon_sym__] = ACTIONS(218),
    [sym_comment] = ACTIONS(20),
    [sym_float] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [sym__integer_literal] = ACTIONS(218),
    [sym__octal_literal] = ACTIONS(218),
    [sym__hexidecimal_literal] = ACTIONS(218),
  },
  [50] = {
    [sym__statement] = STATE(31),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(222),
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
  [51] = {
    [sym_export] = STATE(69),
    [sym__identifier] = STATE(54),
    [sym_reserved_identifier] = STATE(4),
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
  },
  [52] = {
    [anon_sym_where] = ACTIONS(224),
    [sym_comment] = ACTIONS(20),
  },
  [53] = {
    [aux_sym_module_exports_repeat1] = STATE(71),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(226),
    [sym_comment] = ACTIONS(20),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_comment] = ACTIONS(20),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(226),
    [sym_comment] = ACTIONS(20),
  },
  [56] = {
    [sym__statement] = STATE(10),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_program_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(234),
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
  [57] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(236),
  },
  [58] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(238),
  },
  [59] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(240),
  },
  [60] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(244),
  },
  [61] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(246),
  },
  [62] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(248),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
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
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(252),
    [sym__ascii_large] = ACTIONS(252),
    [anon_sym_BANG] = ACTIONS(252),
    [anon_sym_POUND] = ACTIONS(252),
    [anon_sym_DOLLAR] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_1] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_QMARK] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_TILDE] = ACTIONS(252),
    [anon_sym_COLON] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_BQUOTE] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym__space] = ACTIONS(252),
    [sym__newline] = ACTIONS(252),
    [sym__tab] = ACTIONS(252),
    [sym__vertical_tab] = ACTIONS(252),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(254),
    [sym__ascii_large] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(254),
    [anon_sym_DOLLAR] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(254),
    [anon_sym_AMP] = ACTIONS(254),
    [anon_sym_1] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_LT] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_TILDE] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(254),
    [anon_sym_BSLASH] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
    [anon_sym_BQUOTE] = ACTIONS(254),
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [sym__space] = ACTIONS(254),
    [sym__newline] = ACTIONS(254),
    [sym__tab] = ACTIONS(254),
    [sym__vertical_tab] = ACTIONS(254),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(254),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(256),
    [sym__ascii_large] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(256),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_1] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [sym__space] = ACTIONS(256),
    [sym__newline] = ACTIONS(256),
    [sym__tab] = ACTIONS(256),
    [sym__vertical_tab] = ACTIONS(256),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(258),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym__] = ACTIONS(260),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(260),
    [sym__ascii_large] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(260),
    [anon_sym_POUND] = ACTIONS(260),
    [anon_sym_DOLLAR] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_1] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_QMARK] = ACTIONS(260),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_TILDE] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(260),
    [anon_sym_BSLASH] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
    [anon_sym_BQUOTE] = ACTIONS(260),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [sym__space] = ACTIONS(260),
    [sym__newline] = ACTIONS(260),
    [sym__tab] = ACTIONS(260),
    [sym__vertical_tab] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(260),
  },
  [68] = {
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(256),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(256),
    [sym__ascii_large] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(256),
    [anon_sym_POUND] = ACTIONS(256),
    [anon_sym_DOLLAR] = ACTIONS(256),
    [anon_sym_PERCENT] = ACTIONS(256),
    [anon_sym_AMP] = ACTIONS(256),
    [anon_sym_1] = ACTIONS(256),
    [anon_sym_PLUS] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(256),
    [anon_sym_EQ] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(256),
    [anon_sym_QMARK] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(256),
    [anon_sym_CARET] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [anon_sym_DASH] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_BSLASH] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [sym__space] = ACTIONS(256),
    [sym__newline] = ACTIONS(256),
    [sym__tab] = ACTIONS(256),
    [sym__vertical_tab] = ACTIONS(256),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(262),
  },
  [69] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(20),
  },
  [70] = {
    [anon_sym_where] = ACTIONS(266),
    [sym_comment] = ACTIONS(20),
  },
  [71] = {
    [anon_sym_COMMA] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(268),
    [sym_comment] = ACTIONS(20),
  },
  [72] = {
    [sym__identifier] = STATE(81),
    [sym_reserved_identifier] = STATE(4),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(270),
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
  },
  [73] = {
    [sym_export] = STATE(82),
    [sym__identifier] = STATE(54),
    [sym_reserved_identifier] = STATE(4),
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
  },
  [74] = {
    [sym__statement] = STATE(31),
    [sym_module] = STATE(11),
    [sym__literal] = STATE(11),
    [sym__identifier] = STATE(11),
    [sym_reserved_identifier] = STATE(4),
    [sym_integer] = STATE(5),
    [sym_char] = STATE(5),
    [sym_string] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(272),
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
  [75] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(274),
  },
  [76] = {
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(276),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(278),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(278),
    [sym__ascii_large] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(278),
    [anon_sym_POUND] = ACTIONS(278),
    [anon_sym_DOLLAR] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(278),
    [anon_sym_AMP] = ACTIONS(278),
    [anon_sym_1] = ACTIONS(278),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(278),
    [anon_sym_SLASH] = ACTIONS(278),
    [anon_sym_LT] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(278),
    [anon_sym_QMARK] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(278),
    [anon_sym_CARET] = ACTIONS(278),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_DASH] = ACTIONS(278),
    [anon_sym_TILDE] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(278),
    [anon_sym_BSLASH] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_BQUOTE] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
    [sym__space] = ACTIONS(278),
    [sym__newline] = ACTIONS(278),
    [sym__tab] = ACTIONS(278),
    [sym__vertical_tab] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(278),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym__] = ACTIONS(280),
    [sym_comment] = ACTIONS(20),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(280),
    [sym__ascii_large] = ACTIONS(280),
    [anon_sym_BANG] = ACTIONS(280),
    [anon_sym_POUND] = ACTIONS(280),
    [anon_sym_DOLLAR] = ACTIONS(280),
    [anon_sym_PERCENT] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(280),
    [anon_sym_1] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_SLASH] = ACTIONS(280),
    [anon_sym_LT] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(280),
    [anon_sym_QMARK] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(280),
    [anon_sym_CARET] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_TILDE] = ACTIONS(280),
    [anon_sym_COLON] = ACTIONS(280),
    [anon_sym_BSLASH] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_BQUOTE] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [sym__space] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [sym__tab] = ACTIONS(280),
    [sym__vertical_tab] = ACTIONS(280),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(280),
  },
  [79] = {
    [anon_sym_where] = ACTIONS(282),
    [sym_comment] = ACTIONS(20),
  },
  [80] = {
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(20),
  },
  [81] = {
    [aux_sym_export_repeat1] = STATE(85),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(20),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(20),
  },
  [83] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_comment] = ACTIONS(20),
  },
  [84] = {
    [sym__identifier] = STATE(86),
    [sym_reserved_identifier] = STATE(4),
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
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(20),
  },
  [86] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(20),
  },
  [87] = {
    [sym__identifier] = STATE(89),
    [sym_reserved_identifier] = STATE(4),
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
  },
  [88] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [sym_comment] = ACTIONS(20),
  },
  [89] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(20),
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
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export, 1),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export, 4),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_repeat1, 2),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export, 5),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_repeat1, 3),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
