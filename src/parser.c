#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 172
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 1
#define TOKEN_COUNT 122
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
  anon_sym_LBRACE = 13,
  anon_sym_COLON_COLON = 14,
  anon_sym_RBRACE = 15,
  anon_sym_type = 16,
  sym_variable_identifier = 17,
  sym_constructor_identifier = 18,
  sym_module_identifier = 19,
  anon_sym_case = 20,
  anon_sym_class = 21,
  anon_sym_data = 22,
  anon_sym_default = 23,
  anon_sym_deriving = 24,
  anon_sym_do = 25,
  anon_sym_else = 26,
  anon_sym_foreign = 27,
  anon_sym_if = 28,
  anon_sym_in = 29,
  anon_sym_infix = 30,
  anon_sym_infixl = 31,
  anon_sym_infixr = 32,
  anon_sym_instance = 33,
  anon_sym_let = 34,
  anon_sym_of = 35,
  anon_sym_then = 36,
  anon_sym__ = 37,
  sym_comment = 38,
  sym_float = 39,
  anon_sym_SQUOTE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 43,
  sym__ascii_large = 44,
  anon_sym_BANG = 45,
  anon_sym_POUND = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_PERCENT = 48,
  anon_sym_AMP = 49,
  anon_sym_1 = 50,
  anon_sym_PLUS = 51,
  anon_sym_DOT = 52,
  anon_sym_SLASH = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_QMARK = 56,
  anon_sym_AT = 57,
  anon_sym_CARET = 58,
  anon_sym_PIPE = 59,
  anon_sym_DASH = 60,
  anon_sym_TILDE = 61,
  anon_sym_COLON = 62,
  anon_sym_BSLASH = 63,
  anon_sym_SEMI = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_BQUOTE = 67,
  sym__space = 68,
  sym__newline = 69,
  sym__tab = 70,
  sym__vertical_tab = 71,
  anon_sym_x = 72,
  anon_sym_X = 73,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 74,
  anon_sym_o = 75,
  anon_sym_O = 76,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 77,
  anon_sym_a = 78,
  anon_sym_b = 79,
  anon_sym_f = 80,
  anon_sym_n = 81,
  anon_sym_r = 82,
  anon_sym_t = 83,
  anon_sym_v = 84,
  anon_sym_NUL = 85,
  anon_sym_SOH = 86,
  anon_sym_STX = 87,
  anon_sym_ETX = 88,
  anon_sym_EOT = 89,
  anon_sym_ENQ = 90,
  anon_sym_ACK = 91,
  anon_sym_BEL = 92,
  anon_sym_BS = 93,
  anon_sym_HT = 94,
  anon_sym_LF = 95,
  anon_sym_VT = 96,
  anon_sym_FF = 97,
  anon_sym_CR = 98,
  anon_sym_SO = 99,
  anon_sym_SI = 100,
  anon_sym_DLE = 101,
  anon_sym_DC1 = 102,
  anon_sym_DC2 = 103,
  anon_sym_DC3 = 104,
  anon_sym_DC4 = 105,
  anon_sym_NAK = 106,
  anon_sym_SYN = 107,
  anon_sym_ETB = 108,
  anon_sym_CAN = 109,
  anon_sym_EM = 110,
  anon_sym_SUB = 111,
  anon_sym_ESC = 112,
  anon_sym_FS = 113,
  anon_sym_GS = 114,
  anon_sym_RS = 115,
  anon_sym_US = 116,
  anon_sym_SP = 117,
  anon_sym_DEL = 118,
  sym__integer_literal = 119,
  sym__octal_literal = 120,
  sym__hexidecimal_literal = 121,
  sym_program = 122,
  sym__statement = 123,
  sym_module = 124,
  sym_module_export_declarations = 125,
  sym_export_declaration = 126,
  sym_import_declaration = 127,
  sym_import_specification = 128,
  sym__top_level_declaration = 129,
  sym_newtype = 130,
  sym_new_constructor = 131,
  sym_type_synonym = 132,
  sym__literal = 133,
  sym__identifier = 134,
  sym_simple_type = 135,
  sym_reserved_identifier = 136,
  sym_integer = 137,
  sym_char = 138,
  sym_string = 139,
  sym__gap = 140,
  sym__graphic = 141,
  sym__small = 142,
  sym__large = 143,
  sym__symbol = 144,
  sym__special = 145,
  sym__escape = 146,
  sym__char_escape = 147,
  sym__ascii = 148,
  sym__cntrl = 149,
  aux_sym_program_repeat1 = 150,
  aux_sym_module_export_declarations_repeat1 = 151,
  aux_sym_export_declaration_repeat1 = 152,
  aux_sym_import_specification_repeat1 = 153,
  aux_sym_type_synonym_repeat1 = 154,
  aux_sym_string_repeat1 = 155,
  aux_sym__escape_repeat1 = 156,
  aux_sym__escape_repeat2 = 157,
  alias_sym_module_body = 158,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_RBRACE] = "}",
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
  [aux_sym_type_synonym_repeat1] = "type_synonym_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_type_synonym_repeat1] = {
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
        ADVANCE(84);
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
        ADVANCE(85);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(86);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
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
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(102);
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
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(27);
      if (lookahead == 'H')
        ADVANCE(29);
      if (lookahead == 'L')
        ADVANCE(31);
      if (lookahead == 'N')
        ADVANCE(33);
      if (lookahead == 'R')
        ADVANCE(43);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead == 'U')
        ADVANCE(56);
      if (lookahead == 'V')
        ADVANCE(58);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(61);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
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
      ADVANCE(39);
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
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(34);
      if (lookahead == 'U')
        ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'K')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == '}')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 41:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(47);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead == 'Y')
        ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 50:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'X')
        ADVANCE(51);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 52:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'B')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 54:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'N')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_v);
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
        ADVANCE(39);
      END_STATE();
    case 78:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '}')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      if (lookahead != 0)
        ADVANCE(39);
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
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(84);
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
        ADVANCE(85);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(86);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        SKIP(101);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
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
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'K')
        ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'L')
        ADVANCE(42);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(95);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'Y')
        ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'X')
        ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'B')
        ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'N')
        ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 101:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '+')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 108:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 109:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(128);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == '-')
        ADVANCE(111);
      if (lookahead == '}')
        ADVANCE(36);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(112);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '}')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead != 0)
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(76);
      if (lookahead == 'E')
        ADVANCE(77);
      if (lookahead == 'O')
        ADVANCE(117);
      if (lookahead == 'X')
        ADVANCE(119);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == 'o')
        ADVANCE(117);
      if (lookahead == 'x')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(118);
      END_STATE();
    case 119:
      if (lookahead == '-')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(122);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead != 0)
        ADVANCE(121);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        ADVANCE(39);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(124);
      if (lookahead != 0)
        ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '-')
        ADVANCE(122);
      if (lookahead == ']')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == '\r')
        ADVANCE(125);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0)
        ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == ']')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 'l')
        ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 'e')
        ADVANCE(143);
      if (lookahead == 'o')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(144);
      if (lookahead == 'r')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'v')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'm')
        ADVANCE(169);
      if (lookahead == 'n')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(175);
      if (lookahead == 's')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'x')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(178);
      if (lookahead == 'r')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'c')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'o')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'w')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 't')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'y')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(205);
      if (lookahead == 'y')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(216);
      if (lookahead == '.')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(217);
      if (lookahead == '.')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 218:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead == '\r')
        ADVANCE(218);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(225);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 219:
      if (lookahead == '-')
        ADVANCE(115);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == 'E')
        ADVANCE(104);
      if (lookahead == 'O')
        ADVANCE(221);
      if (lookahead == 'X')
        ADVANCE(223);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == 'x')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(222);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(224);
      END_STATE();
    case 225:
      if (lookahead == 'n')
        SKIP(108);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(229);
      if (lookahead == 'l')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'o')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(241);
      if (lookahead == 'r')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'v')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'm')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(272);
      if (lookahead == 's')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'x')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(275);
      if (lookahead == 'r')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'o')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'y')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(302);
      if (lookahead == 'y')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'p')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(313);
      if (lookahead == '.')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(314);
      if (lookahead == '.')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(314);
      END_STATE();
    case 315:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(323);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == 'w')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(316);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\\')
        ADVANCE(317);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(217);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 317:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 318:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'h')
        ADVANCE(319);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 319:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 320:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'r')
        ADVANCE(321);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 321:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'e')
        ADVANCE(322);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 323:
      if (lookahead == '\n')
        ADVANCE(316);
      if (lookahead == '\r')
        ADVANCE(323);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\\')
        SKIP(324);
      if (lookahead == 'w')
        ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(315);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(314);
      END_STATE();
    case 324:
      if (lookahead == 'n')
        SKIP(315);
      END_STATE();
    case 325:
      if (lookahead == 'h')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'r')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'e')
        ADVANCE(322);
      END_STATE();
    case 329:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\r')
        ADVANCE(332);
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
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(329);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 330:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
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
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(331);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 332:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(330);
      if (lookahead == '\r')
        ADVANCE(332);
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
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(333);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(329);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 333:
      if (lookahead == 'n')
        SKIP(329);
      END_STATE();
    case 334:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(348);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(349);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(350);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 'q')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(360);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(334);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 335:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(335);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(336);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 'q')
        ADVANCE(338);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(335);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(168);
      if (lookahead == 'n')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'u')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'a')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'l')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'e')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'h')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 348:
      if (lookahead == '\n')
        ADVANCE(335);
      if (lookahead == '\r')
        ADVANCE(348);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(349);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(350);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 'q')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(360);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(334);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 349:
      if (lookahead == 'n')
        SKIP(334);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'a')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'l')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'f')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'e')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'h')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 361:
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(367);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(350);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(360);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(361);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 362:
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(362);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '.')
        ADVANCE(363);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(364);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(337);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(362);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '.')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 365:
      if (lookahead == '\n')
        ADVANCE(362);
      if (lookahead == '\r')
        ADVANCE(365);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '.')
        ADVANCE(366);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(367);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'i')
        ADVANCE(350);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(360);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '{')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(361);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 366:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 367:
      if (lookahead == 'n')
        SKIP(361);
      END_STATE();
    case 368:
      if (lookahead == '\t')
        SKIP(368);
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 369:
      if (lookahead == '\t')
        ADVANCE(369);
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(369);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 375:
      if (lookahead == '\t')
        SKIP(368);
      if (lookahead == '\n')
        ADVANCE(369);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 376:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 379:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(379);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 380:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '\r')
        ADVANCE(391);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'a')
        ADVANCE(393);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(380);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 381:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '\r')
        ADVANCE(381);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(382);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'a')
        ADVANCE(383);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'h')
        ADVANCE(385);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(381);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 's')
        ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'd')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'n')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(130);
      if (lookahead == 'g')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      END_STATE();
    case 391:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(381);
      if (lookahead == '\r')
        ADVANCE(391);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(392);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'a')
        ADVANCE(393);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(380);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        SKIP(380);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'd')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'i')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'n')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(227);
      if (lookahead == 'g')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 401:
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(453);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(454);
      if (lookahead == 'B')
        ADVANCE(456);
      if (lookahead == 'C')
        ADVANCE(458);
      if (lookahead == 'D')
        ADVANCE(460);
      if (lookahead == 'E')
        ADVANCE(464);
      if (lookahead == 'F')
        ADVANCE(469);
      if (lookahead == 'G')
        ADVANCE(470);
      if (lookahead == 'H')
        ADVANCE(471);
      if (lookahead == 'L')
        ADVANCE(472);
      if (lookahead == 'N')
        ADVANCE(473);
      if (lookahead == 'O')
        ADVANCE(442);
      if (lookahead == 'R')
        ADVANCE(474);
      if (lookahead == 'S')
        ADVANCE(475);
      if (lookahead == 'U')
        ADVANCE(476);
      if (lookahead == 'V')
        ADVANCE(477);
      if (lookahead == 'X')
        ADVANCE(447);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(374);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(402);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == 'A')
        ADVANCE(403);
      if (lookahead == 'B')
        ADVANCE(406);
      if (lookahead == 'C')
        ADVANCE(410);
      if (lookahead == 'D')
        ADVANCE(414);
      if (lookahead == 'E')
        ADVANCE(424);
      if (lookahead == 'F')
        ADVANCE(435);
      if (lookahead == 'G')
        ADVANCE(438);
      if (lookahead == 'H')
        ADVANCE(439);
      if (lookahead == 'L')
        ADVANCE(440);
      if (lookahead == 'N')
        ADVANCE(441);
      if (lookahead == 'O')
        ADVANCE(442);
      if (lookahead == 'R')
        ADVANCE(443);
      if (lookahead == 'S')
        ADVANCE(444);
      if (lookahead == 'U')
        ADVANCE(445);
      if (lookahead == 'V')
        ADVANCE(446);
      if (lookahead == 'X')
        ADVANCE(447);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 404:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'K')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'E')
        ADVANCE(407);
      if (lookahead == 'S')
        ADVANCE(409);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(408);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'A')
        ADVANCE(411);
      if (lookahead == 'R')
        ADVANCE(413);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 411:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'N')
        ADVANCE(412);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(415);
      if (lookahead == 'E')
        ADVANCE(420);
      if (lookahead == 'L')
        ADVANCE(422);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 415:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '1')
        ADVANCE(416);
      if (lookahead == '2')
        ADVANCE(417);
      if (lookahead == '3')
        ADVANCE(418);
      if (lookahead == '4')
        ADVANCE(419);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'L')
        ADVANCE(421);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 422:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'E')
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 424:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'M')
        ADVANCE(425);
      if (lookahead == 'N')
        ADVANCE(426);
      if (lookahead == 'O')
        ADVANCE(428);
      if (lookahead == 'S')
        ADVANCE(430);
      if (lookahead == 'T')
        ADVANCE(432);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 426:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'Q')
        ADVANCE(427);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 428:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(429);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 430:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'C')
        ADVANCE(431);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 432:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'B')
        ADVANCE(433);
      if (lookahead == 'X')
        ADVANCE(434);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 435:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'F')
        ADVANCE(436);
      if (lookahead == 'S')
        ADVANCE(437);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 438:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(28);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 439:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'F')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 441:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'A')
        ADVANCE(34);
      if (lookahead == 'U')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 443:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 444:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(47);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(52);
      if (lookahead == 'Y')
        ADVANCE(54);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 445:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'T')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 453:
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '\r')
        ADVANCE(453);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(9);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == 'A')
        ADVANCE(454);
      if (lookahead == 'B')
        ADVANCE(456);
      if (lookahead == 'C')
        ADVANCE(458);
      if (lookahead == 'D')
        ADVANCE(460);
      if (lookahead == 'E')
        ADVANCE(464);
      if (lookahead == 'F')
        ADVANCE(469);
      if (lookahead == 'G')
        ADVANCE(470);
      if (lookahead == 'H')
        ADVANCE(471);
      if (lookahead == 'L')
        ADVANCE(472);
      if (lookahead == 'N')
        ADVANCE(473);
      if (lookahead == 'O')
        ADVANCE(442);
      if (lookahead == 'R')
        ADVANCE(474);
      if (lookahead == 'S')
        ADVANCE(475);
      if (lookahead == 'U')
        ADVANCE(476);
      if (lookahead == 'V')
        ADVANCE(477);
      if (lookahead == 'X')
        ADVANCE(447);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(452);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(401);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(374);
      END_STATE();
    case 454:
      if (lookahead == 'C')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'K')
        ADVANCE(405);
      END_STATE();
    case 456:
      if (lookahead == 'E')
        ADVANCE(457);
      if (lookahead == 'S')
        ADVANCE(409);
      END_STATE();
    case 457:
      if (lookahead == 'L')
        ADVANCE(408);
      END_STATE();
    case 458:
      if (lookahead == 'A')
        ADVANCE(459);
      if (lookahead == 'R')
        ADVANCE(413);
      END_STATE();
    case 459:
      if (lookahead == 'N')
        ADVANCE(412);
      END_STATE();
    case 460:
      if (lookahead == 'C')
        ADVANCE(461);
      if (lookahead == 'E')
        ADVANCE(462);
      if (lookahead == 'L')
        ADVANCE(463);
      END_STATE();
    case 461:
      if (lookahead == '1')
        ADVANCE(416);
      if (lookahead == '2')
        ADVANCE(417);
      if (lookahead == '3')
        ADVANCE(418);
      if (lookahead == '4')
        ADVANCE(419);
      END_STATE();
    case 462:
      if (lookahead == 'L')
        ADVANCE(421);
      END_STATE();
    case 463:
      if (lookahead == 'E')
        ADVANCE(423);
      END_STATE();
    case 464:
      if (lookahead == 'M')
        ADVANCE(425);
      if (lookahead == 'N')
        ADVANCE(465);
      if (lookahead == 'O')
        ADVANCE(466);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == 'T')
        ADVANCE(468);
      END_STATE();
    case 465:
      if (lookahead == 'Q')
        ADVANCE(427);
      END_STATE();
    case 466:
      if (lookahead == 'T')
        ADVANCE(429);
      END_STATE();
    case 467:
      if (lookahead == 'C')
        ADVANCE(431);
      END_STATE();
    case 468:
      if (lookahead == 'B')
        ADVANCE(433);
      if (lookahead == 'X')
        ADVANCE(434);
      END_STATE();
    case 469:
      if (lookahead == 'F')
        ADVANCE(436);
      if (lookahead == 'S')
        ADVANCE(437);
      END_STATE();
    case 470:
      if (lookahead == 'S')
        ADVANCE(28);
      END_STATE();
    case 471:
      if (lookahead == 'T')
        ADVANCE(30);
      END_STATE();
    case 472:
      if (lookahead == 'F')
        ADVANCE(32);
      END_STATE();
    case 473:
      if (lookahead == 'A')
        ADVANCE(91);
      if (lookahead == 'U')
        ADVANCE(92);
      END_STATE();
    case 474:
      if (lookahead == 'S')
        ADVANCE(44);
      END_STATE();
    case 475:
      if (lookahead == 'I')
        ADVANCE(46);
      if (lookahead == 'O')
        ADVANCE(95);
      if (lookahead == 'P')
        ADVANCE(49);
      if (lookahead == 'T')
        ADVANCE(96);
      if (lookahead == 'U')
        ADVANCE(97);
      if (lookahead == 'Y')
        ADVANCE(98);
      END_STATE();
    case 476:
      if (lookahead == 'S')
        ADVANCE(57);
      END_STATE();
    case 477:
      if (lookahead == 'T')
        ADVANCE(59);
      END_STATE();
    case 478:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'A')
        ADVANCE(480);
      if (lookahead == 'B')
        ADVANCE(481);
      if (lookahead == 'C')
        ADVANCE(482);
      if (lookahead == 'D')
        ADVANCE(483);
      if (lookahead == 'E')
        ADVANCE(484);
      if (lookahead == 'F')
        ADVANCE(485);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(442);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == 'X')
        ADVANCE(447);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(452);
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
        ADVANCE(374);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 479:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(479);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == 'A')
        ADVANCE(480);
      if (lookahead == 'B')
        ADVANCE(481);
      if (lookahead == 'C')
        ADVANCE(482);
      if (lookahead == 'D')
        ADVANCE(483);
      if (lookahead == 'E')
        ADVANCE(484);
      if (lookahead == 'F')
        ADVANCE(485);
      if (lookahead == 'G')
        ADVANCE(87);
      if (lookahead == 'H')
        ADVANCE(88);
      if (lookahead == 'L')
        ADVANCE(89);
      if (lookahead == 'N')
        ADVANCE(90);
      if (lookahead == 'O')
        ADVANCE(442);
      if (lookahead == 'R')
        ADVANCE(93);
      if (lookahead == 'S')
        ADVANCE(94);
      if (lookahead == 'U')
        ADVANCE(99);
      if (lookahead == 'V')
        ADVANCE(100);
      if (lookahead == 'X')
        ADVANCE(447);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'b')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'n')
        ADVANCE(66);
      if (lookahead == 'o')
        ADVANCE(451);
      if (lookahead == 'r')
        ADVANCE(67);
      if (lookahead == 't')
        ADVANCE(68);
      if (lookahead == 'v')
        ADVANCE(69);
      if (lookahead == 'x')
        ADVANCE(452);
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
        ADVANCE(374);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(455);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(457);
      if (lookahead == 'S')
        ADVANCE(409);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(459);
      if (lookahead == 'R')
        ADVANCE(413);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(461);
      if (lookahead == 'E')
        ADVANCE(462);
      if (lookahead == 'L')
        ADVANCE(463);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(425);
      if (lookahead == 'N')
        ADVANCE(465);
      if (lookahead == 'O')
        ADVANCE(466);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead == 'T')
        ADVANCE(468);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(436);
      if (lookahead == 'S')
        ADVANCE(437);
      END_STATE();
    case 486:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(492);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(489);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(489);
      END_STATE();
    case 490:
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(486);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(492);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      END_STATE();
    case 491:
      if (lookahead == 'n')
        SKIP(486);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(492);
      END_STATE();
    case 493:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(493);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(494);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 495:
      if (lookahead == '\n')
        ADVANCE(494);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(493);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      END_STATE();
    case 496:
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(499);
      END_STATE();
    case 497:
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(497);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 500:
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(500);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(501);
      if (lookahead == '}')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(499);
      END_STATE();
    case 501:
      if (lookahead == 'n')
        SKIP(496);
      END_STATE();
    case 502:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(505);
      END_STATE();
    case 503:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(503);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(504);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 504:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(503);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 506:
      if (lookahead == '\n')
        ADVANCE(503);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '\\')
        SKIP(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(502);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(505);
      END_STATE();
    case 507:
      if (lookahead == 'n')
        SKIP(502);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(513);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 509:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == ':')
        ADVANCE(510);
      if (lookahead == '\\')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 511:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 512:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(14);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(513);
      if (lookahead == '\\')
        SKIP(514);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 513:
      if (lookahead == ':')
        ADVANCE(20);
      END_STATE();
    case 514:
      if (lookahead == 'n')
        SKIP(508);
      END_STATE();
    case 515:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 516:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(110);
      if (lookahead == '0')
        ADVANCE(116);
      if (lookahead == '[')
        ADVANCE(121);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'e')
        ADVANCE(156);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'h')
        ADVANCE(385);
      if (lookahead == 'i')
        ADVANCE(167);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(189);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(202);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(216);
      ADVANCE(39);
      END_STATE();
    case 517:
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead != 0)
        ADVANCE(39);
      END_STATE();
    case 518:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '0')
        ADVANCE(220);
      if (lookahead == '[')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '_')
        ADVANCE(226);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(236);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'f')
        ADVANCE(257);
      if (lookahead == 'h')
        ADVANCE(395);
      if (lookahead == 'i')
        ADVANCE(264);
      if (lookahead == 'l')
        ADVANCE(283);
      if (lookahead == 'm')
        ADVANCE(286);
      if (lookahead == 'n')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead == 'w')
        ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(313);
      END_STATE();
    case 519:
      if (lookahead == 'n')
        SKIP(515);
      END_STATE();
    case 520:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(83);
      END_STATE();
    case 521:
      if (lookahead == '\t')
        ADVANCE(377);
      if (lookahead == '\n')
        ADVANCE(378);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == ' ')
        ADVANCE(370);
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
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(18);
      if (lookahead == ':')
        ADVANCE(372);
      if (lookahead == ';')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(26);
      if (lookahead == '[')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(373);
      if (lookahead == ']')
        ADVANCE(62);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == '_')
        ADVANCE(64);
      if (lookahead == '`')
        ADVANCE(65);
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
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(374);
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
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 315},
  [3] = {.lex_state = 329},
  [4] = {.lex_state = 334},
  [5] = {.lex_state = 361},
  [6] = {.lex_state = 361},
  [7] = {.lex_state = 329},
  [8] = {.lex_state = 108},
  [9] = {.lex_state = 368},
  [10] = {.lex_state = 376},
  [11] = {.lex_state = 108},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 108},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 315},
  [18] = {.lex_state = 380},
  [19] = {.lex_state = 361},
  [20] = {.lex_state = 380},
  [21] = {.lex_state = 380},
  [22] = {.lex_state = 361},
  [23] = {.lex_state = 361},
  [24] = {.lex_state = 361},
  [25] = {.lex_state = 315},
  [26] = {.lex_state = 361},
  [27] = {.lex_state = 315},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 401},
  [35] = {.lex_state = 376},
  [36] = {.lex_state = 376},
  [37] = {.lex_state = 376},
  [38] = {.lex_state = 376},
  [39] = {.lex_state = 108},
  [40] = {.lex_state = 376},
  [41] = {.lex_state = 376},
  [42] = {.lex_state = 478},
  [43] = {.lex_state = 376},
  [44] = {.lex_state = 376},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 108},
  [47] = {.lex_state = 361},
  [48] = {.lex_state = 315},
  [49] = {.lex_state = 380},
  [50] = {.lex_state = 361},
  [51] = {.lex_state = 361},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 108},
  [54] = {.lex_state = 486},
  [55] = {.lex_state = 361},
  [56] = {.lex_state = 361},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 493},
  [61] = {.lex_state = 496},
  [62] = {.lex_state = 502},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 376},
  [65] = {.lex_state = 376},
  [66] = {.lex_state = 493},
  [67] = {.lex_state = 496},
  [68] = {.lex_state = 502},
  [69] = {.lex_state = 376},
  [70] = {.lex_state = 376},
  [71] = {.lex_state = 108},
  [72] = {.lex_state = 108},
  [73] = {.lex_state = 315},
  [74] = {.lex_state = 508},
  [75] = {.lex_state = 508},
  [76] = {.lex_state = 108},
  [77] = {.lex_state = 361},
  [78] = {.lex_state = 108},
  [79] = {.lex_state = 108},
  [80] = {.lex_state = 508},
  [81] = {.lex_state = 515},
  [82] = {.lex_state = 515},
  [83] = {.lex_state = 515},
  [84] = {.lex_state = 361},
  [85] = {.lex_state = 361},
  [86] = {.lex_state = 108},
  [87] = {.lex_state = 108},
  [88] = {.lex_state = 108},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 496},
  [92] = {.lex_state = 496},
  [93] = {.lex_state = 502},
  [94] = {.lex_state = 502},
  [95] = {.lex_state = 376},
  [96] = {.lex_state = 376},
  [97] = {.lex_state = 376},
  [98] = {.lex_state = 376},
  [99] = {.lex_state = 520},
  [100] = {.lex_state = 520},
  [101] = {.lex_state = 361},
  [102] = {.lex_state = 315},
  [103] = {.lex_state = 508},
  [104] = {.lex_state = 361},
  [105] = {.lex_state = 108},
  [106] = {.lex_state = 515},
  [107] = {.lex_state = 361},
  [108] = {.lex_state = 361},
  [109] = {.lex_state = 108},
  [110] = {.lex_state = 508},
  [111] = {.lex_state = 108},
  [112] = {.lex_state = 508},
  [113] = {.lex_state = 486},
  [114] = {.lex_state = 108},
  [115] = {.lex_state = 108},
  [116] = {.lex_state = 496},
  [117] = {.lex_state = 502},
  [118] = {.lex_state = 376},
  [119] = {.lex_state = 520},
  [120] = {.lex_state = 508},
  [121] = {.lex_state = 361},
  [122] = {.lex_state = 315},
  [123] = {.lex_state = 315},
  [124] = {.lex_state = 508},
  [125] = {.lex_state = 108},
  [126] = {.lex_state = 315},
  [127] = {.lex_state = 508},
  [128] = {.lex_state = 508},
  [129] = {.lex_state = 361},
  [130] = {.lex_state = 108},
  [131] = {.lex_state = 361},
  [132] = {.lex_state = 508},
  [133] = {.lex_state = 508},
  [134] = {.lex_state = 508},
  [135] = {.lex_state = 508},
  [136] = {.lex_state = 361},
  [137] = {.lex_state = 508},
  [138] = {.lex_state = 508},
  [139] = {.lex_state = 508},
  [140] = {.lex_state = 361},
  [141] = {.lex_state = 508},
  [142] = {.lex_state = 315},
  [143] = {.lex_state = 508},
  [144] = {.lex_state = 108},
  [145] = {.lex_state = 361},
  [146] = {.lex_state = 508},
  [147] = {.lex_state = 361},
  [148] = {.lex_state = 508},
  [149] = {.lex_state = 108},
  [150] = {.lex_state = 508},
  [151] = {.lex_state = 508},
  [152] = {.lex_state = 315},
  [153] = {.lex_state = 508},
  [154] = {.lex_state = 361},
  [155] = {.lex_state = 508},
  [156] = {.lex_state = 496},
  [157] = {.lex_state = 508},
  [158] = {.lex_state = 108},
  [159] = {.lex_state = 508},
  [160] = {.lex_state = 508},
  [161] = {.lex_state = 508},
  [162] = {.lex_state = 315},
  [163] = {.lex_state = 508},
  [164] = {.lex_state = 508},
  [165] = {.lex_state = 108},
  [166] = {.lex_state = 108},
  [167] = {.lex_state = 508},
  [168] = {.lex_state = 508},
  [169] = {.lex_state = 508},
  [170] = {.lex_state = 508},
  [171] = {.lex_state = 108},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
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
    [anon_sym_RBRACE] = ACTIONS(36),
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
    [aux_sym_type_synonym_repeat1] = STATE(26),
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
    [aux_sym_type_synonym_repeat1] = STATE(26),
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
    [anon_sym_RBRACE] = ACTIONS(52),
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
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
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
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
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
    [anon_sym_LBRACE] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
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
    [sym__space] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
    [sym__tab] = ACTIONS(178),
    [sym__vertical_tab] = ACTIONS(178),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
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
    [sym__space] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
    [sym__tab] = ACTIONS(180),
    [sym__vertical_tab] = ACTIONS(180),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_EQ] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE] = ACTIONS(182),
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
    [sym__space] = ACTIONS(182),
    [sym__newline] = ACTIONS(182),
    [sym__tab] = ACTIONS(182),
    [sym__vertical_tab] = ACTIONS(182),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
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
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
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
    [sym__space] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
    [sym__tab] = ACTIONS(192),
    [sym__vertical_tab] = ACTIONS(192),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
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
    [anon_sym_LBRACE] = ACTIONS(180),
    [anon_sym_RBRACE] = ACTIONS(180),
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
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
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
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
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
    [sym_new_constructor] = STATE(86),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_comment] = ACTIONS(24),
  },
  [55] = {
    [anon_sym_where] = ACTIONS(244),
    [anon_sym_EQ] = ACTIONS(246),
    [sym_variable_identifier] = ACTIONS(248),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_class] = ACTIONS(244),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_deriving] = ACTIONS(244),
    [anon_sym_do] = ACTIONS(244),
    [anon_sym_else] = ACTIONS(244),
    [anon_sym_foreign] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(244),
    [anon_sym_in] = ACTIONS(244),
    [anon_sym_infix] = ACTIONS(244),
    [anon_sym_infixl] = ACTIONS(244),
    [anon_sym_infixr] = ACTIONS(244),
    [anon_sym_instance] = ACTIONS(244),
    [anon_sym_let] = ACTIONS(244),
    [anon_sym_of] = ACTIONS(244),
    [anon_sym_then] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [sym_comment] = ACTIONS(24),
  },
  [56] = {
    [sym__identifier] = STATE(87),
    [sym_reserved_identifier] = STATE(7),
    [aux_sym_type_synonym_repeat1] = STATE(88),
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
    [ts_builtin_sym_end] = ACTIONS(250),
    [anon_sym_module] = ACTIONS(252),
    [anon_sym_where] = ACTIONS(252),
    [anon_sym_import] = ACTIONS(252),
    [anon_sym_newtype] = ACTIONS(252),
    [anon_sym_type] = ACTIONS(252),
    [sym_variable_identifier] = ACTIONS(254),
    [sym_constructor_identifier] = ACTIONS(254),
    [sym_module_identifier] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(252),
    [anon_sym_class] = ACTIONS(252),
    [anon_sym_data] = ACTIONS(252),
    [anon_sym_default] = ACTIONS(252),
    [anon_sym_deriving] = ACTIONS(252),
    [anon_sym_do] = ACTIONS(252),
    [anon_sym_else] = ACTIONS(252),
    [anon_sym_foreign] = ACTIONS(252),
    [anon_sym_if] = ACTIONS(252),
    [anon_sym_in] = ACTIONS(252),
    [anon_sym_infix] = ACTIONS(252),
    [anon_sym_infixl] = ACTIONS(252),
    [anon_sym_infixr] = ACTIONS(252),
    [anon_sym_instance] = ACTIONS(252),
    [anon_sym_let] = ACTIONS(252),
    [anon_sym_of] = ACTIONS(252),
    [anon_sym_then] = ACTIONS(252),
    [anon_sym__] = ACTIONS(252),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(254),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [sym__integer_literal] = ACTIONS(252),
    [sym__octal_literal] = ACTIONS(252),
    [sym__hexidecimal_literal] = ACTIONS(252),
  },
  [58] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(256),
  },
  [59] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(258),
  },
  [60] = {
    [sym__cntrl] = STATE(90),
    [anon_sym__] = ACTIONS(260),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(260),
    [anon_sym_AT] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_BSLASH] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(260),
  },
  [61] = {
    [aux_sym__escape_repeat1] = STATE(92),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(262),
  },
  [62] = {
    [aux_sym__escape_repeat2] = STATE(94),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(264),
  },
  [63] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(266),
  },
  [64] = {
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_EQ] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
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
    [sym__space] = ACTIONS(268),
    [sym__newline] = ACTIONS(268),
    [sym__tab] = ACTIONS(268),
    [sym__vertical_tab] = ACTIONS(268),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(270),
    [anon_sym__] = ACTIONS(270),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(270),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(270),
    [sym__ascii_large] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(270),
    [anon_sym_DOLLAR] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(270),
    [anon_sym_AMP] = ACTIONS(270),
    [anon_sym_1] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(270),
    [anon_sym_LT] = ACTIONS(270),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_QMARK] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_CARET] = ACTIONS(270),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_TILDE] = ACTIONS(270),
    [anon_sym_COLON] = ACTIONS(270),
    [anon_sym_BSLASH] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(270),
    [anon_sym_RBRACK] = ACTIONS(270),
    [anon_sym_BQUOTE] = ACTIONS(270),
    [sym__space] = ACTIONS(270),
    [sym__newline] = ACTIONS(270),
    [sym__tab] = ACTIONS(270),
    [sym__vertical_tab] = ACTIONS(270),
  },
  [66] = {
    [sym__cntrl] = STATE(96),
    [anon_sym__] = ACTIONS(272),
    [sym_comment] = ACTIONS(24),
    [sym__ascii_large] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
  },
  [67] = {
    [aux_sym__escape_repeat1] = STATE(98),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(274),
  },
  [68] = {
    [aux_sym__escape_repeat2] = STATE(100),
    [sym_comment] = ACTIONS(24),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(276),
  },
  [69] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_RPAREN] = ACTIONS(278),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_RBRACE] = ACTIONS(278),
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
    [sym__space] = ACTIONS(278),
    [sym__newline] = ACTIONS(278),
    [sym__tab] = ACTIONS(278),
    [sym__vertical_tab] = ACTIONS(278),
  },
  [70] = {
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_EQ] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym__] = ACTIONS(280),
    [sym_comment] = ACTIONS(24),
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
    [sym__space] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
    [sym__tab] = ACTIONS(280),
    [sym__vertical_tab] = ACTIONS(280),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(284),
    [anon_sym_where] = ACTIONS(284),
    [anon_sym_import] = ACTIONS(284),
    [anon_sym_newtype] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(286),
    [sym_constructor_identifier] = ACTIONS(286),
    [sym_module_identifier] = ACTIONS(286),
    [anon_sym_case] = ACTIONS(284),
    [anon_sym_class] = ACTIONS(284),
    [anon_sym_data] = ACTIONS(284),
    [anon_sym_default] = ACTIONS(284),
    [anon_sym_deriving] = ACTIONS(284),
    [anon_sym_do] = ACTIONS(284),
    [anon_sym_else] = ACTIONS(284),
    [anon_sym_foreign] = ACTIONS(284),
    [anon_sym_if] = ACTIONS(284),
    [anon_sym_in] = ACTIONS(284),
    [anon_sym_infix] = ACTIONS(284),
    [anon_sym_infixl] = ACTIONS(284),
    [anon_sym_infixr] = ACTIONS(284),
    [anon_sym_instance] = ACTIONS(284),
    [anon_sym_let] = ACTIONS(284),
    [anon_sym_of] = ACTIONS(284),
    [anon_sym_then] = ACTIONS(284),
    [anon_sym__] = ACTIONS(284),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [sym__integer_literal] = ACTIONS(284),
    [sym__octal_literal] = ACTIONS(284),
    [sym__hexidecimal_literal] = ACTIONS(284),
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
    [ts_builtin_sym_end] = ACTIONS(288),
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
    [anon_sym_where] = ACTIONS(290),
    [sym_comment] = ACTIONS(24),
  },
  [74] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(294),
    [sym_comment] = ACTIONS(24),
  },
  [75] = {
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
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
    [ts_builtin_sym_end] = ACTIONS(300),
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
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_where] = ACTIONS(304),
    [anon_sym_import] = ACTIONS(304),
    [anon_sym_newtype] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(306),
    [sym_constructor_identifier] = ACTIONS(306),
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
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [anon_sym_module] = ACTIONS(310),
    [anon_sym_where] = ACTIONS(310),
    [anon_sym_import] = ACTIONS(310),
    [anon_sym_newtype] = ACTIONS(310),
    [anon_sym_type] = ACTIONS(310),
    [sym_variable_identifier] = ACTIONS(312),
    [sym_constructor_identifier] = ACTIONS(312),
    [sym_module_identifier] = ACTIONS(312),
    [anon_sym_case] = ACTIONS(310),
    [anon_sym_class] = ACTIONS(310),
    [anon_sym_data] = ACTIONS(310),
    [anon_sym_default] = ACTIONS(310),
    [anon_sym_deriving] = ACTIONS(310),
    [anon_sym_do] = ACTIONS(310),
    [anon_sym_else] = ACTIONS(310),
    [anon_sym_foreign] = ACTIONS(310),
    [anon_sym_if] = ACTIONS(310),
    [anon_sym_in] = ACTIONS(310),
    [anon_sym_infix] = ACTIONS(310),
    [anon_sym_infixl] = ACTIONS(310),
    [anon_sym_infixr] = ACTIONS(310),
    [anon_sym_instance] = ACTIONS(310),
    [anon_sym_let] = ACTIONS(310),
    [anon_sym_of] = ACTIONS(310),
    [anon_sym_then] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(312),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [sym__integer_literal] = ACTIONS(310),
    [sym__octal_literal] = ACTIONS(310),
    [sym__hexidecimal_literal] = ACTIONS(310),
  },
  [80] = {
    [aux_sym_import_specification_repeat1] = STATE(110),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(318),
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
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_where] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(304),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(304),
    [anon_sym_type] = ACTIONS(304),
    [sym_variable_identifier] = ACTIONS(306),
    [sym_constructor_identifier] = ACTIONS(306),
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
  [84] = {
    [sym__identifier] = STATE(112),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(318),
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
    [sym__identifier] = STATE(114),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(320),
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
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_module] = ACTIONS(324),
    [anon_sym_where] = ACTIONS(324),
    [anon_sym_import] = ACTIONS(324),
    [anon_sym_newtype] = ACTIONS(324),
    [anon_sym_type] = ACTIONS(324),
    [sym_variable_identifier] = ACTIONS(326),
    [sym_constructor_identifier] = ACTIONS(326),
    [sym_module_identifier] = ACTIONS(326),
    [anon_sym_case] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
    [anon_sym_data] = ACTIONS(324),
    [anon_sym_default] = ACTIONS(324),
    [anon_sym_deriving] = ACTIONS(324),
    [anon_sym_do] = ACTIONS(324),
    [anon_sym_else] = ACTIONS(324),
    [anon_sym_foreign] = ACTIONS(324),
    [anon_sym_if] = ACTIONS(324),
    [anon_sym_in] = ACTIONS(324),
    [anon_sym_infix] = ACTIONS(324),
    [anon_sym_infixl] = ACTIONS(324),
    [anon_sym_infixr] = ACTIONS(324),
    [anon_sym_instance] = ACTIONS(324),
    [anon_sym_let] = ACTIONS(324),
    [anon_sym_of] = ACTIONS(324),
    [anon_sym_then] = ACTIONS(324),
    [anon_sym__] = ACTIONS(324),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [anon_sym_DQUOTE] = ACTIONS(322),
    [sym__integer_literal] = ACTIONS(324),
    [sym__octal_literal] = ACTIONS(324),
    [sym__hexidecimal_literal] = ACTIONS(324),
  },
  [87] = {
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
  [88] = {
    [sym__identifier] = STATE(115),
    [sym_reserved_identifier] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(330),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(330),
    [anon_sym_newtype] = ACTIONS(330),
    [anon_sym_type] = ACTIONS(330),
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
    [sym_float] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(328),
    [anon_sym_DQUOTE] = ACTIONS(328),
    [sym__integer_literal] = ACTIONS(330),
    [sym__octal_literal] = ACTIONS(330),
    [sym__hexidecimal_literal] = ACTIONS(330),
  },
  [89] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(334),
  },
  [90] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(336),
  },
  [91] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(338),
  },
  [92] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(342),
  },
  [93] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(344),
  },
  [94] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(346),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_EQ] = ACTIONS(348),
    [anon_sym_LBRACE] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym__] = ACTIONS(348),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(348),
    [anon_sym_DQUOTE] = ACTIONS(348),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(348),
    [sym__ascii_large] = ACTIONS(348),
    [anon_sym_BANG] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_DOLLAR] = ACTIONS(348),
    [anon_sym_PERCENT] = ACTIONS(348),
    [anon_sym_AMP] = ACTIONS(348),
    [anon_sym_1] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_SLASH] = ACTIONS(348),
    [anon_sym_LT] = ACTIONS(348),
    [anon_sym_GT] = ACTIONS(348),
    [anon_sym_QMARK] = ACTIONS(348),
    [anon_sym_AT] = ACTIONS(348),
    [anon_sym_CARET] = ACTIONS(348),
    [anon_sym_PIPE] = ACTIONS(348),
    [anon_sym_DASH] = ACTIONS(348),
    [anon_sym_TILDE] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_BSLASH] = ACTIONS(348),
    [anon_sym_SEMI] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [anon_sym_BQUOTE] = ACTIONS(348),
    [sym__space] = ACTIONS(348),
    [sym__newline] = ACTIONS(348),
    [sym__tab] = ACTIONS(348),
    [sym__vertical_tab] = ACTIONS(348),
  },
  [96] = {
    [anon_sym_LPAREN] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_EQ] = ACTIONS(350),
    [anon_sym_LBRACE] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
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
    [sym__space] = ACTIONS(350),
    [sym__newline] = ACTIONS(350),
    [sym__tab] = ACTIONS(350),
    [sym__vertical_tab] = ACTIONS(350),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(352),
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
    [sym__space] = ACTIONS(352),
    [sym__newline] = ACTIONS(352),
    [sym__tab] = ACTIONS(352),
    [sym__vertical_tab] = ACTIONS(352),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(352),
  },
  [98] = {
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
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
    [sym__space] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
    [sym__tab] = ACTIONS(354),
    [sym__vertical_tab] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(356),
  },
  [99] = {
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_EQ] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(358),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(358),
    [sym__ascii_large] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_DOLLAR] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_AMP] = ACTIONS(358),
    [anon_sym_1] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(358),
    [anon_sym_LT] = ACTIONS(358),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_BSLASH] = ACTIONS(358),
    [anon_sym_SEMI] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [anon_sym_RBRACK] = ACTIONS(358),
    [anon_sym_BQUOTE] = ACTIONS(358),
    [sym__space] = ACTIONS(358),
    [sym__newline] = ACTIONS(358),
    [sym__tab] = ACTIONS(358),
    [sym__vertical_tab] = ACTIONS(358),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(358),
  },
  [100] = {
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
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
    [sym__space] = ACTIONS(354),
    [sym__newline] = ACTIONS(354),
    [sym__tab] = ACTIONS(354),
    [sym__vertical_tab] = ACTIONS(354),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(360),
  },
  [101] = {
    [sym_export_declaration] = STATE(120),
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
    [anon_sym_where] = ACTIONS(362),
    [sym_comment] = ACTIONS(24),
  },
  [103] = {
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_comment] = ACTIONS(24),
  },
  [104] = {
    [sym__identifier] = STATE(124),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(368),
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
    [ts_builtin_sym_end] = ACTIONS(370),
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
    [sym_import_specification] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(374),
    [anon_sym_where] = ACTIONS(374),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_import] = ACTIONS(374),
    [anon_sym_hiding] = ACTIONS(138),
    [anon_sym_newtype] = ACTIONS(374),
    [anon_sym_type] = ACTIONS(374),
    [sym_variable_identifier] = ACTIONS(376),
    [sym_constructor_identifier] = ACTIONS(376),
    [sym_module_identifier] = ACTIONS(376),
    [anon_sym_case] = ACTIONS(374),
    [anon_sym_class] = ACTIONS(374),
    [anon_sym_data] = ACTIONS(374),
    [anon_sym_default] = ACTIONS(374),
    [anon_sym_deriving] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_else] = ACTIONS(374),
    [anon_sym_foreign] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_in] = ACTIONS(374),
    [anon_sym_infix] = ACTIONS(374),
    [anon_sym_infixl] = ACTIONS(374),
    [anon_sym_infixr] = ACTIONS(374),
    [anon_sym_instance] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_of] = ACTIONS(374),
    [anon_sym_then] = ACTIONS(374),
    [anon_sym__] = ACTIONS(374),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym__integer_literal] = ACTIONS(374),
    [sym__octal_literal] = ACTIONS(374),
    [sym__hexidecimal_literal] = ACTIONS(374),
  },
  [107] = {
    [sym__identifier] = STATE(127),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(378),
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
    [sym__identifier] = STATE(128),
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
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_where] = ACTIONS(382),
    [anon_sym_import] = ACTIONS(382),
    [anon_sym_newtype] = ACTIONS(382),
    [anon_sym_type] = ACTIONS(382),
    [sym_variable_identifier] = ACTIONS(384),
    [sym_constructor_identifier] = ACTIONS(384),
    [sym_module_identifier] = ACTIONS(384),
    [anon_sym_case] = ACTIONS(382),
    [anon_sym_class] = ACTIONS(382),
    [anon_sym_data] = ACTIONS(382),
    [anon_sym_default] = ACTIONS(382),
    [anon_sym_deriving] = ACTIONS(382),
    [anon_sym_do] = ACTIONS(382),
    [anon_sym_else] = ACTIONS(382),
    [anon_sym_foreign] = ACTIONS(382),
    [anon_sym_if] = ACTIONS(382),
    [anon_sym_in] = ACTIONS(382),
    [anon_sym_infix] = ACTIONS(382),
    [anon_sym_infixl] = ACTIONS(382),
    [anon_sym_infixr] = ACTIONS(382),
    [anon_sym_instance] = ACTIONS(382),
    [anon_sym_let] = ACTIONS(382),
    [anon_sym_of] = ACTIONS(382),
    [anon_sym_then] = ACTIONS(382),
    [anon_sym__] = ACTIONS(382),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(384),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [anon_sym_DQUOTE] = ACTIONS(380),
    [sym__integer_literal] = ACTIONS(382),
    [sym__octal_literal] = ACTIONS(382),
    [sym__hexidecimal_literal] = ACTIONS(382),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(24),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(374),
    [anon_sym_where] = ACTIONS(374),
    [anon_sym_import] = ACTIONS(374),
    [anon_sym_newtype] = ACTIONS(374),
    [anon_sym_type] = ACTIONS(374),
    [sym_variable_identifier] = ACTIONS(376),
    [sym_constructor_identifier] = ACTIONS(376),
    [sym_module_identifier] = ACTIONS(376),
    [anon_sym_case] = ACTIONS(374),
    [anon_sym_class] = ACTIONS(374),
    [anon_sym_data] = ACTIONS(374),
    [anon_sym_default] = ACTIONS(374),
    [anon_sym_deriving] = ACTIONS(374),
    [anon_sym_do] = ACTIONS(374),
    [anon_sym_else] = ACTIONS(374),
    [anon_sym_foreign] = ACTIONS(374),
    [anon_sym_if] = ACTIONS(374),
    [anon_sym_in] = ACTIONS(374),
    [anon_sym_infix] = ACTIONS(374),
    [anon_sym_infixl] = ACTIONS(374),
    [anon_sym_infixr] = ACTIONS(374),
    [anon_sym_instance] = ACTIONS(374),
    [anon_sym_let] = ACTIONS(374),
    [anon_sym_of] = ACTIONS(374),
    [anon_sym_then] = ACTIONS(374),
    [anon_sym__] = ACTIONS(374),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(376),
    [anon_sym_SQUOTE] = ACTIONS(372),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym__integer_literal] = ACTIONS(374),
    [sym__octal_literal] = ACTIONS(374),
    [sym__hexidecimal_literal] = ACTIONS(374),
  },
  [112] = {
    [aux_sym_import_specification_repeat1] = STATE(132),
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(24),
  },
  [113] = {
    [sym_variable_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(24),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(398),
    [sym_constructor_identifier] = ACTIONS(398),
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
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(246),
    [anon_sym_module] = ACTIONS(244),
    [anon_sym_where] = ACTIONS(244),
    [anon_sym_import] = ACTIONS(244),
    [anon_sym_newtype] = ACTIONS(244),
    [anon_sym_type] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(248),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_class] = ACTIONS(244),
    [anon_sym_data] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_deriving] = ACTIONS(244),
    [anon_sym_do] = ACTIONS(244),
    [anon_sym_else] = ACTIONS(244),
    [anon_sym_foreign] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(244),
    [anon_sym_in] = ACTIONS(244),
    [anon_sym_infix] = ACTIONS(244),
    [anon_sym_infixl] = ACTIONS(244),
    [anon_sym_infixr] = ACTIONS(244),
    [anon_sym_instance] = ACTIONS(244),
    [anon_sym_let] = ACTIONS(244),
    [anon_sym_of] = ACTIONS(244),
    [anon_sym_then] = ACTIONS(244),
    [anon_sym__] = ACTIONS(244),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [sym__integer_literal] = ACTIONS(244),
    [sym__octal_literal] = ACTIONS(244),
    [sym__hexidecimal_literal] = ACTIONS(244),
  },
  [116] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(400),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(400),
  },
  [117] = {
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(402),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(402),
  },
  [118] = {
    [anon_sym_LPAREN] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_EQ] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_RBRACE] = ACTIONS(404),
    [anon_sym__] = ACTIONS(404),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(404),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(404),
    [sym__ascii_large] = ACTIONS(404),
    [anon_sym_BANG] = ACTIONS(404),
    [anon_sym_POUND] = ACTIONS(404),
    [anon_sym_DOLLAR] = ACTIONS(404),
    [anon_sym_PERCENT] = ACTIONS(404),
    [anon_sym_AMP] = ACTIONS(404),
    [anon_sym_1] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(404),
    [anon_sym_SLASH] = ACTIONS(404),
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_AT] = ACTIONS(404),
    [anon_sym_CARET] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_DASH] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(404),
    [anon_sym_BSLASH] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_RBRACK] = ACTIONS(404),
    [anon_sym_BQUOTE] = ACTIONS(404),
    [sym__space] = ACTIONS(404),
    [sym__newline] = ACTIONS(404),
    [sym__tab] = ACTIONS(404),
    [sym__vertical_tab] = ACTIONS(404),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(404),
  },
  [119] = {
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_EQ] = ACTIONS(406),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym__] = ACTIONS(406),
    [sym_comment] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(406),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(406),
    [sym__ascii_large] = ACTIONS(406),
    [anon_sym_BANG] = ACTIONS(406),
    [anon_sym_POUND] = ACTIONS(406),
    [anon_sym_DOLLAR] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(406),
    [anon_sym_AMP] = ACTIONS(406),
    [anon_sym_1] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_SLASH] = ACTIONS(406),
    [anon_sym_LT] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(406),
    [anon_sym_AT] = ACTIONS(406),
    [anon_sym_CARET] = ACTIONS(406),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_DASH] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(406),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_BSLASH] = ACTIONS(406),
    [anon_sym_SEMI] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_RBRACK] = ACTIONS(406),
    [anon_sym_BQUOTE] = ACTIONS(406),
    [sym__space] = ACTIONS(406),
    [sym__newline] = ACTIONS(406),
    [sym__tab] = ACTIONS(406),
    [sym__vertical_tab] = ACTIONS(406),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(406),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [sym_comment] = ACTIONS(24),
  },
  [121] = {
    [sym_export_declaration] = STATE(134),
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
  [122] = {
    [anon_sym_where] = ACTIONS(410),
    [sym_comment] = ACTIONS(24),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
  },
  [124] = {
    [aux_sym_export_declaration_repeat1] = STATE(137),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(24),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_module] = ACTIONS(418),
    [anon_sym_where] = ACTIONS(418),
    [anon_sym_import] = ACTIONS(418),
    [anon_sym_newtype] = ACTIONS(418),
    [anon_sym_type] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(420),
    [sym_constructor_identifier] = ACTIONS(420),
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
    [anon_sym_of] = ACTIONS(418),
    [anon_sym_then] = ACTIONS(418),
    [anon_sym__] = ACTIONS(418),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(420),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [sym__integer_literal] = ACTIONS(418),
    [sym__octal_literal] = ACTIONS(418),
    [sym__hexidecimal_literal] = ACTIONS(418),
  },
  [126] = {
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(24),
  },
  [127] = {
    [aux_sym_export_declaration_repeat1] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(24),
  },
  [128] = {
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym_comment] = ACTIONS(24),
  },
  [129] = {
    [sym__identifier] = STATE(141),
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
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_module] = ACTIONS(430),
    [anon_sym_where] = ACTIONS(430),
    [anon_sym_import] = ACTIONS(430),
    [anon_sym_newtype] = ACTIONS(430),
    [anon_sym_type] = ACTIONS(430),
    [sym_variable_identifier] = ACTIONS(432),
    [sym_constructor_identifier] = ACTIONS(432),
    [sym_module_identifier] = ACTIONS(432),
    [anon_sym_case] = ACTIONS(430),
    [anon_sym_class] = ACTIONS(430),
    [anon_sym_data] = ACTIONS(430),
    [anon_sym_default] = ACTIONS(430),
    [anon_sym_deriving] = ACTIONS(430),
    [anon_sym_do] = ACTIONS(430),
    [anon_sym_else] = ACTIONS(430),
    [anon_sym_foreign] = ACTIONS(430),
    [anon_sym_if] = ACTIONS(430),
    [anon_sym_in] = ACTIONS(430),
    [anon_sym_infix] = ACTIONS(430),
    [anon_sym_infixl] = ACTIONS(430),
    [anon_sym_infixr] = ACTIONS(430),
    [anon_sym_instance] = ACTIONS(430),
    [anon_sym_let] = ACTIONS(430),
    [anon_sym_of] = ACTIONS(430),
    [anon_sym_then] = ACTIONS(430),
    [anon_sym__] = ACTIONS(430),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(428),
    [anon_sym_DQUOTE] = ACTIONS(428),
    [sym__integer_literal] = ACTIONS(430),
    [sym__octal_literal] = ACTIONS(430),
    [sym__hexidecimal_literal] = ACTIONS(430),
  },
  [131] = {
    [sym__identifier] = STATE(143),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(434),
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
  [132] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(436),
    [sym_comment] = ACTIONS(24),
  },
  [133] = {
    [anon_sym_COLON_COLON] = ACTIONS(438),
    [sym_comment] = ACTIONS(24),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(24),
  },
  [135] = {
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(24),
  },
  [136] = {
    [sym__identifier] = STATE(146),
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
  [137] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(446),
    [sym_comment] = ACTIONS(24),
  },
  [138] = {
    [aux_sym_import_specification_repeat1] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(448),
    [sym_comment] = ACTIONS(24),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
  },
  [140] = {
    [sym__identifier] = STATE(153),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(452),
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
  [141] = {
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(24),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
  },
  [143] = {
    [aux_sym_export_declaration_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(24),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_where] = ACTIONS(460),
    [anon_sym_import] = ACTIONS(460),
    [anon_sym_newtype] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_constructor_identifier] = ACTIONS(462),
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
    [anon_sym_of] = ACTIONS(460),
    [anon_sym_then] = ACTIONS(460),
    [anon_sym__] = ACTIONS(460),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(458),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym__integer_literal] = ACTIONS(460),
    [sym__octal_literal] = ACTIONS(460),
    [sym__hexidecimal_literal] = ACTIONS(460),
  },
  [145] = {
    [sym__identifier] = STATE(156),
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
  [146] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [sym_comment] = ACTIONS(24),
  },
  [147] = {
    [sym__identifier] = STATE(157),
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
  [148] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(24),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_where] = ACTIONS(470),
    [anon_sym_import] = ACTIONS(470),
    [anon_sym_newtype] = ACTIONS(470),
    [anon_sym_type] = ACTIONS(470),
    [sym_variable_identifier] = ACTIONS(472),
    [sym_constructor_identifier] = ACTIONS(472),
    [sym_module_identifier] = ACTIONS(472),
    [anon_sym_case] = ACTIONS(470),
    [anon_sym_class] = ACTIONS(470),
    [anon_sym_data] = ACTIONS(470),
    [anon_sym_default] = ACTIONS(470),
    [anon_sym_deriving] = ACTIONS(470),
    [anon_sym_do] = ACTIONS(470),
    [anon_sym_else] = ACTIONS(470),
    [anon_sym_foreign] = ACTIONS(470),
    [anon_sym_if] = ACTIONS(470),
    [anon_sym_in] = ACTIONS(470),
    [anon_sym_infix] = ACTIONS(470),
    [anon_sym_infixl] = ACTIONS(470),
    [anon_sym_infixr] = ACTIONS(470),
    [anon_sym_instance] = ACTIONS(470),
    [anon_sym_let] = ACTIONS(470),
    [anon_sym_of] = ACTIONS(470),
    [anon_sym_then] = ACTIONS(470),
    [anon_sym__] = ACTIONS(470),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(472),
    [anon_sym_SQUOTE] = ACTIONS(468),
    [anon_sym_DQUOTE] = ACTIONS(468),
    [sym__integer_literal] = ACTIONS(470),
    [sym__octal_literal] = ACTIONS(470),
    [sym__hexidecimal_literal] = ACTIONS(470),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_comment] = ACTIONS(24),
  },
  [151] = {
    [aux_sym_import_specification_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym_comment] = ACTIONS(24),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_comment] = ACTIONS(24),
  },
  [153] = {
    [aux_sym_export_declaration_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(476),
    [sym_comment] = ACTIONS(24),
  },
  [154] = {
    [sym__identifier] = STATE(163),
    [sym_reserved_identifier] = STATE(7),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(478),
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
  [155] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(480),
    [sym_comment] = ACTIONS(24),
  },
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(482),
    [sym_comment] = ACTIONS(24),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_comment] = ACTIONS(24),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_module] = ACTIONS(488),
    [anon_sym_where] = ACTIONS(488),
    [anon_sym_import] = ACTIONS(488),
    [anon_sym_newtype] = ACTIONS(488),
    [anon_sym_type] = ACTIONS(488),
    [sym_variable_identifier] = ACTIONS(490),
    [sym_constructor_identifier] = ACTIONS(490),
    [sym_module_identifier] = ACTIONS(490),
    [anon_sym_case] = ACTIONS(488),
    [anon_sym_class] = ACTIONS(488),
    [anon_sym_data] = ACTIONS(488),
    [anon_sym_default] = ACTIONS(488),
    [anon_sym_deriving] = ACTIONS(488),
    [anon_sym_do] = ACTIONS(488),
    [anon_sym_else] = ACTIONS(488),
    [anon_sym_foreign] = ACTIONS(488),
    [anon_sym_if] = ACTIONS(488),
    [anon_sym_in] = ACTIONS(488),
    [anon_sym_infix] = ACTIONS(488),
    [anon_sym_infixl] = ACTIONS(488),
    [anon_sym_infixr] = ACTIONS(488),
    [anon_sym_instance] = ACTIONS(488),
    [anon_sym_let] = ACTIONS(488),
    [anon_sym_of] = ACTIONS(488),
    [anon_sym_then] = ACTIONS(488),
    [anon_sym__] = ACTIONS(488),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [sym__integer_literal] = ACTIONS(488),
    [sym__octal_literal] = ACTIONS(488),
    [sym__hexidecimal_literal] = ACTIONS(488),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym_comment] = ACTIONS(24),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [sym_comment] = ACTIONS(24),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(24),
  },
  [162] = {
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(24),
  },
  [163] = {
    [aux_sym_export_declaration_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(24),
  },
  [164] = {
    [aux_sym_import_specification_repeat1] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym_comment] = ACTIONS(24),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(498),
    [anon_sym_module] = ACTIONS(500),
    [anon_sym_where] = ACTIONS(500),
    [anon_sym_import] = ACTIONS(500),
    [anon_sym_newtype] = ACTIONS(500),
    [anon_sym_type] = ACTIONS(500),
    [sym_variable_identifier] = ACTIONS(502),
    [sym_constructor_identifier] = ACTIONS(502),
    [sym_module_identifier] = ACTIONS(502),
    [anon_sym_case] = ACTIONS(500),
    [anon_sym_class] = ACTIONS(500),
    [anon_sym_data] = ACTIONS(500),
    [anon_sym_default] = ACTIONS(500),
    [anon_sym_deriving] = ACTIONS(500),
    [anon_sym_do] = ACTIONS(500),
    [anon_sym_else] = ACTIONS(500),
    [anon_sym_foreign] = ACTIONS(500),
    [anon_sym_if] = ACTIONS(500),
    [anon_sym_in] = ACTIONS(500),
    [anon_sym_infix] = ACTIONS(500),
    [anon_sym_infixl] = ACTIONS(500),
    [anon_sym_infixr] = ACTIONS(500),
    [anon_sym_instance] = ACTIONS(500),
    [anon_sym_let] = ACTIONS(500),
    [anon_sym_of] = ACTIONS(500),
    [anon_sym_then] = ACTIONS(500),
    [anon_sym__] = ACTIONS(500),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(502),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [sym__integer_literal] = ACTIONS(500),
    [sym__octal_literal] = ACTIONS(500),
    [sym__hexidecimal_literal] = ACTIONS(500),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [anon_sym_module] = ACTIONS(506),
    [anon_sym_where] = ACTIONS(506),
    [anon_sym_import] = ACTIONS(506),
    [anon_sym_newtype] = ACTIONS(506),
    [anon_sym_type] = ACTIONS(506),
    [sym_variable_identifier] = ACTIONS(508),
    [sym_constructor_identifier] = ACTIONS(508),
    [sym_module_identifier] = ACTIONS(508),
    [anon_sym_case] = ACTIONS(506),
    [anon_sym_class] = ACTIONS(506),
    [anon_sym_data] = ACTIONS(506),
    [anon_sym_default] = ACTIONS(506),
    [anon_sym_deriving] = ACTIONS(506),
    [anon_sym_do] = ACTIONS(506),
    [anon_sym_else] = ACTIONS(506),
    [anon_sym_foreign] = ACTIONS(506),
    [anon_sym_if] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(506),
    [anon_sym_infix] = ACTIONS(506),
    [anon_sym_infixl] = ACTIONS(506),
    [anon_sym_infixr] = ACTIONS(506),
    [anon_sym_instance] = ACTIONS(506),
    [anon_sym_let] = ACTIONS(506),
    [anon_sym_of] = ACTIONS(506),
    [anon_sym_then] = ACTIONS(506),
    [anon_sym__] = ACTIONS(506),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(508),
    [anon_sym_SQUOTE] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [sym__integer_literal] = ACTIONS(506),
    [sym__octal_literal] = ACTIONS(506),
    [sym__hexidecimal_literal] = ACTIONS(506),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(24),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(512),
    [sym_comment] = ACTIONS(24),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(514),
    [sym_comment] = ACTIONS(24),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [sym_comment] = ACTIONS(24),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_module] = ACTIONS(520),
    [anon_sym_where] = ACTIONS(520),
    [anon_sym_import] = ACTIONS(520),
    [anon_sym_newtype] = ACTIONS(520),
    [anon_sym_type] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_constructor_identifier] = ACTIONS(522),
    [sym_module_identifier] = ACTIONS(522),
    [anon_sym_case] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_data] = ACTIONS(520),
    [anon_sym_default] = ACTIONS(520),
    [anon_sym_deriving] = ACTIONS(520),
    [anon_sym_do] = ACTIONS(520),
    [anon_sym_else] = ACTIONS(520),
    [anon_sym_foreign] = ACTIONS(520),
    [anon_sym_if] = ACTIONS(520),
    [anon_sym_in] = ACTIONS(520),
    [anon_sym_infix] = ACTIONS(520),
    [anon_sym_infixl] = ACTIONS(520),
    [anon_sym_infixr] = ACTIONS(520),
    [anon_sym_instance] = ACTIONS(520),
    [anon_sym_let] = ACTIONS(520),
    [anon_sym_of] = ACTIONS(520),
    [anon_sym_then] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [sym_comment] = ACTIONS(24),
    [sym_float] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(518),
    [anon_sym_DQUOTE] = ACTIONS(518),
    [sym__integer_literal] = ACTIONS(520),
    [sym__octal_literal] = ACTIONS(520),
    [sym__hexidecimal_literal] = ACTIONS(520),
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
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
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
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(95),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(107),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [356] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(121),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(129),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [404] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [406] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [472] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 6),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 6),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 6),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [508] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
