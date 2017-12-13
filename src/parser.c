#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 149
#define SYMBOL_COUNT 151
#define ALIAS_COUNT 1
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT_DOT = 6,
  anon_sym_import = 7,
  anon_sym_qualified = 8,
  anon_sym_as = 9,
  anon_sym_hiding = 10,
  sym_variable_identifier = 11,
  sym_constructor_identifier = 12,
  sym_module_identifier = 13,
  anon_sym_case = 14,
  anon_sym_class = 15,
  anon_sym_data = 16,
  anon_sym_default = 17,
  anon_sym_deriving = 18,
  anon_sym_do = 19,
  anon_sym_else = 20,
  anon_sym_foreign = 21,
  anon_sym_if = 22,
  anon_sym_in = 23,
  anon_sym_infix = 24,
  anon_sym_infixl = 25,
  anon_sym_infixr = 26,
  anon_sym_instance = 27,
  anon_sym_let = 28,
  anon_sym_newtype = 29,
  anon_sym_of = 30,
  anon_sym_then = 31,
  anon_sym_type = 32,
  anon_sym__ = 33,
  sym_comment = 34,
  sym_float = 35,
  anon_sym_SQUOTE = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 38,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 39,
  sym__ascii_large = 40,
  anon_sym_BANG = 41,
  anon_sym_POUND = 42,
  anon_sym_DOLLAR = 43,
  anon_sym_PERCENT = 44,
  anon_sym_AMP = 45,
  anon_sym_1 = 46,
  anon_sym_PLUS = 47,
  anon_sym_DOT = 48,
  anon_sym_SLASH = 49,
  anon_sym_LT = 50,
  anon_sym_EQ = 51,
  anon_sym_GT = 52,
  anon_sym_QMARK = 53,
  anon_sym_AT = 54,
  anon_sym_CARET = 55,
  anon_sym_PIPE = 56,
  anon_sym_DASH = 57,
  anon_sym_TILDE = 58,
  anon_sym_COLON = 59,
  anon_sym_BSLASH = 60,
  anon_sym_SEMI = 61,
  anon_sym_LBRACK = 62,
  anon_sym_RBRACK = 63,
  anon_sym_BQUOTE = 64,
  anon_sym_LBRACE = 65,
  anon_sym_RBRACE = 66,
  sym__space = 67,
  sym__newline = 68,
  sym__tab = 69,
  sym__vertical_tab = 70,
  anon_sym_x = 71,
  anon_sym_X = 72,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 73,
  anon_sym_o = 74,
  anon_sym_O = 75,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 76,
  anon_sym_a = 77,
  anon_sym_b = 78,
  anon_sym_f = 79,
  anon_sym_n = 80,
  anon_sym_r = 81,
  anon_sym_t = 82,
  anon_sym_v = 83,
  anon_sym_NUL = 84,
  anon_sym_SOH = 85,
  anon_sym_STX = 86,
  anon_sym_ETX = 87,
  anon_sym_EOT = 88,
  anon_sym_ENQ = 89,
  anon_sym_ACK = 90,
  anon_sym_BEL = 91,
  anon_sym_BS = 92,
  anon_sym_HT = 93,
  anon_sym_LF = 94,
  anon_sym_VT = 95,
  anon_sym_FF = 96,
  anon_sym_CR = 97,
  anon_sym_SO = 98,
  anon_sym_SI = 99,
  anon_sym_DLE = 100,
  anon_sym_DC1 = 101,
  anon_sym_DC2 = 102,
  anon_sym_DC3 = 103,
  anon_sym_DC4 = 104,
  anon_sym_NAK = 105,
  anon_sym_SYN = 106,
  anon_sym_ETB = 107,
  anon_sym_CAN = 108,
  anon_sym_EM = 109,
  anon_sym_SUB = 110,
  anon_sym_ESC = 111,
  anon_sym_FS = 112,
  anon_sym_GS = 113,
  anon_sym_RS = 114,
  anon_sym_US = 115,
  anon_sym_SP = 116,
  anon_sym_DEL = 117,
  sym__integer_literal = 118,
  sym__octal_literal = 119,
  sym__hexidecimal_literal = 120,
  sym_program = 121,
  sym__statement = 122,
  sym_module = 123,
  sym_module_export_declarations = 124,
  sym_export_declaration = 125,
  sym_import_declaration = 126,
  sym_import_specification = 127,
  sym__literal = 128,
  sym__identifier = 129,
  sym_reserved_identifier = 130,
  sym_integer = 131,
  sym_char = 132,
  sym_string = 133,
  sym__gap = 134,
  sym__graphic = 135,
  sym__small = 136,
  sym__large = 137,
  sym__symbol = 138,
  sym__special = 139,
  sym__escape = 140,
  sym__char_escape = 141,
  sym__ascii = 142,
  sym__cntrl = 143,
  aux_sym_program_repeat1 = 144,
  aux_sym_module_export_declarations_repeat1 = 145,
  aux_sym_export_declaration_repeat1 = 146,
  aux_sym_import_specification_repeat1 = 147,
  aux_sym_string_repeat1 = 148,
  aux_sym__escape_repeat1 = 149,
  aux_sym__escape_repeat2 = 150,
  alias_sym_module_body = 151,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
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
  [sym_module_export_declarations] = "module_export_declarations",
  [sym_export_declaration] = "export_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_import_specification] = "import_specification",
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
  [aux_sym_module_export_declarations_repeat1] = "module_export_declarations_repeat1",
  [aux_sym_export_declaration_repeat1] = "export_declaration_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
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
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
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
  [sym_module_export_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_export_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_specification] = {
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
  [aux_sym_module_export_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_specification_repeat1] = {
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
        ADVANCE(209);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
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
      if (lookahead == '.')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(208);
      if (lookahead == '.')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(208);
      END_STATE();
    case 209:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(209);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(216);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 210:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'O')
        ADVANCE(212);
      if (lookahead == 'X')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead == 'x')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(213);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(215);
      END_STATE();
    case 216:
      if (lookahead == 'n')
        SKIP(106);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == 'l')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(228);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead == 'o')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(232);
      if (lookahead == 'r')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'v')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(256);
      if (lookahead == 'm')
        ADVANCE(257);
      if (lookahead == 'n')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(263);
      if (lookahead == 's')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'x')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'c')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'w')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'y')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'h')
        ADVANCE(293);
      if (lookahead == 'y')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'h')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(304);
      if (lookahead == '.')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(305);
      if (lookahead == '.')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(305);
      END_STATE();
    case 306:
      if (lookahead == '\n')
        ADVANCE(307);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(315);
      if (lookahead == 'w')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(306);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(305);
      END_STATE();
    case 307:
      if (lookahead == '\n')
        ADVANCE(307);
      if (lookahead == '\r')
        ADVANCE(307);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(308);
      if (lookahead == 'w')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(208);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 308:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 309:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'h')
        ADVANCE(310);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 310:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(311);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 311:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 312:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(313);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 314:
      if (lookahead == '\n')
        ADVANCE(307);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(315);
      if (lookahead == 'w')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(306);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(305);
      END_STATE();
    case 315:
      if (lookahead == 'n')
        SKIP(306);
      END_STATE();
    case 316:
      if (lookahead == 'h')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'r')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 320:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(323);
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
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 321:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(321);
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
        ADVANCE(322);
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
        ADVANCE(321);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 322:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 323:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(321);
      if (lookahead == '\r')
        ADVANCE(323);
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
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(320);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 324:
      if (lookahead == 'n')
        SKIP(320);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\r')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 326:
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\r')
        ADVANCE(326);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(327);
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
        ADVANCE(328);
      if (lookahead == 'l')
        ADVANCE(177);
      if (lookahead == 'n')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(193);
      if (lookahead == 'q')
        ADVANCE(329);
      if (lookahead == 't')
        ADVANCE(195);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(326);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(326);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'n')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'u')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'l')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'd')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 338:
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\r')
        ADVANCE(338);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(339);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 'q')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 339:
      if (lookahead == 'n')
        SKIP(325);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(256);
      if (lookahead == 'n')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 350:
      if (lookahead == '\t')
        SKIP(350);
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 351:
      if (lookahead == '\t')
        ADVANCE(351);
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(351);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 356:
      if (lookahead == '\t')
        SKIP(350);
      if (lookahead == '\n')
        ADVANCE(351);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 357:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(360);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 360:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(360);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 361:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(372);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(373);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(361);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 362:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(362);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'a')
        ADVANCE(364);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(151);
      if (lookahead == 'h')
        ADVANCE(366);
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
        ADVANCE(362);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'd')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'g')
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 372:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(372);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(373);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(361);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 373:
      if (lookahead == 'n')
        SKIP(361);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 382:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(387);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 383:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(383);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '.')
        ADVANCE(384);
      if (lookahead == '\\')
        ADVANCE(385);
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
        ADVANCE(328);
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
        ADVANCE(383);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 386:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(386);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(387);
      if (lookahead == '\\')
        SKIP(388);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'i')
        ADVANCE(340);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 387:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 388:
      if (lookahead == 'n')
        SKIP(382);
      END_STATE();
    case 389:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(441);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == 'A')
        ADVANCE(442);
      if (lookahead == 'B')
        ADVANCE(444);
      if (lookahead == 'C')
        ADVANCE(446);
      if (lookahead == 'D')
        ADVANCE(448);
      if (lookahead == 'E')
        ADVANCE(452);
      if (lookahead == 'F')
        ADVANCE(457);
      if (lookahead == 'G')
        ADVANCE(458);
      if (lookahead == 'H')
        ADVANCE(459);
      if (lookahead == 'L')
        ADVANCE(460);
      if (lookahead == 'N')
        ADVANCE(461);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'R')
        ADVANCE(462);
      if (lookahead == 'S')
        ADVANCE(463);
      if (lookahead == 'U')
        ADVANCE(464);
      if (lookahead == 'V')
        ADVANCE(465);
      if (lookahead == 'X')
        ADVANCE(435);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead == 'b')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(438);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(389);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      END_STATE();
    case 390:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(390);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == 'A')
        ADVANCE(391);
      if (lookahead == 'B')
        ADVANCE(394);
      if (lookahead == 'C')
        ADVANCE(398);
      if (lookahead == 'D')
        ADVANCE(402);
      if (lookahead == 'E')
        ADVANCE(412);
      if (lookahead == 'F')
        ADVANCE(423);
      if (lookahead == 'G')
        ADVANCE(426);
      if (lookahead == 'H')
        ADVANCE(427);
      if (lookahead == 'L')
        ADVANCE(428);
      if (lookahead == 'N')
        ADVANCE(429);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'R')
        ADVANCE(431);
      if (lookahead == 'S')
        ADVANCE(432);
      if (lookahead == 'U')
        ADVANCE(433);
      if (lookahead == 'V')
        ADVANCE(434);
      if (lookahead == 'X')
        ADVANCE(435);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead == 'b')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(438);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'K')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(395);
      if (lookahead == 'S')
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(399);
      if (lookahead == 'R')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'N')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(403);
      if (lookahead == 'E')
        ADVANCE(408);
      if (lookahead == 'L')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '1')
        ADVANCE(404);
      if (lookahead == '2')
        ADVANCE(405);
      if (lookahead == '3')
        ADVANCE(406);
      if (lookahead == '4')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(411);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'M')
        ADVANCE(413);
      if (lookahead == 'N')
        ADVANCE(414);
      if (lookahead == 'O')
        ADVANCE(416);
      if (lookahead == 'S')
        ADVANCE(418);
      if (lookahead == 'T')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'Q')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'B')
        ADVANCE(421);
      if (lookahead == 'X')
        ADVANCE(422);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 423:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(424);
      if (lookahead == 'S')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 427:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 431:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 432:
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
    case 433:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 434:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 441:
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '\r')
        ADVANCE(441);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == 'A')
        ADVANCE(442);
      if (lookahead == 'B')
        ADVANCE(444);
      if (lookahead == 'C')
        ADVANCE(446);
      if (lookahead == 'D')
        ADVANCE(448);
      if (lookahead == 'E')
        ADVANCE(452);
      if (lookahead == 'F')
        ADVANCE(457);
      if (lookahead == 'G')
        ADVANCE(458);
      if (lookahead == 'H')
        ADVANCE(459);
      if (lookahead == 'L')
        ADVANCE(460);
      if (lookahead == 'N')
        ADVANCE(461);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'R')
        ADVANCE(462);
      if (lookahead == 'S')
        ADVANCE(463);
      if (lookahead == 'U')
        ADVANCE(464);
      if (lookahead == 'V')
        ADVANCE(465);
      if (lookahead == 'X')
        ADVANCE(435);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead == 'b')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(438);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(389);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      END_STATE();
    case 442:
      if (lookahead == 'C')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'K')
        ADVANCE(393);
      END_STATE();
    case 444:
      if (lookahead == 'E')
        ADVANCE(445);
      if (lookahead == 'S')
        ADVANCE(397);
      END_STATE();
    case 445:
      if (lookahead == 'L')
        ADVANCE(396);
      END_STATE();
    case 446:
      if (lookahead == 'A')
        ADVANCE(447);
      if (lookahead == 'R')
        ADVANCE(401);
      END_STATE();
    case 447:
      if (lookahead == 'N')
        ADVANCE(400);
      END_STATE();
    case 448:
      if (lookahead == 'C')
        ADVANCE(449);
      if (lookahead == 'E')
        ADVANCE(450);
      if (lookahead == 'L')
        ADVANCE(451);
      END_STATE();
    case 449:
      if (lookahead == '1')
        ADVANCE(404);
      if (lookahead == '2')
        ADVANCE(405);
      if (lookahead == '3')
        ADVANCE(406);
      if (lookahead == '4')
        ADVANCE(407);
      END_STATE();
    case 450:
      if (lookahead == 'L')
        ADVANCE(409);
      END_STATE();
    case 451:
      if (lookahead == 'E')
        ADVANCE(411);
      END_STATE();
    case 452:
      if (lookahead == 'M')
        ADVANCE(413);
      if (lookahead == 'N')
        ADVANCE(453);
      if (lookahead == 'O')
        ADVANCE(454);
      if (lookahead == 'S')
        ADVANCE(455);
      if (lookahead == 'T')
        ADVANCE(456);
      END_STATE();
    case 453:
      if (lookahead == 'Q')
        ADVANCE(415);
      END_STATE();
    case 454:
      if (lookahead == 'T')
        ADVANCE(417);
      END_STATE();
    case 455:
      if (lookahead == 'C')
        ADVANCE(419);
      END_STATE();
    case 456:
      if (lookahead == 'B')
        ADVANCE(421);
      if (lookahead == 'X')
        ADVANCE(422);
      END_STATE();
    case 457:
      if (lookahead == 'F')
        ADVANCE(424);
      if (lookahead == 'S')
        ADVANCE(425);
      END_STATE();
    case 458:
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 459:
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 460:
      if (lookahead == 'F')
        ADVANCE(31);
      END_STATE();
    case 461:
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 462:
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 463:
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
    case 464:
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 465:
      if (lookahead == 'T')
        ADVANCE(58);
      END_STATE();
    case 466:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(468);
      if (lookahead == 'B')
        ADVANCE(469);
      if (lookahead == 'C')
        ADVANCE(470);
      if (lookahead == 'D')
        ADVANCE(471);
      if (lookahead == 'E')
        ADVANCE(472);
      if (lookahead == 'F')
        ADVANCE(473);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(435);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead == 'b')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(438);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(440);
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
        ADVANCE(355);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 467:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(467);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(468);
      if (lookahead == 'B')
        ADVANCE(469);
      if (lookahead == 'C')
        ADVANCE(470);
      if (lookahead == 'D')
        ADVANCE(471);
      if (lookahead == 'E')
        ADVANCE(472);
      if (lookahead == 'F')
        ADVANCE(473);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(430);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(435);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead == 'b')
        ADVANCE(437);
      if (lookahead == 'f')
        ADVANCE(438);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(440);
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
        ADVANCE(355);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(443);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(445);
      if (lookahead == 'S')
        ADVANCE(397);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(447);
      if (lookahead == 'R')
        ADVANCE(401);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(449);
      if (lookahead == 'E')
        ADVANCE(450);
      if (lookahead == 'L')
        ADVANCE(451);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(413);
      if (lookahead == 'N')
        ADVANCE(453);
      if (lookahead == 'O')
        ADVANCE(454);
      if (lookahead == 'S')
        ADVANCE(455);
      if (lookahead == 'T')
        ADVANCE(456);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(424);
      if (lookahead == 'S')
        ADVANCE(425);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 476:
      if (lookahead == '\n')
        ADVANCE(475);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(474);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(480);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(478);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 481:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(481);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(480);
      END_STATE();
    case 482:
      if (lookahead == 'n')
        SKIP(477);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(486);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 485:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        SKIP(483);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(489);
      END_STATE();
    case 490:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 491:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(489);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        SKIP(489);
      END_STATE();
    case 494:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(495);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(498);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(494);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 495:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(495);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '0')
        ADVANCE(114);
      if (lookahead == '\\')
        ADVANCE(496);
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
      if (lookahead == 'h')
        ADVANCE(366);
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
        ADVANCE(495);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 496:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 497:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(495);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(211);
      if (lookahead == '\\')
        SKIP(498);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'm')
        ADVANCE(277);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(292);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(494);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 498:
      if (lookahead == 'n')
        SKIP(494);
      END_STATE();
    case 499:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 500:
      if (lookahead == '\t')
        ADVANCE(358);
      if (lookahead == '\n')
        ADVANCE(359);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == ' ')
        ADVANCE(352);
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
        ADVANCE(353);
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
        ADVANCE(354);
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
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(355);
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
  [2] = {.lex_state = 306},
  [3] = {.lex_state = 320},
  [4] = {.lex_state = 325},
  [5] = {.lex_state = 320},
  [6] = {.lex_state = 106},
  [7] = {.lex_state = 350},
  [8] = {.lex_state = 357},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 306},
  [15] = {.lex_state = 361},
  [16] = {.lex_state = 382},
  [17] = {.lex_state = 361},
  [18] = {.lex_state = 361},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 389},
  [26] = {.lex_state = 357},
  [27] = {.lex_state = 357},
  [28] = {.lex_state = 357},
  [29] = {.lex_state = 106},
  [30] = {.lex_state = 357},
  [31] = {.lex_state = 357},
  [32] = {.lex_state = 357},
  [33] = {.lex_state = 466},
  [34] = {.lex_state = 357},
  [35] = {.lex_state = 357},
  [36] = {.lex_state = 106},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 382},
  [39] = {.lex_state = 306},
  [40] = {.lex_state = 361},
  [41] = {.lex_state = 382},
  [42] = {.lex_state = 382},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 474},
  [49] = {.lex_state = 477},
  [50] = {.lex_state = 483},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 357},
  [53] = {.lex_state = 357},
  [54] = {.lex_state = 474},
  [55] = {.lex_state = 477},
  [56] = {.lex_state = 483},
  [57] = {.lex_state = 357},
  [58] = {.lex_state = 357},
  [59] = {.lex_state = 106},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 306},
  [62] = {.lex_state = 489},
  [63] = {.lex_state = 489},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 382},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 489},
  [69] = {.lex_state = 494},
  [70] = {.lex_state = 494},
  [71] = {.lex_state = 494},
  [72] = {.lex_state = 382},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 477},
  [76] = {.lex_state = 477},
  [77] = {.lex_state = 483},
  [78] = {.lex_state = 483},
  [79] = {.lex_state = 357},
  [80] = {.lex_state = 357},
  [81] = {.lex_state = 357},
  [82] = {.lex_state = 357},
  [83] = {.lex_state = 499},
  [84] = {.lex_state = 499},
  [85] = {.lex_state = 382},
  [86] = {.lex_state = 306},
  [87] = {.lex_state = 489},
  [88] = {.lex_state = 382},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 494},
  [91] = {.lex_state = 382},
  [92] = {.lex_state = 382},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 489},
  [95] = {.lex_state = 106},
  [96] = {.lex_state = 489},
  [97] = {.lex_state = 477},
  [98] = {.lex_state = 483},
  [99] = {.lex_state = 357},
  [100] = {.lex_state = 499},
  [101] = {.lex_state = 489},
  [102] = {.lex_state = 382},
  [103] = {.lex_state = 306},
  [104] = {.lex_state = 306},
  [105] = {.lex_state = 489},
  [106] = {.lex_state = 106},
  [107] = {.lex_state = 306},
  [108] = {.lex_state = 489},
  [109] = {.lex_state = 489},
  [110] = {.lex_state = 382},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 382},
  [113] = {.lex_state = 489},
  [114] = {.lex_state = 489},
  [115] = {.lex_state = 489},
  [116] = {.lex_state = 382},
  [117] = {.lex_state = 489},
  [118] = {.lex_state = 489},
  [119] = {.lex_state = 489},
  [120] = {.lex_state = 382},
  [121] = {.lex_state = 489},
  [122] = {.lex_state = 306},
  [123] = {.lex_state = 489},
  [124] = {.lex_state = 106},
  [125] = {.lex_state = 489},
  [126] = {.lex_state = 382},
  [127] = {.lex_state = 489},
  [128] = {.lex_state = 106},
  [129] = {.lex_state = 489},
  [130] = {.lex_state = 489},
  [131] = {.lex_state = 306},
  [132] = {.lex_state = 489},
  [133] = {.lex_state = 382},
  [134] = {.lex_state = 489},
  [135] = {.lex_state = 489},
  [136] = {.lex_state = 106},
  [137] = {.lex_state = 489},
  [138] = {.lex_state = 489},
  [139] = {.lex_state = 489},
  [140] = {.lex_state = 306},
  [141] = {.lex_state = 489},
  [142] = {.lex_state = 489},
  [143] = {.lex_state = 106},
  [144] = {.lex_state = 489},
  [145] = {.lex_state = 489},
  [146] = {.lex_state = 489},
  [147] = {.lex_state = 489},
  [148] = {.lex_state = 106},
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
    [sym_program] = STATE(10),
    [sym__statement] = STATE(11),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(32),
    [sym_comment] = ACTIONS(22),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_COMMA] = ACTIONS(34),
    [anon_sym_RPAREN] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(38),
    [anon_sym_case] = ACTIONS(36),
    [anon_sym_class] = ACTIONS(36),
    [anon_sym_data] = ACTIONS(36),
    [anon_sym_default] = ACTIONS(36),
    [anon_sym_deriving] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(36),
    [anon_sym_else] = ACTIONS(36),
    [anon_sym_foreign] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(36),
    [anon_sym_in] = ACTIONS(36),
    [anon_sym_infix] = ACTIONS(36),
    [anon_sym_infixl] = ACTIONS(36),
    [anon_sym_infixr] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(36),
    [anon_sym_let] = ACTIONS(36),
    [anon_sym_newtype] = ACTIONS(36),
    [anon_sym_of] = ACTIONS(36),
    [anon_sym_then] = ACTIONS(36),
    [anon_sym_type] = ACTIONS(36),
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [4] = {
    [sym__identifier] = STATE(18),
    [sym_reserved_identifier] = STATE(17),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_qualified] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(44),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
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
    [sym_comment] = ACTIONS(22),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_module] = ACTIONS(50),
    [anon_sym_where] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_data] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_newtype] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym_type] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(54),
    [anon_sym_DQUOTE] = ACTIONS(54),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [7] = {
    [sym__graphic] = STATE(21),
    [sym__small] = STATE(22),
    [sym__large] = STATE(22),
    [sym__symbol] = STATE(22),
    [sym__special] = STATE(22),
    [sym__escape] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym__] = ACTIONS(62),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [anon_sym_DQUOTE] = ACTIONS(64),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(62),
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
    [anon_sym_SEMI] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [anon_sym_RBRACK] = ACTIONS(60),
    [anon_sym_BQUOTE] = ACTIONS(60),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [sym__space] = ACTIONS(64),
  },
  [8] = {
    [sym__gap] = STATE(28),
    [sym__graphic] = STATE(28),
    [sym__small] = STATE(30),
    [sym__large] = STATE(30),
    [sym__symbol] = STATE(30),
    [sym__special] = STATE(30),
    [sym__escape] = STATE(28),
    [aux_sym_string_repeat1] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym__] = ACTIONS(76),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(86),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_1] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym__space] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
    [sym__tab] = ACTIONS(90),
    [sym__vertical_tab] = ACTIONS(90),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_module] = ACTIONS(94),
    [anon_sym_where] = ACTIONS(94),
    [anon_sym_import] = ACTIONS(94),
    [sym_variable_identifier] = ACTIONS(96),
    [sym_constructor_identifier] = ACTIONS(94),
    [sym_module_identifier] = ACTIONS(96),
    [anon_sym_case] = ACTIONS(94),
    [anon_sym_class] = ACTIONS(94),
    [anon_sym_data] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(94),
    [anon_sym_deriving] = ACTIONS(94),
    [anon_sym_do] = ACTIONS(94),
    [anon_sym_else] = ACTIONS(94),
    [anon_sym_foreign] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(94),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [sym__integer_literal] = ACTIONS(94),
    [sym__octal_literal] = ACTIONS(94),
    [sym__hexidecimal_literal] = ACTIONS(94),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_comment] = ACTIONS(100),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
    [anon_sym_import] = ACTIONS(104),
    [sym_variable_identifier] = ACTIONS(106),
    [sym_constructor_identifier] = ACTIONS(104),
    [sym_module_identifier] = ACTIONS(106),
    [anon_sym_case] = ACTIONS(104),
    [anon_sym_class] = ACTIONS(104),
    [anon_sym_data] = ACTIONS(104),
    [anon_sym_default] = ACTIONS(104),
    [anon_sym_deriving] = ACTIONS(104),
    [anon_sym_do] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(104),
    [anon_sym_foreign] = ACTIONS(104),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_in] = ACTIONS(104),
    [anon_sym_infix] = ACTIONS(104),
    [anon_sym_infixl] = ACTIONS(104),
    [anon_sym_infixr] = ACTIONS(104),
    [anon_sym_instance] = ACTIONS(104),
    [anon_sym_let] = ACTIONS(104),
    [anon_sym_newtype] = ACTIONS(104),
    [anon_sym_of] = ACTIONS(104),
    [anon_sym_then] = ACTIONS(104),
    [anon_sym_type] = ACTIONS(104),
    [anon_sym__] = ACTIONS(104),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym__integer_literal] = ACTIONS(104),
    [sym__octal_literal] = ACTIONS(104),
    [sym__hexidecimal_literal] = ACTIONS(104),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(112),
    [sym_constructor_identifier] = ACTIONS(110),
    [sym_module_identifier] = ACTIONS(112),
    [anon_sym_case] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_deriving] = ACTIONS(110),
    [anon_sym_do] = ACTIONS(110),
    [anon_sym_else] = ACTIONS(110),
    [anon_sym_foreign] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_infix] = ACTIONS(110),
    [anon_sym_infixl] = ACTIONS(110),
    [anon_sym_infixr] = ACTIONS(110),
    [anon_sym_instance] = ACTIONS(110),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_newtype] = ACTIONS(110),
    [anon_sym_of] = ACTIONS(110),
    [anon_sym_then] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [sym__integer_literal] = ACTIONS(110),
    [sym__octal_literal] = ACTIONS(110),
    [sym__hexidecimal_literal] = ACTIONS(110),
  },
  [13] = {
    [sym__statement] = STATE(36),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [14] = {
    [sym_module_export_declarations] = STATE(39),
    [anon_sym_where] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(118),
    [sym_comment] = ACTIONS(22),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_as] = ACTIONS(36),
    [anon_sym_hiding] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(38),
    [anon_sym_case] = ACTIONS(36),
    [anon_sym_class] = ACTIONS(36),
    [anon_sym_data] = ACTIONS(36),
    [anon_sym_default] = ACTIONS(36),
    [anon_sym_deriving] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(36),
    [anon_sym_else] = ACTIONS(36),
    [anon_sym_foreign] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(36),
    [anon_sym_in] = ACTIONS(36),
    [anon_sym_infix] = ACTIONS(36),
    [anon_sym_infixl] = ACTIONS(36),
    [anon_sym_infixr] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(36),
    [anon_sym_let] = ACTIONS(36),
    [anon_sym_newtype] = ACTIONS(36),
    [anon_sym_of] = ACTIONS(36),
    [anon_sym_then] = ACTIONS(36),
    [anon_sym_type] = ACTIONS(36),
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [16] = {
    [sym__identifier] = STATE(40),
    [sym_reserved_identifier] = STATE(17),
    [anon_sym_where] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(44),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
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
    [sym_comment] = ACTIONS(22),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_module] = ACTIONS(50),
    [anon_sym_where] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_as] = ACTIONS(50),
    [anon_sym_hiding] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_data] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_newtype] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym_type] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [18] = {
    [sym_import_specification] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_as] = ACTIONS(126),
    [anon_sym_hiding] = ACTIONS(128),
    [sym_variable_identifier] = ACTIONS(130),
    [sym_constructor_identifier] = ACTIONS(122),
    [sym_module_identifier] = ACTIONS(130),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_class] = ACTIONS(122),
    [anon_sym_data] = ACTIONS(122),
    [anon_sym_default] = ACTIONS(122),
    [anon_sym_deriving] = ACTIONS(122),
    [anon_sym_do] = ACTIONS(122),
    [anon_sym_else] = ACTIONS(122),
    [anon_sym_foreign] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_infix] = ACTIONS(122),
    [anon_sym_infixl] = ACTIONS(122),
    [anon_sym_infixr] = ACTIONS(122),
    [anon_sym_instance] = ACTIONS(122),
    [anon_sym_let] = ACTIONS(122),
    [anon_sym_newtype] = ACTIONS(122),
    [anon_sym_of] = ACTIONS(122),
    [anon_sym_then] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [sym__integer_literal] = ACTIONS(122),
    [sym__octal_literal] = ACTIONS(122),
    [sym__hexidecimal_literal] = ACTIONS(122),
  },
  [19] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(132),
  },
  [20] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(134),
  },
  [21] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(136),
  },
  [22] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(138),
  },
  [23] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(140),
  },
  [24] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(142),
  },
  [25] = {
    [sym__char_escape] = STATE(47),
    [sym__ascii] = STATE(47),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(146),
    [anon_sym_AMP] = ACTIONS(144),
    [anon_sym_CARET] = ACTIONS(148),
    [anon_sym_BSLASH] = ACTIONS(144),
    [anon_sym_x] = ACTIONS(150),
    [anon_sym_X] = ACTIONS(150),
    [anon_sym_o] = ACTIONS(152),
    [anon_sym_O] = ACTIONS(152),
    [anon_sym_a] = ACTIONS(144),
    [anon_sym_b] = ACTIONS(144),
    [anon_sym_f] = ACTIONS(144),
    [anon_sym_n] = ACTIONS(144),
    [anon_sym_r] = ACTIONS(144),
    [anon_sym_t] = ACTIONS(144),
    [anon_sym_v] = ACTIONS(144),
    [anon_sym_NUL] = ACTIONS(154),
    [anon_sym_SOH] = ACTIONS(154),
    [anon_sym_STX] = ACTIONS(154),
    [anon_sym_ETX] = ACTIONS(154),
    [anon_sym_EOT] = ACTIONS(154),
    [anon_sym_ENQ] = ACTIONS(154),
    [anon_sym_ACK] = ACTIONS(154),
    [anon_sym_BEL] = ACTIONS(154),
    [anon_sym_BS] = ACTIONS(154),
    [anon_sym_HT] = ACTIONS(154),
    [anon_sym_LF] = ACTIONS(154),
    [anon_sym_VT] = ACTIONS(154),
    [anon_sym_FF] = ACTIONS(154),
    [anon_sym_CR] = ACTIONS(154),
    [anon_sym_SO] = ACTIONS(154),
    [anon_sym_SI] = ACTIONS(154),
    [anon_sym_DLE] = ACTIONS(154),
    [anon_sym_DC1] = ACTIONS(154),
    [anon_sym_DC2] = ACTIONS(154),
    [anon_sym_DC3] = ACTIONS(154),
    [anon_sym_DC4] = ACTIONS(154),
    [anon_sym_NAK] = ACTIONS(154),
    [anon_sym_SYN] = ACTIONS(154),
    [anon_sym_ETB] = ACTIONS(154),
    [anon_sym_CAN] = ACTIONS(154),
    [anon_sym_EM] = ACTIONS(154),
    [anon_sym_SUB] = ACTIONS(154),
    [anon_sym_ESC] = ACTIONS(154),
    [anon_sym_FS] = ACTIONS(154),
    [anon_sym_GS] = ACTIONS(154),
    [anon_sym_RS] = ACTIONS(154),
    [anon_sym_US] = ACTIONS(154),
    [anon_sym_SP] = ACTIONS(154),
    [anon_sym_DEL] = ACTIONS(154),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym__] = ACTIONS(156),
    [sym_comment] = ACTIONS(22),
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
  [27] = {
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym__] = ACTIONS(158),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(158),
    [sym__ascii_large] = ACTIONS(158),
    [anon_sym_BANG] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(158),
    [anon_sym_DOLLAR] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(158),
    [anon_sym_AMP] = ACTIONS(158),
    [anon_sym_1] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_LT] = ACTIONS(158),
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_QMARK] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [sym__space] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
    [sym__tab] = ACTIONS(158),
    [sym__vertical_tab] = ACTIONS(158),
  },
  [28] = {
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(22),
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
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_module] = ACTIONS(164),
    [anon_sym_where] = ACTIONS(164),
    [anon_sym_import] = ACTIONS(164),
    [sym_variable_identifier] = ACTIONS(166),
    [sym_constructor_identifier] = ACTIONS(164),
    [sym_module_identifier] = ACTIONS(166),
    [anon_sym_case] = ACTIONS(164),
    [anon_sym_class] = ACTIONS(164),
    [anon_sym_data] = ACTIONS(164),
    [anon_sym_default] = ACTIONS(164),
    [anon_sym_deriving] = ACTIONS(164),
    [anon_sym_do] = ACTIONS(164),
    [anon_sym_else] = ACTIONS(164),
    [anon_sym_foreign] = ACTIONS(164),
    [anon_sym_if] = ACTIONS(164),
    [anon_sym_in] = ACTIONS(164),
    [anon_sym_infix] = ACTIONS(164),
    [anon_sym_infixl] = ACTIONS(164),
    [anon_sym_infixr] = ACTIONS(164),
    [anon_sym_instance] = ACTIONS(164),
    [anon_sym_let] = ACTIONS(164),
    [anon_sym_newtype] = ACTIONS(164),
    [anon_sym_of] = ACTIONS(164),
    [anon_sym_then] = ACTIONS(164),
    [anon_sym_type] = ACTIONS(164),
    [anon_sym__] = ACTIONS(164),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym__integer_literal] = ACTIONS(164),
    [sym__octal_literal] = ACTIONS(164),
    [sym__hexidecimal_literal] = ACTIONS(164),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym__] = ACTIONS(168),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(168),
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
    [anon_sym_SEMI] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [sym__space] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
    [sym__tab] = ACTIONS(168),
    [sym__vertical_tab] = ACTIONS(168),
  },
  [31] = {
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(170),
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
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [sym__space] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
    [sym__tab] = ACTIONS(170),
    [sym__vertical_tab] = ACTIONS(170),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(172),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(172),
    [sym__ascii_large] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(172),
    [anon_sym_1] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_BSLASH] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [sym__space] = ACTIONS(172),
    [sym__newline] = ACTIONS(172),
    [sym__tab] = ACTIONS(172),
    [sym__vertical_tab] = ACTIONS(172),
  },
  [33] = {
    [sym__char_escape] = STATE(53),
    [sym__ascii] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(172),
    [sym__ascii_large] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_POUND] = ACTIONS(172),
    [anon_sym_DOLLAR] = ACTIONS(172),
    [anon_sym_PERCENT] = ACTIONS(172),
    [anon_sym_AMP] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_BSLASH] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [sym__space] = ACTIONS(172),
    [sym__newline] = ACTIONS(172),
    [sym__tab] = ACTIONS(172),
    [sym__vertical_tab] = ACTIONS(172),
    [anon_sym_x] = ACTIONS(180),
    [anon_sym_X] = ACTIONS(180),
    [anon_sym_o] = ACTIONS(182),
    [anon_sym_O] = ACTIONS(182),
    [anon_sym_a] = ACTIONS(174),
    [anon_sym_b] = ACTIONS(174),
    [anon_sym_f] = ACTIONS(174),
    [anon_sym_n] = ACTIONS(174),
    [anon_sym_r] = ACTIONS(174),
    [anon_sym_t] = ACTIONS(174),
    [anon_sym_v] = ACTIONS(174),
    [anon_sym_NUL] = ACTIONS(184),
    [anon_sym_SOH] = ACTIONS(184),
    [anon_sym_STX] = ACTIONS(184),
    [anon_sym_ETX] = ACTIONS(184),
    [anon_sym_EOT] = ACTIONS(184),
    [anon_sym_ENQ] = ACTIONS(184),
    [anon_sym_ACK] = ACTIONS(184),
    [anon_sym_BEL] = ACTIONS(184),
    [anon_sym_BS] = ACTIONS(184),
    [anon_sym_HT] = ACTIONS(184),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_VT] = ACTIONS(184),
    [anon_sym_FF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SO] = ACTIONS(184),
    [anon_sym_SI] = ACTIONS(184),
    [anon_sym_DLE] = ACTIONS(184),
    [anon_sym_DC1] = ACTIONS(184),
    [anon_sym_DC2] = ACTIONS(184),
    [anon_sym_DC3] = ACTIONS(184),
    [anon_sym_DC4] = ACTIONS(184),
    [anon_sym_NAK] = ACTIONS(184),
    [anon_sym_SYN] = ACTIONS(184),
    [anon_sym_ETB] = ACTIONS(184),
    [anon_sym_CAN] = ACTIONS(184),
    [anon_sym_EM] = ACTIONS(184),
    [anon_sym_SUB] = ACTIONS(184),
    [anon_sym_ESC] = ACTIONS(184),
    [anon_sym_FS] = ACTIONS(184),
    [anon_sym_GS] = ACTIONS(184),
    [anon_sym_RS] = ACTIONS(184),
    [anon_sym_US] = ACTIONS(184),
    [anon_sym_SP] = ACTIONS(184),
    [anon_sym_DEL] = ACTIONS(184),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(186),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym__] = ACTIONS(186),
    [sym_comment] = ACTIONS(22),
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
  [35] = {
    [sym__gap] = STATE(58),
    [sym__graphic] = STATE(58),
    [sym__small] = STATE(30),
    [sym__large] = STATE(30),
    [sym__symbol] = STATE(30),
    [sym__special] = STATE(30),
    [sym__escape] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym__] = ACTIONS(76),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(76),
    [sym__ascii_large] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(86),
    [anon_sym_DOLLAR] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(86),
    [anon_sym_1] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_LT] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(86),
    [anon_sym_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
    [anon_sym_CARET] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(86),
    [anon_sym_TILDE] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_BQUOTE] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [sym__space] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
    [sym__tab] = ACTIONS(90),
    [sym__vertical_tab] = ACTIONS(90),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [anon_sym_module] = ACTIONS(194),
    [anon_sym_where] = ACTIONS(194),
    [anon_sym_import] = ACTIONS(194),
    [sym_variable_identifier] = ACTIONS(196),
    [sym_constructor_identifier] = ACTIONS(194),
    [sym_module_identifier] = ACTIONS(196),
    [anon_sym_case] = ACTIONS(194),
    [anon_sym_class] = ACTIONS(194),
    [anon_sym_data] = ACTIONS(194),
    [anon_sym_default] = ACTIONS(194),
    [anon_sym_deriving] = ACTIONS(194),
    [anon_sym_do] = ACTIONS(194),
    [anon_sym_else] = ACTIONS(194),
    [anon_sym_foreign] = ACTIONS(194),
    [anon_sym_if] = ACTIONS(194),
    [anon_sym_in] = ACTIONS(194),
    [anon_sym_infix] = ACTIONS(194),
    [anon_sym_infixl] = ACTIONS(194),
    [anon_sym_infixr] = ACTIONS(194),
    [anon_sym_instance] = ACTIONS(194),
    [anon_sym_let] = ACTIONS(194),
    [anon_sym_newtype] = ACTIONS(194),
    [anon_sym_of] = ACTIONS(194),
    [anon_sym_then] = ACTIONS(194),
    [anon_sym_type] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [sym__integer_literal] = ACTIONS(194),
    [sym__octal_literal] = ACTIONS(194),
    [sym__hexidecimal_literal] = ACTIONS(194),
  },
  [37] = {
    [sym__statement] = STATE(11),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(198),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [38] = {
    [sym_export_declaration] = STATE(62),
    [sym__identifier] = STATE(63),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(200),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [39] = {
    [anon_sym_where] = ACTIONS(202),
    [sym_comment] = ACTIONS(22),
  },
  [40] = {
    [sym_import_specification] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_module] = ACTIONS(206),
    [anon_sym_where] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(206),
    [anon_sym_as] = ACTIONS(208),
    [anon_sym_hiding] = ACTIONS(128),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(206),
    [sym_module_identifier] = ACTIONS(210),
    [anon_sym_case] = ACTIONS(206),
    [anon_sym_class] = ACTIONS(206),
    [anon_sym_data] = ACTIONS(206),
    [anon_sym_default] = ACTIONS(206),
    [anon_sym_deriving] = ACTIONS(206),
    [anon_sym_do] = ACTIONS(206),
    [anon_sym_else] = ACTIONS(206),
    [anon_sym_foreign] = ACTIONS(206),
    [anon_sym_if] = ACTIONS(206),
    [anon_sym_in] = ACTIONS(206),
    [anon_sym_infix] = ACTIONS(206),
    [anon_sym_infixl] = ACTIONS(206),
    [anon_sym_infixr] = ACTIONS(206),
    [anon_sym_instance] = ACTIONS(206),
    [anon_sym_let] = ACTIONS(206),
    [anon_sym_newtype] = ACTIONS(206),
    [anon_sym_of] = ACTIONS(206),
    [anon_sym_then] = ACTIONS(206),
    [anon_sym_type] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [sym__integer_literal] = ACTIONS(206),
    [sym__octal_literal] = ACTIONS(206),
    [sym__hexidecimal_literal] = ACTIONS(206),
  },
  [41] = {
    [sym__identifier] = STATE(68),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(212),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [42] = {
    [sym__identifier] = STATE(71),
    [sym_reserved_identifier] = STATE(70),
    [anon_sym_where] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_module_identifier] = ACTIONS(216),
    [anon_sym_case] = ACTIONS(214),
    [anon_sym_class] = ACTIONS(214),
    [anon_sym_data] = ACTIONS(214),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_deriving] = ACTIONS(214),
    [anon_sym_do] = ACTIONS(214),
    [anon_sym_else] = ACTIONS(214),
    [anon_sym_foreign] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(214),
    [anon_sym_in] = ACTIONS(214),
    [anon_sym_infix] = ACTIONS(214),
    [anon_sym_infixl] = ACTIONS(214),
    [anon_sym_infixr] = ACTIONS(214),
    [anon_sym_instance] = ACTIONS(214),
    [anon_sym_let] = ACTIONS(214),
    [anon_sym_newtype] = ACTIONS(214),
    [anon_sym_of] = ACTIONS(214),
    [anon_sym_then] = ACTIONS(214),
    [anon_sym_type] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [sym_comment] = ACTIONS(22),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(220),
    [sym_comment] = ACTIONS(22),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_module] = ACTIONS(206),
    [anon_sym_where] = ACTIONS(206),
    [anon_sym_import] = ACTIONS(206),
    [sym_variable_identifier] = ACTIONS(210),
    [sym_constructor_identifier] = ACTIONS(206),
    [sym_module_identifier] = ACTIONS(210),
    [anon_sym_case] = ACTIONS(206),
    [anon_sym_class] = ACTIONS(206),
    [anon_sym_data] = ACTIONS(206),
    [anon_sym_default] = ACTIONS(206),
    [anon_sym_deriving] = ACTIONS(206),
    [anon_sym_do] = ACTIONS(206),
    [anon_sym_else] = ACTIONS(206),
    [anon_sym_foreign] = ACTIONS(206),
    [anon_sym_if] = ACTIONS(206),
    [anon_sym_in] = ACTIONS(206),
    [anon_sym_infix] = ACTIONS(206),
    [anon_sym_infixl] = ACTIONS(206),
    [anon_sym_infixr] = ACTIONS(206),
    [anon_sym_instance] = ACTIONS(206),
    [anon_sym_let] = ACTIONS(206),
    [anon_sym_newtype] = ACTIONS(206),
    [anon_sym_of] = ACTIONS(206),
    [anon_sym_then] = ACTIONS(206),
    [anon_sym_type] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [sym__integer_literal] = ACTIONS(206),
    [sym__octal_literal] = ACTIONS(206),
    [sym__hexidecimal_literal] = ACTIONS(206),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_module] = ACTIONS(224),
    [anon_sym_where] = ACTIONS(224),
    [anon_sym_import] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(226),
    [sym_constructor_identifier] = ACTIONS(224),
    [sym_module_identifier] = ACTIONS(226),
    [anon_sym_case] = ACTIONS(224),
    [anon_sym_class] = ACTIONS(224),
    [anon_sym_data] = ACTIONS(224),
    [anon_sym_default] = ACTIONS(224),
    [anon_sym_deriving] = ACTIONS(224),
    [anon_sym_do] = ACTIONS(224),
    [anon_sym_else] = ACTIONS(224),
    [anon_sym_foreign] = ACTIONS(224),
    [anon_sym_if] = ACTIONS(224),
    [anon_sym_in] = ACTIONS(224),
    [anon_sym_infix] = ACTIONS(224),
    [anon_sym_infixl] = ACTIONS(224),
    [anon_sym_infixr] = ACTIONS(224),
    [anon_sym_instance] = ACTIONS(224),
    [anon_sym_let] = ACTIONS(224),
    [anon_sym_newtype] = ACTIONS(224),
    [anon_sym_of] = ACTIONS(224),
    [anon_sym_then] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(224),
    [anon_sym__] = ACTIONS(224),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(226),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym__integer_literal] = ACTIONS(224),
    [sym__octal_literal] = ACTIONS(224),
    [sym__hexidecimal_literal] = ACTIONS(224),
  },
  [46] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(228),
  },
  [47] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(230),
  },
  [48] = {
    [sym__cntrl] = STATE(74),
    [anon_sym__] = ACTIONS(232),
    [sym_comment] = ACTIONS(22),
    [sym__ascii_large] = ACTIONS(232),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_BSLASH] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
  },
  [49] = {
    [aux_sym__escape_repeat1] = STATE(76),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(234),
  },
  [50] = {
    [aux_sym__escape_repeat2] = STATE(78),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(236),
  },
  [51] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(238),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym__] = ACTIONS(240),
    [sym_comment] = ACTIONS(22),
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
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(242),
    [sym__ascii_large] = ACTIONS(242),
    [anon_sym_BANG] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_DOLLAR] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(242),
    [anon_sym_AMP] = ACTIONS(242),
    [anon_sym_1] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
    [anon_sym_SLASH] = ACTIONS(242),
    [anon_sym_LT] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_QMARK] = ACTIONS(242),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_CARET] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_DASH] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(242),
    [anon_sym_BSLASH] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
    [anon_sym_BQUOTE] = ACTIONS(242),
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym__space] = ACTIONS(242),
    [sym__newline] = ACTIONS(242),
    [sym__tab] = ACTIONS(242),
    [sym__vertical_tab] = ACTIONS(242),
  },
  [54] = {
    [sym__cntrl] = STATE(80),
    [anon_sym__] = ACTIONS(244),
    [sym_comment] = ACTIONS(22),
    [sym__ascii_large] = ACTIONS(244),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_CARET] = ACTIONS(244),
    [anon_sym_BSLASH] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
  },
  [55] = {
    [aux_sym__escape_repeat1] = STATE(82),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(246),
  },
  [56] = {
    [aux_sym__escape_repeat2] = STATE(84),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(248),
  },
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(22),
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
  [58] = {
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [sym_comment] = ACTIONS(22),
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
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(254),
    [anon_sym_module] = ACTIONS(256),
    [anon_sym_where] = ACTIONS(256),
    [anon_sym_import] = ACTIONS(256),
    [sym_variable_identifier] = ACTIONS(258),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(258),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_class] = ACTIONS(256),
    [anon_sym_data] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
    [anon_sym_deriving] = ACTIONS(256),
    [anon_sym_do] = ACTIONS(256),
    [anon_sym_else] = ACTIONS(256),
    [anon_sym_foreign] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_infix] = ACTIONS(256),
    [anon_sym_infixl] = ACTIONS(256),
    [anon_sym_infixr] = ACTIONS(256),
    [anon_sym_instance] = ACTIONS(256),
    [anon_sym_let] = ACTIONS(256),
    [anon_sym_newtype] = ACTIONS(256),
    [anon_sym_of] = ACTIONS(256),
    [anon_sym_then] = ACTIONS(256),
    [anon_sym_type] = ACTIONS(256),
    [anon_sym__] = ACTIONS(256),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [sym__integer_literal] = ACTIONS(256),
    [sym__octal_literal] = ACTIONS(256),
    [sym__hexidecimal_literal] = ACTIONS(256),
  },
  [60] = {
    [sym__statement] = STATE(36),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [61] = {
    [anon_sym_where] = ACTIONS(262),
    [sym_comment] = ACTIONS(22),
  },
  [62] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(87),
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(266),
    [sym_comment] = ACTIONS(22),
  },
  [63] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [sym_comment] = ACTIONS(22),
  },
  [64] = {
    [sym__statement] = STATE(11),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [65] = {
    [sym__identifier] = STATE(90),
    [sym_reserved_identifier] = STATE(70),
    [anon_sym_where] = ACTIONS(214),
    [sym_variable_identifier] = ACTIONS(216),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_module_identifier] = ACTIONS(216),
    [anon_sym_case] = ACTIONS(214),
    [anon_sym_class] = ACTIONS(214),
    [anon_sym_data] = ACTIONS(214),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_deriving] = ACTIONS(214),
    [anon_sym_do] = ACTIONS(214),
    [anon_sym_else] = ACTIONS(214),
    [anon_sym_foreign] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(214),
    [anon_sym_in] = ACTIONS(214),
    [anon_sym_infix] = ACTIONS(214),
    [anon_sym_infixl] = ACTIONS(214),
    [anon_sym_infixr] = ACTIONS(214),
    [anon_sym_instance] = ACTIONS(214),
    [anon_sym_let] = ACTIONS(214),
    [anon_sym_newtype] = ACTIONS(214),
    [anon_sym_of] = ACTIONS(214),
    [anon_sym_then] = ACTIONS(214),
    [anon_sym_type] = ACTIONS(214),
    [anon_sym__] = ACTIONS(214),
    [sym_comment] = ACTIONS(22),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_where] = ACTIONS(276),
    [anon_sym_import] = ACTIONS(276),
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_module_identifier] = ACTIONS(278),
    [anon_sym_case] = ACTIONS(276),
    [anon_sym_class] = ACTIONS(276),
    [anon_sym_data] = ACTIONS(276),
    [anon_sym_default] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(276),
    [anon_sym_do] = ACTIONS(276),
    [anon_sym_else] = ACTIONS(276),
    [anon_sym_foreign] = ACTIONS(276),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_in] = ACTIONS(276),
    [anon_sym_infix] = ACTIONS(276),
    [anon_sym_infixl] = ACTIONS(276),
    [anon_sym_infixr] = ACTIONS(276),
    [anon_sym_instance] = ACTIONS(276),
    [anon_sym_let] = ACTIONS(276),
    [anon_sym_newtype] = ACTIONS(276),
    [anon_sym_of] = ACTIONS(276),
    [anon_sym_then] = ACTIONS(276),
    [anon_sym_type] = ACTIONS(276),
    [anon_sym__] = ACTIONS(276),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [sym__integer_literal] = ACTIONS(276),
    [sym__octal_literal] = ACTIONS(276),
    [sym__hexidecimal_literal] = ACTIONS(276),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_module] = ACTIONS(282),
    [anon_sym_where] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(282),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_module_identifier] = ACTIONS(284),
    [anon_sym_case] = ACTIONS(282),
    [anon_sym_class] = ACTIONS(282),
    [anon_sym_data] = ACTIONS(282),
    [anon_sym_default] = ACTIONS(282),
    [anon_sym_deriving] = ACTIONS(282),
    [anon_sym_do] = ACTIONS(282),
    [anon_sym_else] = ACTIONS(282),
    [anon_sym_foreign] = ACTIONS(282),
    [anon_sym_if] = ACTIONS(282),
    [anon_sym_in] = ACTIONS(282),
    [anon_sym_infix] = ACTIONS(282),
    [anon_sym_infixl] = ACTIONS(282),
    [anon_sym_infixr] = ACTIONS(282),
    [anon_sym_instance] = ACTIONS(282),
    [anon_sym_let] = ACTIONS(282),
    [anon_sym_newtype] = ACTIONS(282),
    [anon_sym_of] = ACTIONS(282),
    [anon_sym_then] = ACTIONS(282),
    [anon_sym_type] = ACTIONS(282),
    [anon_sym__] = ACTIONS(282),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym__integer_literal] = ACTIONS(282),
    [sym__octal_literal] = ACTIONS(282),
    [sym__hexidecimal_literal] = ACTIONS(282),
  },
  [68] = {
    [aux_sym_import_specification_repeat1] = STATE(94),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_comment] = ACTIONS(22),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_hiding] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(36),
    [sym_module_identifier] = ACTIONS(38),
    [anon_sym_case] = ACTIONS(36),
    [anon_sym_class] = ACTIONS(36),
    [anon_sym_data] = ACTIONS(36),
    [anon_sym_default] = ACTIONS(36),
    [anon_sym_deriving] = ACTIONS(36),
    [anon_sym_do] = ACTIONS(36),
    [anon_sym_else] = ACTIONS(36),
    [anon_sym_foreign] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(36),
    [anon_sym_in] = ACTIONS(36),
    [anon_sym_infix] = ACTIONS(36),
    [anon_sym_infixl] = ACTIONS(36),
    [anon_sym_infixr] = ACTIONS(36),
    [anon_sym_instance] = ACTIONS(36),
    [anon_sym_let] = ACTIONS(36),
    [anon_sym_newtype] = ACTIONS(36),
    [anon_sym_of] = ACTIONS(36),
    [anon_sym_then] = ACTIONS(36),
    [anon_sym_type] = ACTIONS(36),
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_module] = ACTIONS(50),
    [anon_sym_where] = ACTIONS(50),
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_import] = ACTIONS(50),
    [anon_sym_hiding] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_data] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_newtype] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym_type] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(52),
    [anon_sym_SQUOTE] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym__integer_literal] = ACTIONS(50),
    [sym__octal_literal] = ACTIONS(50),
    [sym__hexidecimal_literal] = ACTIONS(50),
  },
  [71] = {
    [sym_import_specification] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_where] = ACTIONS(276),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(276),
    [anon_sym_hiding] = ACTIONS(128),
    [sym_variable_identifier] = ACTIONS(278),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_module_identifier] = ACTIONS(278),
    [anon_sym_case] = ACTIONS(276),
    [anon_sym_class] = ACTIONS(276),
    [anon_sym_data] = ACTIONS(276),
    [anon_sym_default] = ACTIONS(276),
    [anon_sym_deriving] = ACTIONS(276),
    [anon_sym_do] = ACTIONS(276),
    [anon_sym_else] = ACTIONS(276),
    [anon_sym_foreign] = ACTIONS(276),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_in] = ACTIONS(276),
    [anon_sym_infix] = ACTIONS(276),
    [anon_sym_infixl] = ACTIONS(276),
    [anon_sym_infixr] = ACTIONS(276),
    [anon_sym_instance] = ACTIONS(276),
    [anon_sym_let] = ACTIONS(276),
    [anon_sym_newtype] = ACTIONS(276),
    [anon_sym_of] = ACTIONS(276),
    [anon_sym_then] = ACTIONS(276),
    [anon_sym_type] = ACTIONS(276),
    [anon_sym__] = ACTIONS(276),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [sym__integer_literal] = ACTIONS(276),
    [sym__octal_literal] = ACTIONS(276),
    [sym__hexidecimal_literal] = ACTIONS(276),
  },
  [72] = {
    [sym__identifier] = STATE(96),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [73] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(292),
  },
  [74] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [75] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(296),
  },
  [76] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(300),
  },
  [77] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(302),
  },
  [78] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(304),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(306),
    [sym__ascii_large] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [sym__space] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
    [sym__tab] = ACTIONS(306),
    [sym__vertical_tab] = ACTIONS(306),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(308),
    [sym__ascii_large] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_1] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [sym__space] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
    [sym__tab] = ACTIONS(308),
    [sym__vertical_tab] = ACTIONS(308),
  },
  [81] = {
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(310),
    [sym__ascii_large] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [sym__space] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
    [sym__tab] = ACTIONS(310),
    [sym__vertical_tab] = ACTIONS(310),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(310),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(312),
    [sym__ascii_large] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_POUND] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_1] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym__space] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
    [sym__tab] = ACTIONS(312),
    [sym__vertical_tab] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(314),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym__] = ACTIONS(316),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(316),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(316),
    [sym__ascii_large] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(316),
    [anon_sym_POUND] = ACTIONS(316),
    [anon_sym_DOLLAR] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [anon_sym_AMP] = ACTIONS(316),
    [anon_sym_1] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(316),
    [anon_sym_QMARK] = ACTIONS(316),
    [anon_sym_AT] = ACTIONS(316),
    [anon_sym_CARET] = ACTIONS(316),
    [anon_sym_PIPE] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_TILDE] = ACTIONS(316),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
    [anon_sym_RBRACK] = ACTIONS(316),
    [anon_sym_BQUOTE] = ACTIONS(316),
    [anon_sym_LBRACE] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(316),
    [sym__space] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
    [sym__tab] = ACTIONS(316),
    [sym__vertical_tab] = ACTIONS(316),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(316),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(312),
    [sym__ascii_large] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(312),
    [anon_sym_POUND] = ACTIONS(312),
    [anon_sym_DOLLAR] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(312),
    [anon_sym_AMP] = ACTIONS(312),
    [anon_sym_1] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_LT] = ACTIONS(312),
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [anon_sym_QMARK] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_PIPE] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_TILDE] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_BQUOTE] = ACTIONS(312),
    [anon_sym_LBRACE] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [sym__space] = ACTIONS(312),
    [sym__newline] = ACTIONS(312),
    [sym__tab] = ACTIONS(312),
    [sym__vertical_tab] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(318),
  },
  [85] = {
    [sym_export_declaration] = STATE(101),
    [sym__identifier] = STATE(63),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [86] = {
    [anon_sym_where] = ACTIONS(320),
    [sym_comment] = ACTIONS(22),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(324),
    [sym_comment] = ACTIONS(22),
  },
  [88] = {
    [sym__identifier] = STATE(105),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(326),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [89] = {
    [sym__statement] = STATE(36),
    [sym_module] = STATE(12),
    [sym_import_declaration] = STATE(12),
    [sym__literal] = STATE(12),
    [sym__identifier] = STATE(12),
    [sym_reserved_identifier] = STATE(5),
    [sym_integer] = STATE(6),
    [sym_char] = STATE(6),
    [sym_string] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [90] = {
    [sym_import_specification] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_hiding] = ACTIONS(128),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(334),
    [anon_sym_case] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
    [anon_sym_deriving] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_else] = ACTIONS(332),
    [anon_sym_foreign] = ACTIONS(332),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_in] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_of] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [91] = {
    [sym__identifier] = STATE(108),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [92] = {
    [sym__identifier] = STATE(109),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_module] = ACTIONS(340),
    [anon_sym_where] = ACTIONS(340),
    [anon_sym_import] = ACTIONS(340),
    [sym_variable_identifier] = ACTIONS(342),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(342),
    [anon_sym_case] = ACTIONS(340),
    [anon_sym_class] = ACTIONS(340),
    [anon_sym_data] = ACTIONS(340),
    [anon_sym_default] = ACTIONS(340),
    [anon_sym_deriving] = ACTIONS(340),
    [anon_sym_do] = ACTIONS(340),
    [anon_sym_else] = ACTIONS(340),
    [anon_sym_foreign] = ACTIONS(340),
    [anon_sym_if] = ACTIONS(340),
    [anon_sym_in] = ACTIONS(340),
    [anon_sym_infix] = ACTIONS(340),
    [anon_sym_infixl] = ACTIONS(340),
    [anon_sym_infixr] = ACTIONS(340),
    [anon_sym_instance] = ACTIONS(340),
    [anon_sym_let] = ACTIONS(340),
    [anon_sym_newtype] = ACTIONS(340),
    [anon_sym_of] = ACTIONS(340),
    [anon_sym_then] = ACTIONS(340),
    [anon_sym_type] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(342),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [sym__integer_literal] = ACTIONS(340),
    [sym__octal_literal] = ACTIONS(340),
    [sym__hexidecimal_literal] = ACTIONS(340),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(22),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(332),
    [anon_sym_import] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(332),
    [sym_module_identifier] = ACTIONS(334),
    [anon_sym_case] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
    [anon_sym_deriving] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_else] = ACTIONS(332),
    [anon_sym_foreign] = ACTIONS(332),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_in] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_of] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [96] = {
    [aux_sym_import_specification_repeat1] = STATE(113),
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(22),
  },
  [97] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(350),
  },
  [98] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(352),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(354),
    [sym__ascii_large] = ACTIONS(354),
    [anon_sym_BANG] = ACTIONS(354),
    [anon_sym_POUND] = ACTIONS(354),
    [anon_sym_DOLLAR] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(354),
    [anon_sym_AMP] = ACTIONS(354),
    [anon_sym_1] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(354),
    [anon_sym_QMARK] = ACTIONS(354),
    [anon_sym_AT] = ACTIONS(354),
    [anon_sym_CARET] = ACTIONS(354),
    [anon_sym_PIPE] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(354),
    [anon_sym_TILDE] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_BSLASH] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [anon_sym_BQUOTE] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [sym__space] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
    [sym__tab] = ACTIONS(354),
    [sym__vertical_tab] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(354),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(356),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(356),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(356),
    [sym__ascii_large] = ACTIONS(356),
    [anon_sym_BANG] = ACTIONS(356),
    [anon_sym_POUND] = ACTIONS(356),
    [anon_sym_DOLLAR] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(356),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_1] = ACTIONS(356),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_QMARK] = ACTIONS(356),
    [anon_sym_AT] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [anon_sym_BQUOTE] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(356),
    [anon_sym_RBRACE] = ACTIONS(356),
    [sym__space] = ACTIONS(356),
    [sym__newline] = ACTIONS(356),
    [sym__tab] = ACTIONS(356),
    [sym__vertical_tab] = ACTIONS(356),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(356),
  },
  [101] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(22),
  },
  [102] = {
    [sym_export_declaration] = STATE(114),
    [sym__identifier] = STATE(63),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [103] = {
    [anon_sym_where] = ACTIONS(360),
    [sym_comment] = ACTIONS(22),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(22),
  },
  [105] = {
    [aux_sym_export_declaration_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(22),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
    [anon_sym_import] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(368),
    [sym_module_identifier] = ACTIONS(370),
    [anon_sym_case] = ACTIONS(368),
    [anon_sym_class] = ACTIONS(368),
    [anon_sym_data] = ACTIONS(368),
    [anon_sym_default] = ACTIONS(368),
    [anon_sym_deriving] = ACTIONS(368),
    [anon_sym_do] = ACTIONS(368),
    [anon_sym_else] = ACTIONS(368),
    [anon_sym_foreign] = ACTIONS(368),
    [anon_sym_if] = ACTIONS(368),
    [anon_sym_in] = ACTIONS(368),
    [anon_sym_infix] = ACTIONS(368),
    [anon_sym_infixl] = ACTIONS(368),
    [anon_sym_infixr] = ACTIONS(368),
    [anon_sym_instance] = ACTIONS(368),
    [anon_sym_let] = ACTIONS(368),
    [anon_sym_newtype] = ACTIONS(368),
    [anon_sym_of] = ACTIONS(368),
    [anon_sym_then] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [sym__integer_literal] = ACTIONS(368),
    [sym__octal_literal] = ACTIONS(368),
    [sym__hexidecimal_literal] = ACTIONS(368),
  },
  [107] = {
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_comment] = ACTIONS(22),
  },
  [108] = {
    [aux_sym_export_declaration_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_comment] = ACTIONS(22),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym_comment] = ACTIONS(22),
  },
  [110] = {
    [sym__identifier] = STATE(121),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_module] = ACTIONS(380),
    [anon_sym_where] = ACTIONS(380),
    [anon_sym_import] = ACTIONS(380),
    [sym_variable_identifier] = ACTIONS(382),
    [sym_constructor_identifier] = ACTIONS(380),
    [sym_module_identifier] = ACTIONS(382),
    [anon_sym_case] = ACTIONS(380),
    [anon_sym_class] = ACTIONS(380),
    [anon_sym_data] = ACTIONS(380),
    [anon_sym_default] = ACTIONS(380),
    [anon_sym_deriving] = ACTIONS(380),
    [anon_sym_do] = ACTIONS(380),
    [anon_sym_else] = ACTIONS(380),
    [anon_sym_foreign] = ACTIONS(380),
    [anon_sym_if] = ACTIONS(380),
    [anon_sym_in] = ACTIONS(380),
    [anon_sym_infix] = ACTIONS(380),
    [anon_sym_infixl] = ACTIONS(380),
    [anon_sym_infixr] = ACTIONS(380),
    [anon_sym_instance] = ACTIONS(380),
    [anon_sym_let] = ACTIONS(380),
    [anon_sym_newtype] = ACTIONS(380),
    [anon_sym_of] = ACTIONS(380),
    [anon_sym_then] = ACTIONS(380),
    [anon_sym_type] = ACTIONS(380),
    [anon_sym__] = ACTIONS(380),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(382),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [anon_sym_DQUOTE] = ACTIONS(378),
    [sym__integer_literal] = ACTIONS(380),
    [sym__octal_literal] = ACTIONS(380),
    [sym__hexidecimal_literal] = ACTIONS(380),
  },
  [112] = {
    [sym__identifier] = STATE(123),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(22),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(22),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(22),
  },
  [116] = {
    [sym__identifier] = STATE(125),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(394),
    [sym_comment] = ACTIONS(22),
  },
  [118] = {
    [aux_sym_import_specification_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(22),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(22),
  },
  [120] = {
    [sym__identifier] = STATE(132),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(22),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(22),
  },
  [123] = {
    [aux_sym_export_declaration_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(22),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_where] = ACTIONS(408),
    [anon_sym_import] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_constructor_identifier] = ACTIONS(408),
    [sym_module_identifier] = ACTIONS(410),
    [anon_sym_case] = ACTIONS(408),
    [anon_sym_class] = ACTIONS(408),
    [anon_sym_data] = ACTIONS(408),
    [anon_sym_default] = ACTIONS(408),
    [anon_sym_deriving] = ACTIONS(408),
    [anon_sym_do] = ACTIONS(408),
    [anon_sym_else] = ACTIONS(408),
    [anon_sym_foreign] = ACTIONS(408),
    [anon_sym_if] = ACTIONS(408),
    [anon_sym_in] = ACTIONS(408),
    [anon_sym_infix] = ACTIONS(408),
    [anon_sym_infixl] = ACTIONS(408),
    [anon_sym_infixr] = ACTIONS(408),
    [anon_sym_instance] = ACTIONS(408),
    [anon_sym_let] = ACTIONS(408),
    [anon_sym_newtype] = ACTIONS(408),
    [anon_sym_of] = ACTIONS(408),
    [anon_sym_then] = ACTIONS(408),
    [anon_sym_type] = ACTIONS(408),
    [anon_sym__] = ACTIONS(408),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(410),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [sym__integer_literal] = ACTIONS(408),
    [sym__octal_literal] = ACTIONS(408),
    [sym__hexidecimal_literal] = ACTIONS(408),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(22),
  },
  [126] = {
    [sym__identifier] = STATE(135),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(22),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_module] = ACTIONS(418),
    [anon_sym_where] = ACTIONS(418),
    [anon_sym_import] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_constructor_identifier] = ACTIONS(418),
    [sym_module_identifier] = ACTIONS(420),
    [anon_sym_case] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(418),
    [anon_sym_data] = ACTIONS(418),
    [anon_sym_default] = ACTIONS(418),
    [anon_sym_deriving] = ACTIONS(418),
    [anon_sym_do] = ACTIONS(418),
    [anon_sym_else] = ACTIONS(418),
    [anon_sym_foreign] = ACTIONS(418),
    [anon_sym_if] = ACTIONS(418),
    [anon_sym_in] = ACTIONS(418),
    [anon_sym_infix] = ACTIONS(418),
    [anon_sym_infixl] = ACTIONS(418),
    [anon_sym_infixr] = ACTIONS(418),
    [anon_sym_instance] = ACTIONS(418),
    [anon_sym_let] = ACTIONS(418),
    [anon_sym_newtype] = ACTIONS(418),
    [anon_sym_of] = ACTIONS(418),
    [anon_sym_then] = ACTIONS(418),
    [anon_sym_type] = ACTIONS(418),
    [anon_sym__] = ACTIONS(418),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(420),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [sym__integer_literal] = ACTIONS(418),
    [sym__octal_literal] = ACTIONS(418),
    [sym__hexidecimal_literal] = ACTIONS(418),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(22),
  },
  [130] = {
    [aux_sym_import_specification_repeat1] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(22),
  },
  [131] = {
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(22),
  },
  [132] = {
    [aux_sym_export_declaration_repeat1] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(22),
  },
  [133] = {
    [sym__identifier] = STATE(141),
    [sym_reserved_identifier] = STATE(5),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(426),
    [sym_variable_identifier] = ACTIONS(18),
    [sym_constructor_identifier] = ACTIONS(20),
    [sym_module_identifier] = ACTIONS(18),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_data] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(22),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(22),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(22),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(434),
    [anon_sym_where] = ACTIONS(434),
    [anon_sym_import] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(436),
    [sym_constructor_identifier] = ACTIONS(434),
    [sym_module_identifier] = ACTIONS(436),
    [anon_sym_case] = ACTIONS(434),
    [anon_sym_class] = ACTIONS(434),
    [anon_sym_data] = ACTIONS(434),
    [anon_sym_default] = ACTIONS(434),
    [anon_sym_deriving] = ACTIONS(434),
    [anon_sym_do] = ACTIONS(434),
    [anon_sym_else] = ACTIONS(434),
    [anon_sym_foreign] = ACTIONS(434),
    [anon_sym_if] = ACTIONS(434),
    [anon_sym_in] = ACTIONS(434),
    [anon_sym_infix] = ACTIONS(434),
    [anon_sym_infixl] = ACTIONS(434),
    [anon_sym_infixr] = ACTIONS(434),
    [anon_sym_instance] = ACTIONS(434),
    [anon_sym_let] = ACTIONS(434),
    [anon_sym_newtype] = ACTIONS(434),
    [anon_sym_of] = ACTIONS(434),
    [anon_sym_then] = ACTIONS(434),
    [anon_sym_type] = ACTIONS(434),
    [anon_sym__] = ACTIONS(434),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__integer_literal] = ACTIONS(434),
    [sym__octal_literal] = ACTIONS(434),
    [sym__hexidecimal_literal] = ACTIONS(434),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(22),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(22),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(22),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(22),
  },
  [141] = {
    [aux_sym_export_declaration_repeat1] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(22),
  },
  [142] = {
    [aux_sym_import_specification_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(22),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(446),
    [anon_sym_where] = ACTIONS(446),
    [anon_sym_import] = ACTIONS(446),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_constructor_identifier] = ACTIONS(446),
    [sym_module_identifier] = ACTIONS(448),
    [anon_sym_case] = ACTIONS(446),
    [anon_sym_class] = ACTIONS(446),
    [anon_sym_data] = ACTIONS(446),
    [anon_sym_default] = ACTIONS(446),
    [anon_sym_deriving] = ACTIONS(446),
    [anon_sym_do] = ACTIONS(446),
    [anon_sym_else] = ACTIONS(446),
    [anon_sym_foreign] = ACTIONS(446),
    [anon_sym_if] = ACTIONS(446),
    [anon_sym_in] = ACTIONS(446),
    [anon_sym_infix] = ACTIONS(446),
    [anon_sym_infixl] = ACTIONS(446),
    [anon_sym_infixr] = ACTIONS(446),
    [anon_sym_instance] = ACTIONS(446),
    [anon_sym_let] = ACTIONS(446),
    [anon_sym_newtype] = ACTIONS(446),
    [anon_sym_of] = ACTIONS(446),
    [anon_sym_then] = ACTIONS(446),
    [anon_sym_type] = ACTIONS(446),
    [anon_sym__] = ACTIONS(446),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym__integer_literal] = ACTIONS(446),
    [sym__octal_literal] = ACTIONS(446),
    [sym__hexidecimal_literal] = ACTIONS(446),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(22),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(452),
    [sym_comment] = ACTIONS(22),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(22),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(22),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_where] = ACTIONS(460),
    [anon_sym_import] = ACTIONS(460),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_constructor_identifier] = ACTIONS(460),
    [sym_module_identifier] = ACTIONS(462),
    [anon_sym_case] = ACTIONS(460),
    [anon_sym_class] = ACTIONS(460),
    [anon_sym_data] = ACTIONS(460),
    [anon_sym_default] = ACTIONS(460),
    [anon_sym_deriving] = ACTIONS(460),
    [anon_sym_do] = ACTIONS(460),
    [anon_sym_else] = ACTIONS(460),
    [anon_sym_foreign] = ACTIONS(460),
    [anon_sym_if] = ACTIONS(460),
    [anon_sym_in] = ACTIONS(460),
    [anon_sym_infix] = ACTIONS(460),
    [anon_sym_infixl] = ACTIONS(460),
    [anon_sym_infixr] = ACTIONS(460),
    [anon_sym_instance] = ACTIONS(460),
    [anon_sym_let] = ACTIONS(460),
    [anon_sym_newtype] = ACTIONS(460),
    [anon_sym_of] = ACTIONS(460),
    [anon_sym_then] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [anon_sym__] = ACTIONS(460),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym__integer_literal] = ACTIONS(460),
    [sym__octal_literal] = ACTIONS(460),
    [sym__hexidecimal_literal] = ACTIONS(460),
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
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
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
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(67),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [240] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
