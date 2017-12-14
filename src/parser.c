#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 154
#define SYMBOL_COUNT 153
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
  anon_sym_type = 11,
  anon_sym_EQ = 12,
  sym_variable_identifier = 13,
  sym_constructor_identifier = 14,
  sym_module_identifier = 15,
  anon_sym_case = 16,
  anon_sym_class = 17,
  anon_sym_data = 18,
  anon_sym_default = 19,
  anon_sym_deriving = 20,
  anon_sym_do = 21,
  anon_sym_else = 22,
  anon_sym_foreign = 23,
  anon_sym_if = 24,
  anon_sym_in = 25,
  anon_sym_infix = 26,
  anon_sym_infixl = 27,
  anon_sym_infixr = 28,
  anon_sym_instance = 29,
  anon_sym_let = 30,
  anon_sym_newtype = 31,
  anon_sym_of = 32,
  anon_sym_then = 33,
  anon_sym__ = 34,
  sym_comment = 35,
  sym_float = 36,
  anon_sym_SQUOTE = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 39,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 40,
  sym__ascii_large = 41,
  anon_sym_BANG = 42,
  anon_sym_POUND = 43,
  anon_sym_DOLLAR = 44,
  anon_sym_PERCENT = 45,
  anon_sym_AMP = 46,
  anon_sym_1 = 47,
  anon_sym_PLUS = 48,
  anon_sym_DOT = 49,
  anon_sym_SLASH = 50,
  anon_sym_LT = 51,
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
  sym__top_level_declaration = 128,
  sym_type_statement = 129,
  sym__literal = 130,
  sym__identifier = 131,
  sym_reserved_identifier = 132,
  sym_integer = 133,
  sym_char = 134,
  sym_string = 135,
  sym__gap = 136,
  sym__graphic = 137,
  sym__small = 138,
  sym__large = 139,
  sym__symbol = 140,
  sym__special = 141,
  sym__escape = 142,
  sym__char_escape = 143,
  sym__ascii = 144,
  sym__cntrl = 145,
  aux_sym_program_repeat1 = 146,
  aux_sym_module_export_declarations_repeat1 = 147,
  aux_sym_export_declaration_repeat1 = 148,
  aux_sym_import_specification_repeat1 = 149,
  aux_sym_string_repeat1 = 150,
  aux_sym__escape_repeat1 = 151,
  aux_sym__escape_repeat2 = 152,
  alias_sym_module_body = 153,
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
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
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
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_type_statement] = "type_statement",
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type_statement] = {
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
      if (lookahead == '=')
        ADVANCE(22);
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
      if (lookahead == '=')
        ADVANCE(22);
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
      if (lookahead == '=')
        ADVANCE(22);
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
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(340);
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
        ADVANCE(341);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 'q')
        ADVANCE(342);
      if (lookahead == 't')
        ADVANCE(351);
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
        ADVANCE(338);
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
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'h')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 339:
      if (lookahead == '\n')
        ADVANCE(326);
      if (lookahead == '\r')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(340);
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
        ADVANCE(341);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 'q')
        ADVANCE(342);
      if (lookahead == 't')
        ADVANCE(351);
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
    case 340:
      if (lookahead == 'n')
        SKIP(325);
      END_STATE();
    case 341:
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
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'u')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'a')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      if (lookahead == 'f')
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
      if (lookahead == 'i')
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
      if (lookahead == 'e')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'h')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 352:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(357);
      if (lookahead == '\\')
        SKIP(358);
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
        ADVANCE(341);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(351);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(352);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 353:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(353);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '.')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(355);
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
        ADVANCE(338);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(353);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 356:
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\r')
        ADVANCE(356);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(357);
      if (lookahead == '\\')
        SKIP(358);
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
        ADVANCE(341);
      if (lookahead == 'l')
        ADVANCE(274);
      if (lookahead == 'n')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(290);
      if (lookahead == 't')
        ADVANCE(351);
      if (lookahead == 'w')
        ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(352);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 357:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 358:
      if (lookahead == 'n')
        SKIP(352);
      END_STATE();
    case 359:
      if (lookahead == '\t')
        SKIP(359);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 360:
      if (lookahead == '\t')
        ADVANCE(360);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(360);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 365:
      if (lookahead == '\t')
        SKIP(359);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 366:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(369);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 369:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(369);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 370:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(381);
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
        SKIP(382);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(383);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(385);
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
        SKIP(370);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 371:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(371);
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
        ADVANCE(372);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'a')
        ADVANCE(373);
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'f')
        ADVANCE(151);
      if (lookahead == 'h')
        ADVANCE(375);
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
        ADVANCE(371);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 's')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'd')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'n')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == 'g')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      END_STATE();
    case 381:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '\r')
        ADVANCE(381);
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
        SKIP(382);
      if (lookahead == '_')
        ADVANCE(217);
      if (lookahead == 'a')
        ADVANCE(383);
      if (lookahead == 'c')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'f')
        ADVANCE(248);
      if (lookahead == 'h')
        ADVANCE(385);
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
        SKIP(370);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 382:
      if (lookahead == 'n')
        SKIP(370);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 's')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 391:
      if (lookahead == '\n')
        ADVANCE(392);
      if (lookahead == '\r')
        ADVANCE(395);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        SKIP(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(394);
      END_STATE();
    case 392:
      if (lookahead == '\n')
        ADVANCE(392);
      if (lookahead == '\r')
        ADVANCE(392);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 395:
      if (lookahead == '\n')
        ADVANCE(392);
      if (lookahead == '\r')
        ADVANCE(395);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        SKIP(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(394);
      END_STATE();
    case 396:
      if (lookahead == 'n')
        SKIP(391);
      END_STATE();
    case 397:
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == 'A')
        ADVANCE(450);
      if (lookahead == 'B')
        ADVANCE(452);
      if (lookahead == 'C')
        ADVANCE(454);
      if (lookahead == 'D')
        ADVANCE(456);
      if (lookahead == 'E')
        ADVANCE(460);
      if (lookahead == 'F')
        ADVANCE(465);
      if (lookahead == 'G')
        ADVANCE(466);
      if (lookahead == 'H')
        ADVANCE(467);
      if (lookahead == 'L')
        ADVANCE(468);
      if (lookahead == 'N')
        ADVANCE(469);
      if (lookahead == 'O')
        ADVANCE(438);
      if (lookahead == 'R')
        ADVANCE(470);
      if (lookahead == 'S')
        ADVANCE(471);
      if (lookahead == 'U')
        ADVANCE(472);
      if (lookahead == 'V')
        ADVANCE(473);
      if (lookahead == 'X')
        ADVANCE(443);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'b')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(397);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(364);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(398);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == 'A')
        ADVANCE(399);
      if (lookahead == 'B')
        ADVANCE(402);
      if (lookahead == 'C')
        ADVANCE(406);
      if (lookahead == 'D')
        ADVANCE(410);
      if (lookahead == 'E')
        ADVANCE(420);
      if (lookahead == 'F')
        ADVANCE(431);
      if (lookahead == 'G')
        ADVANCE(434);
      if (lookahead == 'H')
        ADVANCE(435);
      if (lookahead == 'L')
        ADVANCE(436);
      if (lookahead == 'N')
        ADVANCE(437);
      if (lookahead == 'O')
        ADVANCE(438);
      if (lookahead == 'R')
        ADVANCE(439);
      if (lookahead == 'S')
        ADVANCE(440);
      if (lookahead == 'U')
        ADVANCE(441);
      if (lookahead == 'V')
        ADVANCE(442);
      if (lookahead == 'X')
        ADVANCE(443);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'b')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'K')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(403);
      if (lookahead == 'S')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(407);
      if (lookahead == 'R')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'N')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(411);
      if (lookahead == 'E')
        ADVANCE(416);
      if (lookahead == 'L')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '1')
        ADVANCE(412);
      if (lookahead == '2')
        ADVANCE(413);
      if (lookahead == '3')
        ADVANCE(414);
      if (lookahead == '4')
        ADVANCE(415);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 416:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'M')
        ADVANCE(421);
      if (lookahead == 'N')
        ADVANCE(422);
      if (lookahead == 'O')
        ADVANCE(424);
      if (lookahead == 'S')
        ADVANCE(426);
      if (lookahead == 'T')
        ADVANCE(428);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 422:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'Q')
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 424:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(425);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'B')
        ADVANCE(429);
      if (lookahead == 'X')
        ADVANCE(430);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 431:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(432);
      if (lookahead == 'S')
        ADVANCE(433);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 434:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 435:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 436:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 437:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 439:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 440:
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
    case 441:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 442:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 449:
      if (lookahead == '\n')
        ADVANCE(398);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == 'A')
        ADVANCE(450);
      if (lookahead == 'B')
        ADVANCE(452);
      if (lookahead == 'C')
        ADVANCE(454);
      if (lookahead == 'D')
        ADVANCE(456);
      if (lookahead == 'E')
        ADVANCE(460);
      if (lookahead == 'F')
        ADVANCE(465);
      if (lookahead == 'G')
        ADVANCE(466);
      if (lookahead == 'H')
        ADVANCE(467);
      if (lookahead == 'L')
        ADVANCE(468);
      if (lookahead == 'N')
        ADVANCE(469);
      if (lookahead == 'O')
        ADVANCE(438);
      if (lookahead == 'R')
        ADVANCE(470);
      if (lookahead == 'S')
        ADVANCE(471);
      if (lookahead == 'U')
        ADVANCE(472);
      if (lookahead == 'V')
        ADVANCE(473);
      if (lookahead == 'X')
        ADVANCE(443);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'b')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(397);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(364);
      END_STATE();
    case 450:
      if (lookahead == 'C')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'K')
        ADVANCE(401);
      END_STATE();
    case 452:
      if (lookahead == 'E')
        ADVANCE(453);
      if (lookahead == 'S')
        ADVANCE(405);
      END_STATE();
    case 453:
      if (lookahead == 'L')
        ADVANCE(404);
      END_STATE();
    case 454:
      if (lookahead == 'A')
        ADVANCE(455);
      if (lookahead == 'R')
        ADVANCE(409);
      END_STATE();
    case 455:
      if (lookahead == 'N')
        ADVANCE(408);
      END_STATE();
    case 456:
      if (lookahead == 'C')
        ADVANCE(457);
      if (lookahead == 'E')
        ADVANCE(458);
      if (lookahead == 'L')
        ADVANCE(459);
      END_STATE();
    case 457:
      if (lookahead == '1')
        ADVANCE(412);
      if (lookahead == '2')
        ADVANCE(413);
      if (lookahead == '3')
        ADVANCE(414);
      if (lookahead == '4')
        ADVANCE(415);
      END_STATE();
    case 458:
      if (lookahead == 'L')
        ADVANCE(417);
      END_STATE();
    case 459:
      if (lookahead == 'E')
        ADVANCE(419);
      END_STATE();
    case 460:
      if (lookahead == 'M')
        ADVANCE(421);
      if (lookahead == 'N')
        ADVANCE(461);
      if (lookahead == 'O')
        ADVANCE(462);
      if (lookahead == 'S')
        ADVANCE(463);
      if (lookahead == 'T')
        ADVANCE(464);
      END_STATE();
    case 461:
      if (lookahead == 'Q')
        ADVANCE(423);
      END_STATE();
    case 462:
      if (lookahead == 'T')
        ADVANCE(425);
      END_STATE();
    case 463:
      if (lookahead == 'C')
        ADVANCE(427);
      END_STATE();
    case 464:
      if (lookahead == 'B')
        ADVANCE(429);
      if (lookahead == 'X')
        ADVANCE(430);
      END_STATE();
    case 465:
      if (lookahead == 'F')
        ADVANCE(432);
      if (lookahead == 'S')
        ADVANCE(433);
      END_STATE();
    case 466:
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 467:
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 468:
      if (lookahead == 'F')
        ADVANCE(31);
      END_STATE();
    case 469:
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 470:
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 471:
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
    case 472:
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 473:
      if (lookahead == 'T')
        ADVANCE(58);
      END_STATE();
    case 474:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(476);
      if (lookahead == 'B')
        ADVANCE(477);
      if (lookahead == 'C')
        ADVANCE(478);
      if (lookahead == 'D')
        ADVANCE(479);
      if (lookahead == 'E')
        ADVANCE(480);
      if (lookahead == 'F')
        ADVANCE(481);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(438);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(443);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'b')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(448);
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
        ADVANCE(364);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 475:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(476);
      if (lookahead == 'B')
        ADVANCE(477);
      if (lookahead == 'C')
        ADVANCE(478);
      if (lookahead == 'D')
        ADVANCE(479);
      if (lookahead == 'E')
        ADVANCE(480);
      if (lookahead == 'F')
        ADVANCE(481);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(438);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(443);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead == 'b')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(447);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(448);
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
        ADVANCE(364);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(451);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(453);
      if (lookahead == 'S')
        ADVANCE(405);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(455);
      if (lookahead == 'R')
        ADVANCE(409);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(457);
      if (lookahead == 'E')
        ADVANCE(458);
      if (lookahead == 'L')
        ADVANCE(459);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(421);
      if (lookahead == 'N')
        ADVANCE(461);
      if (lookahead == 'O')
        ADVANCE(462);
      if (lookahead == 'S')
        ADVANCE(463);
      if (lookahead == 'T')
        ADVANCE(464);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(432);
      if (lookahead == 'S')
        ADVANCE(433);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(363);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(486);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(485);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(488);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(486);
      if (lookahead == '\r')
        ADVANCE(486);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(487);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(488);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 487:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 489:
      if (lookahead == '\n')
        ADVANCE(486);
      if (lookahead == '\r')
        ADVANCE(489);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(485);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(488);
      END_STATE();
    case 490:
      if (lookahead == 'n')
        SKIP(485);
      END_STATE();
    case 491:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(494);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(495);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(491);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(492);
      if (lookahead == '\r')
        ADVANCE(494);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '\\')
        SKIP(495);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(491);
      END_STATE();
    case 495:
      if (lookahead == 'n')
        SKIP(491);
      END_STATE();
    case 496:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(499);
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
        SKIP(500);
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
        ADVANCE(385);
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
        SKIP(496);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 497:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
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
        ADVANCE(498);
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
        ADVANCE(375);
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
        ADVANCE(497);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(207);
      ADVANCE(38);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(497);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 499:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(499);
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
        SKIP(500);
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
        ADVANCE(385);
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
        SKIP(496);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(304);
      END_STATE();
    case 500:
      if (lookahead == 'n')
        SKIP(496);
      END_STATE();
    case 501:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 502:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(361);
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
        ADVANCE(362);
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
        ADVANCE(363);
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
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(364);
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
  [5] = {.lex_state = 352},
  [6] = {.lex_state = 320},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 359},
  [9] = {.lex_state = 366},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 306},
  [17] = {.lex_state = 370},
  [18] = {.lex_state = 352},
  [19] = {.lex_state = 370},
  [20] = {.lex_state = 370},
  [21] = {.lex_state = 391},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 397},
  [29] = {.lex_state = 366},
  [30] = {.lex_state = 366},
  [31] = {.lex_state = 366},
  [32] = {.lex_state = 366},
  [33] = {.lex_state = 106},
  [34] = {.lex_state = 366},
  [35] = {.lex_state = 366},
  [36] = {.lex_state = 474},
  [37] = {.lex_state = 366},
  [38] = {.lex_state = 366},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 352},
  [42] = {.lex_state = 306},
  [43] = {.lex_state = 370},
  [44] = {.lex_state = 352},
  [45] = {.lex_state = 352},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 352},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 482},
  [53] = {.lex_state = 391},
  [54] = {.lex_state = 485},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 366},
  [57] = {.lex_state = 366},
  [58] = {.lex_state = 482},
  [59] = {.lex_state = 391},
  [60] = {.lex_state = 485},
  [61] = {.lex_state = 366},
  [62] = {.lex_state = 366},
  [63] = {.lex_state = 106},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 306},
  [66] = {.lex_state = 491},
  [67] = {.lex_state = 491},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 352},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 106},
  [72] = {.lex_state = 491},
  [73] = {.lex_state = 496},
  [74] = {.lex_state = 496},
  [75] = {.lex_state = 496},
  [76] = {.lex_state = 352},
  [77] = {.lex_state = 106},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 391},
  [81] = {.lex_state = 391},
  [82] = {.lex_state = 485},
  [83] = {.lex_state = 485},
  [84] = {.lex_state = 366},
  [85] = {.lex_state = 366},
  [86] = {.lex_state = 366},
  [87] = {.lex_state = 366},
  [88] = {.lex_state = 501},
  [89] = {.lex_state = 501},
  [90] = {.lex_state = 352},
  [91] = {.lex_state = 306},
  [92] = {.lex_state = 491},
  [93] = {.lex_state = 352},
  [94] = {.lex_state = 106},
  [95] = {.lex_state = 496},
  [96] = {.lex_state = 352},
  [97] = {.lex_state = 352},
  [98] = {.lex_state = 106},
  [99] = {.lex_state = 491},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 491},
  [102] = {.lex_state = 391},
  [103] = {.lex_state = 485},
  [104] = {.lex_state = 366},
  [105] = {.lex_state = 501},
  [106] = {.lex_state = 491},
  [107] = {.lex_state = 352},
  [108] = {.lex_state = 306},
  [109] = {.lex_state = 306},
  [110] = {.lex_state = 491},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 306},
  [113] = {.lex_state = 491},
  [114] = {.lex_state = 491},
  [115] = {.lex_state = 352},
  [116] = {.lex_state = 106},
  [117] = {.lex_state = 352},
  [118] = {.lex_state = 491},
  [119] = {.lex_state = 491},
  [120] = {.lex_state = 491},
  [121] = {.lex_state = 352},
  [122] = {.lex_state = 491},
  [123] = {.lex_state = 491},
  [124] = {.lex_state = 491},
  [125] = {.lex_state = 352},
  [126] = {.lex_state = 491},
  [127] = {.lex_state = 306},
  [128] = {.lex_state = 491},
  [129] = {.lex_state = 106},
  [130] = {.lex_state = 491},
  [131] = {.lex_state = 352},
  [132] = {.lex_state = 491},
  [133] = {.lex_state = 106},
  [134] = {.lex_state = 491},
  [135] = {.lex_state = 491},
  [136] = {.lex_state = 306},
  [137] = {.lex_state = 491},
  [138] = {.lex_state = 352},
  [139] = {.lex_state = 491},
  [140] = {.lex_state = 491},
  [141] = {.lex_state = 106},
  [142] = {.lex_state = 491},
  [143] = {.lex_state = 491},
  [144] = {.lex_state = 491},
  [145] = {.lex_state = 306},
  [146] = {.lex_state = 491},
  [147] = {.lex_state = 491},
  [148] = {.lex_state = 106},
  [149] = {.lex_state = 491},
  [150] = {.lex_state = 491},
  [151] = {.lex_state = 491},
  [152] = {.lex_state = 491},
  [153] = {.lex_state = 106},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_program] = STATE(11),
    [sym__statement] = STATE(12),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(34),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [anon_sym_EQ] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(40),
    [anon_sym_case] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(38),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_deriving] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_foreign] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_infix] = ACTIONS(38),
    [anon_sym_infixl] = ACTIONS(38),
    [anon_sym_infixr] = ACTIONS(38),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_let] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_of] = ACTIONS(38),
    [anon_sym_then] = ACTIONS(38),
    [anon_sym__] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [4] = {
    [sym__identifier] = STATE(20),
    [sym_reserved_identifier] = STATE(19),
    [anon_sym_where] = ACTIONS(42),
    [anon_sym_qualified] = ACTIONS(44),
    [sym_variable_identifier] = ACTIONS(46),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(46),
    [anon_sym_case] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(42),
    [anon_sym_default] = ACTIONS(42),
    [anon_sym_deriving] = ACTIONS(42),
    [anon_sym_do] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [anon_sym_foreign] = ACTIONS(42),
    [anon_sym_if] = ACTIONS(42),
    [anon_sym_in] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_instance] = ACTIONS(42),
    [anon_sym_let] = ACTIONS(42),
    [anon_sym_newtype] = ACTIONS(42),
    [anon_sym_of] = ACTIONS(42),
    [anon_sym_then] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [sym__identifier] = STATE(21),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_module] = ACTIONS(52),
    [anon_sym_where] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_type] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(54),
    [anon_sym_case] = ACTIONS(52),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_data] = ACTIONS(52),
    [anon_sym_default] = ACTIONS(52),
    [anon_sym_deriving] = ACTIONS(52),
    [anon_sym_do] = ACTIONS(52),
    [anon_sym_else] = ACTIONS(52),
    [anon_sym_foreign] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_in] = ACTIONS(52),
    [anon_sym_infix] = ACTIONS(52),
    [anon_sym_infixl] = ACTIONS(52),
    [anon_sym_infixr] = ACTIONS(52),
    [anon_sym_instance] = ACTIONS(52),
    [anon_sym_let] = ACTIONS(52),
    [anon_sym_newtype] = ACTIONS(52),
    [anon_sym_of] = ACTIONS(52),
    [anon_sym_then] = ACTIONS(52),
    [anon_sym__] = ACTIONS(52),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym__integer_literal] = ACTIONS(52),
    [sym__octal_literal] = ACTIONS(52),
    [sym__hexidecimal_literal] = ACTIONS(52),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_module] = ACTIONS(58),
    [anon_sym_where] = ACTIONS(58),
    [anon_sym_import] = ACTIONS(58),
    [anon_sym_type] = ACTIONS(58),
    [sym_variable_identifier] = ACTIONS(60),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(60),
    [anon_sym_case] = ACTIONS(58),
    [anon_sym_class] = ACTIONS(58),
    [anon_sym_data] = ACTIONS(58),
    [anon_sym_default] = ACTIONS(58),
    [anon_sym_deriving] = ACTIONS(58),
    [anon_sym_do] = ACTIONS(58),
    [anon_sym_else] = ACTIONS(58),
    [anon_sym_foreign] = ACTIONS(58),
    [anon_sym_if] = ACTIONS(58),
    [anon_sym_in] = ACTIONS(58),
    [anon_sym_infix] = ACTIONS(58),
    [anon_sym_infixl] = ACTIONS(58),
    [anon_sym_infixr] = ACTIONS(58),
    [anon_sym_instance] = ACTIONS(58),
    [anon_sym_let] = ACTIONS(58),
    [anon_sym_newtype] = ACTIONS(58),
    [anon_sym_of] = ACTIONS(58),
    [anon_sym_then] = ACTIONS(58),
    [anon_sym__] = ACTIONS(58),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [8] = {
    [sym__graphic] = STATE(25),
    [sym__small] = STATE(26),
    [sym__large] = STATE(26),
    [sym__symbol] = STATE(26),
    [sym__special] = STATE(26),
    [sym__escape] = STATE(25),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(68),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(70),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(66),
    [sym__ascii_large] = ACTIONS(72),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_POUND] = ACTIONS(64),
    [anon_sym_DOLLAR] = ACTIONS(64),
    [anon_sym_PERCENT] = ACTIONS(64),
    [anon_sym_AMP] = ACTIONS(64),
    [anon_sym_1] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(64),
    [anon_sym_SLASH] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_QMARK] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_CARET] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(64),
    [anon_sym_BSLASH] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_BQUOTE] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [sym__space] = ACTIONS(68),
  },
  [9] = {
    [sym__gap] = STATE(32),
    [sym__graphic] = STATE(32),
    [sym__small] = STATE(34),
    [sym__large] = STATE(34),
    [sym__symbol] = STATE(34),
    [sym__special] = STATE(34),
    [sym__escape] = STATE(32),
    [aux_sym_string_repeat1] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym__] = ACTIONS(80),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(80),
    [sym__ascii_large] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [sym__space] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
    [sym__tab] = ACTIONS(92),
    [sym__vertical_tab] = ACTIONS(92),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_module] = ACTIONS(96),
    [anon_sym_where] = ACTIONS(96),
    [anon_sym_import] = ACTIONS(96),
    [anon_sym_type] = ACTIONS(96),
    [sym_variable_identifier] = ACTIONS(98),
    [sym_constructor_identifier] = ACTIONS(96),
    [sym_module_identifier] = ACTIONS(98),
    [anon_sym_case] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(96),
    [anon_sym_data] = ACTIONS(96),
    [anon_sym_default] = ACTIONS(96),
    [anon_sym_deriving] = ACTIONS(96),
    [anon_sym_do] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(96),
    [anon_sym_foreign] = ACTIONS(96),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_in] = ACTIONS(96),
    [anon_sym_infix] = ACTIONS(96),
    [anon_sym_infixl] = ACTIONS(96),
    [anon_sym_infixr] = ACTIONS(96),
    [anon_sym_instance] = ACTIONS(96),
    [anon_sym_let] = ACTIONS(96),
    [anon_sym_newtype] = ACTIONS(96),
    [anon_sym_of] = ACTIONS(96),
    [anon_sym_then] = ACTIONS(96),
    [anon_sym__] = ACTIONS(96),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym__integer_literal] = ACTIONS(96),
    [sym__octal_literal] = ACTIONS(96),
    [sym__hexidecimal_literal] = ACTIONS(96),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(102),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(106),
    [anon_sym_where] = ACTIONS(106),
    [anon_sym_import] = ACTIONS(106),
    [anon_sym_type] = ACTIONS(106),
    [sym_variable_identifier] = ACTIONS(108),
    [sym_constructor_identifier] = ACTIONS(106),
    [sym_module_identifier] = ACTIONS(108),
    [anon_sym_case] = ACTIONS(106),
    [anon_sym_class] = ACTIONS(106),
    [anon_sym_data] = ACTIONS(106),
    [anon_sym_default] = ACTIONS(106),
    [anon_sym_deriving] = ACTIONS(106),
    [anon_sym_do] = ACTIONS(106),
    [anon_sym_else] = ACTIONS(106),
    [anon_sym_foreign] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(106),
    [anon_sym_in] = ACTIONS(106),
    [anon_sym_infix] = ACTIONS(106),
    [anon_sym_infixl] = ACTIONS(106),
    [anon_sym_infixr] = ACTIONS(106),
    [anon_sym_instance] = ACTIONS(106),
    [anon_sym_let] = ACTIONS(106),
    [anon_sym_newtype] = ACTIONS(106),
    [anon_sym_of] = ACTIONS(106),
    [anon_sym_then] = ACTIONS(106),
    [anon_sym__] = ACTIONS(106),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [sym__integer_literal] = ACTIONS(106),
    [sym__octal_literal] = ACTIONS(106),
    [sym__hexidecimal_literal] = ACTIONS(106),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_module] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_import] = ACTIONS(112),
    [anon_sym_type] = ACTIONS(112),
    [sym_variable_identifier] = ACTIONS(114),
    [sym_constructor_identifier] = ACTIONS(112),
    [sym_module_identifier] = ACTIONS(114),
    [anon_sym_case] = ACTIONS(112),
    [anon_sym_class] = ACTIONS(112),
    [anon_sym_data] = ACTIONS(112),
    [anon_sym_default] = ACTIONS(112),
    [anon_sym_deriving] = ACTIONS(112),
    [anon_sym_do] = ACTIONS(112),
    [anon_sym_else] = ACTIONS(112),
    [anon_sym_foreign] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_in] = ACTIONS(112),
    [anon_sym_infix] = ACTIONS(112),
    [anon_sym_infixl] = ACTIONS(112),
    [anon_sym_infixr] = ACTIONS(112),
    [anon_sym_instance] = ACTIONS(112),
    [anon_sym_let] = ACTIONS(112),
    [anon_sym_newtype] = ACTIONS(112),
    [anon_sym_of] = ACTIONS(112),
    [anon_sym_then] = ACTIONS(112),
    [anon_sym__] = ACTIONS(112),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym__integer_literal] = ACTIONS(112),
    [sym__octal_literal] = ACTIONS(112),
    [sym__hexidecimal_literal] = ACTIONS(112),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_module] = ACTIONS(118),
    [anon_sym_where] = ACTIONS(118),
    [anon_sym_import] = ACTIONS(118),
    [anon_sym_type] = ACTIONS(118),
    [sym_variable_identifier] = ACTIONS(120),
    [sym_constructor_identifier] = ACTIONS(118),
    [sym_module_identifier] = ACTIONS(120),
    [anon_sym_case] = ACTIONS(118),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_data] = ACTIONS(118),
    [anon_sym_default] = ACTIONS(118),
    [anon_sym_deriving] = ACTIONS(118),
    [anon_sym_do] = ACTIONS(118),
    [anon_sym_else] = ACTIONS(118),
    [anon_sym_foreign] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_in] = ACTIONS(118),
    [anon_sym_infix] = ACTIONS(118),
    [anon_sym_infixl] = ACTIONS(118),
    [anon_sym_infixr] = ACTIONS(118),
    [anon_sym_instance] = ACTIONS(118),
    [anon_sym_let] = ACTIONS(118),
    [anon_sym_newtype] = ACTIONS(118),
    [anon_sym_of] = ACTIONS(118),
    [anon_sym_then] = ACTIONS(118),
    [anon_sym__] = ACTIONS(118),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym__integer_literal] = ACTIONS(118),
    [sym__octal_literal] = ACTIONS(118),
    [sym__hexidecimal_literal] = ACTIONS(118),
  },
  [15] = {
    [sym__statement] = STATE(39),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [16] = {
    [sym_module_export_declarations] = STATE(42),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_as] = ACTIONS(38),
    [anon_sym_hiding] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(40),
    [anon_sym_case] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(38),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_deriving] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_foreign] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_infix] = ACTIONS(38),
    [anon_sym_infixl] = ACTIONS(38),
    [anon_sym_infixr] = ACTIONS(38),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_let] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_of] = ACTIONS(38),
    [anon_sym_then] = ACTIONS(38),
    [anon_sym__] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [18] = {
    [sym__identifier] = STATE(43),
    [sym_reserved_identifier] = STATE(19),
    [anon_sym_where] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(46),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(46),
    [anon_sym_case] = ACTIONS(42),
    [anon_sym_class] = ACTIONS(42),
    [anon_sym_data] = ACTIONS(42),
    [anon_sym_default] = ACTIONS(42),
    [anon_sym_deriving] = ACTIONS(42),
    [anon_sym_do] = ACTIONS(42),
    [anon_sym_else] = ACTIONS(42),
    [anon_sym_foreign] = ACTIONS(42),
    [anon_sym_if] = ACTIONS(42),
    [anon_sym_in] = ACTIONS(42),
    [anon_sym_infix] = ACTIONS(42),
    [anon_sym_infixl] = ACTIONS(42),
    [anon_sym_infixr] = ACTIONS(42),
    [anon_sym_instance] = ACTIONS(42),
    [anon_sym_let] = ACTIONS(42),
    [anon_sym_newtype] = ACTIONS(42),
    [anon_sym_of] = ACTIONS(42),
    [anon_sym_then] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_module] = ACTIONS(52),
    [anon_sym_where] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_as] = ACTIONS(52),
    [anon_sym_hiding] = ACTIONS(52),
    [anon_sym_type] = ACTIONS(52),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(54),
    [anon_sym_case] = ACTIONS(52),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_data] = ACTIONS(52),
    [anon_sym_default] = ACTIONS(52),
    [anon_sym_deriving] = ACTIONS(52),
    [anon_sym_do] = ACTIONS(52),
    [anon_sym_else] = ACTIONS(52),
    [anon_sym_foreign] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_in] = ACTIONS(52),
    [anon_sym_infix] = ACTIONS(52),
    [anon_sym_infixl] = ACTIONS(52),
    [anon_sym_infixr] = ACTIONS(52),
    [anon_sym_instance] = ACTIONS(52),
    [anon_sym_let] = ACTIONS(52),
    [anon_sym_newtype] = ACTIONS(52),
    [anon_sym_of] = ACTIONS(52),
    [anon_sym_then] = ACTIONS(52),
    [anon_sym__] = ACTIONS(52),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym__integer_literal] = ACTIONS(52),
    [sym__octal_literal] = ACTIONS(52),
    [sym__hexidecimal_literal] = ACTIONS(52),
  },
  [20] = {
    [sym_import_specification] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(130),
    [anon_sym_where] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(130),
    [anon_sym_as] = ACTIONS(134),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(130),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(130),
    [sym_module_identifier] = ACTIONS(138),
    [anon_sym_case] = ACTIONS(130),
    [anon_sym_class] = ACTIONS(130),
    [anon_sym_data] = ACTIONS(130),
    [anon_sym_default] = ACTIONS(130),
    [anon_sym_deriving] = ACTIONS(130),
    [anon_sym_do] = ACTIONS(130),
    [anon_sym_else] = ACTIONS(130),
    [anon_sym_foreign] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(130),
    [anon_sym_in] = ACTIONS(130),
    [anon_sym_infix] = ACTIONS(130),
    [anon_sym_infixl] = ACTIONS(130),
    [anon_sym_infixr] = ACTIONS(130),
    [anon_sym_instance] = ACTIONS(130),
    [anon_sym_let] = ACTIONS(130),
    [anon_sym_newtype] = ACTIONS(130),
    [anon_sym_of] = ACTIONS(130),
    [anon_sym_then] = ACTIONS(130),
    [anon_sym__] = ACTIONS(130),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [sym__integer_literal] = ACTIONS(130),
    [sym__octal_literal] = ACTIONS(130),
    [sym__hexidecimal_literal] = ACTIONS(130),
  },
  [21] = {
    [anon_sym_EQ] = ACTIONS(140),
    [sym_comment] = ACTIONS(24),
  },
  [22] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(142),
  },
  [23] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(144),
  },
  [24] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(146),
  },
  [25] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(148),
  },
  [26] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(150),
  },
  [27] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(152),
  },
  [28] = {
    [sym__char_escape] = STATE(51),
    [sym__ascii] = STATE(51),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(156),
    [anon_sym_AMP] = ACTIONS(154),
    [anon_sym_CARET] = ACTIONS(158),
    [anon_sym_BSLASH] = ACTIONS(154),
    [anon_sym_x] = ACTIONS(160),
    [anon_sym_X] = ACTIONS(160),
    [anon_sym_o] = ACTIONS(162),
    [anon_sym_O] = ACTIONS(162),
    [anon_sym_a] = ACTIONS(154),
    [anon_sym_b] = ACTIONS(154),
    [anon_sym_f] = ACTIONS(154),
    [anon_sym_n] = ACTIONS(154),
    [anon_sym_r] = ACTIONS(154),
    [anon_sym_t] = ACTIONS(154),
    [anon_sym_v] = ACTIONS(154),
    [anon_sym_NUL] = ACTIONS(164),
    [anon_sym_SOH] = ACTIONS(164),
    [anon_sym_STX] = ACTIONS(164),
    [anon_sym_ETX] = ACTIONS(164),
    [anon_sym_EOT] = ACTIONS(164),
    [anon_sym_ENQ] = ACTIONS(164),
    [anon_sym_ACK] = ACTIONS(164),
    [anon_sym_BEL] = ACTIONS(164),
    [anon_sym_BS] = ACTIONS(164),
    [anon_sym_HT] = ACTIONS(164),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_VT] = ACTIONS(164),
    [anon_sym_FF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SO] = ACTIONS(164),
    [anon_sym_SI] = ACTIONS(164),
    [anon_sym_DLE] = ACTIONS(164),
    [anon_sym_DC1] = ACTIONS(164),
    [anon_sym_DC2] = ACTIONS(164),
    [anon_sym_DC3] = ACTIONS(164),
    [anon_sym_DC4] = ACTIONS(164),
    [anon_sym_NAK] = ACTIONS(164),
    [anon_sym_SYN] = ACTIONS(164),
    [anon_sym_ETB] = ACTIONS(164),
    [anon_sym_CAN] = ACTIONS(164),
    [anon_sym_EM] = ACTIONS(164),
    [anon_sym_SUB] = ACTIONS(164),
    [anon_sym_ESC] = ACTIONS(164),
    [anon_sym_FS] = ACTIONS(164),
    [anon_sym_GS] = ACTIONS(164),
    [anon_sym_RS] = ACTIONS(164),
    [anon_sym_US] = ACTIONS(164),
    [anon_sym_SP] = ACTIONS(164),
    [anon_sym_DEL] = ACTIONS(164),
  },
  [29] = {
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_EQ] = ACTIONS(166),
    [anon_sym__] = ACTIONS(166),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(166),
    [sym__ascii_large] = ACTIONS(166),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(166),
    [anon_sym_DOLLAR] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_1] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_QMARK] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_COLON] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [sym__space] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
    [sym__tab] = ACTIONS(166),
    [sym__vertical_tab] = ACTIONS(166),
  },
  [30] = {
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym__] = ACTIONS(168),
    [sym_comment] = ACTIONS(24),
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
    [anon_sym_EQ] = ACTIONS(170),
    [anon_sym__] = ACTIONS(170),
    [sym_comment] = ACTIONS(24),
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
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym__] = ACTIONS(172),
    [sym_comment] = ACTIONS(24),
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
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_module] = ACTIONS(176),
    [anon_sym_where] = ACTIONS(176),
    [anon_sym_import] = ACTIONS(176),
    [anon_sym_type] = ACTIONS(176),
    [sym_variable_identifier] = ACTIONS(178),
    [sym_constructor_identifier] = ACTIONS(176),
    [sym_module_identifier] = ACTIONS(178),
    [anon_sym_case] = ACTIONS(176),
    [anon_sym_class] = ACTIONS(176),
    [anon_sym_data] = ACTIONS(176),
    [anon_sym_default] = ACTIONS(176),
    [anon_sym_deriving] = ACTIONS(176),
    [anon_sym_do] = ACTIONS(176),
    [anon_sym_else] = ACTIONS(176),
    [anon_sym_foreign] = ACTIONS(176),
    [anon_sym_if] = ACTIONS(176),
    [anon_sym_in] = ACTIONS(176),
    [anon_sym_infix] = ACTIONS(176),
    [anon_sym_infixl] = ACTIONS(176),
    [anon_sym_infixr] = ACTIONS(176),
    [anon_sym_instance] = ACTIONS(176),
    [anon_sym_let] = ACTIONS(176),
    [anon_sym_newtype] = ACTIONS(176),
    [anon_sym_of] = ACTIONS(176),
    [anon_sym_then] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym__integer_literal] = ACTIONS(176),
    [sym__octal_literal] = ACTIONS(176),
    [sym__hexidecimal_literal] = ACTIONS(176),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(180),
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
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
    [sym__space] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
    [sym__tab] = ACTIONS(180),
    [sym__vertical_tab] = ACTIONS(180),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym__] = ACTIONS(182),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(182),
    [sym__ascii_large] = ACTIONS(182),
    [anon_sym_BANG] = ACTIONS(182),
    [anon_sym_POUND] = ACTIONS(182),
    [anon_sym_DOLLAR] = ACTIONS(182),
    [anon_sym_PERCENT] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(182),
    [anon_sym_1] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DOT] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_LT] = ACTIONS(182),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_QMARK] = ACTIONS(182),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_CARET] = ACTIONS(182),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(182),
    [anon_sym_COLON] = ACTIONS(182),
    [anon_sym_BSLASH] = ACTIONS(182),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_BQUOTE] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
    [sym__space] = ACTIONS(182),
    [sym__newline] = ACTIONS(182),
    [sym__tab] = ACTIONS(182),
    [sym__vertical_tab] = ACTIONS(182),
  },
  [36] = {
    [sym__char_escape] = STATE(57),
    [sym__ascii] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym__] = ACTIONS(168),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(168),
    [sym__ascii_large] = ACTIONS(168),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_POUND] = ACTIONS(168),
    [anon_sym_DOLLAR] = ACTIONS(168),
    [anon_sym_PERCENT] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_1] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DOT] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_QMARK] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_BSLASH] = ACTIONS(184),
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
    [anon_sym_x] = ACTIONS(190),
    [anon_sym_X] = ACTIONS(190),
    [anon_sym_o] = ACTIONS(192),
    [anon_sym_O] = ACTIONS(192),
    [anon_sym_a] = ACTIONS(184),
    [anon_sym_b] = ACTIONS(184),
    [anon_sym_f] = ACTIONS(184),
    [anon_sym_n] = ACTIONS(184),
    [anon_sym_r] = ACTIONS(184),
    [anon_sym_t] = ACTIONS(184),
    [anon_sym_v] = ACTIONS(184),
    [anon_sym_NUL] = ACTIONS(194),
    [anon_sym_SOH] = ACTIONS(194),
    [anon_sym_STX] = ACTIONS(194),
    [anon_sym_ETX] = ACTIONS(194),
    [anon_sym_EOT] = ACTIONS(194),
    [anon_sym_ENQ] = ACTIONS(194),
    [anon_sym_ACK] = ACTIONS(194),
    [anon_sym_BEL] = ACTIONS(194),
    [anon_sym_BS] = ACTIONS(194),
    [anon_sym_HT] = ACTIONS(194),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_VT] = ACTIONS(194),
    [anon_sym_FF] = ACTIONS(194),
    [anon_sym_CR] = ACTIONS(194),
    [anon_sym_SO] = ACTIONS(194),
    [anon_sym_SI] = ACTIONS(194),
    [anon_sym_DLE] = ACTIONS(194),
    [anon_sym_DC1] = ACTIONS(194),
    [anon_sym_DC2] = ACTIONS(194),
    [anon_sym_DC3] = ACTIONS(194),
    [anon_sym_DC4] = ACTIONS(194),
    [anon_sym_NAK] = ACTIONS(194),
    [anon_sym_SYN] = ACTIONS(194),
    [anon_sym_ETB] = ACTIONS(194),
    [anon_sym_CAN] = ACTIONS(194),
    [anon_sym_EM] = ACTIONS(194),
    [anon_sym_SUB] = ACTIONS(194),
    [anon_sym_ESC] = ACTIONS(194),
    [anon_sym_FS] = ACTIONS(194),
    [anon_sym_GS] = ACTIONS(194),
    [anon_sym_RS] = ACTIONS(194),
    [anon_sym_US] = ACTIONS(194),
    [anon_sym_SP] = ACTIONS(194),
    [anon_sym_DEL] = ACTIONS(194),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(24),
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
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
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
  [38] = {
    [sym__gap] = STATE(62),
    [sym__graphic] = STATE(62),
    [sym__small] = STATE(34),
    [sym__large] = STATE(34),
    [sym__symbol] = STATE(34),
    [sym__special] = STATE(34),
    [sym__escape] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym__] = ACTIONS(80),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(80),
    [sym__ascii_large] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(78),
    [anon_sym_DOLLAR] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [anon_sym_AMP] = ACTIONS(78),
    [anon_sym_1] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
    [anon_sym_CARET] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_TILDE] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_BQUOTE] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [sym__space] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
    [sym__tab] = ACTIONS(92),
    [sym__vertical_tab] = ACTIONS(92),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_module] = ACTIONS(204),
    [anon_sym_where] = ACTIONS(204),
    [anon_sym_import] = ACTIONS(204),
    [anon_sym_type] = ACTIONS(204),
    [sym_variable_identifier] = ACTIONS(206),
    [sym_constructor_identifier] = ACTIONS(204),
    [sym_module_identifier] = ACTIONS(206),
    [anon_sym_case] = ACTIONS(204),
    [anon_sym_class] = ACTIONS(204),
    [anon_sym_data] = ACTIONS(204),
    [anon_sym_default] = ACTIONS(204),
    [anon_sym_deriving] = ACTIONS(204),
    [anon_sym_do] = ACTIONS(204),
    [anon_sym_else] = ACTIONS(204),
    [anon_sym_foreign] = ACTIONS(204),
    [anon_sym_if] = ACTIONS(204),
    [anon_sym_in] = ACTIONS(204),
    [anon_sym_infix] = ACTIONS(204),
    [anon_sym_infixl] = ACTIONS(204),
    [anon_sym_infixr] = ACTIONS(204),
    [anon_sym_instance] = ACTIONS(204),
    [anon_sym_let] = ACTIONS(204),
    [anon_sym_newtype] = ACTIONS(204),
    [anon_sym_of] = ACTIONS(204),
    [anon_sym_then] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym__integer_literal] = ACTIONS(204),
    [sym__octal_literal] = ACTIONS(204),
    [sym__hexidecimal_literal] = ACTIONS(204),
  },
  [40] = {
    [sym__statement] = STATE(12),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [41] = {
    [sym_export_declaration] = STATE(66),
    [sym__identifier] = STATE(67),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(210),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [42] = {
    [anon_sym_where] = ACTIONS(212),
    [sym_comment] = ACTIONS(24),
  },
  [43] = {
    [sym_import_specification] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_where] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(216),
    [anon_sym_as] = ACTIONS(218),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(216),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_constructor_identifier] = ACTIONS(216),
    [sym_module_identifier] = ACTIONS(220),
    [anon_sym_case] = ACTIONS(216),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_data] = ACTIONS(216),
    [anon_sym_default] = ACTIONS(216),
    [anon_sym_deriving] = ACTIONS(216),
    [anon_sym_do] = ACTIONS(216),
    [anon_sym_else] = ACTIONS(216),
    [anon_sym_foreign] = ACTIONS(216),
    [anon_sym_if] = ACTIONS(216),
    [anon_sym_in] = ACTIONS(216),
    [anon_sym_infix] = ACTIONS(216),
    [anon_sym_infixl] = ACTIONS(216),
    [anon_sym_infixr] = ACTIONS(216),
    [anon_sym_instance] = ACTIONS(216),
    [anon_sym_let] = ACTIONS(216),
    [anon_sym_newtype] = ACTIONS(216),
    [anon_sym_of] = ACTIONS(216),
    [anon_sym_then] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym__integer_literal] = ACTIONS(216),
    [sym__octal_literal] = ACTIONS(216),
    [sym__hexidecimal_literal] = ACTIONS(216),
  },
  [44] = {
    [sym__identifier] = STATE(72),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [45] = {
    [sym__identifier] = STATE(75),
    [sym_reserved_identifier] = STATE(74),
    [anon_sym_where] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(226),
    [sym_constructor_identifier] = ACTIONS(228),
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
    [anon_sym__] = ACTIONS(224),
    [sym_comment] = ACTIONS(24),
  },
  [46] = {
    [anon_sym_LPAREN] = ACTIONS(230),
    [sym_comment] = ACTIONS(24),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_where] = ACTIONS(216),
    [anon_sym_import] = ACTIONS(216),
    [anon_sym_type] = ACTIONS(216),
    [sym_variable_identifier] = ACTIONS(220),
    [sym_constructor_identifier] = ACTIONS(216),
    [sym_module_identifier] = ACTIONS(220),
    [anon_sym_case] = ACTIONS(216),
    [anon_sym_class] = ACTIONS(216),
    [anon_sym_data] = ACTIONS(216),
    [anon_sym_default] = ACTIONS(216),
    [anon_sym_deriving] = ACTIONS(216),
    [anon_sym_do] = ACTIONS(216),
    [anon_sym_else] = ACTIONS(216),
    [anon_sym_foreign] = ACTIONS(216),
    [anon_sym_if] = ACTIONS(216),
    [anon_sym_in] = ACTIONS(216),
    [anon_sym_infix] = ACTIONS(216),
    [anon_sym_infixl] = ACTIONS(216),
    [anon_sym_infixr] = ACTIONS(216),
    [anon_sym_instance] = ACTIONS(216),
    [anon_sym_let] = ACTIONS(216),
    [anon_sym_newtype] = ACTIONS(216),
    [anon_sym_of] = ACTIONS(216),
    [anon_sym_then] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(220),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym__integer_literal] = ACTIONS(216),
    [sym__octal_literal] = ACTIONS(216),
    [sym__hexidecimal_literal] = ACTIONS(216),
  },
  [48] = {
    [sym__identifier] = STATE(77),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_module] = ACTIONS(234),
    [anon_sym_where] = ACTIONS(234),
    [anon_sym_import] = ACTIONS(234),
    [anon_sym_type] = ACTIONS(234),
    [sym_variable_identifier] = ACTIONS(236),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(236),
    [anon_sym_case] = ACTIONS(234),
    [anon_sym_class] = ACTIONS(234),
    [anon_sym_data] = ACTIONS(234),
    [anon_sym_default] = ACTIONS(234),
    [anon_sym_deriving] = ACTIONS(234),
    [anon_sym_do] = ACTIONS(234),
    [anon_sym_else] = ACTIONS(234),
    [anon_sym_foreign] = ACTIONS(234),
    [anon_sym_if] = ACTIONS(234),
    [anon_sym_in] = ACTIONS(234),
    [anon_sym_infix] = ACTIONS(234),
    [anon_sym_infixl] = ACTIONS(234),
    [anon_sym_infixr] = ACTIONS(234),
    [anon_sym_instance] = ACTIONS(234),
    [anon_sym_let] = ACTIONS(234),
    [anon_sym_newtype] = ACTIONS(234),
    [anon_sym_of] = ACTIONS(234),
    [anon_sym_then] = ACTIONS(234),
    [anon_sym__] = ACTIONS(234),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [sym__integer_literal] = ACTIONS(234),
    [sym__octal_literal] = ACTIONS(234),
    [sym__hexidecimal_literal] = ACTIONS(234),
  },
  [50] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(238),
  },
  [51] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(240),
  },
  [52] = {
    [sym__cntrl] = STATE(79),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(242),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_CARET] = ACTIONS(242),
    [anon_sym_BSLASH] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
  },
  [53] = {
    [aux_sym__escape_repeat1] = STATE(81),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(244),
  },
  [54] = {
    [aux_sym__escape_repeat2] = STATE(83),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(246),
  },
  [55] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(248),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_EQ] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(24),
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
  [57] = {
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [sym_comment] = ACTIONS(24),
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
  [58] = {
    [sym__cntrl] = STATE(85),
    [anon_sym__] = ACTIONS(254),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_BSLASH] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
  },
  [59] = {
    [aux_sym__escape_repeat1] = STATE(87),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(256),
  },
  [60] = {
    [aux_sym__escape_repeat2] = STATE(89),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(258),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym__] = ACTIONS(260),
    [sym_comment] = ACTIONS(24),
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
  },
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym__] = ACTIONS(262),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(262),
    [sym__ascii_large] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(262),
    [anon_sym_POUND] = ACTIONS(262),
    [anon_sym_DOLLAR] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(262),
    [anon_sym_AMP] = ACTIONS(262),
    [anon_sym_1] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_QMARK] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(262),
    [anon_sym_CARET] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_COLON] = ACTIONS(262),
    [anon_sym_BSLASH] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [sym__space] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
    [sym__tab] = ACTIONS(262),
    [sym__vertical_tab] = ACTIONS(262),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(266),
    [sym_module_identifier] = ACTIONS(268),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_default] = ACTIONS(266),
    [anon_sym_deriving] = ACTIONS(266),
    [anon_sym_do] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(266),
    [anon_sym_foreign] = ACTIONS(266),
    [anon_sym_if] = ACTIONS(266),
    [anon_sym_in] = ACTIONS(266),
    [anon_sym_infix] = ACTIONS(266),
    [anon_sym_infixl] = ACTIONS(266),
    [anon_sym_infixr] = ACTIONS(266),
    [anon_sym_instance] = ACTIONS(266),
    [anon_sym_let] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_of] = ACTIONS(266),
    [anon_sym_then] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [64] = {
    [sym__statement] = STATE(39),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [65] = {
    [anon_sym_where] = ACTIONS(272),
    [sym_comment] = ACTIONS(24),
  },
  [66] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(92),
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(276),
    [sym_comment] = ACTIONS(24),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [sym_comment] = ACTIONS(24),
  },
  [68] = {
    [sym__statement] = STATE(12),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [69] = {
    [sym__identifier] = STATE(95),
    [sym_reserved_identifier] = STATE(74),
    [anon_sym_where] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(226),
    [sym_constructor_identifier] = ACTIONS(228),
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
    [anon_sym__] = ACTIONS(224),
    [sym_comment] = ACTIONS(24),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_module] = ACTIONS(286),
    [anon_sym_where] = ACTIONS(286),
    [anon_sym_import] = ACTIONS(286),
    [anon_sym_type] = ACTIONS(286),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_constructor_identifier] = ACTIONS(286),
    [sym_module_identifier] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(286),
    [anon_sym_class] = ACTIONS(286),
    [anon_sym_data] = ACTIONS(286),
    [anon_sym_default] = ACTIONS(286),
    [anon_sym_deriving] = ACTIONS(286),
    [anon_sym_do] = ACTIONS(286),
    [anon_sym_else] = ACTIONS(286),
    [anon_sym_foreign] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_in] = ACTIONS(286),
    [anon_sym_infix] = ACTIONS(286),
    [anon_sym_infixl] = ACTIONS(286),
    [anon_sym_infixr] = ACTIONS(286),
    [anon_sym_instance] = ACTIONS(286),
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_newtype] = ACTIONS(286),
    [anon_sym_of] = ACTIONS(286),
    [anon_sym_then] = ACTIONS(286),
    [anon_sym__] = ACTIONS(286),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(286),
    [sym__octal_literal] = ACTIONS(286),
    [sym__hexidecimal_literal] = ACTIONS(286),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_module] = ACTIONS(292),
    [anon_sym_where] = ACTIONS(292),
    [anon_sym_import] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(292),
    [sym_variable_identifier] = ACTIONS(294),
    [sym_constructor_identifier] = ACTIONS(292),
    [sym_module_identifier] = ACTIONS(294),
    [anon_sym_case] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
    [anon_sym_data] = ACTIONS(292),
    [anon_sym_default] = ACTIONS(292),
    [anon_sym_deriving] = ACTIONS(292),
    [anon_sym_do] = ACTIONS(292),
    [anon_sym_else] = ACTIONS(292),
    [anon_sym_foreign] = ACTIONS(292),
    [anon_sym_if] = ACTIONS(292),
    [anon_sym_in] = ACTIONS(292),
    [anon_sym_infix] = ACTIONS(292),
    [anon_sym_infixl] = ACTIONS(292),
    [anon_sym_infixr] = ACTIONS(292),
    [anon_sym_instance] = ACTIONS(292),
    [anon_sym_let] = ACTIONS(292),
    [anon_sym_newtype] = ACTIONS(292),
    [anon_sym_of] = ACTIONS(292),
    [anon_sym_then] = ACTIONS(292),
    [anon_sym__] = ACTIONS(292),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(290),
    [sym__integer_literal] = ACTIONS(292),
    [sym__octal_literal] = ACTIONS(292),
    [sym__hexidecimal_literal] = ACTIONS(292),
  },
  [72] = {
    [aux_sym_import_specification_repeat1] = STATE(99),
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_comment] = ACTIONS(24),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_hiding] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(38),
    [sym_module_identifier] = ACTIONS(40),
    [anon_sym_case] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(38),
    [anon_sym_data] = ACTIONS(38),
    [anon_sym_default] = ACTIONS(38),
    [anon_sym_deriving] = ACTIONS(38),
    [anon_sym_do] = ACTIONS(38),
    [anon_sym_else] = ACTIONS(38),
    [anon_sym_foreign] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(38),
    [anon_sym_in] = ACTIONS(38),
    [anon_sym_infix] = ACTIONS(38),
    [anon_sym_infixl] = ACTIONS(38),
    [anon_sym_infixr] = ACTIONS(38),
    [anon_sym_instance] = ACTIONS(38),
    [anon_sym_let] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_of] = ACTIONS(38),
    [anon_sym_then] = ACTIONS(38),
    [anon_sym__] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [anon_sym_DQUOTE] = ACTIONS(36),
    [sym__integer_literal] = ACTIONS(38),
    [sym__octal_literal] = ACTIONS(38),
    [sym__hexidecimal_literal] = ACTIONS(38),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_module] = ACTIONS(52),
    [anon_sym_where] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_hiding] = ACTIONS(52),
    [anon_sym_type] = ACTIONS(52),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(54),
    [anon_sym_case] = ACTIONS(52),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_data] = ACTIONS(52),
    [anon_sym_default] = ACTIONS(52),
    [anon_sym_deriving] = ACTIONS(52),
    [anon_sym_do] = ACTIONS(52),
    [anon_sym_else] = ACTIONS(52),
    [anon_sym_foreign] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(52),
    [anon_sym_in] = ACTIONS(52),
    [anon_sym_infix] = ACTIONS(52),
    [anon_sym_infixl] = ACTIONS(52),
    [anon_sym_infixr] = ACTIONS(52),
    [anon_sym_instance] = ACTIONS(52),
    [anon_sym_let] = ACTIONS(52),
    [anon_sym_newtype] = ACTIONS(52),
    [anon_sym_of] = ACTIONS(52),
    [anon_sym_then] = ACTIONS(52),
    [anon_sym__] = ACTIONS(52),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym__integer_literal] = ACTIONS(52),
    [sym__octal_literal] = ACTIONS(52),
    [sym__hexidecimal_literal] = ACTIONS(52),
  },
  [75] = {
    [sym_import_specification] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_module] = ACTIONS(286),
    [anon_sym_where] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(286),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(286),
    [sym_variable_identifier] = ACTIONS(288),
    [sym_constructor_identifier] = ACTIONS(286),
    [sym_module_identifier] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(286),
    [anon_sym_class] = ACTIONS(286),
    [anon_sym_data] = ACTIONS(286),
    [anon_sym_default] = ACTIONS(286),
    [anon_sym_deriving] = ACTIONS(286),
    [anon_sym_do] = ACTIONS(286),
    [anon_sym_else] = ACTIONS(286),
    [anon_sym_foreign] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_in] = ACTIONS(286),
    [anon_sym_infix] = ACTIONS(286),
    [anon_sym_infixl] = ACTIONS(286),
    [anon_sym_infixr] = ACTIONS(286),
    [anon_sym_instance] = ACTIONS(286),
    [anon_sym_let] = ACTIONS(286),
    [anon_sym_newtype] = ACTIONS(286),
    [anon_sym_of] = ACTIONS(286),
    [anon_sym_then] = ACTIONS(286),
    [anon_sym__] = ACTIONS(286),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(288),
    [anon_sym_SQUOTE] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym__integer_literal] = ACTIONS(286),
    [sym__octal_literal] = ACTIONS(286),
    [sym__hexidecimal_literal] = ACTIONS(286),
  },
  [76] = {
    [sym__identifier] = STATE(101),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_where] = ACTIONS(304),
    [anon_sym_import] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(306),
    [sym_constructor_identifier] = ACTIONS(304),
    [sym_module_identifier] = ACTIONS(306),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_class] = ACTIONS(304),
    [anon_sym_data] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_deriving] = ACTIONS(304),
    [anon_sym_do] = ACTIONS(304),
    [anon_sym_else] = ACTIONS(304),
    [anon_sym_foreign] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_in] = ACTIONS(304),
    [anon_sym_infix] = ACTIONS(304),
    [anon_sym_infixl] = ACTIONS(304),
    [anon_sym_infixr] = ACTIONS(304),
    [anon_sym_instance] = ACTIONS(304),
    [anon_sym_let] = ACTIONS(304),
    [anon_sym_newtype] = ACTIONS(304),
    [anon_sym_of] = ACTIONS(304),
    [anon_sym_then] = ACTIONS(304),
    [anon_sym__] = ACTIONS(304),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym__integer_literal] = ACTIONS(304),
    [sym__octal_literal] = ACTIONS(304),
    [sym__hexidecimal_literal] = ACTIONS(304),
  },
  [78] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(308),
  },
  [79] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(310),
  },
  [80] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(312),
  },
  [81] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(316),
  },
  [82] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(318),
  },
  [83] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(320),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(322),
    [anon_sym_EQ] = ACTIONS(322),
    [anon_sym__] = ACTIONS(322),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(322),
    [sym__ascii_large] = ACTIONS(322),
    [anon_sym_BANG] = ACTIONS(322),
    [anon_sym_POUND] = ACTIONS(322),
    [anon_sym_DOLLAR] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_1] = ACTIONS(322),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_QMARK] = ACTIONS(322),
    [anon_sym_AT] = ACTIONS(322),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_TILDE] = ACTIONS(322),
    [anon_sym_COLON] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(322),
    [anon_sym_RBRACK] = ACTIONS(322),
    [anon_sym_BQUOTE] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_RBRACE] = ACTIONS(322),
    [sym__space] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
    [sym__tab] = ACTIONS(322),
    [sym__vertical_tab] = ACTIONS(322),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(324),
    [sym__ascii_large] = ACTIONS(324),
    [anon_sym_BANG] = ACTIONS(324),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_DOLLAR] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(324),
    [anon_sym_AMP] = ACTIONS(324),
    [anon_sym_1] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [anon_sym_SLASH] = ACTIONS(324),
    [anon_sym_LT] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [anon_sym_QMARK] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(324),
    [anon_sym_CARET] = ACTIONS(324),
    [anon_sym_PIPE] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(324),
    [anon_sym_TILDE] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_BSLASH] = ACTIONS(324),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [anon_sym_RBRACK] = ACTIONS(324),
    [anon_sym_BQUOTE] = ACTIONS(324),
    [anon_sym_LBRACE] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [sym__space] = ACTIONS(324),
    [sym__newline] = ACTIONS(324),
    [sym__tab] = ACTIONS(324),
    [sym__vertical_tab] = ACTIONS(324),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_EQ] = ACTIONS(326),
    [anon_sym__] = ACTIONS(326),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [anon_sym_DQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(326),
    [sym__ascii_large] = ACTIONS(326),
    [anon_sym_BANG] = ACTIONS(326),
    [anon_sym_POUND] = ACTIONS(326),
    [anon_sym_DOLLAR] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(326),
    [anon_sym_AMP] = ACTIONS(326),
    [anon_sym_1] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_SLASH] = ACTIONS(326),
    [anon_sym_LT] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(326),
    [anon_sym_QMARK] = ACTIONS(326),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_CARET] = ACTIONS(326),
    [anon_sym_PIPE] = ACTIONS(326),
    [anon_sym_DASH] = ACTIONS(326),
    [anon_sym_TILDE] = ACTIONS(326),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_BSLASH] = ACTIONS(326),
    [anon_sym_SEMI] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [anon_sym_BQUOTE] = ACTIONS(326),
    [anon_sym_LBRACE] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [sym__space] = ACTIONS(326),
    [sym__newline] = ACTIONS(326),
    [sym__tab] = ACTIONS(326),
    [sym__vertical_tab] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(326),
  },
  [87] = {
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(328),
    [sym__ascii_large] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_POUND] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_BQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [sym__space] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
    [sym__tab] = ACTIONS(328),
    [sym__vertical_tab] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(330),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_EQ] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(332),
    [sym__ascii_large] = ACTIONS(332),
    [anon_sym_BANG] = ACTIONS(332),
    [anon_sym_POUND] = ACTIONS(332),
    [anon_sym_DOLLAR] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(332),
    [anon_sym_AMP] = ACTIONS(332),
    [anon_sym_1] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [anon_sym_LT] = ACTIONS(332),
    [anon_sym_GT] = ACTIONS(332),
    [anon_sym_QMARK] = ACTIONS(332),
    [anon_sym_AT] = ACTIONS(332),
    [anon_sym_CARET] = ACTIONS(332),
    [anon_sym_PIPE] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_TILDE] = ACTIONS(332),
    [anon_sym_COLON] = ACTIONS(332),
    [anon_sym_BSLASH] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(332),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_BQUOTE] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(332),
    [sym__space] = ACTIONS(332),
    [sym__newline] = ACTIONS(332),
    [sym__tab] = ACTIONS(332),
    [sym__vertical_tab] = ACTIONS(332),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(332),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(328),
    [anon_sym_EQ] = ACTIONS(328),
    [anon_sym__] = ACTIONS(328),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(328),
    [sym__ascii_large] = ACTIONS(328),
    [anon_sym_BANG] = ACTIONS(328),
    [anon_sym_POUND] = ACTIONS(328),
    [anon_sym_DOLLAR] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_1] = ACTIONS(328),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_QMARK] = ACTIONS(328),
    [anon_sym_AT] = ACTIONS(328),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_TILDE] = ACTIONS(328),
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(328),
    [anon_sym_SEMI] = ACTIONS(328),
    [anon_sym_LBRACK] = ACTIONS(328),
    [anon_sym_RBRACK] = ACTIONS(328),
    [anon_sym_BQUOTE] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(328),
    [anon_sym_RBRACE] = ACTIONS(328),
    [sym__space] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
    [sym__tab] = ACTIONS(328),
    [sym__vertical_tab] = ACTIONS(328),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(334),
  },
  [90] = {
    [sym_export_declaration] = STATE(106),
    [sym__identifier] = STATE(67),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [91] = {
    [anon_sym_where] = ACTIONS(336),
    [sym_comment] = ACTIONS(24),
  },
  [92] = {
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(340),
    [sym_comment] = ACTIONS(24),
  },
  [93] = {
    [sym__identifier] = STATE(110),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(342),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [94] = {
    [sym__statement] = STATE(39),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_statement] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(30),
    [sym__integer_literal] = ACTIONS(32),
    [sym__octal_literal] = ACTIONS(32),
    [sym__hexidecimal_literal] = ACTIONS(32),
  },
  [95] = {
    [sym_import_specification] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(348),
    [sym_module_identifier] = ACTIONS(350),
    [anon_sym_case] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_deriving] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_else] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_in] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_let] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_of] = ACTIONS(348),
    [anon_sym_then] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [96] = {
    [sym__identifier] = STATE(113),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(352),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [97] = {
    [sym__identifier] = STATE(114),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_module] = ACTIONS(356),
    [anon_sym_where] = ACTIONS(356),
    [anon_sym_import] = ACTIONS(356),
    [anon_sym_type] = ACTIONS(356),
    [sym_variable_identifier] = ACTIONS(358),
    [sym_constructor_identifier] = ACTIONS(356),
    [sym_module_identifier] = ACTIONS(358),
    [anon_sym_case] = ACTIONS(356),
    [anon_sym_class] = ACTIONS(356),
    [anon_sym_data] = ACTIONS(356),
    [anon_sym_default] = ACTIONS(356),
    [anon_sym_deriving] = ACTIONS(356),
    [anon_sym_do] = ACTIONS(356),
    [anon_sym_else] = ACTIONS(356),
    [anon_sym_foreign] = ACTIONS(356),
    [anon_sym_if] = ACTIONS(356),
    [anon_sym_in] = ACTIONS(356),
    [anon_sym_infix] = ACTIONS(356),
    [anon_sym_infixl] = ACTIONS(356),
    [anon_sym_infixr] = ACTIONS(356),
    [anon_sym_instance] = ACTIONS(356),
    [anon_sym_let] = ACTIONS(356),
    [anon_sym_newtype] = ACTIONS(356),
    [anon_sym_of] = ACTIONS(356),
    [anon_sym_then] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [sym__integer_literal] = ACTIONS(356),
    [sym__octal_literal] = ACTIONS(356),
    [sym__hexidecimal_literal] = ACTIONS(356),
  },
  [99] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(24),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_module] = ACTIONS(348),
    [anon_sym_where] = ACTIONS(348),
    [anon_sym_import] = ACTIONS(348),
    [anon_sym_type] = ACTIONS(348),
    [sym_variable_identifier] = ACTIONS(350),
    [sym_constructor_identifier] = ACTIONS(348),
    [sym_module_identifier] = ACTIONS(350),
    [anon_sym_case] = ACTIONS(348),
    [anon_sym_class] = ACTIONS(348),
    [anon_sym_data] = ACTIONS(348),
    [anon_sym_default] = ACTIONS(348),
    [anon_sym_deriving] = ACTIONS(348),
    [anon_sym_do] = ACTIONS(348),
    [anon_sym_else] = ACTIONS(348),
    [anon_sym_foreign] = ACTIONS(348),
    [anon_sym_if] = ACTIONS(348),
    [anon_sym_in] = ACTIONS(348),
    [anon_sym_infix] = ACTIONS(348),
    [anon_sym_infixl] = ACTIONS(348),
    [anon_sym_infixr] = ACTIONS(348),
    [anon_sym_instance] = ACTIONS(348),
    [anon_sym_let] = ACTIONS(348),
    [anon_sym_newtype] = ACTIONS(348),
    [anon_sym_of] = ACTIONS(348),
    [anon_sym_then] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_DQUOTE] = ACTIONS(346),
    [sym__integer_literal] = ACTIONS(348),
    [sym__octal_literal] = ACTIONS(348),
    [sym__hexidecimal_literal] = ACTIONS(348),
  },
  [101] = {
    [aux_sym_import_specification_repeat1] = STATE(118),
    [anon_sym_LPAREN] = ACTIONS(364),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(362),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(366),
  },
  [103] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(368),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(368),
  },
  [104] = {
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_EQ] = ACTIONS(370),
    [anon_sym__] = ACTIONS(370),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(370),
    [sym__ascii_large] = ACTIONS(370),
    [anon_sym_BANG] = ACTIONS(370),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_DOLLAR] = ACTIONS(370),
    [anon_sym_PERCENT] = ACTIONS(370),
    [anon_sym_AMP] = ACTIONS(370),
    [anon_sym_1] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(370),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [anon_sym_TILDE] = ACTIONS(370),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_BSLASH] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(370),
    [anon_sym_RBRACK] = ACTIONS(370),
    [anon_sym_BQUOTE] = ACTIONS(370),
    [anon_sym_LBRACE] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(370),
    [sym__space] = ACTIONS(370),
    [sym__newline] = ACTIONS(370),
    [sym__tab] = ACTIONS(370),
    [sym__vertical_tab] = ACTIONS(370),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(370),
  },
  [105] = {
    [anon_sym_LPAREN] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_EQ] = ACTIONS(372),
    [anon_sym__] = ACTIONS(372),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(372),
    [sym__ascii_large] = ACTIONS(372),
    [anon_sym_BANG] = ACTIONS(372),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_DOLLAR] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_AMP] = ACTIONS(372),
    [anon_sym_1] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_LT] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(372),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(372),
    [anon_sym_BSLASH] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [anon_sym_RBRACK] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(372),
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym__space] = ACTIONS(372),
    [sym__newline] = ACTIONS(372),
    [sym__tab] = ACTIONS(372),
    [sym__vertical_tab] = ACTIONS(372),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(372),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(374),
    [anon_sym_RPAREN] = ACTIONS(374),
    [sym_comment] = ACTIONS(24),
  },
  [107] = {
    [sym_export_declaration] = STATE(119),
    [sym__identifier] = STATE(67),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [108] = {
    [anon_sym_where] = ACTIONS(376),
    [sym_comment] = ACTIONS(24),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(24),
  },
  [110] = {
    [aux_sym_export_declaration_repeat1] = STATE(122),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(24),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(384),
    [anon_sym_where] = ACTIONS(384),
    [anon_sym_import] = ACTIONS(384),
    [anon_sym_type] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(386),
    [anon_sym_case] = ACTIONS(384),
    [anon_sym_class] = ACTIONS(384),
    [anon_sym_data] = ACTIONS(384),
    [anon_sym_default] = ACTIONS(384),
    [anon_sym_deriving] = ACTIONS(384),
    [anon_sym_do] = ACTIONS(384),
    [anon_sym_else] = ACTIONS(384),
    [anon_sym_foreign] = ACTIONS(384),
    [anon_sym_if] = ACTIONS(384),
    [anon_sym_in] = ACTIONS(384),
    [anon_sym_infix] = ACTIONS(384),
    [anon_sym_infixl] = ACTIONS(384),
    [anon_sym_infixr] = ACTIONS(384),
    [anon_sym_instance] = ACTIONS(384),
    [anon_sym_let] = ACTIONS(384),
    [anon_sym_newtype] = ACTIONS(384),
    [anon_sym_of] = ACTIONS(384),
    [anon_sym_then] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [aux_sym_export_declaration_repeat1] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(24),
  },
  [114] = {
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [sym_comment] = ACTIONS(24),
  },
  [115] = {
    [sym__identifier] = STATE(126),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_constructor_identifier] = ACTIONS(396),
    [sym_module_identifier] = ACTIONS(398),
    [anon_sym_case] = ACTIONS(396),
    [anon_sym_class] = ACTIONS(396),
    [anon_sym_data] = ACTIONS(396),
    [anon_sym_default] = ACTIONS(396),
    [anon_sym_deriving] = ACTIONS(396),
    [anon_sym_do] = ACTIONS(396),
    [anon_sym_else] = ACTIONS(396),
    [anon_sym_foreign] = ACTIONS(396),
    [anon_sym_if] = ACTIONS(396),
    [anon_sym_in] = ACTIONS(396),
    [anon_sym_infix] = ACTIONS(396),
    [anon_sym_infixl] = ACTIONS(396),
    [anon_sym_infixr] = ACTIONS(396),
    [anon_sym_instance] = ACTIONS(396),
    [anon_sym_let] = ACTIONS(396),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_of] = ACTIONS(396),
    [anon_sym_then] = ACTIONS(396),
    [anon_sym__] = ACTIONS(396),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [sym__integer_literal] = ACTIONS(396),
    [sym__octal_literal] = ACTIONS(396),
    [sym__hexidecimal_literal] = ACTIONS(396),
  },
  [117] = {
    [sym__identifier] = STATE(128),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(400),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(24),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(24),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(24),
  },
  [121] = {
    [sym__identifier] = STATE(130),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(410),
    [sym_comment] = ACTIONS(24),
  },
  [123] = {
    [aux_sym_import_specification_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [sym__identifier] = STATE(137),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(416),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(24),
  },
  [127] = {
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(24),
  },
  [128] = {
    [aux_sym_export_declaration_repeat1] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(24),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(424),
    [anon_sym_where] = ACTIONS(424),
    [anon_sym_import] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(426),
    [sym_constructor_identifier] = ACTIONS(424),
    [sym_module_identifier] = ACTIONS(426),
    [anon_sym_case] = ACTIONS(424),
    [anon_sym_class] = ACTIONS(424),
    [anon_sym_data] = ACTIONS(424),
    [anon_sym_default] = ACTIONS(424),
    [anon_sym_deriving] = ACTIONS(424),
    [anon_sym_do] = ACTIONS(424),
    [anon_sym_else] = ACTIONS(424),
    [anon_sym_foreign] = ACTIONS(424),
    [anon_sym_if] = ACTIONS(424),
    [anon_sym_in] = ACTIONS(424),
    [anon_sym_infix] = ACTIONS(424),
    [anon_sym_infixl] = ACTIONS(424),
    [anon_sym_infixr] = ACTIONS(424),
    [anon_sym_instance] = ACTIONS(424),
    [anon_sym_let] = ACTIONS(424),
    [anon_sym_newtype] = ACTIONS(424),
    [anon_sym_of] = ACTIONS(424),
    [anon_sym_then] = ACTIONS(424),
    [anon_sym__] = ACTIONS(424),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(426),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [sym__integer_literal] = ACTIONS(424),
    [sym__octal_literal] = ACTIONS(424),
    [sym__hexidecimal_literal] = ACTIONS(424),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(24),
  },
  [131] = {
    [sym__identifier] = STATE(140),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_module] = ACTIONS(434),
    [anon_sym_where] = ACTIONS(434),
    [anon_sym_import] = ACTIONS(434),
    [anon_sym_type] = ACTIONS(434),
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
    [anon_sym__] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(436),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym__integer_literal] = ACTIONS(434),
    [sym__octal_literal] = ACTIONS(434),
    [sym__hexidecimal_literal] = ACTIONS(434),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [aux_sym_import_specification_repeat1] = STATE(142),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(24),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(24),
  },
  [137] = {
    [aux_sym_export_declaration_repeat1] = STATE(144),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(24),
  },
  [138] = {
    [sym__identifier] = STATE(146),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(442),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(20),
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
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(444),
    [sym_comment] = ACTIONS(24),
  },
  [140] = {
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(24),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_module] = ACTIONS(450),
    [anon_sym_where] = ACTIONS(450),
    [anon_sym_import] = ACTIONS(450),
    [anon_sym_type] = ACTIONS(450),
    [sym_variable_identifier] = ACTIONS(452),
    [sym_constructor_identifier] = ACTIONS(450),
    [sym_module_identifier] = ACTIONS(452),
    [anon_sym_case] = ACTIONS(450),
    [anon_sym_class] = ACTIONS(450),
    [anon_sym_data] = ACTIONS(450),
    [anon_sym_default] = ACTIONS(450),
    [anon_sym_deriving] = ACTIONS(450),
    [anon_sym_do] = ACTIONS(450),
    [anon_sym_else] = ACTIONS(450),
    [anon_sym_foreign] = ACTIONS(450),
    [anon_sym_if] = ACTIONS(450),
    [anon_sym_in] = ACTIONS(450),
    [anon_sym_infix] = ACTIONS(450),
    [anon_sym_infixl] = ACTIONS(450),
    [anon_sym_infixr] = ACTIONS(450),
    [anon_sym_instance] = ACTIONS(450),
    [anon_sym_let] = ACTIONS(450),
    [anon_sym_newtype] = ACTIONS(450),
    [anon_sym_of] = ACTIONS(450),
    [anon_sym_then] = ACTIONS(450),
    [anon_sym__] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(452),
    [anon_sym_SQUOTE] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym__integer_literal] = ACTIONS(450),
    [sym__octal_literal] = ACTIONS(450),
    [sym__hexidecimal_literal] = ACTIONS(450),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [146] = {
    [aux_sym_export_declaration_repeat1] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [aux_sym_import_specification_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_where] = ACTIONS(462),
    [anon_sym_import] = ACTIONS(462),
    [anon_sym_type] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_constructor_identifier] = ACTIONS(462),
    [sym_module_identifier] = ACTIONS(464),
    [anon_sym_case] = ACTIONS(462),
    [anon_sym_class] = ACTIONS(462),
    [anon_sym_data] = ACTIONS(462),
    [anon_sym_default] = ACTIONS(462),
    [anon_sym_deriving] = ACTIONS(462),
    [anon_sym_do] = ACTIONS(462),
    [anon_sym_else] = ACTIONS(462),
    [anon_sym_foreign] = ACTIONS(462),
    [anon_sym_if] = ACTIONS(462),
    [anon_sym_in] = ACTIONS(462),
    [anon_sym_infix] = ACTIONS(462),
    [anon_sym_infixl] = ACTIONS(462),
    [anon_sym_infixr] = ACTIONS(462),
    [anon_sym_instance] = ACTIONS(462),
    [anon_sym_let] = ACTIONS(462),
    [anon_sym_newtype] = ACTIONS(462),
    [anon_sym_of] = ACTIONS(462),
    [anon_sym_then] = ACTIONS(462),
    [anon_sym__] = ACTIONS(462),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [sym__integer_literal] = ACTIONS(462),
    [sym__octal_literal] = ACTIONS(462),
    [sym__hexidecimal_literal] = ACTIONS(462),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(24),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_module] = ACTIONS(476),
    [anon_sym_where] = ACTIONS(476),
    [anon_sym_import] = ACTIONS(476),
    [anon_sym_type] = ACTIONS(476),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(478),
    [anon_sym_case] = ACTIONS(476),
    [anon_sym_class] = ACTIONS(476),
    [anon_sym_data] = ACTIONS(476),
    [anon_sym_default] = ACTIONS(476),
    [anon_sym_deriving] = ACTIONS(476),
    [anon_sym_do] = ACTIONS(476),
    [anon_sym_else] = ACTIONS(476),
    [anon_sym_foreign] = ACTIONS(476),
    [anon_sym_if] = ACTIONS(476),
    [anon_sym_in] = ACTIONS(476),
    [anon_sym_infix] = ACTIONS(476),
    [anon_sym_infixl] = ACTIONS(476),
    [anon_sym_infixr] = ACTIONS(476),
    [anon_sym_instance] = ACTIONS(476),
    [anon_sym_let] = ACTIONS(476),
    [anon_sym_newtype] = ACTIONS(476),
    [anon_sym_of] = ACTIONS(476),
    [anon_sym_then] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [sym__integer_literal] = ACTIONS(476),
    [sym__octal_literal] = ACTIONS(476),
    [sym__hexidecimal_literal] = ACTIONS(476),
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
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(25),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [108] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [236] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [250] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_statement, 4),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_statement, 4),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_statement, 4),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
