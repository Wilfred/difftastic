#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 166
#define SYMBOL_COUNT 157
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
  anon_sym_newtype = 11,
  anon_sym_EQ = 12,
  anon_sym_type = 13,
  sym_variable_identifier = 14,
  sym_constructor_identifier = 15,
  sym_module_identifier = 16,
  anon_sym_case = 17,
  anon_sym_class = 18,
  anon_sym_data = 19,
  anon_sym_default = 20,
  anon_sym_deriving = 21,
  anon_sym_do = 22,
  anon_sym_else = 23,
  anon_sym_foreign = 24,
  anon_sym_if = 25,
  anon_sym_in = 26,
  anon_sym_infix = 27,
  anon_sym_infixl = 28,
  anon_sym_infixr = 29,
  anon_sym_instance = 30,
  anon_sym_let = 31,
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
  sym_newtype = 129,
  sym_new_constructor = 130,
  sym_type_synonym = 131,
  sym__literal = 132,
  sym__identifier = 133,
  sym_simple_type = 134,
  sym_reserved_identifier = 135,
  sym_integer = 136,
  sym_char = 137,
  sym_string = 138,
  sym__gap = 139,
  sym__graphic = 140,
  sym__small = 141,
  sym__large = 142,
  sym__symbol = 143,
  sym__special = 144,
  sym__escape = 145,
  sym__char_escape = 146,
  sym__ascii = 147,
  sym__cntrl = 148,
  aux_sym_program_repeat1 = 149,
  aux_sym_module_export_declarations_repeat1 = 150,
  aux_sym_export_declaration_repeat1 = 151,
  aux_sym_import_specification_repeat1 = 152,
  aux_sym_new_constructor_repeat1 = 153,
  aux_sym_string_repeat1 = 154,
  aux_sym__escape_repeat1 = 155,
  aux_sym__escape_repeat2 = 156,
  alias_sym_module_body = 157,
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
  [anon_sym_newtype] = "newtype",
  [anon_sym_EQ] = "=",
  [anon_sym_type] = "type",
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
  [sym_newtype] = "newtype",
  [sym_new_constructor] = "new_constructor",
  [sym_type_synonym] = "type_synonym",
  [sym__literal] = "_literal",
  [sym__identifier] = "_identifier",
  [sym_simple_type] = "simple_type",
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
  [aux_sym_new_constructor_repeat1] = "new_constructor_repeat1",
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
  [anon_sym_newtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
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
  [sym_newtype] = {
    .visible = true,
    .named = true,
  },
  [sym_new_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_type_synonym] = {
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
  [sym_simple_type] = {
    .visible = true,
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
  [aux_sym_new_constructor_repeat1] = {
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
        ADVANCE(216);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(223);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
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
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(126);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
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
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead == ']')
        ADVANCE(121);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        ADVANCE(38);
      if (lookahead == ']')
        ADVANCE(121);
      if (lookahead == '}')
        ADVANCE(122);
      if (lookahead != 0)
        ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(120);
      if (lookahead == ']')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(119);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '\r')
        ADVANCE(123);
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == ']')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(138);
      if (lookahead == 'e')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(142);
      if (lookahead == 'r')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'v')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'g')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'g')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(166);
      if (lookahead == 'm')
        ADVANCE(167);
      if (lookahead == 'n')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'o')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(173);
      if (lookahead == 's')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'x')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(176);
      if (lookahead == 'r')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'c')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'o')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'd')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'w')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'y')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'h')
        ADVANCE(203);
      if (lookahead == 'y')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'h')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'r')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(215);
      if (lookahead == '.')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
      END_STATE();
    case 216:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(107);
      if (lookahead == '\r')
        ADVANCE(216);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(223);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(106);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 217:
      if (lookahead == '-')
        ADVANCE(113);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(101);
      if (lookahead == 'E')
        ADVANCE(102);
      if (lookahead == 'O')
        ADVANCE(219);
      if (lookahead == 'X')
        ADVANCE(221);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(219);
      if (lookahead == 'x')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(220);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(222);
      END_STATE();
    case 223:
      if (lookahead == 'n')
        SKIP(106);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(235);
      if (lookahead == 'e')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(239);
      if (lookahead == 'r')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'l')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'v')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'g')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'l')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'o')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'g')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(263);
      if (lookahead == 'm')
        ADVANCE(264);
      if (lookahead == 'n')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'o')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(270);
      if (lookahead == 's')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'x')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'l')
        ADVANCE(273);
      if (lookahead == 'r')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'c')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'l')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'w')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'y')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'h')
        ADVANCE(300);
      if (lookahead == 'y')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'h')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(311);
      if (lookahead == '.')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(312);
      if (lookahead == '.')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(312);
      END_STATE();
    case 313:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(321);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        SKIP(322);
      if (lookahead == 'w')
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(313);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(312);
      END_STATE();
    case 314:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(314);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(315);
      if (lookahead == 'w')
        ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(215);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 315:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(314);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 316:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'h')
        ADVANCE(317);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(318);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 318:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 319:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 321:
      if (lookahead == '\n')
        ADVANCE(314);
      if (lookahead == '\r')
        ADVANCE(321);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '\\')
        SKIP(322);
      if (lookahead == 'w')
        ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(313);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(312);
      END_STATE();
    case 322:
      if (lookahead == 'n')
        SKIP(313);
      END_STATE();
    case 323:
      if (lookahead == 'h')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'r')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(320);
      END_STATE();
    case 327:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(330);
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
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 328:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(328);
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
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(328);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(328);
      if (lookahead == '\r')
        ADVANCE(330);
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
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(331);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(327);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        SKIP(327);
      END_STATE();
    case 332:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(346);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(347);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 'q')
        ADVANCE(349);
      if (lookahead == 't')
        ADVANCE(358);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 333:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(333);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(334);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(335);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 'q')
        ADVANCE(336);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(333);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(166);
      if (lookahead == 'n')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'u')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'l')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'd')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'h')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 346:
      if (lookahead == '\n')
        ADVANCE(333);
      if (lookahead == '\r')
        ADVANCE(346);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(347);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 'q')
        ADVANCE(349);
      if (lookahead == 't')
        ADVANCE(358);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(332);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 347:
      if (lookahead == 'n')
        SKIP(332);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(263);
      if (lookahead == 'n')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'a')
        ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'l')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'f')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'e')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'h')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '.')
        ADVANCE(364);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(365);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(358);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(359);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 360:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(360);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(362);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'i')
        ADVANCE(335);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(360);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 361:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 362:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 363:
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\r')
        ADVANCE(363);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '.')
        ADVANCE(364);
      if (lookahead == '=')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(365);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'i')
        ADVANCE(348);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(358);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(359);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 364:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 365:
      if (lookahead == 'n')
        SKIP(359);
      END_STATE();
    case 366:
      if (lookahead == '\t')
        SKIP(366);
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(372);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 367:
      if (lookahead == '\t')
        ADVANCE(367);
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(367);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 372:
      if (lookahead == '\t')
        SKIP(366);
      if (lookahead == '\n')
        ADVANCE(367);
      if (lookahead == '\r')
        ADVANCE(372);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 373:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(376);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 376:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(376);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 377:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'a')
        ADVANCE(390);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'h')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(377);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 378:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(378);
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
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'a')
        ADVANCE(380);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'h')
        ADVANCE(382);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(378);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
      ADVANCE(38);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 's')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'd')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'i')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'n')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(128);
      if (lookahead == 'g')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      END_STATE();
    case 388:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(389);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'a')
        ADVANCE(390);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'h')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(377);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 389:
      if (lookahead == 'n')
        SKIP(377);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'i')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(225);
      if (lookahead == 'g')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      END_STATE();
    case 398:
      if (lookahead == '\n')
        ADVANCE(399);
      if (lookahead == '\r')
        ADVANCE(450);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == 'A')
        ADVANCE(451);
      if (lookahead == 'B')
        ADVANCE(453);
      if (lookahead == 'C')
        ADVANCE(455);
      if (lookahead == 'D')
        ADVANCE(457);
      if (lookahead == 'E')
        ADVANCE(461);
      if (lookahead == 'F')
        ADVANCE(466);
      if (lookahead == 'G')
        ADVANCE(467);
      if (lookahead == 'H')
        ADVANCE(468);
      if (lookahead == 'L')
        ADVANCE(469);
      if (lookahead == 'N')
        ADVANCE(470);
      if (lookahead == 'O')
        ADVANCE(439);
      if (lookahead == 'R')
        ADVANCE(471);
      if (lookahead == 'S')
        ADVANCE(472);
      if (lookahead == 'U')
        ADVANCE(473);
      if (lookahead == 'V')
        ADVANCE(474);
      if (lookahead == 'X')
        ADVANCE(444);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'b')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(448);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(398);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      END_STATE();
    case 399:
      if (lookahead == '\n')
        ADVANCE(399);
      if (lookahead == '\r')
        ADVANCE(399);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == 'A')
        ADVANCE(400);
      if (lookahead == 'B')
        ADVANCE(403);
      if (lookahead == 'C')
        ADVANCE(407);
      if (lookahead == 'D')
        ADVANCE(411);
      if (lookahead == 'E')
        ADVANCE(421);
      if (lookahead == 'F')
        ADVANCE(432);
      if (lookahead == 'G')
        ADVANCE(435);
      if (lookahead == 'H')
        ADVANCE(436);
      if (lookahead == 'L')
        ADVANCE(437);
      if (lookahead == 'N')
        ADVANCE(438);
      if (lookahead == 'O')
        ADVANCE(439);
      if (lookahead == 'R')
        ADVANCE(440);
      if (lookahead == 'S')
        ADVANCE(441);
      if (lookahead == 'U')
        ADVANCE(442);
      if (lookahead == 'V')
        ADVANCE(443);
      if (lookahead == 'X')
        ADVANCE(444);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'b')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(448);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'K')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(404);
      if (lookahead == 'S')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(408);
      if (lookahead == 'R')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'N')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(412);
      if (lookahead == 'E')
        ADVANCE(417);
      if (lookahead == 'L')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 412:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == '1')
        ADVANCE(413);
      if (lookahead == '2')
        ADVANCE(414);
      if (lookahead == '3')
        ADVANCE(415);
      if (lookahead == '4')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 417:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'L')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'E')
        ADVANCE(420);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 421:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'M')
        ADVANCE(422);
      if (lookahead == 'N')
        ADVANCE(423);
      if (lookahead == 'O')
        ADVANCE(425);
      if (lookahead == 'S')
        ADVANCE(427);
      if (lookahead == 'T')
        ADVANCE(429);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 423:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'Q')
        ADVANCE(424);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 425:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(426);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 427:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'C')
        ADVANCE(428);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 429:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'B')
        ADVANCE(430);
      if (lookahead == 'X')
        ADVANCE(431);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 432:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(433);
      if (lookahead == 'S')
        ADVANCE(434);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 435:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 436:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 437:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'F')
        ADVANCE(31);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 438:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'A')
        ADVANCE(33);
      if (lookahead == 'U')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 441:
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
    case 442:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'T')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 450:
      if (lookahead == '\n')
        ADVANCE(399);
      if (lookahead == '\r')
        ADVANCE(450);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == 'A')
        ADVANCE(451);
      if (lookahead == 'B')
        ADVANCE(453);
      if (lookahead == 'C')
        ADVANCE(455);
      if (lookahead == 'D')
        ADVANCE(457);
      if (lookahead == 'E')
        ADVANCE(461);
      if (lookahead == 'F')
        ADVANCE(466);
      if (lookahead == 'G')
        ADVANCE(467);
      if (lookahead == 'H')
        ADVANCE(468);
      if (lookahead == 'L')
        ADVANCE(469);
      if (lookahead == 'N')
        ADVANCE(470);
      if (lookahead == 'O')
        ADVANCE(439);
      if (lookahead == 'R')
        ADVANCE(471);
      if (lookahead == 'S')
        ADVANCE(472);
      if (lookahead == 'U')
        ADVANCE(473);
      if (lookahead == 'V')
        ADVANCE(474);
      if (lookahead == 'X')
        ADVANCE(444);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'b')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(448);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(398);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(371);
      END_STATE();
    case 451:
      if (lookahead == 'C')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'K')
        ADVANCE(402);
      END_STATE();
    case 453:
      if (lookahead == 'E')
        ADVANCE(454);
      if (lookahead == 'S')
        ADVANCE(406);
      END_STATE();
    case 454:
      if (lookahead == 'L')
        ADVANCE(405);
      END_STATE();
    case 455:
      if (lookahead == 'A')
        ADVANCE(456);
      if (lookahead == 'R')
        ADVANCE(410);
      END_STATE();
    case 456:
      if (lookahead == 'N')
        ADVANCE(409);
      END_STATE();
    case 457:
      if (lookahead == 'C')
        ADVANCE(458);
      if (lookahead == 'E')
        ADVANCE(459);
      if (lookahead == 'L')
        ADVANCE(460);
      END_STATE();
    case 458:
      if (lookahead == '1')
        ADVANCE(413);
      if (lookahead == '2')
        ADVANCE(414);
      if (lookahead == '3')
        ADVANCE(415);
      if (lookahead == '4')
        ADVANCE(416);
      END_STATE();
    case 459:
      if (lookahead == 'L')
        ADVANCE(418);
      END_STATE();
    case 460:
      if (lookahead == 'E')
        ADVANCE(420);
      END_STATE();
    case 461:
      if (lookahead == 'M')
        ADVANCE(422);
      if (lookahead == 'N')
        ADVANCE(462);
      if (lookahead == 'O')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(464);
      if (lookahead == 'T')
        ADVANCE(465);
      END_STATE();
    case 462:
      if (lookahead == 'Q')
        ADVANCE(424);
      END_STATE();
    case 463:
      if (lookahead == 'T')
        ADVANCE(426);
      END_STATE();
    case 464:
      if (lookahead == 'C')
        ADVANCE(428);
      END_STATE();
    case 465:
      if (lookahead == 'B')
        ADVANCE(430);
      if (lookahead == 'X')
        ADVANCE(431);
      END_STATE();
    case 466:
      if (lookahead == 'F')
        ADVANCE(433);
      if (lookahead == 'S')
        ADVANCE(434);
      END_STATE();
    case 467:
      if (lookahead == 'S')
        ADVANCE(27);
      END_STATE();
    case 468:
      if (lookahead == 'T')
        ADVANCE(29);
      END_STATE();
    case 469:
      if (lookahead == 'F')
        ADVANCE(31);
      END_STATE();
    case 470:
      if (lookahead == 'A')
        ADVANCE(89);
      if (lookahead == 'U')
        ADVANCE(90);
      END_STATE();
    case 471:
      if (lookahead == 'S')
        ADVANCE(43);
      END_STATE();
    case 472:
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
    case 473:
      if (lookahead == 'S')
        ADVANCE(56);
      END_STATE();
    case 474:
      if (lookahead == 'T')
        ADVANCE(58);
      END_STATE();
    case 475:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(477);
      if (lookahead == 'B')
        ADVANCE(478);
      if (lookahead == 'C')
        ADVANCE(479);
      if (lookahead == 'D')
        ADVANCE(480);
      if (lookahead == 'E')
        ADVANCE(481);
      if (lookahead == 'F')
        ADVANCE(482);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(439);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(444);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'b')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(448);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(449);
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
        ADVANCE(371);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 476:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(476);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(477);
      if (lookahead == 'B')
        ADVANCE(478);
      if (lookahead == 'C')
        ADVANCE(479);
      if (lookahead == 'D')
        ADVANCE(480);
      if (lookahead == 'E')
        ADVANCE(481);
      if (lookahead == 'F')
        ADVANCE(482);
      if (lookahead == 'G')
        ADVANCE(85);
      if (lookahead == 'H')
        ADVANCE(86);
      if (lookahead == 'L')
        ADVANCE(87);
      if (lookahead == 'N')
        ADVANCE(88);
      if (lookahead == 'O')
        ADVANCE(439);
      if (lookahead == 'R')
        ADVANCE(91);
      if (lookahead == 'S')
        ADVANCE(92);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'V')
        ADVANCE(98);
      if (lookahead == 'X')
        ADVANCE(444);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '`')
        ADVANCE(64);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'b')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'n')
        ADVANCE(65);
      if (lookahead == 'o')
        ADVANCE(448);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == 't')
        ADVANCE(67);
      if (lookahead == 'v')
        ADVANCE(68);
      if (lookahead == 'x')
        ADVANCE(449);
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
        ADVANCE(371);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(452);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(454);
      if (lookahead == 'S')
        ADVANCE(406);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(456);
      if (lookahead == 'R')
        ADVANCE(410);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(458);
      if (lookahead == 'E')
        ADVANCE(459);
      if (lookahead == 'L')
        ADVANCE(460);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(422);
      if (lookahead == 'N')
        ADVANCE(462);
      if (lookahead == 'O')
        ADVANCE(463);
      if (lookahead == 'S')
        ADVANCE(464);
      if (lookahead == 'T')
        ADVANCE(465);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(433);
      if (lookahead == 'S')
        ADVANCE(434);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(484);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(484);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '@')
        ADVANCE(25);
      if (lookahead == '[')
        ADVANCE(59);
      if (lookahead == '\\')
        ADVANCE(370);
      if (lookahead == ']')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(62);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(483);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(489);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 490:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(489);
      END_STATE();
    case 491:
      if (lookahead == 'n')
        SKIP(486);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(496);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(497);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(492);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(495);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(493);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 494:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(493);
      if (lookahead == '\r')
        ADVANCE(496);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(497);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(492);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(495);
      END_STATE();
    case 497:
      if (lookahead == 'n')
        SKIP(492);
      END_STATE();
    case 498:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(498);
      END_STATE();
    case 499:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(499);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(108);
      if (lookahead == '\\')
        ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 500:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 501:
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '\\')
        SKIP(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(498);
      END_STATE();
    case 502:
      if (lookahead == 'n')
        SKIP(498);
      END_STATE();
    case 503:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'h')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(503);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 504:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(504);
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
      if (lookahead == '[')
        ADVANCE(119);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '_')
        ADVANCE(127);
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'd')
        ADVANCE(137);
      if (lookahead == 'e')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(158);
      if (lookahead == 'h')
        ADVANCE(382);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 'n')
        ADVANCE(193);
      if (lookahead == 'o')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == 'w')
        ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(504);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(214);
      ADVANCE(38);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 506:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(504);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(125);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '_')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(226);
      if (lookahead == 'd')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(251);
      if (lookahead == 'f')
        ADVANCE(255);
      if (lookahead == 'h')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'l')
        ADVANCE(281);
      if (lookahead == 'm')
        ADVANCE(284);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead == 'o')
        ADVANCE(297);
      if (lookahead == 't')
        ADVANCE(299);
      if (lookahead == 'w')
        ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(503);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(311);
      END_STATE();
    case 507:
      if (lookahead == 'n')
        SKIP(503);
      END_STATE();
    case 508:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(82);
      END_STATE();
    case 509:
      if (lookahead == '\t')
        ADVANCE(374);
      if (lookahead == '\n')
        ADVANCE(375);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == ' ')
        ADVANCE(368);
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
        ADVANCE(369);
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
        ADVANCE(370);
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
        ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(371);
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
  [2] = {.lex_state = 313},
  [3] = {.lex_state = 327},
  [4] = {.lex_state = 332},
  [5] = {.lex_state = 359},
  [6] = {.lex_state = 359},
  [7] = {.lex_state = 327},
  [8] = {.lex_state = 106},
  [9] = {.lex_state = 366},
  [10] = {.lex_state = 373},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 106},
  [17] = {.lex_state = 313},
  [18] = {.lex_state = 377},
  [19] = {.lex_state = 359},
  [20] = {.lex_state = 377},
  [21] = {.lex_state = 377},
  [22] = {.lex_state = 359},
  [23] = {.lex_state = 359},
  [24] = {.lex_state = 359},
  [25] = {.lex_state = 313},
  [26] = {.lex_state = 359},
  [27] = {.lex_state = 313},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 398},
  [35] = {.lex_state = 373},
  [36] = {.lex_state = 373},
  [37] = {.lex_state = 373},
  [38] = {.lex_state = 373},
  [39] = {.lex_state = 106},
  [40] = {.lex_state = 373},
  [41] = {.lex_state = 373},
  [42] = {.lex_state = 475},
  [43] = {.lex_state = 373},
  [44] = {.lex_state = 373},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 359},
  [48] = {.lex_state = 313},
  [49] = {.lex_state = 377},
  [50] = {.lex_state = 359},
  [51] = {.lex_state = 359},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 106},
  [54] = {.lex_state = 359},
  [55] = {.lex_state = 359},
  [56] = {.lex_state = 359},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 483},
  [61] = {.lex_state = 486},
  [62] = {.lex_state = 492},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 373},
  [65] = {.lex_state = 373},
  [66] = {.lex_state = 483},
  [67] = {.lex_state = 486},
  [68] = {.lex_state = 492},
  [69] = {.lex_state = 373},
  [70] = {.lex_state = 373},
  [71] = {.lex_state = 106},
  [72] = {.lex_state = 106},
  [73] = {.lex_state = 313},
  [74] = {.lex_state = 498},
  [75] = {.lex_state = 498},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 359},
  [78] = {.lex_state = 106},
  [79] = {.lex_state = 106},
  [80] = {.lex_state = 498},
  [81] = {.lex_state = 503},
  [82] = {.lex_state = 503},
  [83] = {.lex_state = 503},
  [84] = {.lex_state = 359},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 486},
  [92] = {.lex_state = 486},
  [93] = {.lex_state = 492},
  [94] = {.lex_state = 492},
  [95] = {.lex_state = 373},
  [96] = {.lex_state = 373},
  [97] = {.lex_state = 373},
  [98] = {.lex_state = 373},
  [99] = {.lex_state = 508},
  [100] = {.lex_state = 508},
  [101] = {.lex_state = 359},
  [102] = {.lex_state = 313},
  [103] = {.lex_state = 498},
  [104] = {.lex_state = 359},
  [105] = {.lex_state = 106},
  [106] = {.lex_state = 503},
  [107] = {.lex_state = 359},
  [108] = {.lex_state = 359},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 498},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 498},
  [113] = {.lex_state = 106},
  [114] = {.lex_state = 486},
  [115] = {.lex_state = 492},
  [116] = {.lex_state = 373},
  [117] = {.lex_state = 508},
  [118] = {.lex_state = 498},
  [119] = {.lex_state = 359},
  [120] = {.lex_state = 313},
  [121] = {.lex_state = 313},
  [122] = {.lex_state = 498},
  [123] = {.lex_state = 106},
  [124] = {.lex_state = 313},
  [125] = {.lex_state = 498},
  [126] = {.lex_state = 498},
  [127] = {.lex_state = 359},
  [128] = {.lex_state = 106},
  [129] = {.lex_state = 359},
  [130] = {.lex_state = 498},
  [131] = {.lex_state = 498},
  [132] = {.lex_state = 498},
  [133] = {.lex_state = 359},
  [134] = {.lex_state = 498},
  [135] = {.lex_state = 498},
  [136] = {.lex_state = 498},
  [137] = {.lex_state = 359},
  [138] = {.lex_state = 498},
  [139] = {.lex_state = 313},
  [140] = {.lex_state = 498},
  [141] = {.lex_state = 106},
  [142] = {.lex_state = 498},
  [143] = {.lex_state = 359},
  [144] = {.lex_state = 498},
  [145] = {.lex_state = 106},
  [146] = {.lex_state = 498},
  [147] = {.lex_state = 498},
  [148] = {.lex_state = 313},
  [149] = {.lex_state = 498},
  [150] = {.lex_state = 359},
  [151] = {.lex_state = 498},
  [152] = {.lex_state = 498},
  [153] = {.lex_state = 106},
  [154] = {.lex_state = 498},
  [155] = {.lex_state = 498},
  [156] = {.lex_state = 498},
  [157] = {.lex_state = 313},
  [158] = {.lex_state = 498},
  [159] = {.lex_state = 498},
  [160] = {.lex_state = 106},
  [161] = {.lex_state = 498},
  [162] = {.lex_state = 498},
  [163] = {.lex_state = 498},
  [164] = {.lex_state = 498},
  [165] = {.lex_state = 106},
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
    [sym_program] = STATE(12),
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(40),
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
    [sym__identifier] = STATE(21),
    [sym_reserved_identifier] = STATE(20),
    [anon_sym_where] = ACTIONS(42),
    [anon_sym_qualified] = ACTIONS(44),
    [sym_variable_identifier] = ACTIONS(46),
    [sym_constructor_identifier] = ACTIONS(46),
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
    [anon_sym_of] = ACTIONS(42),
    [anon_sym_then] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [sym__identifier] = STATE(24),
    [sym_simple_type] = STATE(25),
    [sym_reserved_identifier] = STATE(23),
    [aux_sym_new_constructor_repeat1] = STATE(26),
    [anon_sym_where] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(48),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_data] = ACTIONS(48),
    [anon_sym_default] = ACTIONS(48),
    [anon_sym_deriving] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_foreign] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_in] = ACTIONS(48),
    [anon_sym_infix] = ACTIONS(48),
    [anon_sym_infixl] = ACTIONS(48),
    [anon_sym_infixr] = ACTIONS(48),
    [anon_sym_instance] = ACTIONS(48),
    [anon_sym_let] = ACTIONS(48),
    [anon_sym_of] = ACTIONS(48),
    [anon_sym_then] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [6] = {
    [sym__identifier] = STATE(24),
    [sym_simple_type] = STATE(27),
    [sym_reserved_identifier] = STATE(23),
    [aux_sym_new_constructor_repeat1] = STATE(26),
    [anon_sym_where] = ACTIONS(48),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(48),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_data] = ACTIONS(48),
    [anon_sym_default] = ACTIONS(48),
    [anon_sym_deriving] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_foreign] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_in] = ACTIONS(48),
    [anon_sym_infix] = ACTIONS(48),
    [anon_sym_infixl] = ACTIONS(48),
    [anon_sym_infixr] = ACTIONS(48),
    [anon_sym_instance] = ACTIONS(48),
    [anon_sym_let] = ACTIONS(48),
    [anon_sym_of] = ACTIONS(48),
    [anon_sym_then] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_module] = ACTIONS(54),
    [anon_sym_where] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_newtype] = ACTIONS(54),
    [anon_sym_type] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [anon_sym_case] = ACTIONS(54),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_data] = ACTIONS(54),
    [anon_sym_default] = ACTIONS(54),
    [anon_sym_deriving] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(54),
    [anon_sym_else] = ACTIONS(54),
    [anon_sym_foreign] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(54),
    [anon_sym_in] = ACTIONS(54),
    [anon_sym_infix] = ACTIONS(54),
    [anon_sym_infixl] = ACTIONS(54),
    [anon_sym_infixr] = ACTIONS(54),
    [anon_sym_instance] = ACTIONS(54),
    [anon_sym_let] = ACTIONS(54),
    [anon_sym_of] = ACTIONS(54),
    [anon_sym_then] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym__integer_literal] = ACTIONS(54),
    [sym__octal_literal] = ACTIONS(54),
    [sym__hexidecimal_literal] = ACTIONS(54),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_module] = ACTIONS(60),
    [anon_sym_where] = ACTIONS(60),
    [anon_sym_import] = ACTIONS(60),
    [anon_sym_newtype] = ACTIONS(60),
    [anon_sym_type] = ACTIONS(60),
    [sym_variable_identifier] = ACTIONS(62),
    [sym_constructor_identifier] = ACTIONS(62),
    [sym_module_identifier] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(60),
    [anon_sym_class] = ACTIONS(60),
    [anon_sym_data] = ACTIONS(60),
    [anon_sym_default] = ACTIONS(60),
    [anon_sym_deriving] = ACTIONS(60),
    [anon_sym_do] = ACTIONS(60),
    [anon_sym_else] = ACTIONS(60),
    [anon_sym_foreign] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_in] = ACTIONS(60),
    [anon_sym_infix] = ACTIONS(60),
    [anon_sym_infixl] = ACTIONS(60),
    [anon_sym_infixr] = ACTIONS(60),
    [anon_sym_instance] = ACTIONS(60),
    [anon_sym_let] = ACTIONS(60),
    [anon_sym_of] = ACTIONS(60),
    [anon_sym_then] = ACTIONS(60),
    [anon_sym__] = ACTIONS(60),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(58),
    [anon_sym_DQUOTE] = ACTIONS(58),
    [sym__integer_literal] = ACTIONS(60),
    [sym__octal_literal] = ACTIONS(60),
    [sym__hexidecimal_literal] = ACTIONS(60),
  },
  [9] = {
    [sym__graphic] = STATE(31),
    [sym__small] = STATE(32),
    [sym__large] = STATE(32),
    [sym__symbol] = STATE(32),
    [sym__special] = STATE(32),
    [sym__escape] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(66),
    [anon_sym__] = ACTIONS(68),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(68),
    [sym__ascii_large] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(66),
    [anon_sym_POUND] = ACTIONS(66),
    [anon_sym_DOLLAR] = ACTIONS(66),
    [anon_sym_PERCENT] = ACTIONS(66),
    [anon_sym_AMP] = ACTIONS(66),
    [anon_sym_1] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_SLASH] = ACTIONS(66),
    [anon_sym_LT] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_QMARK] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_CARET] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_TILDE] = ACTIONS(66),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_BSLASH] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_BQUOTE] = ACTIONS(64),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [sym__space] = ACTIONS(70),
  },
  [10] = {
    [sym__gap] = STATE(38),
    [sym__graphic] = STATE(38),
    [sym__small] = STATE(40),
    [sym__large] = STATE(40),
    [sym__symbol] = STATE(40),
    [sym__special] = STATE(40),
    [sym__escape] = STATE(38),
    [aux_sym_string_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym__] = ACTIONS(82),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(82),
    [sym__ascii_large] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym__space] = ACTIONS(94),
    [sym__newline] = ACTIONS(94),
    [sym__tab] = ACTIONS(94),
    [sym__vertical_tab] = ACTIONS(94),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_module] = ACTIONS(98),
    [anon_sym_where] = ACTIONS(98),
    [anon_sym_import] = ACTIONS(98),
    [anon_sym_newtype] = ACTIONS(98),
    [anon_sym_type] = ACTIONS(98),
    [sym_variable_identifier] = ACTIONS(100),
    [sym_constructor_identifier] = ACTIONS(100),
    [sym_module_identifier] = ACTIONS(100),
    [anon_sym_case] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_data] = ACTIONS(98),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_deriving] = ACTIONS(98),
    [anon_sym_do] = ACTIONS(98),
    [anon_sym_else] = ACTIONS(98),
    [anon_sym_foreign] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(98),
    [anon_sym_in] = ACTIONS(98),
    [anon_sym_infix] = ACTIONS(98),
    [anon_sym_infixl] = ACTIONS(98),
    [anon_sym_infixr] = ACTIONS(98),
    [anon_sym_instance] = ACTIONS(98),
    [anon_sym_let] = ACTIONS(98),
    [anon_sym_of] = ACTIONS(98),
    [anon_sym_then] = ACTIONS(98),
    [anon_sym__] = ACTIONS(98),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym__integer_literal] = ACTIONS(98),
    [sym__octal_literal] = ACTIONS(98),
    [sym__hexidecimal_literal] = ACTIONS(98),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(104),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_module] = ACTIONS(108),
    [anon_sym_where] = ACTIONS(108),
    [anon_sym_import] = ACTIONS(108),
    [anon_sym_newtype] = ACTIONS(108),
    [anon_sym_type] = ACTIONS(108),
    [sym_variable_identifier] = ACTIONS(110),
    [sym_constructor_identifier] = ACTIONS(110),
    [sym_module_identifier] = ACTIONS(110),
    [anon_sym_case] = ACTIONS(108),
    [anon_sym_class] = ACTIONS(108),
    [anon_sym_data] = ACTIONS(108),
    [anon_sym_default] = ACTIONS(108),
    [anon_sym_deriving] = ACTIONS(108),
    [anon_sym_do] = ACTIONS(108),
    [anon_sym_else] = ACTIONS(108),
    [anon_sym_foreign] = ACTIONS(108),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_in] = ACTIONS(108),
    [anon_sym_infix] = ACTIONS(108),
    [anon_sym_infixl] = ACTIONS(108),
    [anon_sym_infixr] = ACTIONS(108),
    [anon_sym_instance] = ACTIONS(108),
    [anon_sym_let] = ACTIONS(108),
    [anon_sym_of] = ACTIONS(108),
    [anon_sym_then] = ACTIONS(108),
    [anon_sym__] = ACTIONS(108),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym__integer_literal] = ACTIONS(108),
    [sym__octal_literal] = ACTIONS(108),
    [sym__hexidecimal_literal] = ACTIONS(108),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_where] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [anon_sym_newtype] = ACTIONS(114),
    [anon_sym_type] = ACTIONS(114),
    [sym_variable_identifier] = ACTIONS(116),
    [sym_constructor_identifier] = ACTIONS(116),
    [sym_module_identifier] = ACTIONS(116),
    [anon_sym_case] = ACTIONS(114),
    [anon_sym_class] = ACTIONS(114),
    [anon_sym_data] = ACTIONS(114),
    [anon_sym_default] = ACTIONS(114),
    [anon_sym_deriving] = ACTIONS(114),
    [anon_sym_do] = ACTIONS(114),
    [anon_sym_else] = ACTIONS(114),
    [anon_sym_foreign] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_in] = ACTIONS(114),
    [anon_sym_infix] = ACTIONS(114),
    [anon_sym_infixl] = ACTIONS(114),
    [anon_sym_infixr] = ACTIONS(114),
    [anon_sym_instance] = ACTIONS(114),
    [anon_sym_let] = ACTIONS(114),
    [anon_sym_of] = ACTIONS(114),
    [anon_sym_then] = ACTIONS(114),
    [anon_sym__] = ACTIONS(114),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [sym__integer_literal] = ACTIONS(114),
    [sym__octal_literal] = ACTIONS(114),
    [sym__hexidecimal_literal] = ACTIONS(114),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_module] = ACTIONS(120),
    [anon_sym_where] = ACTIONS(120),
    [anon_sym_import] = ACTIONS(120),
    [anon_sym_newtype] = ACTIONS(120),
    [anon_sym_type] = ACTIONS(120),
    [sym_variable_identifier] = ACTIONS(122),
    [sym_constructor_identifier] = ACTIONS(122),
    [sym_module_identifier] = ACTIONS(122),
    [anon_sym_case] = ACTIONS(120),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_data] = ACTIONS(120),
    [anon_sym_default] = ACTIONS(120),
    [anon_sym_deriving] = ACTIONS(120),
    [anon_sym_do] = ACTIONS(120),
    [anon_sym_else] = ACTIONS(120),
    [anon_sym_foreign] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_in] = ACTIONS(120),
    [anon_sym_infix] = ACTIONS(120),
    [anon_sym_infixl] = ACTIONS(120),
    [anon_sym_infixr] = ACTIONS(120),
    [anon_sym_instance] = ACTIONS(120),
    [anon_sym_let] = ACTIONS(120),
    [anon_sym_of] = ACTIONS(120),
    [anon_sym_then] = ACTIONS(120),
    [anon_sym__] = ACTIONS(120),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__integer_literal] = ACTIONS(120),
    [sym__octal_literal] = ACTIONS(120),
    [sym__hexidecimal_literal] = ACTIONS(120),
  },
  [16] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
  [17] = {
    [sym_module_export_declarations] = STATE(48),
    [anon_sym_where] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(128),
    [sym_comment] = ACTIONS(24),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_as] = ACTIONS(38),
    [anon_sym_hiding] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(40),
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
  [19] = {
    [sym__identifier] = STATE(49),
    [sym_reserved_identifier] = STATE(20),
    [anon_sym_where] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(46),
    [sym_constructor_identifier] = ACTIONS(46),
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
    [anon_sym_of] = ACTIONS(42),
    [anon_sym_then] = ACTIONS(42),
    [anon_sym__] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_module] = ACTIONS(54),
    [anon_sym_where] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_as] = ACTIONS(54),
    [anon_sym_hiding] = ACTIONS(54),
    [anon_sym_newtype] = ACTIONS(54),
    [anon_sym_type] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [anon_sym_case] = ACTIONS(54),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_data] = ACTIONS(54),
    [anon_sym_default] = ACTIONS(54),
    [anon_sym_deriving] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(54),
    [anon_sym_else] = ACTIONS(54),
    [anon_sym_foreign] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(54),
    [anon_sym_in] = ACTIONS(54),
    [anon_sym_infix] = ACTIONS(54),
    [anon_sym_infixl] = ACTIONS(54),
    [anon_sym_infixr] = ACTIONS(54),
    [anon_sym_instance] = ACTIONS(54),
    [anon_sym_let] = ACTIONS(54),
    [anon_sym_of] = ACTIONS(54),
    [anon_sym_then] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym__integer_literal] = ACTIONS(54),
    [sym__octal_literal] = ACTIONS(54),
    [sym__hexidecimal_literal] = ACTIONS(54),
  },
  [21] = {
    [sym_import_specification] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_module] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_as] = ACTIONS(136),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(132),
    [anon_sym_type] = ACTIONS(132),
    [sym_variable_identifier] = ACTIONS(140),
    [sym_constructor_identifier] = ACTIONS(140),
    [sym_module_identifier] = ACTIONS(140),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_data] = ACTIONS(132),
    [anon_sym_default] = ACTIONS(132),
    [anon_sym_deriving] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(132),
    [anon_sym_foreign] = ACTIONS(132),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_in] = ACTIONS(132),
    [anon_sym_infix] = ACTIONS(132),
    [anon_sym_infixl] = ACTIONS(132),
    [anon_sym_infixr] = ACTIONS(132),
    [anon_sym_instance] = ACTIONS(132),
    [anon_sym_let] = ACTIONS(132),
    [anon_sym_of] = ACTIONS(132),
    [anon_sym_then] = ACTIONS(132),
    [anon_sym__] = ACTIONS(132),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym__integer_literal] = ACTIONS(132),
    [sym__octal_literal] = ACTIONS(132),
    [sym__hexidecimal_literal] = ACTIONS(132),
  },
  [22] = {
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_EQ] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(40),
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
    [anon_sym_of] = ACTIONS(38),
    [anon_sym_then] = ACTIONS(38),
    [anon_sym__] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
  },
  [23] = {
    [anon_sym_where] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(52),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [anon_sym_case] = ACTIONS(54),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_data] = ACTIONS(54),
    [anon_sym_default] = ACTIONS(54),
    [anon_sym_deriving] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(54),
    [anon_sym_else] = ACTIONS(54),
    [anon_sym_foreign] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(54),
    [anon_sym_in] = ACTIONS(54),
    [anon_sym_infix] = ACTIONS(54),
    [anon_sym_infixl] = ACTIONS(54),
    [anon_sym_infixr] = ACTIONS(54),
    [anon_sym_instance] = ACTIONS(54),
    [anon_sym_let] = ACTIONS(54),
    [anon_sym_of] = ACTIONS(54),
    [anon_sym_then] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
  },
  [24] = {
    [anon_sym_where] = ACTIONS(142),
    [anon_sym_EQ] = ACTIONS(144),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(142),
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_default] = ACTIONS(142),
    [anon_sym_deriving] = ACTIONS(142),
    [anon_sym_do] = ACTIONS(142),
    [anon_sym_else] = ACTIONS(142),
    [anon_sym_foreign] = ACTIONS(142),
    [anon_sym_if] = ACTIONS(142),
    [anon_sym_in] = ACTIONS(142),
    [anon_sym_infix] = ACTIONS(142),
    [anon_sym_infixl] = ACTIONS(142),
    [anon_sym_infixr] = ACTIONS(142),
    [anon_sym_instance] = ACTIONS(142),
    [anon_sym_let] = ACTIONS(142),
    [anon_sym_of] = ACTIONS(142),
    [anon_sym_then] = ACTIONS(142),
    [anon_sym__] = ACTIONS(142),
    [sym_comment] = ACTIONS(24),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(148),
    [sym_comment] = ACTIONS(24),
  },
  [26] = {
    [sym__identifier] = STATE(55),
    [sym_reserved_identifier] = STATE(23),
    [anon_sym_where] = ACTIONS(48),
    [anon_sym_EQ] = ACTIONS(150),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(50),
    [sym_module_identifier] = ACTIONS(50),
    [anon_sym_case] = ACTIONS(48),
    [anon_sym_class] = ACTIONS(48),
    [anon_sym_data] = ACTIONS(48),
    [anon_sym_default] = ACTIONS(48),
    [anon_sym_deriving] = ACTIONS(48),
    [anon_sym_do] = ACTIONS(48),
    [anon_sym_else] = ACTIONS(48),
    [anon_sym_foreign] = ACTIONS(48),
    [anon_sym_if] = ACTIONS(48),
    [anon_sym_in] = ACTIONS(48),
    [anon_sym_infix] = ACTIONS(48),
    [anon_sym_infixl] = ACTIONS(48),
    [anon_sym_infixr] = ACTIONS(48),
    [anon_sym_instance] = ACTIONS(48),
    [anon_sym_let] = ACTIONS(48),
    [anon_sym_of] = ACTIONS(48),
    [anon_sym_then] = ACTIONS(48),
    [anon_sym__] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(152),
    [sym_comment] = ACTIONS(24),
  },
  [28] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(154),
  },
  [29] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(156),
  },
  [30] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(158),
  },
  [31] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(160),
  },
  [32] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(162),
  },
  [33] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(164),
  },
  [34] = {
    [sym__char_escape] = STATE(59),
    [sym__ascii] = STATE(59),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(168),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_CARET] = ACTIONS(170),
    [anon_sym_BSLASH] = ACTIONS(166),
    [anon_sym_x] = ACTIONS(172),
    [anon_sym_X] = ACTIONS(172),
    [anon_sym_o] = ACTIONS(174),
    [anon_sym_O] = ACTIONS(174),
    [anon_sym_a] = ACTIONS(166),
    [anon_sym_b] = ACTIONS(166),
    [anon_sym_f] = ACTIONS(166),
    [anon_sym_n] = ACTIONS(166),
    [anon_sym_r] = ACTIONS(166),
    [anon_sym_t] = ACTIONS(166),
    [anon_sym_v] = ACTIONS(166),
    [anon_sym_NUL] = ACTIONS(176),
    [anon_sym_SOH] = ACTIONS(176),
    [anon_sym_STX] = ACTIONS(176),
    [anon_sym_ETX] = ACTIONS(176),
    [anon_sym_EOT] = ACTIONS(176),
    [anon_sym_ENQ] = ACTIONS(176),
    [anon_sym_ACK] = ACTIONS(176),
    [anon_sym_BEL] = ACTIONS(176),
    [anon_sym_BS] = ACTIONS(176),
    [anon_sym_HT] = ACTIONS(176),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_VT] = ACTIONS(176),
    [anon_sym_FF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SO] = ACTIONS(176),
    [anon_sym_SI] = ACTIONS(176),
    [anon_sym_DLE] = ACTIONS(176),
    [anon_sym_DC1] = ACTIONS(176),
    [anon_sym_DC2] = ACTIONS(176),
    [anon_sym_DC3] = ACTIONS(176),
    [anon_sym_DC4] = ACTIONS(176),
    [anon_sym_NAK] = ACTIONS(176),
    [anon_sym_SYN] = ACTIONS(176),
    [anon_sym_ETB] = ACTIONS(176),
    [anon_sym_CAN] = ACTIONS(176),
    [anon_sym_EM] = ACTIONS(176),
    [anon_sym_SUB] = ACTIONS(176),
    [anon_sym_ESC] = ACTIONS(176),
    [anon_sym_FS] = ACTIONS(176),
    [anon_sym_GS] = ACTIONS(176),
    [anon_sym_RS] = ACTIONS(176),
    [anon_sym_US] = ACTIONS(176),
    [anon_sym_SP] = ACTIONS(176),
    [anon_sym_DEL] = ACTIONS(176),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(178),
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
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_QMARK] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_COLON] = ACTIONS(178),
    [anon_sym_BSLASH] = ACTIONS(178),
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
  [36] = {
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
  [37] = {
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
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym__] = ACTIONS(184),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(184),
    [sym__ascii_large] = ACTIONS(184),
    [anon_sym_BANG] = ACTIONS(184),
    [anon_sym_POUND] = ACTIONS(184),
    [anon_sym_DOLLAR] = ACTIONS(184),
    [anon_sym_PERCENT] = ACTIONS(184),
    [anon_sym_AMP] = ACTIONS(184),
    [anon_sym_1] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_DOT] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(184),
    [anon_sym_LT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(184),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_DASH] = ACTIONS(184),
    [anon_sym_TILDE] = ACTIONS(184),
    [anon_sym_COLON] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [sym__space] = ACTIONS(184),
    [sym__newline] = ACTIONS(184),
    [sym__tab] = ACTIONS(184),
    [sym__vertical_tab] = ACTIONS(184),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_module] = ACTIONS(188),
    [anon_sym_where] = ACTIONS(188),
    [anon_sym_import] = ACTIONS(188),
    [anon_sym_newtype] = ACTIONS(188),
    [anon_sym_type] = ACTIONS(188),
    [sym_variable_identifier] = ACTIONS(190),
    [sym_constructor_identifier] = ACTIONS(190),
    [sym_module_identifier] = ACTIONS(190),
    [anon_sym_case] = ACTIONS(188),
    [anon_sym_class] = ACTIONS(188),
    [anon_sym_data] = ACTIONS(188),
    [anon_sym_default] = ACTIONS(188),
    [anon_sym_deriving] = ACTIONS(188),
    [anon_sym_do] = ACTIONS(188),
    [anon_sym_else] = ACTIONS(188),
    [anon_sym_foreign] = ACTIONS(188),
    [anon_sym_if] = ACTIONS(188),
    [anon_sym_in] = ACTIONS(188),
    [anon_sym_infix] = ACTIONS(188),
    [anon_sym_infixl] = ACTIONS(188),
    [anon_sym_infixr] = ACTIONS(188),
    [anon_sym_instance] = ACTIONS(188),
    [anon_sym_let] = ACTIONS(188),
    [anon_sym_of] = ACTIONS(188),
    [anon_sym_then] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(190),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [sym__integer_literal] = ACTIONS(188),
    [sym__octal_literal] = ACTIONS(188),
    [sym__hexidecimal_literal] = ACTIONS(188),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(192),
    [sym__ascii_large] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_POUND] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(192),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_1] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_QMARK] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [sym__space] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
    [sym__tab] = ACTIONS(192),
    [sym__vertical_tab] = ACTIONS(192),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(24),
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
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(194),
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
  [42] = {
    [sym__char_escape] = STATE(65),
    [sym__ascii] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym__] = ACTIONS(180),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(180),
    [sym__ascii_large] = ACTIONS(180),
    [anon_sym_BANG] = ACTIONS(180),
    [anon_sym_POUND] = ACTIONS(180),
    [anon_sym_DOLLAR] = ACTIONS(180),
    [anon_sym_PERCENT] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_QMARK] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_COLON] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(196),
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
    [anon_sym_x] = ACTIONS(202),
    [anon_sym_X] = ACTIONS(202),
    [anon_sym_o] = ACTIONS(204),
    [anon_sym_O] = ACTIONS(204),
    [anon_sym_a] = ACTIONS(196),
    [anon_sym_b] = ACTIONS(196),
    [anon_sym_f] = ACTIONS(196),
    [anon_sym_n] = ACTIONS(196),
    [anon_sym_r] = ACTIONS(196),
    [anon_sym_t] = ACTIONS(196),
    [anon_sym_v] = ACTIONS(196),
    [anon_sym_NUL] = ACTIONS(206),
    [anon_sym_SOH] = ACTIONS(206),
    [anon_sym_STX] = ACTIONS(206),
    [anon_sym_ETX] = ACTIONS(206),
    [anon_sym_EOT] = ACTIONS(206),
    [anon_sym_ENQ] = ACTIONS(206),
    [anon_sym_ACK] = ACTIONS(206),
    [anon_sym_BEL] = ACTIONS(206),
    [anon_sym_BS] = ACTIONS(206),
    [anon_sym_HT] = ACTIONS(206),
    [anon_sym_LF] = ACTIONS(206),
    [anon_sym_VT] = ACTIONS(206),
    [anon_sym_FF] = ACTIONS(206),
    [anon_sym_CR] = ACTIONS(206),
    [anon_sym_SO] = ACTIONS(206),
    [anon_sym_SI] = ACTIONS(206),
    [anon_sym_DLE] = ACTIONS(206),
    [anon_sym_DC1] = ACTIONS(206),
    [anon_sym_DC2] = ACTIONS(206),
    [anon_sym_DC3] = ACTIONS(206),
    [anon_sym_DC4] = ACTIONS(206),
    [anon_sym_NAK] = ACTIONS(206),
    [anon_sym_SYN] = ACTIONS(206),
    [anon_sym_ETB] = ACTIONS(206),
    [anon_sym_CAN] = ACTIONS(206),
    [anon_sym_EM] = ACTIONS(206),
    [anon_sym_SUB] = ACTIONS(206),
    [anon_sym_ESC] = ACTIONS(206),
    [anon_sym_FS] = ACTIONS(206),
    [anon_sym_GS] = ACTIONS(206),
    [anon_sym_RS] = ACTIONS(206),
    [anon_sym_US] = ACTIONS(206),
    [anon_sym_SP] = ACTIONS(206),
    [anon_sym_DEL] = ACTIONS(206),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
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
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [sym__vertical_tab] = ACTIONS(208),
  },
  [44] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(40),
    [sym__large] = STATE(40),
    [sym__symbol] = STATE(40),
    [sym__special] = STATE(40),
    [sym__escape] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym__] = ACTIONS(82),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(82),
    [sym__ascii_large] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(80),
    [anon_sym_POUND] = ACTIONS(80),
    [anon_sym_DOLLAR] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(80),
    [anon_sym_AMP] = ACTIONS(80),
    [anon_sym_1] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_LT] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_CARET] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_BQUOTE] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [sym__space] = ACTIONS(94),
    [sym__newline] = ACTIONS(94),
    [sym__tab] = ACTIONS(94),
    [sym__vertical_tab] = ACTIONS(94),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_where] = ACTIONS(216),
    [anon_sym_import] = ACTIONS(216),
    [anon_sym_newtype] = ACTIONS(216),
    [anon_sym_type] = ACTIONS(216),
    [sym_variable_identifier] = ACTIONS(218),
    [sym_constructor_identifier] = ACTIONS(218),
    [sym_module_identifier] = ACTIONS(218),
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
    [anon_sym_of] = ACTIONS(216),
    [anon_sym_then] = ACTIONS(216),
    [anon_sym__] = ACTIONS(216),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(218),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym__integer_literal] = ACTIONS(216),
    [sym__octal_literal] = ACTIONS(216),
    [sym__hexidecimal_literal] = ACTIONS(216),
  },
  [46] = {
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(220),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
  [47] = {
    [sym_export_declaration] = STATE(74),
    [sym__identifier] = STATE(75),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(222),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [48] = {
    [anon_sym_where] = ACTIONS(224),
    [sym_comment] = ACTIONS(24),
  },
  [49] = {
    [sym_import_specification] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_module] = ACTIONS(228),
    [anon_sym_where] = ACTIONS(228),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(228),
    [anon_sym_as] = ACTIONS(230),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(228),
    [anon_sym_type] = ACTIONS(228),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_module_identifier] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(228),
    [anon_sym_class] = ACTIONS(228),
    [anon_sym_data] = ACTIONS(228),
    [anon_sym_default] = ACTIONS(228),
    [anon_sym_deriving] = ACTIONS(228),
    [anon_sym_do] = ACTIONS(228),
    [anon_sym_else] = ACTIONS(228),
    [anon_sym_foreign] = ACTIONS(228),
    [anon_sym_if] = ACTIONS(228),
    [anon_sym_in] = ACTIONS(228),
    [anon_sym_infix] = ACTIONS(228),
    [anon_sym_infixl] = ACTIONS(228),
    [anon_sym_infixr] = ACTIONS(228),
    [anon_sym_instance] = ACTIONS(228),
    [anon_sym_let] = ACTIONS(228),
    [anon_sym_of] = ACTIONS(228),
    [anon_sym_then] = ACTIONS(228),
    [anon_sym__] = ACTIONS(228),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [sym__integer_literal] = ACTIONS(228),
    [sym__octal_literal] = ACTIONS(228),
    [sym__hexidecimal_literal] = ACTIONS(228),
  },
  [50] = {
    [sym__identifier] = STATE(80),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(234),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [51] = {
    [sym__identifier] = STATE(83),
    [sym_reserved_identifier] = STATE(82),
    [anon_sym_where] = ACTIONS(236),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(238),
    [sym_module_identifier] = ACTIONS(238),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_data] = ACTIONS(236),
    [anon_sym_default] = ACTIONS(236),
    [anon_sym_deriving] = ACTIONS(236),
    [anon_sym_do] = ACTIONS(236),
    [anon_sym_else] = ACTIONS(236),
    [anon_sym_foreign] = ACTIONS(236),
    [anon_sym_if] = ACTIONS(236),
    [anon_sym_in] = ACTIONS(236),
    [anon_sym_infix] = ACTIONS(236),
    [anon_sym_infixl] = ACTIONS(236),
    [anon_sym_infixr] = ACTIONS(236),
    [anon_sym_instance] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(236),
    [anon_sym_of] = ACTIONS(236),
    [anon_sym_then] = ACTIONS(236),
    [anon_sym__] = ACTIONS(236),
    [sym_comment] = ACTIONS(24),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(240),
    [sym_comment] = ACTIONS(24),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_module] = ACTIONS(228),
    [anon_sym_where] = ACTIONS(228),
    [anon_sym_import] = ACTIONS(228),
    [anon_sym_newtype] = ACTIONS(228),
    [anon_sym_type] = ACTIONS(228),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_module_identifier] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(228),
    [anon_sym_class] = ACTIONS(228),
    [anon_sym_data] = ACTIONS(228),
    [anon_sym_default] = ACTIONS(228),
    [anon_sym_deriving] = ACTIONS(228),
    [anon_sym_do] = ACTIONS(228),
    [anon_sym_else] = ACTIONS(228),
    [anon_sym_foreign] = ACTIONS(228),
    [anon_sym_if] = ACTIONS(228),
    [anon_sym_in] = ACTIONS(228),
    [anon_sym_infix] = ACTIONS(228),
    [anon_sym_infixl] = ACTIONS(228),
    [anon_sym_infixr] = ACTIONS(228),
    [anon_sym_instance] = ACTIONS(228),
    [anon_sym_let] = ACTIONS(228),
    [anon_sym_of] = ACTIONS(228),
    [anon_sym_then] = ACTIONS(228),
    [anon_sym__] = ACTIONS(228),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [sym__integer_literal] = ACTIONS(228),
    [sym__octal_literal] = ACTIONS(228),
    [sym__hexidecimal_literal] = ACTIONS(228),
  },
  [54] = {
    [sym_new_constructor] = STATE(85),
    [sym__identifier] = STATE(86),
    [sym_reserved_identifier] = STATE(7),
    [aux_sym_new_constructor_repeat1] = STATE(87),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [55] = {
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_EQ] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(24),
  },
  [56] = {
    [sym__identifier] = STATE(86),
    [sym_reserved_identifier] = STATE(7),
    [aux_sym_new_constructor_repeat1] = STATE(88),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_module] = ACTIONS(250),
    [anon_sym_where] = ACTIONS(250),
    [anon_sym_import] = ACTIONS(250),
    [anon_sym_newtype] = ACTIONS(250),
    [anon_sym_type] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_data] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_do] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_foreign] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(250),
    [anon_sym_infix] = ACTIONS(250),
    [anon_sym_infixl] = ACTIONS(250),
    [anon_sym_infixr] = ACTIONS(250),
    [anon_sym_instance] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_of] = ACTIONS(250),
    [anon_sym_then] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(252),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym__integer_literal] = ACTIONS(250),
    [sym__octal_literal] = ACTIONS(250),
    [sym__hexidecimal_literal] = ACTIONS(250),
  },
  [58] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(254),
  },
  [59] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(256),
  },
  [60] = {
    [sym__cntrl] = STATE(90),
    [anon_sym__] = ACTIONS(258),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_CARET] = ACTIONS(258),
    [anon_sym_BSLASH] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
  },
  [61] = {
    [aux_sym__escape_repeat1] = STATE(92),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(260),
  },
  [62] = {
    [aux_sym__escape_repeat2] = STATE(94),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(262),
  },
  [63] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(264),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_EQ] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(266),
    [sym__ascii_large] = ACTIONS(266),
    [anon_sym_BANG] = ACTIONS(266),
    [anon_sym_POUND] = ACTIONS(266),
    [anon_sym_DOLLAR] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(266),
    [anon_sym_1] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_LT] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [anon_sym_QMARK] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
    [anon_sym_BQUOTE] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [sym__space] = ACTIONS(266),
    [sym__newline] = ACTIONS(266),
    [sym__tab] = ACTIONS(266),
    [sym__vertical_tab] = ACTIONS(266),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym__] = ACTIONS(268),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(268),
    [sym__ascii_large] = ACTIONS(268),
    [anon_sym_BANG] = ACTIONS(268),
    [anon_sym_POUND] = ACTIONS(268),
    [anon_sym_DOLLAR] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(268),
    [anon_sym_AMP] = ACTIONS(268),
    [anon_sym_1] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DOT] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(268),
    [anon_sym_CARET] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_COLON] = ACTIONS(268),
    [anon_sym_BSLASH] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_RBRACK] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [sym__space] = ACTIONS(268),
    [sym__newline] = ACTIONS(268),
    [sym__tab] = ACTIONS(268),
    [sym__vertical_tab] = ACTIONS(268),
  },
  [66] = {
    [sym__cntrl] = STATE(96),
    [anon_sym__] = ACTIONS(270),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
  },
  [67] = {
    [aux_sym__escape_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(272),
  },
  [68] = {
    [aux_sym__escape_repeat2] = STATE(100),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(274),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym__] = ACTIONS(276),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(276),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(276),
    [sym__ascii_large] = ACTIONS(276),
    [anon_sym_BANG] = ACTIONS(276),
    [anon_sym_POUND] = ACTIONS(276),
    [anon_sym_DOLLAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(276),
    [anon_sym_1] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_LT] = ACTIONS(276),
    [anon_sym_GT] = ACTIONS(276),
    [anon_sym_QMARK] = ACTIONS(276),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_CARET] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_BSLASH] = ACTIONS(276),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(276),
    [anon_sym_BQUOTE] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [sym__space] = ACTIONS(276),
    [sym__newline] = ACTIONS(276),
    [sym__tab] = ACTIONS(276),
    [sym__vertical_tab] = ACTIONS(276),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(24),
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
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_module] = ACTIONS(282),
    [anon_sym_where] = ACTIONS(282),
    [anon_sym_import] = ACTIONS(282),
    [anon_sym_newtype] = ACTIONS(282),
    [anon_sym_type] = ACTIONS(282),
    [sym_variable_identifier] = ACTIONS(284),
    [sym_constructor_identifier] = ACTIONS(284),
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
    [anon_sym_of] = ACTIONS(282),
    [anon_sym_then] = ACTIONS(282),
    [anon_sym__] = ACTIONS(282),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym__integer_literal] = ACTIONS(282),
    [sym__octal_literal] = ACTIONS(282),
    [sym__hexidecimal_literal] = ACTIONS(282),
  },
  [72] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
  [73] = {
    [anon_sym_where] = ACTIONS(288),
    [sym_comment] = ACTIONS(24),
  },
  [74] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(24),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(24),
  },
  [76] = {
    [sym__statement] = STATE(13),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(105),
    [ts_builtin_sym_end] = ACTIONS(298),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
  [77] = {
    [sym__identifier] = STATE(106),
    [sym_reserved_identifier] = STATE(82),
    [anon_sym_where] = ACTIONS(236),
    [sym_variable_identifier] = ACTIONS(238),
    [sym_constructor_identifier] = ACTIONS(238),
    [sym_module_identifier] = ACTIONS(238),
    [anon_sym_case] = ACTIONS(236),
    [anon_sym_class] = ACTIONS(236),
    [anon_sym_data] = ACTIONS(236),
    [anon_sym_default] = ACTIONS(236),
    [anon_sym_deriving] = ACTIONS(236),
    [anon_sym_do] = ACTIONS(236),
    [anon_sym_else] = ACTIONS(236),
    [anon_sym_foreign] = ACTIONS(236),
    [anon_sym_if] = ACTIONS(236),
    [anon_sym_in] = ACTIONS(236),
    [anon_sym_infix] = ACTIONS(236),
    [anon_sym_infixl] = ACTIONS(236),
    [anon_sym_infixr] = ACTIONS(236),
    [anon_sym_instance] = ACTIONS(236),
    [anon_sym_let] = ACTIONS(236),
    [anon_sym_of] = ACTIONS(236),
    [anon_sym_then] = ACTIONS(236),
    [anon_sym__] = ACTIONS(236),
    [sym_comment] = ACTIONS(24),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_where] = ACTIONS(302),
    [anon_sym_import] = ACTIONS(302),
    [anon_sym_newtype] = ACTIONS(302),
    [anon_sym_type] = ACTIONS(302),
    [sym_variable_identifier] = ACTIONS(304),
    [sym_constructor_identifier] = ACTIONS(304),
    [sym_module_identifier] = ACTIONS(304),
    [anon_sym_case] = ACTIONS(302),
    [anon_sym_class] = ACTIONS(302),
    [anon_sym_data] = ACTIONS(302),
    [anon_sym_default] = ACTIONS(302),
    [anon_sym_deriving] = ACTIONS(302),
    [anon_sym_do] = ACTIONS(302),
    [anon_sym_else] = ACTIONS(302),
    [anon_sym_foreign] = ACTIONS(302),
    [anon_sym_if] = ACTIONS(302),
    [anon_sym_in] = ACTIONS(302),
    [anon_sym_infix] = ACTIONS(302),
    [anon_sym_infixl] = ACTIONS(302),
    [anon_sym_infixr] = ACTIONS(302),
    [anon_sym_instance] = ACTIONS(302),
    [anon_sym_let] = ACTIONS(302),
    [anon_sym_of] = ACTIONS(302),
    [anon_sym_then] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__integer_literal] = ACTIONS(302),
    [sym__octal_literal] = ACTIONS(302),
    [sym__hexidecimal_literal] = ACTIONS(302),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_module] = ACTIONS(308),
    [anon_sym_where] = ACTIONS(308),
    [anon_sym_import] = ACTIONS(308),
    [anon_sym_newtype] = ACTIONS(308),
    [anon_sym_type] = ACTIONS(308),
    [sym_variable_identifier] = ACTIONS(310),
    [sym_constructor_identifier] = ACTIONS(310),
    [sym_module_identifier] = ACTIONS(310),
    [anon_sym_case] = ACTIONS(308),
    [anon_sym_class] = ACTIONS(308),
    [anon_sym_data] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
    [anon_sym_deriving] = ACTIONS(308),
    [anon_sym_do] = ACTIONS(308),
    [anon_sym_else] = ACTIONS(308),
    [anon_sym_foreign] = ACTIONS(308),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_in] = ACTIONS(308),
    [anon_sym_infix] = ACTIONS(308),
    [anon_sym_infixl] = ACTIONS(308),
    [anon_sym_infixr] = ACTIONS(308),
    [anon_sym_instance] = ACTIONS(308),
    [anon_sym_let] = ACTIONS(308),
    [anon_sym_of] = ACTIONS(308),
    [anon_sym_then] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym__integer_literal] = ACTIONS(308),
    [sym__octal_literal] = ACTIONS(308),
    [sym__hexidecimal_literal] = ACTIONS(308),
  },
  [80] = {
    [aux_sym_import_specification_repeat1] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(316),
    [sym_comment] = ACTIONS(24),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_module] = ACTIONS(38),
    [anon_sym_where] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(36),
    [anon_sym_import] = ACTIONS(38),
    [anon_sym_hiding] = ACTIONS(38),
    [anon_sym_newtype] = ACTIONS(38),
    [anon_sym_type] = ACTIONS(38),
    [sym_variable_identifier] = ACTIONS(40),
    [sym_constructor_identifier] = ACTIONS(40),
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
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_module] = ACTIONS(54),
    [anon_sym_where] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(52),
    [anon_sym_import] = ACTIONS(54),
    [anon_sym_hiding] = ACTIONS(54),
    [anon_sym_newtype] = ACTIONS(54),
    [anon_sym_type] = ACTIONS(54),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(56),
    [sym_module_identifier] = ACTIONS(56),
    [anon_sym_case] = ACTIONS(54),
    [anon_sym_class] = ACTIONS(54),
    [anon_sym_data] = ACTIONS(54),
    [anon_sym_default] = ACTIONS(54),
    [anon_sym_deriving] = ACTIONS(54),
    [anon_sym_do] = ACTIONS(54),
    [anon_sym_else] = ACTIONS(54),
    [anon_sym_foreign] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(54),
    [anon_sym_in] = ACTIONS(54),
    [anon_sym_infix] = ACTIONS(54),
    [anon_sym_infixl] = ACTIONS(54),
    [anon_sym_infixr] = ACTIONS(54),
    [anon_sym_instance] = ACTIONS(54),
    [anon_sym_let] = ACTIONS(54),
    [anon_sym_of] = ACTIONS(54),
    [anon_sym_then] = ACTIONS(54),
    [anon_sym__] = ACTIONS(54),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(52),
    [anon_sym_DQUOTE] = ACTIONS(52),
    [sym__integer_literal] = ACTIONS(54),
    [sym__octal_literal] = ACTIONS(54),
    [sym__hexidecimal_literal] = ACTIONS(54),
  },
  [83] = {
    [sym_import_specification] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_where] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(302),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(302),
    [anon_sym_type] = ACTIONS(302),
    [sym_variable_identifier] = ACTIONS(304),
    [sym_constructor_identifier] = ACTIONS(304),
    [sym_module_identifier] = ACTIONS(304),
    [anon_sym_case] = ACTIONS(302),
    [anon_sym_class] = ACTIONS(302),
    [anon_sym_data] = ACTIONS(302),
    [anon_sym_default] = ACTIONS(302),
    [anon_sym_deriving] = ACTIONS(302),
    [anon_sym_do] = ACTIONS(302),
    [anon_sym_else] = ACTIONS(302),
    [anon_sym_foreign] = ACTIONS(302),
    [anon_sym_if] = ACTIONS(302),
    [anon_sym_in] = ACTIONS(302),
    [anon_sym_infix] = ACTIONS(302),
    [anon_sym_infixl] = ACTIONS(302),
    [anon_sym_infixr] = ACTIONS(302),
    [anon_sym_instance] = ACTIONS(302),
    [anon_sym_let] = ACTIONS(302),
    [anon_sym_of] = ACTIONS(302),
    [anon_sym_then] = ACTIONS(302),
    [anon_sym__] = ACTIONS(302),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [sym__integer_literal] = ACTIONS(302),
    [sym__octal_literal] = ACTIONS(302),
    [sym__hexidecimal_literal] = ACTIONS(302),
  },
  [84] = {
    [sym__identifier] = STATE(112),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(316),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_module] = ACTIONS(320),
    [anon_sym_where] = ACTIONS(320),
    [anon_sym_import] = ACTIONS(320),
    [anon_sym_newtype] = ACTIONS(320),
    [anon_sym_type] = ACTIONS(320),
    [sym_variable_identifier] = ACTIONS(322),
    [sym_constructor_identifier] = ACTIONS(322),
    [sym_module_identifier] = ACTIONS(322),
    [anon_sym_case] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_data] = ACTIONS(320),
    [anon_sym_default] = ACTIONS(320),
    [anon_sym_deriving] = ACTIONS(320),
    [anon_sym_do] = ACTIONS(320),
    [anon_sym_else] = ACTIONS(320),
    [anon_sym_foreign] = ACTIONS(320),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_in] = ACTIONS(320),
    [anon_sym_infix] = ACTIONS(320),
    [anon_sym_infixl] = ACTIONS(320),
    [anon_sym_infixr] = ACTIONS(320),
    [anon_sym_instance] = ACTIONS(320),
    [anon_sym_let] = ACTIONS(320),
    [anon_sym_of] = ACTIONS(320),
    [anon_sym_then] = ACTIONS(320),
    [anon_sym__] = ACTIONS(320),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [sym__integer_literal] = ACTIONS(320),
    [sym__octal_literal] = ACTIONS(320),
    [sym__hexidecimal_literal] = ACTIONS(320),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_where] = ACTIONS(142),
    [anon_sym_import] = ACTIONS(142),
    [anon_sym_newtype] = ACTIONS(142),
    [anon_sym_type] = ACTIONS(142),
    [sym_variable_identifier] = ACTIONS(146),
    [sym_constructor_identifier] = ACTIONS(146),
    [sym_module_identifier] = ACTIONS(146),
    [anon_sym_case] = ACTIONS(142),
    [anon_sym_class] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(142),
    [anon_sym_default] = ACTIONS(142),
    [anon_sym_deriving] = ACTIONS(142),
    [anon_sym_do] = ACTIONS(142),
    [anon_sym_else] = ACTIONS(142),
    [anon_sym_foreign] = ACTIONS(142),
    [anon_sym_if] = ACTIONS(142),
    [anon_sym_in] = ACTIONS(142),
    [anon_sym_infix] = ACTIONS(142),
    [anon_sym_infixl] = ACTIONS(142),
    [anon_sym_infixr] = ACTIONS(142),
    [anon_sym_instance] = ACTIONS(142),
    [anon_sym_let] = ACTIONS(142),
    [anon_sym_of] = ACTIONS(142),
    [anon_sym_then] = ACTIONS(142),
    [anon_sym__] = ACTIONS(142),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [sym__integer_literal] = ACTIONS(142),
    [sym__octal_literal] = ACTIONS(142),
    [sym__hexidecimal_literal] = ACTIONS(142),
  },
  [87] = {
    [sym__identifier] = STATE(113),
    [sym_reserved_identifier] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_module] = ACTIONS(326),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(326),
    [anon_sym_newtype] = ACTIONS(326),
    [anon_sym_type] = ACTIONS(326),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(328),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [sym__integer_literal] = ACTIONS(326),
    [sym__octal_literal] = ACTIONS(326),
    [sym__hexidecimal_literal] = ACTIONS(326),
  },
  [88] = {
    [sym__identifier] = STATE(113),
    [sym_reserved_identifier] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(330),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [89] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(336),
  },
  [90] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(338),
  },
  [91] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(340),
  },
  [92] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(344),
  },
  [93] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(346),
  },
  [94] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(348),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(350),
    [sym__ascii_large] = ACTIONS(350),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_POUND] = ACTIONS(350),
    [anon_sym_DOLLAR] = ACTIONS(350),
    [anon_sym_PERCENT] = ACTIONS(350),
    [anon_sym_AMP] = ACTIONS(350),
    [anon_sym_1] = ACTIONS(350),
    [anon_sym_PLUS] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [anon_sym_SLASH] = ACTIONS(350),
    [anon_sym_LT] = ACTIONS(350),
    [anon_sym_GT] = ACTIONS(350),
    [anon_sym_QMARK] = ACTIONS(350),
    [anon_sym_AT] = ACTIONS(350),
    [anon_sym_CARET] = ACTIONS(350),
    [anon_sym_PIPE] = ACTIONS(350),
    [anon_sym_DASH] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(350),
    [anon_sym_SEMI] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [anon_sym_BQUOTE] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [sym__space] = ACTIONS(350),
    [sym__newline] = ACTIONS(350),
    [sym__tab] = ACTIONS(350),
    [sym__vertical_tab] = ACTIONS(350),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym__] = ACTIONS(352),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(352),
    [anon_sym_DQUOTE] = ACTIONS(352),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(352),
    [sym__ascii_large] = ACTIONS(352),
    [anon_sym_BANG] = ACTIONS(352),
    [anon_sym_POUND] = ACTIONS(352),
    [anon_sym_DOLLAR] = ACTIONS(352),
    [anon_sym_PERCENT] = ACTIONS(352),
    [anon_sym_AMP] = ACTIONS(352),
    [anon_sym_1] = ACTIONS(352),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_LT] = ACTIONS(352),
    [anon_sym_GT] = ACTIONS(352),
    [anon_sym_QMARK] = ACTIONS(352),
    [anon_sym_AT] = ACTIONS(352),
    [anon_sym_CARET] = ACTIONS(352),
    [anon_sym_PIPE] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_TILDE] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_BSLASH] = ACTIONS(352),
    [anon_sym_SEMI] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [anon_sym_RBRACK] = ACTIONS(352),
    [anon_sym_BQUOTE] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
    [sym__space] = ACTIONS(352),
    [sym__newline] = ACTIONS(352),
    [sym__tab] = ACTIONS(352),
    [sym__vertical_tab] = ACTIONS(352),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym__] = ACTIONS(354),
    [sym_comment] = ACTIONS(24),
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
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(358),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(360),
    [sym__ascii_large] = ACTIONS(360),
    [anon_sym_BANG] = ACTIONS(360),
    [anon_sym_POUND] = ACTIONS(360),
    [anon_sym_DOLLAR] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(360),
    [anon_sym_AMP] = ACTIONS(360),
    [anon_sym_1] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(360),
    [anon_sym_DOT] = ACTIONS(360),
    [anon_sym_SLASH] = ACTIONS(360),
    [anon_sym_LT] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(360),
    [anon_sym_QMARK] = ACTIONS(360),
    [anon_sym_AT] = ACTIONS(360),
    [anon_sym_CARET] = ACTIONS(360),
    [anon_sym_PIPE] = ACTIONS(360),
    [anon_sym_DASH] = ACTIONS(360),
    [anon_sym_TILDE] = ACTIONS(360),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_BSLASH] = ACTIONS(360),
    [anon_sym_SEMI] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(360),
    [anon_sym_RBRACK] = ACTIONS(360),
    [anon_sym_BQUOTE] = ACTIONS(360),
    [anon_sym_LBRACE] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(360),
    [sym__space] = ACTIONS(360),
    [sym__newline] = ACTIONS(360),
    [sym__tab] = ACTIONS(360),
    [sym__vertical_tab] = ACTIONS(360),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(360),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym__] = ACTIONS(356),
    [sym_comment] = ACTIONS(24),
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(362),
  },
  [101] = {
    [sym_export_declaration] = STATE(118),
    [sym__identifier] = STATE(75),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [102] = {
    [anon_sym_where] = ACTIONS(364),
    [sym_comment] = ACTIONS(24),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(366),
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(24),
  },
  [104] = {
    [sym__identifier] = STATE(122),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [105] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(14),
    [sym_import_declaration] = STATE(14),
    [sym__top_level_declaration] = STATE(14),
    [sym_newtype] = STATE(15),
    [sym_type_synonym] = STATE(15),
    [sym__literal] = STATE(14),
    [sym__identifier] = STATE(14),
    [sym_reserved_identifier] = STATE(7),
    [sym_integer] = STATE(8),
    [sym_char] = STATE(8),
    [sym_string] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_newtype] = ACTIONS(18),
    [anon_sym_type] = ACTIONS(20),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
  [106] = {
    [sym_import_specification] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(376),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_deriving] = ACTIONS(376),
    [anon_sym_do] = ACTIONS(376),
    [anon_sym_else] = ACTIONS(376),
    [anon_sym_foreign] = ACTIONS(376),
    [anon_sym_if] = ACTIONS(376),
    [anon_sym_in] = ACTIONS(376),
    [anon_sym_infix] = ACTIONS(376),
    [anon_sym_infixl] = ACTIONS(376),
    [anon_sym_infixr] = ACTIONS(376),
    [anon_sym_instance] = ACTIONS(376),
    [anon_sym_let] = ACTIONS(376),
    [anon_sym_of] = ACTIONS(376),
    [anon_sym_then] = ACTIONS(376),
    [anon_sym__] = ACTIONS(376),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [107] = {
    [sym__identifier] = STATE(125),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(380),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [108] = {
    [sym__identifier] = STATE(126),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(384),
    [anon_sym_where] = ACTIONS(384),
    [anon_sym_import] = ACTIONS(384),
    [anon_sym_newtype] = ACTIONS(384),
    [anon_sym_type] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_constructor_identifier] = ACTIONS(386),
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
  [110] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(24),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_where] = ACTIONS(376),
    [anon_sym_import] = ACTIONS(376),
    [anon_sym_newtype] = ACTIONS(376),
    [anon_sym_type] = ACTIONS(376),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(376),
    [anon_sym_class] = ACTIONS(376),
    [anon_sym_data] = ACTIONS(376),
    [anon_sym_default] = ACTIONS(376),
    [anon_sym_deriving] = ACTIONS(376),
    [anon_sym_do] = ACTIONS(376),
    [anon_sym_else] = ACTIONS(376),
    [anon_sym_foreign] = ACTIONS(376),
    [anon_sym_if] = ACTIONS(376),
    [anon_sym_in] = ACTIONS(376),
    [anon_sym_infix] = ACTIONS(376),
    [anon_sym_infixl] = ACTIONS(376),
    [anon_sym_infixr] = ACTIONS(376),
    [anon_sym_instance] = ACTIONS(376),
    [anon_sym_let] = ACTIONS(376),
    [anon_sym_of] = ACTIONS(376),
    [anon_sym_then] = ACTIONS(376),
    [anon_sym__] = ACTIONS(376),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [sym__integer_literal] = ACTIONS(376),
    [sym__octal_literal] = ACTIONS(376),
    [sym__hexidecimal_literal] = ACTIONS(376),
  },
  [112] = {
    [aux_sym_import_specification_repeat1] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_module] = ACTIONS(242),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_import] = ACTIONS(242),
    [anon_sym_newtype] = ACTIONS(242),
    [anon_sym_type] = ACTIONS(242),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [sym__integer_literal] = ACTIONS(242),
    [sym__octal_literal] = ACTIONS(242),
    [sym__hexidecimal_literal] = ACTIONS(242),
  },
  [114] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(394),
  },
  [115] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(396),
  },
  [116] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(398),
    [sym__ascii_large] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_TILDE] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_BSLASH] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_BQUOTE] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_RBRACE] = ACTIONS(398),
    [sym__space] = ACTIONS(398),
    [sym__newline] = ACTIONS(398),
    [sym__tab] = ACTIONS(398),
    [sym__vertical_tab] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(398),
  },
  [117] = {
    [anon_sym_LPAREN] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_EQ] = ACTIONS(400),
    [anon_sym__] = ACTIONS(400),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [anon_sym_DQUOTE] = ACTIONS(400),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(400),
    [sym__ascii_large] = ACTIONS(400),
    [anon_sym_BANG] = ACTIONS(400),
    [anon_sym_POUND] = ACTIONS(400),
    [anon_sym_DOLLAR] = ACTIONS(400),
    [anon_sym_PERCENT] = ACTIONS(400),
    [anon_sym_AMP] = ACTIONS(400),
    [anon_sym_1] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(400),
    [anon_sym_SLASH] = ACTIONS(400),
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(400),
    [anon_sym_CARET] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(400),
    [anon_sym_DASH] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(400),
    [anon_sym_BSLASH] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_RBRACK] = ACTIONS(400),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(400),
    [sym__space] = ACTIONS(400),
    [sym__newline] = ACTIONS(400),
    [sym__tab] = ACTIONS(400),
    [sym__vertical_tab] = ACTIONS(400),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(400),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(402),
    [anon_sym_RPAREN] = ACTIONS(402),
    [sym_comment] = ACTIONS(24),
  },
  [119] = {
    [sym_export_declaration] = STATE(131),
    [sym__identifier] = STATE(75),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [120] = {
    [anon_sym_where] = ACTIONS(404),
    [sym_comment] = ACTIONS(24),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(24),
  },
  [122] = {
    [aux_sym_export_declaration_repeat1] = STATE(134),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(24),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(412),
    [anon_sym_where] = ACTIONS(412),
    [anon_sym_import] = ACTIONS(412),
    [anon_sym_newtype] = ACTIONS(412),
    [anon_sym_type] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(414),
    [sym_constructor_identifier] = ACTIONS(414),
    [sym_module_identifier] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(412),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_data] = ACTIONS(412),
    [anon_sym_default] = ACTIONS(412),
    [anon_sym_deriving] = ACTIONS(412),
    [anon_sym_do] = ACTIONS(412),
    [anon_sym_else] = ACTIONS(412),
    [anon_sym_foreign] = ACTIONS(412),
    [anon_sym_if] = ACTIONS(412),
    [anon_sym_in] = ACTIONS(412),
    [anon_sym_infix] = ACTIONS(412),
    [anon_sym_infixl] = ACTIONS(412),
    [anon_sym_infixr] = ACTIONS(412),
    [anon_sym_instance] = ACTIONS(412),
    [anon_sym_let] = ACTIONS(412),
    [anon_sym_of] = ACTIONS(412),
    [anon_sym_then] = ACTIONS(412),
    [anon_sym__] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(414),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [anon_sym_DQUOTE] = ACTIONS(410),
    [sym__integer_literal] = ACTIONS(412),
    [sym__octal_literal] = ACTIONS(412),
    [sym__hexidecimal_literal] = ACTIONS(412),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(416),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [aux_sym_export_declaration_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(416),
    [sym_comment] = ACTIONS(24),
  },
  [126] = {
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(24),
  },
  [127] = {
    [sym__identifier] = STATE(138),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [anon_sym_module] = ACTIONS(424),
    [anon_sym_where] = ACTIONS(424),
    [anon_sym_import] = ACTIONS(424),
    [anon_sym_newtype] = ACTIONS(424),
    [anon_sym_type] = ACTIONS(424),
    [sym_variable_identifier] = ACTIONS(426),
    [sym_constructor_identifier] = ACTIONS(426),
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
  [129] = {
    [sym__identifier] = STATE(140),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(428),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(24),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_comment] = ACTIONS(24),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [sym__identifier] = STATE(142),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [aux_sym_import_specification_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(24),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [137] = {
    [sym__identifier] = STATE(149),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(444),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [138] = {
    [anon_sym_LPAREN] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [sym_comment] = ACTIONS(24),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [140] = {
    [aux_sym_export_declaration_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_where] = ACTIONS(452),
    [anon_sym_import] = ACTIONS(452),
    [anon_sym_newtype] = ACTIONS(452),
    [anon_sym_type] = ACTIONS(452),
    [sym_variable_identifier] = ACTIONS(454),
    [sym_constructor_identifier] = ACTIONS(454),
    [sym_module_identifier] = ACTIONS(454),
    [anon_sym_case] = ACTIONS(452),
    [anon_sym_class] = ACTIONS(452),
    [anon_sym_data] = ACTIONS(452),
    [anon_sym_default] = ACTIONS(452),
    [anon_sym_deriving] = ACTIONS(452),
    [anon_sym_do] = ACTIONS(452),
    [anon_sym_else] = ACTIONS(452),
    [anon_sym_foreign] = ACTIONS(452),
    [anon_sym_if] = ACTIONS(452),
    [anon_sym_in] = ACTIONS(452),
    [anon_sym_infix] = ACTIONS(452),
    [anon_sym_infixl] = ACTIONS(452),
    [anon_sym_infixr] = ACTIONS(452),
    [anon_sym_instance] = ACTIONS(452),
    [anon_sym_let] = ACTIONS(452),
    [anon_sym_of] = ACTIONS(452),
    [anon_sym_then] = ACTIONS(452),
    [anon_sym__] = ACTIONS(452),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(454),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(450),
    [sym__integer_literal] = ACTIONS(452),
    [sym__octal_literal] = ACTIONS(452),
    [sym__hexidecimal_literal] = ACTIONS(452),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [sym__identifier] = STATE(152),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(24),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_where] = ACTIONS(462),
    [anon_sym_import] = ACTIONS(462),
    [anon_sym_newtype] = ACTIONS(462),
    [anon_sym_type] = ACTIONS(462),
    [sym_variable_identifier] = ACTIONS(464),
    [sym_constructor_identifier] = ACTIONS(464),
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
  [146] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [aux_sym_import_specification_repeat1] = STATE(154),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(24),
  },
  [148] = {
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(24),
  },
  [149] = {
    [aux_sym_export_declaration_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(24),
  },
  [150] = {
    [sym__identifier] = STATE(158),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(22),
    [sym_constructor_identifier] = ACTIONS(22),
    [sym_module_identifier] = ACTIONS(22),
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
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_module] = ACTIONS(478),
    [anon_sym_where] = ACTIONS(478),
    [anon_sym_import] = ACTIONS(478),
    [anon_sym_newtype] = ACTIONS(478),
    [anon_sym_type] = ACTIONS(478),
    [sym_variable_identifier] = ACTIONS(480),
    [sym_constructor_identifier] = ACTIONS(480),
    [sym_module_identifier] = ACTIONS(480),
    [anon_sym_case] = ACTIONS(478),
    [anon_sym_class] = ACTIONS(478),
    [anon_sym_data] = ACTIONS(478),
    [anon_sym_default] = ACTIONS(478),
    [anon_sym_deriving] = ACTIONS(478),
    [anon_sym_do] = ACTIONS(478),
    [anon_sym_else] = ACTIONS(478),
    [anon_sym_foreign] = ACTIONS(478),
    [anon_sym_if] = ACTIONS(478),
    [anon_sym_in] = ACTIONS(478),
    [anon_sym_infix] = ACTIONS(478),
    [anon_sym_infixl] = ACTIONS(478),
    [anon_sym_infixr] = ACTIONS(478),
    [anon_sym_instance] = ACTIONS(478),
    [anon_sym_let] = ACTIONS(478),
    [anon_sym_of] = ACTIONS(478),
    [anon_sym_then] = ACTIONS(478),
    [anon_sym__] = ACTIONS(478),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(480),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [sym__integer_literal] = ACTIONS(478),
    [sym__octal_literal] = ACTIONS(478),
    [sym__hexidecimal_literal] = ACTIONS(478),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(24),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_comment] = ACTIONS(24),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(24),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(24),
  },
  [158] = {
    [aux_sym_export_declaration_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym_comment] = ACTIONS(24),
  },
  [159] = {
    [aux_sym_import_specification_repeat1] = STATE(163),
    [anon_sym_COMMA] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(24),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_module] = ACTIONS(490),
    [anon_sym_where] = ACTIONS(490),
    [anon_sym_import] = ACTIONS(490),
    [anon_sym_newtype] = ACTIONS(490),
    [anon_sym_type] = ACTIONS(490),
    [sym_variable_identifier] = ACTIONS(492),
    [sym_constructor_identifier] = ACTIONS(492),
    [sym_module_identifier] = ACTIONS(492),
    [anon_sym_case] = ACTIONS(490),
    [anon_sym_class] = ACTIONS(490),
    [anon_sym_data] = ACTIONS(490),
    [anon_sym_default] = ACTIONS(490),
    [anon_sym_deriving] = ACTIONS(490),
    [anon_sym_do] = ACTIONS(490),
    [anon_sym_else] = ACTIONS(490),
    [anon_sym_foreign] = ACTIONS(490),
    [anon_sym_if] = ACTIONS(490),
    [anon_sym_in] = ACTIONS(490),
    [anon_sym_infix] = ACTIONS(490),
    [anon_sym_infixl] = ACTIONS(490),
    [anon_sym_infixr] = ACTIONS(490),
    [anon_sym_instance] = ACTIONS(490),
    [anon_sym_let] = ACTIONS(490),
    [anon_sym_of] = ACTIONS(490),
    [anon_sym_then] = ACTIONS(490),
    [anon_sym__] = ACTIONS(490),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(492),
    [anon_sym_SQUOTE] = ACTIONS(488),
    [anon_sym_DQUOTE] = ACTIONS(488),
    [sym__integer_literal] = ACTIONS(490),
    [sym__octal_literal] = ACTIONS(490),
    [sym__hexidecimal_literal] = ACTIONS(490),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_comment] = ACTIONS(24),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(24),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(498),
    [sym_comment] = ACTIONS(24),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_module] = ACTIONS(504),
    [anon_sym_where] = ACTIONS(504),
    [anon_sym_import] = ACTIONS(504),
    [anon_sym_newtype] = ACTIONS(504),
    [anon_sym_type] = ACTIONS(504),
    [sym_variable_identifier] = ACTIONS(506),
    [sym_constructor_identifier] = ACTIONS(506),
    [sym_module_identifier] = ACTIONS(506),
    [anon_sym_case] = ACTIONS(504),
    [anon_sym_class] = ACTIONS(504),
    [anon_sym_data] = ACTIONS(504),
    [anon_sym_default] = ACTIONS(504),
    [anon_sym_deriving] = ACTIONS(504),
    [anon_sym_do] = ACTIONS(504),
    [anon_sym_else] = ACTIONS(504),
    [anon_sym_foreign] = ACTIONS(504),
    [anon_sym_if] = ACTIONS(504),
    [anon_sym_in] = ACTIONS(504),
    [anon_sym_infix] = ACTIONS(504),
    [anon_sym_infixl] = ACTIONS(504),
    [anon_sym_infixr] = ACTIONS(504),
    [anon_sym_instance] = ACTIONS(504),
    [anon_sym_let] = ACTIONS(504),
    [anon_sym_of] = ACTIONS(504),
    [anon_sym_then] = ACTIONS(504),
    [anon_sym__] = ACTIONS(504),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(506),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [sym__integer_literal] = ACTIONS(504),
    [sym__octal_literal] = ACTIONS(504),
    [sym__hexidecimal_literal] = ACTIONS(504),
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
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(23),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_new_constructor_repeat1, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_new_constructor_repeat1, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_new_constructor_repeat1, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [238] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_new_constructor_repeat1, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_new_constructor_repeat1, 2),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_new_constructor_repeat1, 2),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [258] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 1, .fragile = true),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 1, .fragile = true),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 1, .fragile = true),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(141),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [492] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [506] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
