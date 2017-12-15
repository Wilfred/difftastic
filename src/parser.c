#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 161
#define SYMBOL_COUNT 155
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
  sym_type_synonym = 129,
  sym__literal = 130,
  sym__identifier = 131,
  sym_simple_type = 132,
  sym_reserved_identifier = 133,
  sym_integer = 134,
  sym_char = 135,
  sym_string = 136,
  sym__gap = 137,
  sym__graphic = 138,
  sym__small = 139,
  sym__large = 140,
  sym__symbol = 141,
  sym__special = 142,
  sym__escape = 143,
  sym__char_escape = 144,
  sym__ascii = 145,
  sym__cntrl = 146,
  aux_sym_program_repeat1 = 147,
  aux_sym_module_export_declarations_repeat1 = 148,
  aux_sym_export_declaration_repeat1 = 149,
  aux_sym_import_specification_repeat1 = 150,
  aux_sym_type_synonym_repeat1 = 151,
  aux_sym_string_repeat1 = 152,
  aux_sym__escape_repeat1 = 153,
  aux_sym__escape_repeat2 = 154,
  alias_sym_module_body = 155,
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
      if (lookahead == 'n')
        ADVANCE(290);
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
      if (lookahead == 'n')
        ADVANCE(193);
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
      if (lookahead == 'n')
        ADVANCE(290);
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
      if (lookahead == 'n')
        ADVANCE(290);
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
      if (lookahead == 'n')
        ADVANCE(193);
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
      if (lookahead == 'n')
        ADVANCE(290);
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
  [6] = {.lex_state = 327},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 366},
  [9] = {.lex_state = 373},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 313},
  [17] = {.lex_state = 377},
  [18] = {.lex_state = 359},
  [19] = {.lex_state = 377},
  [20] = {.lex_state = 377},
  [21] = {.lex_state = 359},
  [22] = {.lex_state = 359},
  [23] = {.lex_state = 359},
  [24] = {.lex_state = 313},
  [25] = {.lex_state = 359},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 398},
  [33] = {.lex_state = 373},
  [34] = {.lex_state = 373},
  [35] = {.lex_state = 373},
  [36] = {.lex_state = 373},
  [37] = {.lex_state = 106},
  [38] = {.lex_state = 373},
  [39] = {.lex_state = 373},
  [40] = {.lex_state = 475},
  [41] = {.lex_state = 373},
  [42] = {.lex_state = 373},
  [43] = {.lex_state = 106},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 359},
  [46] = {.lex_state = 313},
  [47] = {.lex_state = 377},
  [48] = {.lex_state = 359},
  [49] = {.lex_state = 359},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 359},
  [53] = {.lex_state = 359},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 483},
  [58] = {.lex_state = 486},
  [59] = {.lex_state = 492},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 373},
  [62] = {.lex_state = 373},
  [63] = {.lex_state = 483},
  [64] = {.lex_state = 486},
  [65] = {.lex_state = 492},
  [66] = {.lex_state = 373},
  [67] = {.lex_state = 373},
  [68] = {.lex_state = 106},
  [69] = {.lex_state = 106},
  [70] = {.lex_state = 313},
  [71] = {.lex_state = 498},
  [72] = {.lex_state = 498},
  [73] = {.lex_state = 106},
  [74] = {.lex_state = 359},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 498},
  [78] = {.lex_state = 503},
  [79] = {.lex_state = 503},
  [80] = {.lex_state = 503},
  [81] = {.lex_state = 359},
  [82] = {.lex_state = 106},
  [83] = {.lex_state = 106},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 486},
  [87] = {.lex_state = 486},
  [88] = {.lex_state = 492},
  [89] = {.lex_state = 492},
  [90] = {.lex_state = 373},
  [91] = {.lex_state = 373},
  [92] = {.lex_state = 373},
  [93] = {.lex_state = 373},
  [94] = {.lex_state = 508},
  [95] = {.lex_state = 508},
  [96] = {.lex_state = 359},
  [97] = {.lex_state = 313},
  [98] = {.lex_state = 498},
  [99] = {.lex_state = 359},
  [100] = {.lex_state = 106},
  [101] = {.lex_state = 503},
  [102] = {.lex_state = 359},
  [103] = {.lex_state = 359},
  [104] = {.lex_state = 106},
  [105] = {.lex_state = 498},
  [106] = {.lex_state = 106},
  [107] = {.lex_state = 498},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 486},
  [110] = {.lex_state = 492},
  [111] = {.lex_state = 373},
  [112] = {.lex_state = 508},
  [113] = {.lex_state = 498},
  [114] = {.lex_state = 359},
  [115] = {.lex_state = 313},
  [116] = {.lex_state = 313},
  [117] = {.lex_state = 498},
  [118] = {.lex_state = 106},
  [119] = {.lex_state = 313},
  [120] = {.lex_state = 498},
  [121] = {.lex_state = 498},
  [122] = {.lex_state = 359},
  [123] = {.lex_state = 106},
  [124] = {.lex_state = 359},
  [125] = {.lex_state = 498},
  [126] = {.lex_state = 498},
  [127] = {.lex_state = 498},
  [128] = {.lex_state = 359},
  [129] = {.lex_state = 498},
  [130] = {.lex_state = 498},
  [131] = {.lex_state = 498},
  [132] = {.lex_state = 359},
  [133] = {.lex_state = 498},
  [134] = {.lex_state = 313},
  [135] = {.lex_state = 498},
  [136] = {.lex_state = 106},
  [137] = {.lex_state = 498},
  [138] = {.lex_state = 359},
  [139] = {.lex_state = 498},
  [140] = {.lex_state = 106},
  [141] = {.lex_state = 498},
  [142] = {.lex_state = 498},
  [143] = {.lex_state = 313},
  [144] = {.lex_state = 498},
  [145] = {.lex_state = 359},
  [146] = {.lex_state = 498},
  [147] = {.lex_state = 498},
  [148] = {.lex_state = 106},
  [149] = {.lex_state = 498},
  [150] = {.lex_state = 498},
  [151] = {.lex_state = 498},
  [152] = {.lex_state = 313},
  [153] = {.lex_state = 498},
  [154] = {.lex_state = 498},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 498},
  [157] = {.lex_state = 498},
  [158] = {.lex_state = 498},
  [159] = {.lex_state = 498},
  [160] = {.lex_state = 106},
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
    [sym_type_synonym] = STATE(14),
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
    [sym_constructor_identifier] = ACTIONS(20),
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
    [anon_sym_type] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
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
    [sym__identifier] = STATE(20),
    [sym_reserved_identifier] = STATE(19),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_qualified] = ACTIONS(42),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(44),
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
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(22),
  },
  [5] = {
    [sym__identifier] = STATE(23),
    [sym_simple_type] = STATE(24),
    [sym_reserved_identifier] = STATE(22),
    [aux_sym_type_synonym_repeat1] = STATE(25),
    [anon_sym_where] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_deriving] = ACTIONS(46),
    [anon_sym_do] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_foreign] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_in] = ACTIONS(46),
    [anon_sym_infix] = ACTIONS(46),
    [anon_sym_infixl] = ACTIONS(46),
    [anon_sym_infixr] = ACTIONS(46),
    [anon_sym_instance] = ACTIONS(46),
    [anon_sym_let] = ACTIONS(46),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_of] = ACTIONS(46),
    [anon_sym_then] = ACTIONS(46),
    [anon_sym__] = ACTIONS(46),
    [sym_comment] = ACTIONS(22),
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
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(54),
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
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(60),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(60),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(58),
    [sym__octal_literal] = ACTIONS(58),
    [sym__hexidecimal_literal] = ACTIONS(58),
  },
  [8] = {
    [sym__graphic] = STATE(29),
    [sym__small] = STATE(30),
    [sym__large] = STATE(30),
    [sym__symbol] = STATE(30),
    [sym__special] = STATE(30),
    [sym__escape] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(64),
    [anon_sym__] = ACTIONS(66),
    [sym_comment] = ACTIONS(22),
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
    [sym__gap] = STATE(36),
    [sym__graphic] = STATE(36),
    [sym__small] = STATE(38),
    [sym__large] = STATE(38),
    [sym__symbol] = STATE(38),
    [sym__special] = STATE(38),
    [sym__escape] = STATE(36),
    [aux_sym_string_repeat1] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym__] = ACTIONS(80),
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(98),
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
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(108),
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
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(114),
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
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(120),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym__integer_literal] = ACTIONS(118),
    [sym__octal_literal] = ACTIONS(118),
    [sym__hexidecimal_literal] = ACTIONS(118),
  },
  [15] = {
    [sym__statement] = STATE(43),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_synonym] = STATE(14),
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
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [16] = {
    [sym_module_export_declarations] = STATE(46),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(22),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_as] = ACTIONS(36),
    [anon_sym_hiding] = ACTIONS(36),
    [anon_sym_type] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
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
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [18] = {
    [sym__identifier] = STATE(47),
    [sym_reserved_identifier] = STATE(19),
    [anon_sym_where] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(44),
    [sym_constructor_identifier] = ACTIONS(44),
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
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(22),
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
    [sym_constructor_identifier] = ACTIONS(54),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym__integer_literal] = ACTIONS(52),
    [sym__octal_literal] = ACTIONS(52),
    [sym__hexidecimal_literal] = ACTIONS(52),
  },
  [20] = {
    [sym_import_specification] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_module] = ACTIONS(130),
    [anon_sym_where] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(130),
    [anon_sym_as] = ACTIONS(134),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(130),
    [sym_variable_identifier] = ACTIONS(138),
    [sym_constructor_identifier] = ACTIONS(138),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [sym__integer_literal] = ACTIONS(130),
    [sym__octal_literal] = ACTIONS(130),
    [sym__hexidecimal_literal] = ACTIONS(130),
  },
  [21] = {
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_EQ] = ACTIONS(34),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
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
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
  },
  [22] = {
    [anon_sym_where] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(54),
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
    [sym_comment] = ACTIONS(22),
  },
  [23] = {
    [anon_sym_where] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(142),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(144),
    [sym_module_identifier] = ACTIONS(144),
    [anon_sym_case] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_default] = ACTIONS(140),
    [anon_sym_deriving] = ACTIONS(140),
    [anon_sym_do] = ACTIONS(140),
    [anon_sym_else] = ACTIONS(140),
    [anon_sym_foreign] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [anon_sym_in] = ACTIONS(140),
    [anon_sym_infix] = ACTIONS(140),
    [anon_sym_infixl] = ACTIONS(140),
    [anon_sym_infixr] = ACTIONS(140),
    [anon_sym_instance] = ACTIONS(140),
    [anon_sym_let] = ACTIONS(140),
    [anon_sym_newtype] = ACTIONS(140),
    [anon_sym_of] = ACTIONS(140),
    [anon_sym_then] = ACTIONS(140),
    [anon_sym__] = ACTIONS(140),
    [sym_comment] = ACTIONS(22),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(146),
    [sym_comment] = ACTIONS(22),
  },
  [25] = {
    [sym__identifier] = STATE(53),
    [sym_reserved_identifier] = STATE(22),
    [anon_sym_where] = ACTIONS(46),
    [anon_sym_EQ] = ACTIONS(148),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(46),
    [anon_sym_class] = ACTIONS(46),
    [anon_sym_data] = ACTIONS(46),
    [anon_sym_default] = ACTIONS(46),
    [anon_sym_deriving] = ACTIONS(46),
    [anon_sym_do] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_foreign] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_in] = ACTIONS(46),
    [anon_sym_infix] = ACTIONS(46),
    [anon_sym_infixl] = ACTIONS(46),
    [anon_sym_infixr] = ACTIONS(46),
    [anon_sym_instance] = ACTIONS(46),
    [anon_sym_let] = ACTIONS(46),
    [anon_sym_newtype] = ACTIONS(46),
    [anon_sym_of] = ACTIONS(46),
    [anon_sym_then] = ACTIONS(46),
    [anon_sym__] = ACTIONS(46),
    [sym_comment] = ACTIONS(22),
  },
  [26] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(150),
  },
  [27] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(152),
  },
  [28] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(154),
  },
  [29] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(156),
  },
  [30] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(158),
  },
  [31] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(160),
  },
  [32] = {
    [sym__char_escape] = STATE(56),
    [sym__ascii] = STATE(56),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(164),
    [anon_sym_AMP] = ACTIONS(162),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_BSLASH] = ACTIONS(162),
    [anon_sym_x] = ACTIONS(168),
    [anon_sym_X] = ACTIONS(168),
    [anon_sym_o] = ACTIONS(170),
    [anon_sym_O] = ACTIONS(170),
    [anon_sym_a] = ACTIONS(162),
    [anon_sym_b] = ACTIONS(162),
    [anon_sym_f] = ACTIONS(162),
    [anon_sym_n] = ACTIONS(162),
    [anon_sym_r] = ACTIONS(162),
    [anon_sym_t] = ACTIONS(162),
    [anon_sym_v] = ACTIONS(162),
    [anon_sym_NUL] = ACTIONS(172),
    [anon_sym_SOH] = ACTIONS(172),
    [anon_sym_STX] = ACTIONS(172),
    [anon_sym_ETX] = ACTIONS(172),
    [anon_sym_EOT] = ACTIONS(172),
    [anon_sym_ENQ] = ACTIONS(172),
    [anon_sym_ACK] = ACTIONS(172),
    [anon_sym_BEL] = ACTIONS(172),
    [anon_sym_BS] = ACTIONS(172),
    [anon_sym_HT] = ACTIONS(172),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_VT] = ACTIONS(172),
    [anon_sym_FF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SO] = ACTIONS(172),
    [anon_sym_SI] = ACTIONS(172),
    [anon_sym_DLE] = ACTIONS(172),
    [anon_sym_DC1] = ACTIONS(172),
    [anon_sym_DC2] = ACTIONS(172),
    [anon_sym_DC3] = ACTIONS(172),
    [anon_sym_DC4] = ACTIONS(172),
    [anon_sym_NAK] = ACTIONS(172),
    [anon_sym_SYN] = ACTIONS(172),
    [anon_sym_ETB] = ACTIONS(172),
    [anon_sym_CAN] = ACTIONS(172),
    [anon_sym_EM] = ACTIONS(172),
    [anon_sym_SUB] = ACTIONS(172),
    [anon_sym_ESC] = ACTIONS(172),
    [anon_sym_FS] = ACTIONS(172),
    [anon_sym_GS] = ACTIONS(172),
    [anon_sym_RS] = ACTIONS(172),
    [anon_sym_US] = ACTIONS(172),
    [anon_sym_SP] = ACTIONS(172),
    [anon_sym_DEL] = ACTIONS(172),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym__] = ACTIONS(174),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(174),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(174),
    [sym__ascii_large] = ACTIONS(174),
    [anon_sym_BANG] = ACTIONS(174),
    [anon_sym_POUND] = ACTIONS(174),
    [anon_sym_DOLLAR] = ACTIONS(174),
    [anon_sym_PERCENT] = ACTIONS(174),
    [anon_sym_AMP] = ACTIONS(174),
    [anon_sym_1] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_SLASH] = ACTIONS(174),
    [anon_sym_LT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_QMARK] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_CARET] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(174),
    [anon_sym_BSLASH] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_RBRACE] = ACTIONS(174),
    [sym__space] = ACTIONS(174),
    [sym__newline] = ACTIONS(174),
    [sym__tab] = ACTIONS(174),
    [sym__vertical_tab] = ACTIONS(174),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(176),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(176),
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
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(176),
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
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym__] = ACTIONS(178),
    [sym_comment] = ACTIONS(22),
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
    [sym_comment] = ACTIONS(22),
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
    [ts_builtin_sym_end] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(184),
    [anon_sym_where] = ACTIONS(184),
    [anon_sym_import] = ACTIONS(184),
    [anon_sym_type] = ACTIONS(184),
    [sym_variable_identifier] = ACTIONS(186),
    [sym_constructor_identifier] = ACTIONS(186),
    [sym_module_identifier] = ACTIONS(186),
    [anon_sym_case] = ACTIONS(184),
    [anon_sym_class] = ACTIONS(184),
    [anon_sym_data] = ACTIONS(184),
    [anon_sym_default] = ACTIONS(184),
    [anon_sym_deriving] = ACTIONS(184),
    [anon_sym_do] = ACTIONS(184),
    [anon_sym_else] = ACTIONS(184),
    [anon_sym_foreign] = ACTIONS(184),
    [anon_sym_if] = ACTIONS(184),
    [anon_sym_in] = ACTIONS(184),
    [anon_sym_infix] = ACTIONS(184),
    [anon_sym_infixl] = ACTIONS(184),
    [anon_sym_infixr] = ACTIONS(184),
    [anon_sym_instance] = ACTIONS(184),
    [anon_sym_let] = ACTIONS(184),
    [anon_sym_newtype] = ACTIONS(184),
    [anon_sym_of] = ACTIONS(184),
    [anon_sym_then] = ACTIONS(184),
    [anon_sym__] = ACTIONS(184),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [sym__integer_literal] = ACTIONS(184),
    [sym__octal_literal] = ACTIONS(184),
    [sym__hexidecimal_literal] = ACTIONS(184),
  },
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [sym_comment] = ACTIONS(22),
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
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_QMARK] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(188),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(188),
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
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(190),
    [sym__ascii_large] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(190),
    [anon_sym_1] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_QMARK] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [sym__space] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
    [sym__tab] = ACTIONS(190),
    [sym__vertical_tab] = ACTIONS(190),
  },
  [40] = {
    [sym__char_escape] = STATE(62),
    [sym__ascii] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_EQ] = ACTIONS(176),
    [anon_sym__] = ACTIONS(176),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(176),
    [sym__ascii_large] = ACTIONS(176),
    [anon_sym_BANG] = ACTIONS(176),
    [anon_sym_POUND] = ACTIONS(176),
    [anon_sym_DOLLAR] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(176),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_1] = ACTIONS(176),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_DOT] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_LT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_QMARK] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_COLON] = ACTIONS(176),
    [anon_sym_BSLASH] = ACTIONS(192),
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
    [anon_sym_x] = ACTIONS(198),
    [anon_sym_X] = ACTIONS(198),
    [anon_sym_o] = ACTIONS(200),
    [anon_sym_O] = ACTIONS(200),
    [anon_sym_a] = ACTIONS(192),
    [anon_sym_b] = ACTIONS(192),
    [anon_sym_f] = ACTIONS(192),
    [anon_sym_n] = ACTIONS(192),
    [anon_sym_r] = ACTIONS(192),
    [anon_sym_t] = ACTIONS(192),
    [anon_sym_v] = ACTIONS(192),
    [anon_sym_NUL] = ACTIONS(202),
    [anon_sym_SOH] = ACTIONS(202),
    [anon_sym_STX] = ACTIONS(202),
    [anon_sym_ETX] = ACTIONS(202),
    [anon_sym_EOT] = ACTIONS(202),
    [anon_sym_ENQ] = ACTIONS(202),
    [anon_sym_ACK] = ACTIONS(202),
    [anon_sym_BEL] = ACTIONS(202),
    [anon_sym_BS] = ACTIONS(202),
    [anon_sym_HT] = ACTIONS(202),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_VT] = ACTIONS(202),
    [anon_sym_FF] = ACTIONS(202),
    [anon_sym_CR] = ACTIONS(202),
    [anon_sym_SO] = ACTIONS(202),
    [anon_sym_SI] = ACTIONS(202),
    [anon_sym_DLE] = ACTIONS(202),
    [anon_sym_DC1] = ACTIONS(202),
    [anon_sym_DC2] = ACTIONS(202),
    [anon_sym_DC3] = ACTIONS(202),
    [anon_sym_DC4] = ACTIONS(202),
    [anon_sym_NAK] = ACTIONS(202),
    [anon_sym_SYN] = ACTIONS(202),
    [anon_sym_ETB] = ACTIONS(202),
    [anon_sym_CAN] = ACTIONS(202),
    [anon_sym_EM] = ACTIONS(202),
    [anon_sym_SUB] = ACTIONS(202),
    [anon_sym_ESC] = ACTIONS(202),
    [anon_sym_FS] = ACTIONS(202),
    [anon_sym_GS] = ACTIONS(202),
    [anon_sym_RS] = ACTIONS(202),
    [anon_sym_US] = ACTIONS(202),
    [anon_sym_SP] = ACTIONS(202),
    [anon_sym_DEL] = ACTIONS(202),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [sym_comment] = ACTIONS(22),
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
  [42] = {
    [sym__gap] = STATE(67),
    [sym__graphic] = STATE(67),
    [sym__small] = STATE(38),
    [sym__large] = STATE(38),
    [sym__symbol] = STATE(38),
    [sym__special] = STATE(38),
    [sym__escape] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym__] = ACTIONS(80),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
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
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_module] = ACTIONS(212),
    [anon_sym_where] = ACTIONS(212),
    [anon_sym_import] = ACTIONS(212),
    [anon_sym_type] = ACTIONS(212),
    [sym_variable_identifier] = ACTIONS(214),
    [sym_constructor_identifier] = ACTIONS(214),
    [sym_module_identifier] = ACTIONS(214),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_class] = ACTIONS(212),
    [anon_sym_data] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_deriving] = ACTIONS(212),
    [anon_sym_do] = ACTIONS(212),
    [anon_sym_else] = ACTIONS(212),
    [anon_sym_foreign] = ACTIONS(212),
    [anon_sym_if] = ACTIONS(212),
    [anon_sym_in] = ACTIONS(212),
    [anon_sym_infix] = ACTIONS(212),
    [anon_sym_infixl] = ACTIONS(212),
    [anon_sym_infixr] = ACTIONS(212),
    [anon_sym_instance] = ACTIONS(212),
    [anon_sym_let] = ACTIONS(212),
    [anon_sym_newtype] = ACTIONS(212),
    [anon_sym_of] = ACTIONS(212),
    [anon_sym_then] = ACTIONS(212),
    [anon_sym__] = ACTIONS(212),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [sym__integer_literal] = ACTIONS(212),
    [sym__octal_literal] = ACTIONS(212),
    [sym__hexidecimal_literal] = ACTIONS(212),
  },
  [44] = {
    [sym__statement] = STATE(12),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_synonym] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [45] = {
    [sym_export_declaration] = STATE(71),
    [sym__identifier] = STATE(72),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(218),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [46] = {
    [anon_sym_where] = ACTIONS(220),
    [sym_comment] = ACTIONS(22),
  },
  [47] = {
    [sym_import_specification] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_module] = ACTIONS(224),
    [anon_sym_where] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(224),
    [anon_sym_as] = ACTIONS(226),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(228),
    [sym_module_identifier] = ACTIONS(228),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym__integer_literal] = ACTIONS(224),
    [sym__octal_literal] = ACTIONS(224),
    [sym__hexidecimal_literal] = ACTIONS(224),
  },
  [48] = {
    [sym__identifier] = STATE(77),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(230),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [49] = {
    [sym__identifier] = STATE(80),
    [sym_reserved_identifier] = STATE(79),
    [anon_sym_where] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(234),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(234),
    [anon_sym_case] = ACTIONS(232),
    [anon_sym_class] = ACTIONS(232),
    [anon_sym_data] = ACTIONS(232),
    [anon_sym_default] = ACTIONS(232),
    [anon_sym_deriving] = ACTIONS(232),
    [anon_sym_do] = ACTIONS(232),
    [anon_sym_else] = ACTIONS(232),
    [anon_sym_foreign] = ACTIONS(232),
    [anon_sym_if] = ACTIONS(232),
    [anon_sym_in] = ACTIONS(232),
    [anon_sym_infix] = ACTIONS(232),
    [anon_sym_infixl] = ACTIONS(232),
    [anon_sym_infixr] = ACTIONS(232),
    [anon_sym_instance] = ACTIONS(232),
    [anon_sym_let] = ACTIONS(232),
    [anon_sym_newtype] = ACTIONS(232),
    [anon_sym_of] = ACTIONS(232),
    [anon_sym_then] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [sym_comment] = ACTIONS(22),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(236),
    [sym_comment] = ACTIONS(22),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_module] = ACTIONS(224),
    [anon_sym_where] = ACTIONS(224),
    [anon_sym_import] = ACTIONS(224),
    [anon_sym_type] = ACTIONS(224),
    [sym_variable_identifier] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(228),
    [sym_module_identifier] = ACTIONS(228),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym__integer_literal] = ACTIONS(224),
    [sym__octal_literal] = ACTIONS(224),
    [sym__hexidecimal_literal] = ACTIONS(224),
  },
  [52] = {
    [sym__identifier] = STATE(82),
    [sym_reserved_identifier] = STATE(6),
    [aux_sym_type_synonym_repeat1] = STATE(83),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [53] = {
    [anon_sym_where] = ACTIONS(238),
    [anon_sym_EQ] = ACTIONS(240),
    [sym_variable_identifier] = ACTIONS(242),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_module_identifier] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_data] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_deriving] = ACTIONS(238),
    [anon_sym_do] = ACTIONS(238),
    [anon_sym_else] = ACTIONS(238),
    [anon_sym_foreign] = ACTIONS(238),
    [anon_sym_if] = ACTIONS(238),
    [anon_sym_in] = ACTIONS(238),
    [anon_sym_infix] = ACTIONS(238),
    [anon_sym_infixl] = ACTIONS(238),
    [anon_sym_infixr] = ACTIONS(238),
    [anon_sym_instance] = ACTIONS(238),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_newtype] = ACTIONS(238),
    [anon_sym_of] = ACTIONS(238),
    [anon_sym_then] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [sym_comment] = ACTIONS(22),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [anon_sym_module] = ACTIONS(246),
    [anon_sym_where] = ACTIONS(246),
    [anon_sym_import] = ACTIONS(246),
    [anon_sym_type] = ACTIONS(246),
    [sym_variable_identifier] = ACTIONS(248),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(246),
    [anon_sym_class] = ACTIONS(246),
    [anon_sym_data] = ACTIONS(246),
    [anon_sym_default] = ACTIONS(246),
    [anon_sym_deriving] = ACTIONS(246),
    [anon_sym_do] = ACTIONS(246),
    [anon_sym_else] = ACTIONS(246),
    [anon_sym_foreign] = ACTIONS(246),
    [anon_sym_if] = ACTIONS(246),
    [anon_sym_in] = ACTIONS(246),
    [anon_sym_infix] = ACTIONS(246),
    [anon_sym_infixl] = ACTIONS(246),
    [anon_sym_infixr] = ACTIONS(246),
    [anon_sym_instance] = ACTIONS(246),
    [anon_sym_let] = ACTIONS(246),
    [anon_sym_newtype] = ACTIONS(246),
    [anon_sym_of] = ACTIONS(246),
    [anon_sym_then] = ACTIONS(246),
    [anon_sym__] = ACTIONS(246),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_DQUOTE] = ACTIONS(244),
    [sym__integer_literal] = ACTIONS(246),
    [sym__octal_literal] = ACTIONS(246),
    [sym__hexidecimal_literal] = ACTIONS(246),
  },
  [55] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(250),
  },
  [56] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(252),
  },
  [57] = {
    [sym__cntrl] = STATE(85),
    [anon_sym__] = ACTIONS(254),
    [sym_comment] = ACTIONS(22),
    [sym__ascii_large] = ACTIONS(254),
    [anon_sym_AT] = ACTIONS(254),
    [anon_sym_CARET] = ACTIONS(254),
    [anon_sym_BSLASH] = ACTIONS(254),
    [anon_sym_LBRACK] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
  },
  [58] = {
    [aux_sym__escape_repeat1] = STATE(87),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(256),
  },
  [59] = {
    [aux_sym__escape_repeat2] = STATE(89),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(258),
  },
  [60] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(260),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym__] = ACTIONS(262),
    [sym_comment] = ACTIONS(22),
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
  [62] = {
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym__] = ACTIONS(264),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(264),
    [sym__ascii_large] = ACTIONS(264),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_POUND] = ACTIONS(264),
    [anon_sym_DOLLAR] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(264),
    [anon_sym_AMP] = ACTIONS(264),
    [anon_sym_1] = ACTIONS(264),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DOT] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_QMARK] = ACTIONS(264),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_CARET] = ACTIONS(264),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_TILDE] = ACTIONS(264),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_BSLASH] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_BQUOTE] = ACTIONS(264),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [sym__space] = ACTIONS(264),
    [sym__newline] = ACTIONS(264),
    [sym__tab] = ACTIONS(264),
    [sym__vertical_tab] = ACTIONS(264),
  },
  [63] = {
    [sym__cntrl] = STATE(91),
    [anon_sym__] = ACTIONS(266),
    [sym_comment] = ACTIONS(22),
    [sym__ascii_large] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(266),
    [anon_sym_CARET] = ACTIONS(266),
    [anon_sym_BSLASH] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
  },
  [64] = {
    [aux_sym__escape_repeat1] = STATE(93),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(268),
  },
  [65] = {
    [aux_sym__escape_repeat2] = STATE(95),
    [sym_comment] = ACTIONS(22),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(270),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(272),
    [sym__ascii_large] = ACTIONS(272),
    [anon_sym_BANG] = ACTIONS(272),
    [anon_sym_POUND] = ACTIONS(272),
    [anon_sym_DOLLAR] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(272),
    [anon_sym_AMP] = ACTIONS(272),
    [anon_sym_1] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(272),
    [anon_sym_SLASH] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(272),
    [anon_sym_GT] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(272),
    [anon_sym_AT] = ACTIONS(272),
    [anon_sym_CARET] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_TILDE] = ACTIONS(272),
    [anon_sym_COLON] = ACTIONS(272),
    [anon_sym_BSLASH] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(272),
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [sym__space] = ACTIONS(272),
    [sym__newline] = ACTIONS(272),
    [sym__tab] = ACTIONS(272),
    [sym__vertical_tab] = ACTIONS(272),
  },
  [67] = {
    [anon_sym_LPAREN] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(274),
    [anon_sym__] = ACTIONS(274),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(274),
    [sym__ascii_large] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(274),
    [anon_sym_POUND] = ACTIONS(274),
    [anon_sym_DOLLAR] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(274),
    [anon_sym_AMP] = ACTIONS(274),
    [anon_sym_1] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(274),
    [anon_sym_GT] = ACTIONS(274),
    [anon_sym_QMARK] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(274),
    [anon_sym_CARET] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(274),
    [anon_sym_BSLASH] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
    [sym__space] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
    [sym__tab] = ACTIONS(274),
    [sym__vertical_tab] = ACTIONS(274),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_where] = ACTIONS(278),
    [anon_sym_import] = ACTIONS(278),
    [anon_sym_type] = ACTIONS(278),
    [sym_variable_identifier] = ACTIONS(280),
    [sym_constructor_identifier] = ACTIONS(280),
    [sym_module_identifier] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_class] = ACTIONS(278),
    [anon_sym_data] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_deriving] = ACTIONS(278),
    [anon_sym_do] = ACTIONS(278),
    [anon_sym_else] = ACTIONS(278),
    [anon_sym_foreign] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_in] = ACTIONS(278),
    [anon_sym_infix] = ACTIONS(278),
    [anon_sym_infixl] = ACTIONS(278),
    [anon_sym_infixr] = ACTIONS(278),
    [anon_sym_instance] = ACTIONS(278),
    [anon_sym_let] = ACTIONS(278),
    [anon_sym_newtype] = ACTIONS(278),
    [anon_sym_of] = ACTIONS(278),
    [anon_sym_then] = ACTIONS(278),
    [anon_sym__] = ACTIONS(278),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [sym__integer_literal] = ACTIONS(278),
    [sym__octal_literal] = ACTIONS(278),
    [sym__hexidecimal_literal] = ACTIONS(278),
  },
  [69] = {
    [sym__statement] = STATE(43),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_synonym] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [70] = {
    [anon_sym_where] = ACTIONS(284),
    [sym_comment] = ACTIONS(22),
  },
  [71] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(98),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_RPAREN] = ACTIONS(288),
    [sym_comment] = ACTIONS(22),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_COMMA] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym_comment] = ACTIONS(22),
  },
  [73] = {
    [sym__statement] = STATE(12),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_synonym] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(294),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [74] = {
    [sym__identifier] = STATE(101),
    [sym_reserved_identifier] = STATE(79),
    [anon_sym_where] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(234),
    [sym_constructor_identifier] = ACTIONS(234),
    [sym_module_identifier] = ACTIONS(234),
    [anon_sym_case] = ACTIONS(232),
    [anon_sym_class] = ACTIONS(232),
    [anon_sym_data] = ACTIONS(232),
    [anon_sym_default] = ACTIONS(232),
    [anon_sym_deriving] = ACTIONS(232),
    [anon_sym_do] = ACTIONS(232),
    [anon_sym_else] = ACTIONS(232),
    [anon_sym_foreign] = ACTIONS(232),
    [anon_sym_if] = ACTIONS(232),
    [anon_sym_in] = ACTIONS(232),
    [anon_sym_infix] = ACTIONS(232),
    [anon_sym_infixl] = ACTIONS(232),
    [anon_sym_infixr] = ACTIONS(232),
    [anon_sym_instance] = ACTIONS(232),
    [anon_sym_let] = ACTIONS(232),
    [anon_sym_newtype] = ACTIONS(232),
    [anon_sym_of] = ACTIONS(232),
    [anon_sym_then] = ACTIONS(232),
    [anon_sym__] = ACTIONS(232),
    [sym_comment] = ACTIONS(22),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_where] = ACTIONS(298),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_type] = ACTIONS(298),
    [sym_variable_identifier] = ACTIONS(300),
    [sym_constructor_identifier] = ACTIONS(300),
    [sym_module_identifier] = ACTIONS(300),
    [anon_sym_case] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_data] = ACTIONS(298),
    [anon_sym_default] = ACTIONS(298),
    [anon_sym_deriving] = ACTIONS(298),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_else] = ACTIONS(298),
    [anon_sym_foreign] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(298),
    [anon_sym_in] = ACTIONS(298),
    [anon_sym_infix] = ACTIONS(298),
    [anon_sym_infixl] = ACTIONS(298),
    [anon_sym_infixr] = ACTIONS(298),
    [anon_sym_instance] = ACTIONS(298),
    [anon_sym_let] = ACTIONS(298),
    [anon_sym_newtype] = ACTIONS(298),
    [anon_sym_of] = ACTIONS(298),
    [anon_sym_then] = ACTIONS(298),
    [anon_sym__] = ACTIONS(298),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__integer_literal] = ACTIONS(298),
    [sym__octal_literal] = ACTIONS(298),
    [sym__hexidecimal_literal] = ACTIONS(298),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_where] = ACTIONS(304),
    [anon_sym_import] = ACTIONS(304),
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
    [anon_sym_newtype] = ACTIONS(304),
    [anon_sym_of] = ACTIONS(304),
    [anon_sym_then] = ACTIONS(304),
    [anon_sym__] = ACTIONS(304),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(306),
    [anon_sym_SQUOTE] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [sym__integer_literal] = ACTIONS(304),
    [sym__octal_literal] = ACTIONS(304),
    [sym__hexidecimal_literal] = ACTIONS(304),
  },
  [77] = {
    [aux_sym_import_specification_repeat1] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(312),
    [sym_comment] = ACTIONS(22),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_module] = ACTIONS(36),
    [anon_sym_where] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [anon_sym_hiding] = ACTIONS(36),
    [anon_sym_type] = ACTIONS(36),
    [sym_variable_identifier] = ACTIONS(38),
    [sym_constructor_identifier] = ACTIONS(38),
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
    [anon_sym__] = ACTIONS(36),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(38),
    [anon_sym_SQUOTE] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(34),
    [sym__integer_literal] = ACTIONS(36),
    [sym__octal_literal] = ACTIONS(36),
    [sym__hexidecimal_literal] = ACTIONS(36),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_module] = ACTIONS(52),
    [anon_sym_where] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_hiding] = ACTIONS(52),
    [anon_sym_type] = ACTIONS(52),
    [sym_variable_identifier] = ACTIONS(54),
    [sym_constructor_identifier] = ACTIONS(54),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(50),
    [sym__integer_literal] = ACTIONS(52),
    [sym__octal_literal] = ACTIONS(52),
    [sym__hexidecimal_literal] = ACTIONS(52),
  },
  [80] = {
    [sym_import_specification] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_module] = ACTIONS(298),
    [anon_sym_where] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(298),
    [sym_variable_identifier] = ACTIONS(300),
    [sym_constructor_identifier] = ACTIONS(300),
    [sym_module_identifier] = ACTIONS(300),
    [anon_sym_case] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_data] = ACTIONS(298),
    [anon_sym_default] = ACTIONS(298),
    [anon_sym_deriving] = ACTIONS(298),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_else] = ACTIONS(298),
    [anon_sym_foreign] = ACTIONS(298),
    [anon_sym_if] = ACTIONS(298),
    [anon_sym_in] = ACTIONS(298),
    [anon_sym_infix] = ACTIONS(298),
    [anon_sym_infixl] = ACTIONS(298),
    [anon_sym_infixr] = ACTIONS(298),
    [anon_sym_instance] = ACTIONS(298),
    [anon_sym_let] = ACTIONS(298),
    [anon_sym_newtype] = ACTIONS(298),
    [anon_sym_of] = ACTIONS(298),
    [anon_sym_then] = ACTIONS(298),
    [anon_sym__] = ACTIONS(298),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [sym__integer_literal] = ACTIONS(298),
    [sym__octal_literal] = ACTIONS(298),
    [sym__hexidecimal_literal] = ACTIONS(298),
  },
  [81] = {
    [sym__identifier] = STATE(107),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(312),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(140),
    [anon_sym_where] = ACTIONS(140),
    [anon_sym_import] = ACTIONS(140),
    [anon_sym_type] = ACTIONS(140),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(144),
    [sym_module_identifier] = ACTIONS(144),
    [anon_sym_case] = ACTIONS(140),
    [anon_sym_class] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(140),
    [anon_sym_default] = ACTIONS(140),
    [anon_sym_deriving] = ACTIONS(140),
    [anon_sym_do] = ACTIONS(140),
    [anon_sym_else] = ACTIONS(140),
    [anon_sym_foreign] = ACTIONS(140),
    [anon_sym_if] = ACTIONS(140),
    [anon_sym_in] = ACTIONS(140),
    [anon_sym_infix] = ACTIONS(140),
    [anon_sym_infixl] = ACTIONS(140),
    [anon_sym_infixr] = ACTIONS(140),
    [anon_sym_instance] = ACTIONS(140),
    [anon_sym_let] = ACTIONS(140),
    [anon_sym_newtype] = ACTIONS(140),
    [anon_sym_of] = ACTIONS(140),
    [anon_sym_then] = ACTIONS(140),
    [anon_sym__] = ACTIONS(140),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(142),
    [sym__integer_literal] = ACTIONS(140),
    [sym__octal_literal] = ACTIONS(140),
    [sym__hexidecimal_literal] = ACTIONS(140),
  },
  [83] = {
    [sym__identifier] = STATE(108),
    [sym_reserved_identifier] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(316),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(316),
    [anon_sym_type] = ACTIONS(316),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(318),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [sym__integer_literal] = ACTIONS(316),
    [sym__octal_literal] = ACTIONS(316),
    [sym__hexidecimal_literal] = ACTIONS(316),
  },
  [84] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(320),
  },
  [85] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(322),
  },
  [86] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(324),
  },
  [87] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(328),
  },
  [88] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(330),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(330),
  },
  [89] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(326),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(332),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_EQ] = ACTIONS(334),
    [anon_sym__] = ACTIONS(334),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [anon_sym_DQUOTE] = ACTIONS(334),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(334),
    [sym__ascii_large] = ACTIONS(334),
    [anon_sym_BANG] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(334),
    [anon_sym_DOLLAR] = ACTIONS(334),
    [anon_sym_PERCENT] = ACTIONS(334),
    [anon_sym_AMP] = ACTIONS(334),
    [anon_sym_1] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(334),
    [anon_sym_QMARK] = ACTIONS(334),
    [anon_sym_AT] = ACTIONS(334),
    [anon_sym_CARET] = ACTIONS(334),
    [anon_sym_PIPE] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [anon_sym_TILDE] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(334),
    [anon_sym_BQUOTE] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
    [sym__space] = ACTIONS(334),
    [sym__newline] = ACTIONS(334),
    [sym__tab] = ACTIONS(334),
    [sym__vertical_tab] = ACTIONS(334),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym__] = ACTIONS(336),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_DQUOTE] = ACTIONS(336),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(336),
    [sym__ascii_large] = ACTIONS(336),
    [anon_sym_BANG] = ACTIONS(336),
    [anon_sym_POUND] = ACTIONS(336),
    [anon_sym_DOLLAR] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_AMP] = ACTIONS(336),
    [anon_sym_1] = ACTIONS(336),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [anon_sym_QMARK] = ACTIONS(336),
    [anon_sym_AT] = ACTIONS(336),
    [anon_sym_CARET] = ACTIONS(336),
    [anon_sym_PIPE] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_TILDE] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_BSLASH] = ACTIONS(336),
    [anon_sym_SEMI] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(336),
    [anon_sym_BQUOTE] = ACTIONS(336),
    [anon_sym_LBRACE] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [sym__space] = ACTIONS(336),
    [sym__newline] = ACTIONS(336),
    [sym__tab] = ACTIONS(336),
    [sym__vertical_tab] = ACTIONS(336),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_EQ] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(338),
    [sym__ascii_large] = ACTIONS(338),
    [anon_sym_BANG] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_DOLLAR] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_AMP] = ACTIONS(338),
    [anon_sym_1] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(338),
    [anon_sym_QMARK] = ACTIONS(338),
    [anon_sym_AT] = ACTIONS(338),
    [anon_sym_CARET] = ACTIONS(338),
    [anon_sym_PIPE] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [anon_sym_TILDE] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(338),
    [anon_sym_SEMI] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [anon_sym_RBRACK] = ACTIONS(338),
    [anon_sym_BQUOTE] = ACTIONS(338),
    [anon_sym_LBRACE] = ACTIONS(338),
    [anon_sym_RBRACE] = ACTIONS(338),
    [sym__space] = ACTIONS(338),
    [sym__newline] = ACTIONS(338),
    [sym__tab] = ACTIONS(338),
    [sym__vertical_tab] = ACTIONS(338),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(338),
  },
  [93] = {
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(340),
    [sym__ascii_large] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_POUND] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_1] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_BQUOTE] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(342),
  },
  [94] = {
    [anon_sym_LPAREN] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym__] = ACTIONS(344),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(344),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(344),
    [sym__ascii_large] = ACTIONS(344),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_POUND] = ACTIONS(344),
    [anon_sym_DOLLAR] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(344),
    [anon_sym_AMP] = ACTIONS(344),
    [anon_sym_1] = ACTIONS(344),
    [anon_sym_PLUS] = ACTIONS(344),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_SLASH] = ACTIONS(344),
    [anon_sym_LT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(344),
    [anon_sym_QMARK] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_CARET] = ACTIONS(344),
    [anon_sym_PIPE] = ACTIONS(344),
    [anon_sym_DASH] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_LBRACK] = ACTIONS(344),
    [anon_sym_RBRACK] = ACTIONS(344),
    [anon_sym_BQUOTE] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(344),
    [sym__space] = ACTIONS(344),
    [sym__newline] = ACTIONS(344),
    [sym__tab] = ACTIONS(344),
    [sym__vertical_tab] = ACTIONS(344),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(344),
  },
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(340),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(340),
    [anon_sym__] = ACTIONS(340),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [anon_sym_DQUOTE] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(340),
    [sym__ascii_large] = ACTIONS(340),
    [anon_sym_BANG] = ACTIONS(340),
    [anon_sym_POUND] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_1] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_QMARK] = ACTIONS(340),
    [anon_sym_AT] = ACTIONS(340),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_TILDE] = ACTIONS(340),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_BSLASH] = ACTIONS(340),
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(340),
    [anon_sym_RBRACK] = ACTIONS(340),
    [anon_sym_BQUOTE] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [sym__space] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
    [sym__tab] = ACTIONS(340),
    [sym__vertical_tab] = ACTIONS(340),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(346),
  },
  [96] = {
    [sym_export_declaration] = STATE(113),
    [sym__identifier] = STATE(72),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [97] = {
    [anon_sym_where] = ACTIONS(348),
    [sym_comment] = ACTIONS(22),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(350),
    [anon_sym_RPAREN] = ACTIONS(352),
    [sym_comment] = ACTIONS(22),
  },
  [99] = {
    [sym__identifier] = STATE(117),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(354),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [100] = {
    [sym__statement] = STATE(43),
    [sym_module] = STATE(13),
    [sym_import_declaration] = STATE(13),
    [sym__top_level_declaration] = STATE(13),
    [sym_type_synonym] = STATE(14),
    [sym__literal] = STATE(13),
    [sym__identifier] = STATE(13),
    [sym_reserved_identifier] = STATE(6),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_string] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_type] = ACTIONS(18),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(24),
    [anon_sym_SQUOTE] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(28),
    [sym__integer_literal] = ACTIONS(30),
    [sym__octal_literal] = ACTIONS(30),
    [sym__hexidecimal_literal] = ACTIONS(30),
  },
  [101] = {
    [sym_import_specification] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(360),
    [anon_sym_where] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(360),
    [anon_sym_hiding] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(360),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(362),
    [sym_module_identifier] = ACTIONS(362),
    [anon_sym_case] = ACTIONS(360),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_data] = ACTIONS(360),
    [anon_sym_default] = ACTIONS(360),
    [anon_sym_deriving] = ACTIONS(360),
    [anon_sym_do] = ACTIONS(360),
    [anon_sym_else] = ACTIONS(360),
    [anon_sym_foreign] = ACTIONS(360),
    [anon_sym_if] = ACTIONS(360),
    [anon_sym_in] = ACTIONS(360),
    [anon_sym_infix] = ACTIONS(360),
    [anon_sym_infixl] = ACTIONS(360),
    [anon_sym_infixr] = ACTIONS(360),
    [anon_sym_instance] = ACTIONS(360),
    [anon_sym_let] = ACTIONS(360),
    [anon_sym_newtype] = ACTIONS(360),
    [anon_sym_of] = ACTIONS(360),
    [anon_sym_then] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(360),
    [sym__octal_literal] = ACTIONS(360),
    [sym__hexidecimal_literal] = ACTIONS(360),
  },
  [102] = {
    [sym__identifier] = STATE(120),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [103] = {
    [sym__identifier] = STATE(121),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
    [anon_sym_import] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(370),
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
    [anon_sym__] = ACTIONS(368),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(366),
    [anon_sym_DQUOTE] = ACTIONS(366),
    [sym__integer_literal] = ACTIONS(368),
    [sym__octal_literal] = ACTIONS(368),
    [sym__hexidecimal_literal] = ACTIONS(368),
  },
  [105] = {
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(374),
    [sym_comment] = ACTIONS(22),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(360),
    [anon_sym_where] = ACTIONS(360),
    [anon_sym_import] = ACTIONS(360),
    [anon_sym_type] = ACTIONS(360),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(362),
    [sym_module_identifier] = ACTIONS(362),
    [anon_sym_case] = ACTIONS(360),
    [anon_sym_class] = ACTIONS(360),
    [anon_sym_data] = ACTIONS(360),
    [anon_sym_default] = ACTIONS(360),
    [anon_sym_deriving] = ACTIONS(360),
    [anon_sym_do] = ACTIONS(360),
    [anon_sym_else] = ACTIONS(360),
    [anon_sym_foreign] = ACTIONS(360),
    [anon_sym_if] = ACTIONS(360),
    [anon_sym_in] = ACTIONS(360),
    [anon_sym_infix] = ACTIONS(360),
    [anon_sym_infixl] = ACTIONS(360),
    [anon_sym_infixr] = ACTIONS(360),
    [anon_sym_instance] = ACTIONS(360),
    [anon_sym_let] = ACTIONS(360),
    [anon_sym_newtype] = ACTIONS(360),
    [anon_sym_of] = ACTIONS(360),
    [anon_sym_then] = ACTIONS(360),
    [anon_sym__] = ACTIONS(360),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(360),
    [sym__octal_literal] = ACTIONS(360),
    [sym__hexidecimal_literal] = ACTIONS(360),
  },
  [107] = {
    [aux_sym_import_specification_repeat1] = STATE(125),
    [anon_sym_LPAREN] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(374),
    [sym_comment] = ACTIONS(22),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_module] = ACTIONS(238),
    [anon_sym_where] = ACTIONS(238),
    [anon_sym_import] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(242),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_module_identifier] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
    [anon_sym_data] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_deriving] = ACTIONS(238),
    [anon_sym_do] = ACTIONS(238),
    [anon_sym_else] = ACTIONS(238),
    [anon_sym_foreign] = ACTIONS(238),
    [anon_sym_if] = ACTIONS(238),
    [anon_sym_in] = ACTIONS(238),
    [anon_sym_infix] = ACTIONS(238),
    [anon_sym_infixl] = ACTIONS(238),
    [anon_sym_infixr] = ACTIONS(238),
    [anon_sym_instance] = ACTIONS(238),
    [anon_sym_let] = ACTIONS(238),
    [anon_sym_newtype] = ACTIONS(238),
    [anon_sym_of] = ACTIONS(238),
    [anon_sym_then] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(240),
    [anon_sym_DQUOTE] = ACTIONS(240),
    [sym__integer_literal] = ACTIONS(238),
    [sym__octal_literal] = ACTIONS(238),
    [sym__hexidecimal_literal] = ACTIONS(238),
  },
  [109] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(378),
  },
  [110] = {
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(380),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_EQ] = ACTIONS(382),
    [anon_sym__] = ACTIONS(382),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(382),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(382),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(382),
    [sym__ascii_large] = ACTIONS(382),
    [anon_sym_BANG] = ACTIONS(382),
    [anon_sym_POUND] = ACTIONS(382),
    [anon_sym_DOLLAR] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(382),
    [anon_sym_AMP] = ACTIONS(382),
    [anon_sym_1] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_SLASH] = ACTIONS(382),
    [anon_sym_LT] = ACTIONS(382),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_AT] = ACTIONS(382),
    [anon_sym_CARET] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_DASH] = ACTIONS(382),
    [anon_sym_TILDE] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_BSLASH] = ACTIONS(382),
    [anon_sym_SEMI] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(382),
    [anon_sym_LBRACE] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(382),
    [sym__space] = ACTIONS(382),
    [sym__newline] = ACTIONS(382),
    [sym__tab] = ACTIONS(382),
    [sym__vertical_tab] = ACTIONS(382),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(382),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym__] = ACTIONS(384),
    [sym_comment] = ACTIONS(22),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(384),
    [sym__ascii_large] = ACTIONS(384),
    [anon_sym_BANG] = ACTIONS(384),
    [anon_sym_POUND] = ACTIONS(384),
    [anon_sym_DOLLAR] = ACTIONS(384),
    [anon_sym_PERCENT] = ACTIONS(384),
    [anon_sym_AMP] = ACTIONS(384),
    [anon_sym_1] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DOT] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [anon_sym_LBRACK] = ACTIONS(384),
    [anon_sym_RBRACK] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [anon_sym_LBRACE] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(384),
    [sym__space] = ACTIONS(384),
    [sym__newline] = ACTIONS(384),
    [sym__tab] = ACTIONS(384),
    [sym__vertical_tab] = ACTIONS(384),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(384),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(22),
  },
  [114] = {
    [sym_export_declaration] = STATE(126),
    [sym__identifier] = STATE(72),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [115] = {
    [anon_sym_where] = ACTIONS(388),
    [sym_comment] = ACTIONS(22),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(22),
  },
  [117] = {
    [aux_sym_export_declaration_repeat1] = STATE(129),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym_comment] = ACTIONS(22),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
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
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_of] = ACTIONS(396),
    [anon_sym_then] = ACTIONS(396),
    [anon_sym__] = ACTIONS(396),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [sym__integer_literal] = ACTIONS(396),
    [sym__octal_literal] = ACTIONS(396),
    [sym__hexidecimal_literal] = ACTIONS(396),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(22),
  },
  [120] = {
    [aux_sym_export_declaration_repeat1] = STATE(131),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(22),
  },
  [121] = {
    [anon_sym_LPAREN] = ACTIONS(402),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(22),
  },
  [122] = {
    [sym__identifier] = STATE(133),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_where] = ACTIONS(408),
    [anon_sym_import] = ACTIONS(408),
    [anon_sym_type] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(410),
    [sym_constructor_identifier] = ACTIONS(410),
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
    [anon_sym__] = ACTIONS(408),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(410),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [sym__integer_literal] = ACTIONS(408),
    [sym__octal_literal] = ACTIONS(408),
    [sym__hexidecimal_literal] = ACTIONS(408),
  },
  [124] = {
    [sym__identifier] = STATE(135),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(412),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(22),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
    [sym_comment] = ACTIONS(22),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(22),
  },
  [128] = {
    [sym__identifier] = STATE(137),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(22),
  },
  [130] = {
    [aux_sym_import_specification_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(22),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym_comment] = ACTIONS(22),
  },
  [132] = {
    [sym__identifier] = STATE(144),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(428),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [133] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_comment] = ACTIONS(22),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym_comment] = ACTIONS(22),
  },
  [135] = {
    [aux_sym_export_declaration_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(426),
    [sym_comment] = ACTIONS(22),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [anon_sym_module] = ACTIONS(436),
    [anon_sym_where] = ACTIONS(436),
    [anon_sym_import] = ACTIONS(436),
    [anon_sym_type] = ACTIONS(436),
    [sym_variable_identifier] = ACTIONS(438),
    [sym_constructor_identifier] = ACTIONS(438),
    [sym_module_identifier] = ACTIONS(438),
    [anon_sym_case] = ACTIONS(436),
    [anon_sym_class] = ACTIONS(436),
    [anon_sym_data] = ACTIONS(436),
    [anon_sym_default] = ACTIONS(436),
    [anon_sym_deriving] = ACTIONS(436),
    [anon_sym_do] = ACTIONS(436),
    [anon_sym_else] = ACTIONS(436),
    [anon_sym_foreign] = ACTIONS(436),
    [anon_sym_if] = ACTIONS(436),
    [anon_sym_in] = ACTIONS(436),
    [anon_sym_infix] = ACTIONS(436),
    [anon_sym_infixl] = ACTIONS(436),
    [anon_sym_infixr] = ACTIONS(436),
    [anon_sym_instance] = ACTIONS(436),
    [anon_sym_let] = ACTIONS(436),
    [anon_sym_newtype] = ACTIONS(436),
    [anon_sym_of] = ACTIONS(436),
    [anon_sym_then] = ACTIONS(436),
    [anon_sym__] = ACTIONS(436),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(438),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [sym__integer_literal] = ACTIONS(436),
    [sym__octal_literal] = ACTIONS(436),
    [sym__hexidecimal_literal] = ACTIONS(436),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(22),
  },
  [138] = {
    [sym__identifier] = STATE(147),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(22),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(446),
    [anon_sym_where] = ACTIONS(446),
    [anon_sym_import] = ACTIONS(446),
    [anon_sym_type] = ACTIONS(446),
    [sym_variable_identifier] = ACTIONS(448),
    [sym_constructor_identifier] = ACTIONS(448),
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
    [anon_sym__] = ACTIONS(446),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(448),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [sym__integer_literal] = ACTIONS(446),
    [sym__octal_literal] = ACTIONS(446),
    [sym__hexidecimal_literal] = ACTIONS(446),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(22),
  },
  [142] = {
    [aux_sym_import_specification_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(22),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [sym_comment] = ACTIONS(22),
  },
  [144] = {
    [aux_sym_export_declaration_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(452),
    [sym_comment] = ACTIONS(22),
  },
  [145] = {
    [sym__identifier] = STATE(153),
    [sym_reserved_identifier] = STATE(6),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(454),
    [sym_variable_identifier] = ACTIONS(20),
    [sym_constructor_identifier] = ACTIONS(20),
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
    [sym_comment] = ACTIONS(22),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(456),
    [sym_comment] = ACTIONS(22),
  },
  [147] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(22),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_where] = ACTIONS(462),
    [anon_sym_import] = ACTIONS(462),
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
    [anon_sym_newtype] = ACTIONS(462),
    [anon_sym_of] = ACTIONS(462),
    [anon_sym_then] = ACTIONS(462),
    [anon_sym__] = ACTIONS(462),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [sym__integer_literal] = ACTIONS(462),
    [sym__octal_literal] = ACTIONS(462),
    [sym__hexidecimal_literal] = ACTIONS(462),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(22),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(22),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(22),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(22),
  },
  [153] = {
    [aux_sym_export_declaration_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym_comment] = ACTIONS(22),
  },
  [154] = {
    [aux_sym_import_specification_repeat1] = STATE(158),
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym_comment] = ACTIONS(22),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_module] = ACTIONS(474),
    [anon_sym_where] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [anon_sym_case] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_default] = ACTIONS(474),
    [anon_sym_deriving] = ACTIONS(474),
    [anon_sym_do] = ACTIONS(474),
    [anon_sym_else] = ACTIONS(474),
    [anon_sym_foreign] = ACTIONS(474),
    [anon_sym_if] = ACTIONS(474),
    [anon_sym_in] = ACTIONS(474),
    [anon_sym_infix] = ACTIONS(474),
    [anon_sym_infixl] = ACTIONS(474),
    [anon_sym_infixr] = ACTIONS(474),
    [anon_sym_instance] = ACTIONS(474),
    [anon_sym_let] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_of] = ACTIONS(474),
    [anon_sym_then] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(472),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [sym__integer_literal] = ACTIONS(474),
    [sym__octal_literal] = ACTIONS(474),
    [sym__hexidecimal_literal] = ACTIONS(474),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym_comment] = ACTIONS(22),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(480),
    [sym_comment] = ACTIONS(22),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(22),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_comment] = ACTIONS(22),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_module] = ACTIONS(488),
    [anon_sym_where] = ACTIONS(488),
    [anon_sym_import] = ACTIONS(488),
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
    [anon_sym_newtype] = ACTIONS(488),
    [anon_sym_of] = ACTIONS(488),
    [anon_sym_then] = ACTIONS(488),
    [anon_sym__] = ACTIONS(488),
    [sym_comment] = ACTIONS(22),
    [sym_float] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [anon_sym_DQUOTE] = ACTIONS(486),
    [sym__integer_literal] = ACTIONS(488),
    [sym__octal_literal] = ACTIONS(488),
    [sym__hexidecimal_literal] = ACTIONS(488),
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
  [22] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [38] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
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
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [234] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [254] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 1),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(116),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [382] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(130),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [410] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 4),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_export_declaration, 5),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [448] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
