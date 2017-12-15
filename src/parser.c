#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 201
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 3
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
  anon_sym_data = 11,
  anon_sym_EQ = 12,
  anon_sym_PIPE = 13,
  anon_sym_newtype = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_BANG = 18,
  anon_sym_type = 19,
  sym_variable_identifier = 20,
  sym_constructor_identifier = 21,
  sym_module_identifier = 22,
  anon_sym_case = 23,
  anon_sym_class = 24,
  anon_sym_default = 25,
  anon_sym_deriving = 26,
  anon_sym_do = 27,
  anon_sym_else = 28,
  anon_sym_foreign = 29,
  anon_sym_if = 30,
  anon_sym_in = 31,
  anon_sym_infix = 32,
  anon_sym_infixl = 33,
  anon_sym_infixr = 34,
  anon_sym_instance = 35,
  anon_sym_let = 36,
  anon_sym_of = 37,
  anon_sym_then = 38,
  anon_sym__ = 39,
  sym_comment = 40,
  sym_float = 41,
  anon_sym_SQUOTE = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 44,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 45,
  sym__ascii_large = 46,
  anon_sym_POUND = 47,
  anon_sym_DOLLAR = 48,
  anon_sym_PERCENT = 49,
  anon_sym_AMP = 50,
  anon_sym_1 = 51,
  anon_sym_PLUS = 52,
  anon_sym_DOT = 53,
  anon_sym_SLASH = 54,
  anon_sym_LT = 55,
  anon_sym_GT = 56,
  anon_sym_QMARK = 57,
  anon_sym_AT = 58,
  anon_sym_CARET = 59,
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
  sym_module_exports = 125,
  sym_export = 126,
  sym_import_declaration = 127,
  sym_import_specification = 128,
  sym__top_level_declaration = 129,
  sym_algebraic_datatype = 130,
  sym_constructors = 131,
  sym_constructor = 132,
  sym_newtype = 133,
  sym_new_constructor = 134,
  sym_fields = 135,
  sym_field = 136,
  sym_strict = 137,
  sym_type_synonym = 138,
  sym__literal = 139,
  sym__identifier = 140,
  sym_simple_type = 141,
  sym_reserved_identifier = 142,
  sym_integer = 143,
  sym_char = 144,
  sym_string = 145,
  sym__gap = 146,
  sym__graphic = 147,
  sym__small = 148,
  sym__large = 149,
  sym__symbol = 150,
  sym__special = 151,
  sym__escape = 152,
  sym__char_escape = 153,
  sym__ascii = 154,
  sym__cntrl = 155,
  aux_sym_program_repeat1 = 156,
  aux_sym_module_exports_repeat1 = 157,
  aux_sym_export_repeat1 = 158,
  aux_sym_import_specification_repeat1 = 159,
  aux_sym_constructors_repeat1 = 160,
  aux_sym_fields_repeat1 = 161,
  aux_sym_field_repeat1 = 162,
  aux_sym_type_synonym_repeat1 = 163,
  aux_sym_string_repeat1 = 164,
  aux_sym__escape_repeat1 = 165,
  aux_sym__escape_repeat2 = 166,
  alias_sym_module_body = 167,
  alias_sym_type_constructor = 168,
  alias_sym_type_variable = 169,
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
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_newtype] = "newtype",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_BANG] = "!",
  [anon_sym_type] = "type",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym_module_identifier] = "module_identifier",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
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
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
  [sym_import_declaration] = "import_declaration",
  [sym_import_specification] = "import_specification",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_constructors] = "constructors",
  [sym_constructor] = "constructor",
  [sym_newtype] = "newtype",
  [sym_new_constructor] = "new_constructor",
  [sym_fields] = "fields",
  [sym_field] = "field",
  [sym_strict] = "strict",
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
  [aux_sym_module_exports_repeat1] = "module_exports_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_type_synonym_repeat1] = "type_synonym_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [alias_sym_module_body] = "module_body",
  [alias_sym_type_constructor] = "type_constructor",
  [alias_sym_type_variable] = "type_variable",
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
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
  [sym_module_exports] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
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
  [sym_algebraic_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_constructors] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
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
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_strict] = {
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
  [aux_sym_module_exports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
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
  [alias_sym_type_constructor] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_variable] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[5][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_type_constructor,
  },
  [2] = {
    [0] = alias_sym_type_constructor,
    [1] = alias_sym_type_variable,
  },
  [3] = {
    [3] = alias_sym_module_body,
  },
  [4] = {
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
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(90);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
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
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(66);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__vertical_tab);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 7:
      if (lookahead == '\n')
        ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(51);
      if (lookahead == 'O')
        ADVANCE(52);
      if (lookahead == 'P')
        ADVANCE(54);
      if (lookahead == 'T')
        ADVANCE(55);
      if (lookahead == 'U')
        ADVANCE(57);
      if (lookahead == 'Y')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      if (lookahead == '+')
        ADVANCE(83);
      if (lookahead == '-')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(90);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(121);
      if (lookahead == 'U')
        ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'K')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 123:
      if (lookahead == 'L')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(128);
      if (lookahead == 'O')
        ADVANCE(129);
      if (lookahead == 'P')
        ADVANCE(131);
      if (lookahead == 'T')
        ADVANCE(132);
      if (lookahead == 'U')
        ADVANCE(134);
      if (lookahead == 'Y')
        ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 132:
      if (lookahead == 'X')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 134:
      if (lookahead == 'B')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 136:
      if (lookahead == 'N')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '+')
        ADVANCE(160);
      if (lookahead == '-')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 165:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(277);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(166);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(180);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 167:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'O')
        ADVANCE(169);
      if (lookahead == 'X')
        ADVANCE(171);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead == 'x')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 169:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead == '}')
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(177);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(179);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(166);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead == 'l')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'r')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(220);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(230);
      if (lookahead == 'r')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(257);
      if (lookahead == 'y')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(269);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 270:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(277);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 271:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'O')
        ADVANCE(273);
      if (lookahead == 'X')
        ADVANCE(275);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'x')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(274);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 277:
      if (lookahead == 'n')
        SKIP(165);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead == 'l')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(289);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(293);
      if (lookahead == 'r')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'v')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(317);
      if (lookahead == 'm')
        ADVANCE(318);
      if (lookahead == 'n')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'x')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'r')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'c')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'w')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'y')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'h')
        ADVANCE(354);
      if (lookahead == 'y')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'h')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(366);
      if (lookahead == '.')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == 'w')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(269);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == 'w')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(366);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        SKIP(367);
      END_STATE();
    case 377:
      if (lookahead == 'h')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'e')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'r')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 382:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(394);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(395);
      if (lookahead == 'q')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 383:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(383);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(384);
      if (lookahead == 'q')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(394);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(395);
      if (lookahead == 'q')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 395:
      if (lookahead == 'n')
        SKIP(382);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 405:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(409);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '.')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 406:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(406);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(408);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(406);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 407:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 408:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 409:
      if (lookahead == '\n')
        ADVANCE(406);
      if (lookahead == '\r')
        ADVANCE(409);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '.')
        ADVANCE(410);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(411);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(405);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 410:
      if (lookahead == '.')
        ADVANCE(104);
      END_STATE();
    case 411:
      if (lookahead == 'n')
        SKIP(405);
      END_STATE();
    case 412:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(413);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(416);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(412);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 413:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(413);
      if (lookahead == '\r')
        ADVANCE(413);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(414);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(413);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 414:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(413);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 415:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(413);
      if (lookahead == '\r')
        ADVANCE(415);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(416);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(412);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 416:
      if (lookahead == 'n')
        SKIP(412);
      END_STATE();
    case 417:
      if (lookahead == '\t')
        SKIP(417);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 418:
      if (lookahead == '\t')
        ADVANCE(418);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == ' ')
        ADVANCE(419);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(418);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(418);
      if (lookahead == ' ')
        ADVANCE(419);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(422);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 424:
      if (lookahead == '\t')
        SKIP(417);
      if (lookahead == '\n')
        ADVANCE(418);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 430:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(437);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(434);
      if (lookahead == ' ')
        ADVANCE(435);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(436);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(434);
      if (lookahead == ' ')
        ADVANCE(435);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(436);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 434:
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(434);
      if (lookahead == ' ')
        ADVANCE(435);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(436);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(433);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(434);
      if (lookahead == ' ')
        ADVANCE(435);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(436);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(434);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 437:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(432);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(437);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 438:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(439);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(450);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'a')
        ADVANCE(451);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(453);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(438);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 439:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(439);
      if (lookahead == '\r')
        ADVANCE(439);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(440);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'a')
        ADVANCE(441);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'h')
        ADVANCE(443);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(439);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 440:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(439);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(439);
      if (lookahead == '\r')
        ADVANCE(449);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(450);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'a')
        ADVANCE(451);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(453);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(438);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 450:
      if (lookahead == 'n')
        SKIP(438);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 459:
      if (lookahead == '\n')
        ADVANCE(460);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == 'A')
        ADVANCE(513);
      if (lookahead == 'B')
        ADVANCE(516);
      if (lookahead == 'C')
        ADVANCE(520);
      if (lookahead == 'D')
        ADVANCE(524);
      if (lookahead == 'E')
        ADVANCE(534);
      if (lookahead == 'F')
        ADVANCE(545);
      if (lookahead == 'G')
        ADVANCE(548);
      if (lookahead == 'H')
        ADVANCE(549);
      if (lookahead == 'L')
        ADVANCE(550);
      if (lookahead == 'N')
        ADVANCE(551);
      if (lookahead == 'O')
        ADVANCE(552);
      if (lookahead == 'R')
        ADVANCE(553);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == 'U')
        ADVANCE(555);
      if (lookahead == 'V')
        ADVANCE(556);
      if (lookahead == 'X')
        ADVANCE(557);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'b')
        ADVANCE(559);
      if (lookahead == 'f')
        ADVANCE(560);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(459);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      END_STATE();
    case 460:
      if (lookahead == '\n')
        ADVANCE(460);
      if (lookahead == '\r')
        ADVANCE(460);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == 'A')
        ADVANCE(461);
      if (lookahead == 'B')
        ADVANCE(464);
      if (lookahead == 'C')
        ADVANCE(468);
      if (lookahead == 'D')
        ADVANCE(472);
      if (lookahead == 'E')
        ADVANCE(482);
      if (lookahead == 'F')
        ADVANCE(493);
      if (lookahead == 'G')
        ADVANCE(496);
      if (lookahead == 'H')
        ADVANCE(497);
      if (lookahead == 'L')
        ADVANCE(498);
      if (lookahead == 'N')
        ADVANCE(499);
      if (lookahead == 'O')
        ADVANCE(500);
      if (lookahead == 'R')
        ADVANCE(501);
      if (lookahead == 'S')
        ADVANCE(502);
      if (lookahead == 'U')
        ADVANCE(503);
      if (lookahead == 'V')
        ADVANCE(504);
      if (lookahead == 'X')
        ADVANCE(505);
      if (lookahead == '\\')
        ADVANCE(506);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'b')
        ADVANCE(508);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(510);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(463);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 464:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(465);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(466);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(469);
      if (lookahead == 'R')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(470);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(473);
      if (lookahead == 'E')
        ADVANCE(478);
      if (lookahead == 'L')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(474);
      if (lookahead == '2')
        ADVANCE(475);
      if (lookahead == '3')
        ADVANCE(476);
      if (lookahead == '4')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(479);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(483);
      if (lookahead == 'N')
        ADVANCE(484);
      if (lookahead == 'O')
        ADVANCE(486);
      if (lookahead == 'S')
        ADVANCE(488);
      if (lookahead == 'T')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(491);
      if (lookahead == 'X')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(494);
      if (lookahead == 'S')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(51);
      if (lookahead == 'O')
        ADVANCE(52);
      if (lookahead == 'P')
        ADVANCE(54);
      if (lookahead == 'T')
        ADVANCE(55);
      if (lookahead == 'U')
        ADVANCE(57);
      if (lookahead == 'Y')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(460);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      if (lookahead == '\n')
        ADVANCE(460);
      if (lookahead == '\r')
        ADVANCE(512);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == 'A')
        ADVANCE(513);
      if (lookahead == 'B')
        ADVANCE(516);
      if (lookahead == 'C')
        ADVANCE(520);
      if (lookahead == 'D')
        ADVANCE(524);
      if (lookahead == 'E')
        ADVANCE(534);
      if (lookahead == 'F')
        ADVANCE(545);
      if (lookahead == 'G')
        ADVANCE(548);
      if (lookahead == 'H')
        ADVANCE(549);
      if (lookahead == 'L')
        ADVANCE(550);
      if (lookahead == 'N')
        ADVANCE(551);
      if (lookahead == 'O')
        ADVANCE(552);
      if (lookahead == 'R')
        ADVANCE(553);
      if (lookahead == 'S')
        ADVANCE(554);
      if (lookahead == 'U')
        ADVANCE(555);
      if (lookahead == 'V')
        ADVANCE(556);
      if (lookahead == 'X')
        ADVANCE(557);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'b')
        ADVANCE(559);
      if (lookahead == 'f')
        ADVANCE(560);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(562);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(459);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      END_STATE();
    case 513:
      if (lookahead == 'C')
        ADVANCE(514);
      END_STATE();
    case 514:
      if (lookahead == 'K')
        ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 516:
      if (lookahead == 'E')
        ADVANCE(517);
      if (lookahead == 'S')
        ADVANCE(519);
      END_STATE();
    case 517:
      if (lookahead == 'L')
        ADVANCE(518);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 520:
      if (lookahead == 'A')
        ADVANCE(521);
      if (lookahead == 'R')
        ADVANCE(523);
      END_STATE();
    case 521:
      if (lookahead == 'N')
        ADVANCE(522);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 524:
      if (lookahead == 'C')
        ADVANCE(525);
      if (lookahead == 'E')
        ADVANCE(530);
      if (lookahead == 'L')
        ADVANCE(532);
      END_STATE();
    case 525:
      if (lookahead == '1')
        ADVANCE(526);
      if (lookahead == '2')
        ADVANCE(527);
      if (lookahead == '3')
        ADVANCE(528);
      if (lookahead == '4')
        ADVANCE(529);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 530:
      if (lookahead == 'L')
        ADVANCE(531);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 532:
      if (lookahead == 'E')
        ADVANCE(533);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 534:
      if (lookahead == 'M')
        ADVANCE(535);
      if (lookahead == 'N')
        ADVANCE(536);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'S')
        ADVANCE(540);
      if (lookahead == 'T')
        ADVANCE(542);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 536:
      if (lookahead == 'Q')
        ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 538:
      if (lookahead == 'T')
        ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 540:
      if (lookahead == 'C')
        ADVANCE(541);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 542:
      if (lookahead == 'B')
        ADVANCE(543);
      if (lookahead == 'X')
        ADVANCE(544);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 545:
      if (lookahead == 'F')
        ADVANCE(546);
      if (lookahead == 'S')
        ADVANCE(547);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 548:
      if (lookahead == 'S')
        ADVANCE(115);
      END_STATE();
    case 549:
      if (lookahead == 'T')
        ADVANCE(117);
      END_STATE();
    case 550:
      if (lookahead == 'F')
        ADVANCE(119);
      END_STATE();
    case 551:
      if (lookahead == 'A')
        ADVANCE(121);
      if (lookahead == 'U')
        ADVANCE(123);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 553:
      if (lookahead == 'S')
        ADVANCE(126);
      END_STATE();
    case 554:
      if (lookahead == 'I')
        ADVANCE(128);
      if (lookahead == 'O')
        ADVANCE(129);
      if (lookahead == 'P')
        ADVANCE(131);
      if (lookahead == 'T')
        ADVANCE(132);
      if (lookahead == 'U')
        ADVANCE(134);
      if (lookahead == 'Y')
        ADVANCE(136);
      END_STATE();
    case 555:
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 556:
      if (lookahead == 'T')
        ADVANCE(141);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 563:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'A')
        ADVANCE(576);
      if (lookahead == 'B')
        ADVANCE(577);
      if (lookahead == 'C')
        ADVANCE(578);
      if (lookahead == 'D')
        ADVANCE(579);
      if (lookahead == 'E')
        ADVANCE(580);
      if (lookahead == 'F')
        ADVANCE(581);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(552);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(557);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'b')
        ADVANCE(559);
      if (lookahead == 'f')
        ADVANCE(560);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(562);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(565);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == ' ')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(568);
      if (lookahead == 'B')
        ADVANCE(569);
      if (lookahead == 'C')
        ADVANCE(570);
      if (lookahead == 'D')
        ADVANCE(571);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(573);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(500);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(505);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'b')
        ADVANCE(508);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(510);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(511);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(565);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == ' ')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(568);
      if (lookahead == 'B')
        ADVANCE(569);
      if (lookahead == 'C')
        ADVANCE(570);
      if (lookahead == 'D')
        ADVANCE(571);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(573);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(500);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(505);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'b')
        ADVANCE(508);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(510);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(511);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '\t')
        ADVANCE(565);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == ' ')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(568);
      if (lookahead == 'B')
        ADVANCE(569);
      if (lookahead == 'C')
        ADVANCE(570);
      if (lookahead == 'D')
        ADVANCE(571);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(573);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(500);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(505);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'b')
        ADVANCE(508);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(510);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(511);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(565);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(566);
      if (lookahead == ' ')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(568);
      if (lookahead == 'B')
        ADVANCE(569);
      if (lookahead == 'C')
        ADVANCE(570);
      if (lookahead == 'D')
        ADVANCE(571);
      if (lookahead == 'E')
        ADVANCE(572);
      if (lookahead == 'F')
        ADVANCE(573);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(500);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(505);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(574);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(507);
      if (lookahead == 'b')
        ADVANCE(508);
      if (lookahead == 'f')
        ADVANCE(509);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(510);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(511);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(423);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(465);
      if (lookahead == 'S')
        ADVANCE(467);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(469);
      if (lookahead == 'R')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(473);
      if (lookahead == 'E')
        ADVANCE(478);
      if (lookahead == 'L')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(483);
      if (lookahead == 'N')
        ADVANCE(484);
      if (lookahead == 'O')
        ADVANCE(486);
      if (lookahead == 'S')
        ADVANCE(488);
      if (lookahead == 'T')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(494);
      if (lookahead == 'S')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(566);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(575);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'A')
        ADVANCE(576);
      if (lookahead == 'B')
        ADVANCE(577);
      if (lookahead == 'C')
        ADVANCE(578);
      if (lookahead == 'D')
        ADVANCE(579);
      if (lookahead == 'E')
        ADVANCE(580);
      if (lookahead == 'F')
        ADVANCE(581);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(552);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(557);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'b')
        ADVANCE(559);
      if (lookahead == 'f')
        ADVANCE(560);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(561);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(562);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(514);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(517);
      if (lookahead == 'S')
        ADVANCE(519);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(521);
      if (lookahead == 'R')
        ADVANCE(523);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(525);
      if (lookahead == 'E')
        ADVANCE(530);
      if (lookahead == 'L')
        ADVANCE(532);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(535);
      if (lookahead == 'N')
        ADVANCE(536);
      if (lookahead == 'O')
        ADVANCE(538);
      if (lookahead == 'S')
        ADVANCE(540);
      if (lookahead == 'T')
        ADVANCE(542);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(546);
      if (lookahead == 'S')
        ADVANCE(547);
      END_STATE();
    case 582:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(588);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(583);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(585);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(583);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(585);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(585);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(586);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(588);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        SKIP(582);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(588);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 590:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(591);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(590);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(598);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(599);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(596);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(598);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(599);
      END_STATE();
    case 598:
      if (lookahead == 'n')
        SKIP(593);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(605);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(606);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(601);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(603);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      if (lookahead == '\n')
        ADVANCE(601);
      if (lookahead == '\r')
        ADVANCE(604);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(605);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(600);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(606);
      END_STATE();
    case 605:
      if (lookahead == 'n')
        SKIP(600);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 607:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == ':')
        ADVANCE(612);
      if (lookahead == '\\')
        SKIP(613);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(607);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(608);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == ':')
        ADVANCE(609);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(608);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(608);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '\n')
        ADVANCE(608);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == ':')
        ADVANCE(612);
      if (lookahead == '\\')
        SKIP(613);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(607);
      END_STATE();
    case 612:
      if (lookahead == ':')
        ADVANCE(107);
      END_STATE();
    case 613:
      if (lookahead == 'n')
        SKIP(607);
      END_STATE();
    case 614:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(618);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(453);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(614);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 615:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(616);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'h')
        ADVANCE(443);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(615);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 616:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(615);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(618);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(453);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(614);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 618:
      if (lookahead == 'n')
        SKIP(614);
      END_STATE();
    case 619:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(621);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ' ')
        ADVANCE(623);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(621);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ' ')
        ADVANCE(623);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      if (lookahead == '\t')
        ADVANCE(621);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ' ')
        ADVANCE(623);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(621);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == ' ')
        ADVANCE(623);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '#')
        ADVANCE(11);
      if (lookahead == '$')
        ADVANCE(12);
      if (lookahead == '%')
        ADVANCE(13);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(420);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(421);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(624);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(622);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '\t')
        ADVANCE(431);
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == ' ')
        ADVANCE(425);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 626:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(627);
      if (lookahead == '\r')
        ADVANCE(629);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(630);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(626);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 627:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(627);
      if (lookahead == '\r')
        ADVANCE(627);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(628);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(627);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(627);
      if (lookahead == '\r')
        ADVANCE(629);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(630);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(626);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 630:
      if (lookahead == 'n')
        SKIP(626);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 367},
  [3] = {.lex_state = 165},
  [4] = {.lex_state = 382},
  [5] = {.lex_state = 405},
  [6] = {.lex_state = 405},
  [7] = {.lex_state = 405},
  [8] = {.lex_state = 412},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 417},
  [11] = {.lex_state = 430},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 367},
  [19] = {.lex_state = 405},
  [20] = {.lex_state = 438},
  [21] = {.lex_state = 438},
  [22] = {.lex_state = 165},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 405},
  [25] = {.lex_state = 405},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 459},
  [35] = {.lex_state = 430},
  [36] = {.lex_state = 430},
  [37] = {.lex_state = 430},
  [38] = {.lex_state = 430},
  [39] = {.lex_state = 165},
  [40] = {.lex_state = 430},
  [41] = {.lex_state = 430},
  [42] = {.lex_state = 563},
  [43] = {.lex_state = 430},
  [44] = {.lex_state = 430},
  [45] = {.lex_state = 165},
  [46] = {.lex_state = 165},
  [47] = {.lex_state = 405},
  [48] = {.lex_state = 367},
  [49] = {.lex_state = 438},
  [50] = {.lex_state = 405},
  [51] = {.lex_state = 405},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 165},
  [54] = {.lex_state = 165},
  [55] = {.lex_state = 165},
  [56] = {.lex_state = 165},
  [57] = {.lex_state = 165},
  [58] = {.lex_state = 165},
  [59] = {.lex_state = 165},
  [60] = {.lex_state = 405},
  [61] = {.lex_state = 405},
  [62] = {.lex_state = 582},
  [63] = {.lex_state = 405},
  [64] = {.lex_state = 165},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 589},
  [68] = {.lex_state = 593},
  [69] = {.lex_state = 600},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 430},
  [72] = {.lex_state = 430},
  [73] = {.lex_state = 589},
  [74] = {.lex_state = 593},
  [75] = {.lex_state = 600},
  [76] = {.lex_state = 430},
  [77] = {.lex_state = 430},
  [78] = {.lex_state = 165},
  [79] = {.lex_state = 165},
  [80] = {.lex_state = 367},
  [81] = {.lex_state = 607},
  [82] = {.lex_state = 607},
  [83] = {.lex_state = 165},
  [84] = {.lex_state = 405},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 165},
  [87] = {.lex_state = 607},
  [88] = {.lex_state = 614},
  [89] = {.lex_state = 614},
  [90] = {.lex_state = 405},
  [91] = {.lex_state = 165},
  [92] = {.lex_state = 165},
  [93] = {.lex_state = 405},
  [94] = {.lex_state = 165},
  [95] = {.lex_state = 405},
  [96] = {.lex_state = 405},
  [97] = {.lex_state = 165},
  [98] = {.lex_state = 405},
  [99] = {.lex_state = 405},
  [100] = {.lex_state = 165},
  [101] = {.lex_state = 165},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 593},
  [105] = {.lex_state = 593},
  [106] = {.lex_state = 600},
  [107] = {.lex_state = 600},
  [108] = {.lex_state = 430},
  [109] = {.lex_state = 430},
  [110] = {.lex_state = 430},
  [111] = {.lex_state = 430},
  [112] = {.lex_state = 619},
  [113] = {.lex_state = 619},
  [114] = {.lex_state = 405},
  [115] = {.lex_state = 367},
  [116] = {.lex_state = 607},
  [117] = {.lex_state = 405},
  [118] = {.lex_state = 165},
  [119] = {.lex_state = 614},
  [120] = {.lex_state = 405},
  [121] = {.lex_state = 405},
  [122] = {.lex_state = 165},
  [123] = {.lex_state = 607},
  [124] = {.lex_state = 165},
  [125] = {.lex_state = 607},
  [126] = {.lex_state = 165},
  [127] = {.lex_state = 405},
  [128] = {.lex_state = 607},
  [129] = {.lex_state = 607},
  [130] = {.lex_state = 626},
  [131] = {.lex_state = 165},
  [132] = {.lex_state = 593},
  [133] = {.lex_state = 600},
  [134] = {.lex_state = 430},
  [135] = {.lex_state = 619},
  [136] = {.lex_state = 607},
  [137] = {.lex_state = 405},
  [138] = {.lex_state = 367},
  [139] = {.lex_state = 367},
  [140] = {.lex_state = 607},
  [141] = {.lex_state = 165},
  [142] = {.lex_state = 367},
  [143] = {.lex_state = 607},
  [144] = {.lex_state = 607},
  [145] = {.lex_state = 405},
  [146] = {.lex_state = 165},
  [147] = {.lex_state = 405},
  [148] = {.lex_state = 607},
  [149] = {.lex_state = 165},
  [150] = {.lex_state = 405},
  [151] = {.lex_state = 405},
  [152] = {.lex_state = 607},
  [153] = {.lex_state = 405},
  [154] = {.lex_state = 165},
  [155] = {.lex_state = 607},
  [156] = {.lex_state = 607},
  [157] = {.lex_state = 607},
  [158] = {.lex_state = 405},
  [159] = {.lex_state = 607},
  [160] = {.lex_state = 607},
  [161] = {.lex_state = 607},
  [162] = {.lex_state = 405},
  [163] = {.lex_state = 607},
  [164] = {.lex_state = 367},
  [165] = {.lex_state = 607},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 607},
  [168] = {.lex_state = 607},
  [169] = {.lex_state = 405},
  [170] = {.lex_state = 405},
  [171] = {.lex_state = 607},
  [172] = {.lex_state = 405},
  [173] = {.lex_state = 165},
  [174] = {.lex_state = 607},
  [175] = {.lex_state = 405},
  [176] = {.lex_state = 607},
  [177] = {.lex_state = 165},
  [178] = {.lex_state = 607},
  [179] = {.lex_state = 607},
  [180] = {.lex_state = 367},
  [181] = {.lex_state = 607},
  [182] = {.lex_state = 405},
  [183] = {.lex_state = 607},
  [184] = {.lex_state = 607},
  [185] = {.lex_state = 607},
  [186] = {.lex_state = 607},
  [187] = {.lex_state = 607},
  [188] = {.lex_state = 165},
  [189] = {.lex_state = 607},
  [190] = {.lex_state = 607},
  [191] = {.lex_state = 607},
  [192] = {.lex_state = 367},
  [193] = {.lex_state = 607},
  [194] = {.lex_state = 607},
  [195] = {.lex_state = 165},
  [196] = {.lex_state = 607},
  [197] = {.lex_state = 607},
  [198] = {.lex_state = 607},
  [199] = {.lex_state = 607},
  [200] = {.lex_state = 165},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
    [sym__ascii_large] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [sym__vertical_tab] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(8),
    [anon_sym_n] = ACTIONS(3),
    [anon_sym_r] = ACTIONS(3),
    [anon_sym_t] = ACTIONS(3),
    [anon_sym_v] = ACTIONS(3),
    [anon_sym_NUL] = ACTIONS(3),
    [anon_sym_SOH] = ACTIONS(3),
    [anon_sym_STX] = ACTIONS(3),
    [anon_sym_HT] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(3),
    [anon_sym_VT] = ACTIONS(3),
    [anon_sym_SO] = ACTIONS(3),
    [anon_sym_SI] = ACTIONS(3),
    [anon_sym_NAK] = ACTIONS(3),
    [anon_sym_SYN] = ACTIONS(3),
    [anon_sym_SUB] = ACTIONS(3),
    [anon_sym_GS] = ACTIONS(3),
    [anon_sym_RS] = ACTIONS(3),
    [anon_sym_US] = ACTIONS(3),
    [anon_sym_SP] = ACTIONS(3),
    [sym__integer_literal] = ACTIONS(8),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
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
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [4] = {
    [sym__identifier] = STATE(21),
    [anon_sym_qualified] = ACTIONS(44),
    [sym_variable_identifier] = ACTIONS(46),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym__identifier] = STATE(22),
    [sym_simple_type] = STATE(23),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym__identifier] = STATE(25),
    [sym_simple_type] = STATE(26),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(25),
    [sym_simple_type] = STATE(27),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_BANG] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
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
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_import] = ACTIONS(62),
    [anon_sym_data] = ACTIONS(62),
    [anon_sym_newtype] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(64),
    [sym_module_identifier] = ACTIONS(64),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_class] = ACTIONS(62),
    [anon_sym_default] = ACTIONS(62),
    [anon_sym_deriving] = ACTIONS(62),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_foreign] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [anon_sym_in] = ACTIONS(62),
    [anon_sym_infix] = ACTIONS(62),
    [anon_sym_infixl] = ACTIONS(62),
    [anon_sym_infixr] = ACTIONS(62),
    [anon_sym_instance] = ACTIONS(62),
    [anon_sym_let] = ACTIONS(62),
    [anon_sym_of] = ACTIONS(62),
    [anon_sym_then] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym__integer_literal] = ACTIONS(62),
    [sym__octal_literal] = ACTIONS(62),
    [sym__hexidecimal_literal] = ACTIONS(62),
  },
  [10] = {
    [sym__graphic] = STATE(31),
    [sym__small] = STATE(32),
    [sym__large] = STATE(32),
    [sym__symbol] = STATE(32),
    [sym__special] = STATE(32),
    [sym__escape] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym__] = ACTIONS(70),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(70),
    [sym__ascii_large] = ACTIONS(78),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_1] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [sym__space] = ACTIONS(74),
  },
  [11] = {
    [sym__gap] = STATE(38),
    [sym__graphic] = STATE(38),
    [sym__small] = STATE(40),
    [sym__large] = STATE(40),
    [sym__symbol] = STATE(40),
    [sym__special] = STATE(40),
    [sym__escape] = STATE(38),
    [aux_sym_string_repeat1] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(86),
    [sym__ascii_large] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_1] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [sym__space] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
    [sym__tab] = ACTIONS(98),
    [sym__vertical_tab] = ACTIONS(98),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_import] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(102),
    [anon_sym_newtype] = ACTIONS(102),
    [anon_sym_type] = ACTIONS(102),
    [sym_variable_identifier] = ACTIONS(104),
    [sym_constructor_identifier] = ACTIONS(104),
    [sym_module_identifier] = ACTIONS(104),
    [anon_sym_case] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_deriving] = ACTIONS(102),
    [anon_sym_do] = ACTIONS(102),
    [anon_sym_else] = ACTIONS(102),
    [anon_sym_foreign] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_infix] = ACTIONS(102),
    [anon_sym_infixl] = ACTIONS(102),
    [anon_sym_infixr] = ACTIONS(102),
    [anon_sym_instance] = ACTIONS(102),
    [anon_sym_let] = ACTIONS(102),
    [anon_sym_of] = ACTIONS(102),
    [anon_sym_then] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym__integer_literal] = ACTIONS(102),
    [sym__octal_literal] = ACTIONS(102),
    [sym__hexidecimal_literal] = ACTIONS(102),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_newtype] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(112),
    [sym_constructor_identifier] = ACTIONS(112),
    [sym_module_identifier] = ACTIONS(112),
    [anon_sym_case] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(110),
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
    [anon_sym_of] = ACTIONS(110),
    [anon_sym_then] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym__integer_literal] = ACTIONS(110),
    [sym__octal_literal] = ACTIONS(110),
    [sym__hexidecimal_literal] = ACTIONS(110),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
    [anon_sym_import] = ACTIONS(116),
    [anon_sym_data] = ACTIONS(116),
    [anon_sym_newtype] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(116),
    [sym_variable_identifier] = ACTIONS(118),
    [sym_constructor_identifier] = ACTIONS(118),
    [sym_module_identifier] = ACTIONS(118),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_deriving] = ACTIONS(116),
    [anon_sym_do] = ACTIONS(116),
    [anon_sym_else] = ACTIONS(116),
    [anon_sym_foreign] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_infix] = ACTIONS(116),
    [anon_sym_infixl] = ACTIONS(116),
    [anon_sym_infixr] = ACTIONS(116),
    [anon_sym_instance] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym_of] = ACTIONS(116),
    [anon_sym_then] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym__integer_literal] = ACTIONS(116),
    [sym__octal_literal] = ACTIONS(116),
    [sym__hexidecimal_literal] = ACTIONS(116),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(122),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_data] = ACTIONS(122),
    [anon_sym_newtype] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(122),
    [sym_variable_identifier] = ACTIONS(124),
    [sym_constructor_identifier] = ACTIONS(124),
    [sym_module_identifier] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_class] = ACTIONS(122),
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
    [anon_sym_of] = ACTIONS(122),
    [anon_sym_then] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [sym__integer_literal] = ACTIONS(122),
    [sym__octal_literal] = ACTIONS(122),
    [sym__hexidecimal_literal] = ACTIONS(122),
  },
  [17] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [18] = {
    [sym_module_exports] = STATE(48),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [sym__identifier] = STATE(49),
    [sym_variable_identifier] = ACTIONS(132),
    [sym_constructor_identifier] = ACTIONS(46),
    [sym_module_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(26),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_as] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
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
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [21] = {
    [sym_import_specification] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(136),
    [anon_sym_where] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(136),
    [anon_sym_as] = ACTIONS(140),
    [anon_sym_hiding] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(136),
    [anon_sym_newtype] = ACTIONS(136),
    [anon_sym_type] = ACTIONS(136),
    [sym_variable_identifier] = ACTIONS(144),
    [sym_constructor_identifier] = ACTIONS(144),
    [sym_module_identifier] = ACTIONS(144),
    [anon_sym_case] = ACTIONS(136),
    [anon_sym_class] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(136),
    [anon_sym_deriving] = ACTIONS(136),
    [anon_sym_do] = ACTIONS(136),
    [anon_sym_else] = ACTIONS(136),
    [anon_sym_foreign] = ACTIONS(136),
    [anon_sym_if] = ACTIONS(136),
    [anon_sym_in] = ACTIONS(136),
    [anon_sym_infix] = ACTIONS(136),
    [anon_sym_infixl] = ACTIONS(136),
    [anon_sym_infixr] = ACTIONS(136),
    [anon_sym_instance] = ACTIONS(136),
    [anon_sym_let] = ACTIONS(136),
    [anon_sym_of] = ACTIONS(136),
    [anon_sym_then] = ACTIONS(136),
    [anon_sym__] = ACTIONS(136),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [sym__integer_literal] = ACTIONS(136),
    [sym__octal_literal] = ACTIONS(136),
    [sym__hexidecimal_literal] = ACTIONS(136),
  },
  [22] = {
    [sym__identifier] = STATE(54),
    [aux_sym_type_synonym_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_module] = ACTIONS(148),
    [anon_sym_where] = ACTIONS(148),
    [anon_sym_import] = ACTIONS(148),
    [anon_sym_data] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_newtype] = ACTIONS(148),
    [anon_sym_type] = ACTIONS(148),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(148),
    [anon_sym_class] = ACTIONS(148),
    [anon_sym_default] = ACTIONS(148),
    [anon_sym_deriving] = ACTIONS(148),
    [anon_sym_do] = ACTIONS(148),
    [anon_sym_else] = ACTIONS(148),
    [anon_sym_foreign] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(148),
    [anon_sym_in] = ACTIONS(148),
    [anon_sym_infix] = ACTIONS(148),
    [anon_sym_infixl] = ACTIONS(148),
    [anon_sym_infixr] = ACTIONS(148),
    [anon_sym_instance] = ACTIONS(148),
    [anon_sym_let] = ACTIONS(148),
    [anon_sym_of] = ACTIONS(148),
    [anon_sym_then] = ACTIONS(148),
    [anon_sym__] = ACTIONS(148),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym__integer_literal] = ACTIONS(148),
    [sym__octal_literal] = ACTIONS(148),
    [sym__hexidecimal_literal] = ACTIONS(148),
  },
  [23] = {
    [sym_constructors] = STATE(57),
    [sym_constructor] = STATE(58),
    [sym__identifier] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_module] = ACTIONS(154),
    [anon_sym_where] = ACTIONS(154),
    [anon_sym_import] = ACTIONS(154),
    [anon_sym_data] = ACTIONS(154),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_newtype] = ACTIONS(154),
    [anon_sym_type] = ACTIONS(154),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(154),
    [anon_sym_class] = ACTIONS(154),
    [anon_sym_default] = ACTIONS(154),
    [anon_sym_deriving] = ACTIONS(154),
    [anon_sym_do] = ACTIONS(154),
    [anon_sym_else] = ACTIONS(154),
    [anon_sym_foreign] = ACTIONS(154),
    [anon_sym_if] = ACTIONS(154),
    [anon_sym_in] = ACTIONS(154),
    [anon_sym_infix] = ACTIONS(154),
    [anon_sym_infixl] = ACTIONS(154),
    [anon_sym_infixr] = ACTIONS(154),
    [anon_sym_instance] = ACTIONS(154),
    [anon_sym_let] = ACTIONS(154),
    [anon_sym_of] = ACTIONS(154),
    [anon_sym_then] = ACTIONS(154),
    [anon_sym__] = ACTIONS(154),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(154),
    [sym__integer_literal] = ACTIONS(154),
    [sym__octal_literal] = ACTIONS(154),
    [sym__hexidecimal_literal] = ACTIONS(154),
  },
  [24] = {
    [anon_sym_EQ] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(56),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(26),
  },
  [25] = {
    [sym__identifier] = STATE(60),
    [aux_sym_type_synonym_repeat1] = STATE(61),
    [anon_sym_EQ] = ACTIONS(148),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [26] = {
    [anon_sym_EQ] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_EQ] = ACTIONS(162),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(164),
  },
  [29] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(166),
  },
  [30] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(168),
  },
  [31] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(170),
  },
  [32] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(172),
  },
  [33] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [34] = {
    [sym__char_escape] = STATE(66),
    [sym__ascii] = STATE(66),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(178),
    [anon_sym_AMP] = ACTIONS(176),
    [anon_sym_CARET] = ACTIONS(180),
    [anon_sym_BSLASH] = ACTIONS(176),
    [anon_sym_x] = ACTIONS(182),
    [anon_sym_X] = ACTIONS(182),
    [anon_sym_o] = ACTIONS(184),
    [anon_sym_O] = ACTIONS(184),
    [anon_sym_a] = ACTIONS(176),
    [anon_sym_b] = ACTIONS(176),
    [anon_sym_f] = ACTIONS(176),
    [anon_sym_n] = ACTIONS(176),
    [anon_sym_r] = ACTIONS(176),
    [anon_sym_t] = ACTIONS(176),
    [anon_sym_v] = ACTIONS(176),
    [anon_sym_NUL] = ACTIONS(186),
    [anon_sym_SOH] = ACTIONS(186),
    [anon_sym_STX] = ACTIONS(186),
    [anon_sym_ETX] = ACTIONS(186),
    [anon_sym_EOT] = ACTIONS(186),
    [anon_sym_ENQ] = ACTIONS(186),
    [anon_sym_ACK] = ACTIONS(186),
    [anon_sym_BEL] = ACTIONS(186),
    [anon_sym_BS] = ACTIONS(186),
    [anon_sym_HT] = ACTIONS(186),
    [anon_sym_LF] = ACTIONS(186),
    [anon_sym_VT] = ACTIONS(186),
    [anon_sym_FF] = ACTIONS(186),
    [anon_sym_CR] = ACTIONS(186),
    [anon_sym_SO] = ACTIONS(186),
    [anon_sym_SI] = ACTIONS(186),
    [anon_sym_DLE] = ACTIONS(186),
    [anon_sym_DC1] = ACTIONS(186),
    [anon_sym_DC2] = ACTIONS(186),
    [anon_sym_DC3] = ACTIONS(186),
    [anon_sym_DC4] = ACTIONS(186),
    [anon_sym_NAK] = ACTIONS(186),
    [anon_sym_SYN] = ACTIONS(186),
    [anon_sym_ETB] = ACTIONS(186),
    [anon_sym_CAN] = ACTIONS(186),
    [anon_sym_EM] = ACTIONS(186),
    [anon_sym_SUB] = ACTIONS(186),
    [anon_sym_ESC] = ACTIONS(186),
    [anon_sym_FS] = ACTIONS(186),
    [anon_sym_GS] = ACTIONS(186),
    [anon_sym_RS] = ACTIONS(186),
    [anon_sym_US] = ACTIONS(186),
    [anon_sym_SP] = ACTIONS(186),
    [anon_sym_DEL] = ACTIONS(186),
  },
  [35] = {
    [anon_sym_LPAREN] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_EQ] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_RBRACE] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(188),
    [anon_sym__] = ACTIONS(188),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(188),
    [sym__ascii_large] = ACTIONS(188),
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
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(188),
    [anon_sym_BSLASH] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_RBRACK] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [sym__space] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
    [sym__tab] = ACTIONS(188),
    [sym__vertical_tab] = ACTIONS(188),
  },
  [36] = {
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(190),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(190),
    [sym__ascii_large] = ACTIONS(190),
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
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [sym__space] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
    [sym__tab] = ACTIONS(190),
    [sym__vertical_tab] = ACTIONS(190),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(192),
    [sym__ascii_large] = ACTIONS(192),
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
  [38] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
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
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_module] = ACTIONS(198),
    [anon_sym_where] = ACTIONS(198),
    [anon_sym_import] = ACTIONS(198),
    [anon_sym_data] = ACTIONS(198),
    [anon_sym_newtype] = ACTIONS(198),
    [anon_sym_type] = ACTIONS(198),
    [sym_variable_identifier] = ACTIONS(200),
    [sym_constructor_identifier] = ACTIONS(200),
    [sym_module_identifier] = ACTIONS(200),
    [anon_sym_case] = ACTIONS(198),
    [anon_sym_class] = ACTIONS(198),
    [anon_sym_default] = ACTIONS(198),
    [anon_sym_deriving] = ACTIONS(198),
    [anon_sym_do] = ACTIONS(198),
    [anon_sym_else] = ACTIONS(198),
    [anon_sym_foreign] = ACTIONS(198),
    [anon_sym_if] = ACTIONS(198),
    [anon_sym_in] = ACTIONS(198),
    [anon_sym_infix] = ACTIONS(198),
    [anon_sym_infixl] = ACTIONS(198),
    [anon_sym_infixr] = ACTIONS(198),
    [anon_sym_instance] = ACTIONS(198),
    [anon_sym_let] = ACTIONS(198),
    [anon_sym_of] = ACTIONS(198),
    [anon_sym_then] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [sym__integer_literal] = ACTIONS(198),
    [sym__octal_literal] = ACTIONS(198),
    [sym__hexidecimal_literal] = ACTIONS(198),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_RBRACE] = ACTIONS(202),
    [anon_sym_BANG] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(202),
    [sym__ascii_large] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_DOLLAR] = ACTIONS(202),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_1] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_QMARK] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(202),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(202),
    [anon_sym_BSLASH] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [sym__space] = ACTIONS(202),
    [sym__newline] = ACTIONS(202),
    [sym__tab] = ACTIONS(202),
    [sym__vertical_tab] = ACTIONS(202),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_BANG] = ACTIONS(204),
    [anon_sym__] = ACTIONS(204),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(204),
    [sym__ascii_large] = ACTIONS(204),
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
    [anon_sym_DASH] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_BSLASH] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(204),
    [sym__space] = ACTIONS(204),
    [sym__newline] = ACTIONS(204),
    [sym__tab] = ACTIONS(204),
    [sym__vertical_tab] = ACTIONS(204),
  },
  [42] = {
    [sym__char_escape] = STATE(72),
    [sym__ascii] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_BANG] = ACTIONS(190),
    [anon_sym__] = ACTIONS(190),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(190),
    [sym__ascii_large] = ACTIONS(190),
    [anon_sym_POUND] = ACTIONS(190),
    [anon_sym_DOLLAR] = ACTIONS(190),
    [anon_sym_PERCENT] = ACTIONS(190),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_1] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(190),
    [anon_sym_DOT] = ACTIONS(190),
    [anon_sym_SLASH] = ACTIONS(190),
    [anon_sym_LT] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_QMARK] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_COLON] = ACTIONS(190),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [sym__space] = ACTIONS(190),
    [sym__newline] = ACTIONS(190),
    [sym__tab] = ACTIONS(190),
    [sym__vertical_tab] = ACTIONS(190),
    [anon_sym_x] = ACTIONS(212),
    [anon_sym_X] = ACTIONS(212),
    [anon_sym_o] = ACTIONS(214),
    [anon_sym_O] = ACTIONS(214),
    [anon_sym_a] = ACTIONS(206),
    [anon_sym_b] = ACTIONS(206),
    [anon_sym_f] = ACTIONS(206),
    [anon_sym_n] = ACTIONS(206),
    [anon_sym_r] = ACTIONS(206),
    [anon_sym_t] = ACTIONS(206),
    [anon_sym_v] = ACTIONS(206),
    [anon_sym_NUL] = ACTIONS(216),
    [anon_sym_SOH] = ACTIONS(216),
    [anon_sym_STX] = ACTIONS(216),
    [anon_sym_ETX] = ACTIONS(216),
    [anon_sym_EOT] = ACTIONS(216),
    [anon_sym_ENQ] = ACTIONS(216),
    [anon_sym_ACK] = ACTIONS(216),
    [anon_sym_BEL] = ACTIONS(216),
    [anon_sym_BS] = ACTIONS(216),
    [anon_sym_HT] = ACTIONS(216),
    [anon_sym_LF] = ACTIONS(216),
    [anon_sym_VT] = ACTIONS(216),
    [anon_sym_FF] = ACTIONS(216),
    [anon_sym_CR] = ACTIONS(216),
    [anon_sym_SO] = ACTIONS(216),
    [anon_sym_SI] = ACTIONS(216),
    [anon_sym_DLE] = ACTIONS(216),
    [anon_sym_DC1] = ACTIONS(216),
    [anon_sym_DC2] = ACTIONS(216),
    [anon_sym_DC3] = ACTIONS(216),
    [anon_sym_DC4] = ACTIONS(216),
    [anon_sym_NAK] = ACTIONS(216),
    [anon_sym_SYN] = ACTIONS(216),
    [anon_sym_ETB] = ACTIONS(216),
    [anon_sym_CAN] = ACTIONS(216),
    [anon_sym_EM] = ACTIONS(216),
    [anon_sym_SUB] = ACTIONS(216),
    [anon_sym_ESC] = ACTIONS(216),
    [anon_sym_FS] = ACTIONS(216),
    [anon_sym_GS] = ACTIONS(216),
    [anon_sym_RS] = ACTIONS(216),
    [anon_sym_US] = ACTIONS(216),
    [anon_sym_SP] = ACTIONS(216),
    [anon_sym_DEL] = ACTIONS(216),
  },
  [43] = {
    [anon_sym_LPAREN] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_EQ] = ACTIONS(218),
    [anon_sym_PIPE] = ACTIONS(218),
    [anon_sym_LBRACE] = ACTIONS(218),
    [anon_sym_RBRACE] = ACTIONS(218),
    [anon_sym_BANG] = ACTIONS(218),
    [anon_sym__] = ACTIONS(218),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(218),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(218),
    [sym__ascii_large] = ACTIONS(218),
    [anon_sym_POUND] = ACTIONS(218),
    [anon_sym_DOLLAR] = ACTIONS(218),
    [anon_sym_PERCENT] = ACTIONS(218),
    [anon_sym_AMP] = ACTIONS(218),
    [anon_sym_1] = ACTIONS(218),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_SLASH] = ACTIONS(218),
    [anon_sym_LT] = ACTIONS(218),
    [anon_sym_GT] = ACTIONS(218),
    [anon_sym_QMARK] = ACTIONS(218),
    [anon_sym_AT] = ACTIONS(218),
    [anon_sym_CARET] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_TILDE] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [anon_sym_BSLASH] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(218),
    [anon_sym_RBRACK] = ACTIONS(218),
    [anon_sym_BQUOTE] = ACTIONS(218),
    [sym__space] = ACTIONS(218),
    [sym__newline] = ACTIONS(218),
    [sym__tab] = ACTIONS(218),
    [sym__vertical_tab] = ACTIONS(218),
  },
  [44] = {
    [sym__gap] = STATE(77),
    [sym__graphic] = STATE(77),
    [sym__small] = STATE(40),
    [sym__large] = STATE(40),
    [sym__symbol] = STATE(40),
    [sym__special] = STATE(40),
    [sym__escape] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(86),
    [sym__ascii_large] = ACTIONS(94),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_1] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [sym__space] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
    [sym__tab] = ACTIONS(98),
    [sym__vertical_tab] = ACTIONS(98),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_module] = ACTIONS(226),
    [anon_sym_where] = ACTIONS(226),
    [anon_sym_import] = ACTIONS(226),
    [anon_sym_data] = ACTIONS(226),
    [anon_sym_newtype] = ACTIONS(226),
    [anon_sym_type] = ACTIONS(226),
    [sym_variable_identifier] = ACTIONS(228),
    [sym_constructor_identifier] = ACTIONS(228),
    [sym_module_identifier] = ACTIONS(228),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_class] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
    [anon_sym_deriving] = ACTIONS(226),
    [anon_sym_do] = ACTIONS(226),
    [anon_sym_else] = ACTIONS(226),
    [anon_sym_foreign] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [anon_sym_in] = ACTIONS(226),
    [anon_sym_infix] = ACTIONS(226),
    [anon_sym_infixl] = ACTIONS(226),
    [anon_sym_infixr] = ACTIONS(226),
    [anon_sym_instance] = ACTIONS(226),
    [anon_sym_let] = ACTIONS(226),
    [anon_sym_of] = ACTIONS(226),
    [anon_sym_then] = ACTIONS(226),
    [anon_sym__] = ACTIONS(226),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(228),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [sym__integer_literal] = ACTIONS(226),
    [sym__octal_literal] = ACTIONS(226),
    [sym__hexidecimal_literal] = ACTIONS(226),
  },
  [46] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [47] = {
    [sym_export] = STATE(81),
    [sym__identifier] = STATE(82),
    [anon_sym_RPAREN] = ACTIONS(232),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [48] = {
    [anon_sym_where] = ACTIONS(234),
    [sym_comment] = ACTIONS(26),
  },
  [49] = {
    [sym_import_specification] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_module] = ACTIONS(238),
    [anon_sym_where] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(238),
    [anon_sym_as] = ACTIONS(240),
    [anon_sym_hiding] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(238),
    [anon_sym_newtype] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(242),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_module_identifier] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
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
    [anon_sym_of] = ACTIONS(238),
    [anon_sym_then] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [sym__integer_literal] = ACTIONS(238),
    [sym__octal_literal] = ACTIONS(238),
    [sym__hexidecimal_literal] = ACTIONS(238),
  },
  [50] = {
    [sym__identifier] = STATE(87),
    [anon_sym_RPAREN] = ACTIONS(244),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [51] = {
    [sym__identifier] = STATE(89),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [anon_sym_LPAREN] = ACTIONS(250),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_module] = ACTIONS(238),
    [anon_sym_where] = ACTIONS(238),
    [anon_sym_import] = ACTIONS(238),
    [anon_sym_data] = ACTIONS(238),
    [anon_sym_newtype] = ACTIONS(238),
    [anon_sym_type] = ACTIONS(238),
    [sym_variable_identifier] = ACTIONS(242),
    [sym_constructor_identifier] = ACTIONS(242),
    [sym_module_identifier] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_class] = ACTIONS(238),
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
    [anon_sym_of] = ACTIONS(238),
    [anon_sym_then] = ACTIONS(238),
    [anon_sym__] = ACTIONS(238),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [sym__integer_literal] = ACTIONS(238),
    [sym__octal_literal] = ACTIONS(238),
    [sym__hexidecimal_literal] = ACTIONS(238),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_module] = ACTIONS(254),
    [anon_sym_where] = ACTIONS(254),
    [anon_sym_import] = ACTIONS(254),
    [anon_sym_data] = ACTIONS(254),
    [anon_sym_EQ] = ACTIONS(254),
    [anon_sym_newtype] = ACTIONS(254),
    [anon_sym_type] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(256),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(254),
    [anon_sym_class] = ACTIONS(254),
    [anon_sym_default] = ACTIONS(254),
    [anon_sym_deriving] = ACTIONS(254),
    [anon_sym_do] = ACTIONS(254),
    [anon_sym_else] = ACTIONS(254),
    [anon_sym_foreign] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(254),
    [anon_sym_in] = ACTIONS(254),
    [anon_sym_infix] = ACTIONS(254),
    [anon_sym_infixl] = ACTIONS(254),
    [anon_sym_infixr] = ACTIONS(254),
    [anon_sym_instance] = ACTIONS(254),
    [anon_sym_let] = ACTIONS(254),
    [anon_sym_of] = ACTIONS(254),
    [anon_sym_then] = ACTIONS(254),
    [anon_sym__] = ACTIONS(254),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(256),
    [anon_sym_SQUOTE] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [sym__integer_literal] = ACTIONS(254),
    [sym__octal_literal] = ACTIONS(254),
    [sym__hexidecimal_literal] = ACTIONS(254),
  },
  [55] = {
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(260),
    [anon_sym_where] = ACTIONS(260),
    [anon_sym_import] = ACTIONS(260),
    [anon_sym_data] = ACTIONS(260),
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_newtype] = ACTIONS(260),
    [anon_sym_type] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_class] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
    [anon_sym_deriving] = ACTIONS(260),
    [anon_sym_do] = ACTIONS(260),
    [anon_sym_else] = ACTIONS(260),
    [anon_sym_foreign] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [anon_sym_in] = ACTIONS(260),
    [anon_sym_infix] = ACTIONS(260),
    [anon_sym_infixl] = ACTIONS(260),
    [anon_sym_infixr] = ACTIONS(260),
    [anon_sym_instance] = ACTIONS(260),
    [anon_sym_let] = ACTIONS(260),
    [anon_sym_of] = ACTIONS(260),
    [anon_sym_then] = ACTIONS(260),
    [anon_sym__] = ACTIONS(260),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(262),
    [anon_sym_SQUOTE] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [sym__integer_literal] = ACTIONS(260),
    [sym__octal_literal] = ACTIONS(260),
    [sym__hexidecimal_literal] = ACTIONS(260),
  },
  [56] = {
    [sym_constructors] = STATE(92),
    [sym_constructor] = STATE(58),
    [sym__identifier] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(266),
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
    [anon_sym_of] = ACTIONS(266),
    [anon_sym_then] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(266),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(268),
    [sym_constructor_identifier] = ACTIONS(268),
    [sym_module_identifier] = ACTIONS(268),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_class] = ACTIONS(266),
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
    [anon_sym_of] = ACTIONS(266),
    [anon_sym_then] = ACTIONS(266),
    [anon_sym__] = ACTIONS(266),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [58] = {
    [aux_sym_constructors_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_PIPE] = ACTIONS(274),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(276),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_module_identifier] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(272),
    [anon_sym_do] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(272),
    [anon_sym_foreign] = ACTIONS(272),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_in] = ACTIONS(272),
    [anon_sym_infix] = ACTIONS(272),
    [anon_sym_infixl] = ACTIONS(272),
    [anon_sym_infixr] = ACTIONS(272),
    [anon_sym_instance] = ACTIONS(272),
    [anon_sym_let] = ACTIONS(272),
    [anon_sym_of] = ACTIONS(272),
    [anon_sym_then] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [59] = {
    [sym_fields] = STATE(97),
    [sym_strict] = STATE(97),
    [sym__identifier] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_module] = ACTIONS(280),
    [anon_sym_where] = ACTIONS(280),
    [anon_sym_import] = ACTIONS(280),
    [anon_sym_data] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(280),
    [anon_sym_newtype] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(284),
    [anon_sym_type] = ACTIONS(280),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(280),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_default] = ACTIONS(280),
    [anon_sym_deriving] = ACTIONS(280),
    [anon_sym_do] = ACTIONS(280),
    [anon_sym_else] = ACTIONS(280),
    [anon_sym_foreign] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
    [anon_sym_in] = ACTIONS(280),
    [anon_sym_infix] = ACTIONS(280),
    [anon_sym_infixl] = ACTIONS(280),
    [anon_sym_infixr] = ACTIONS(280),
    [anon_sym_instance] = ACTIONS(280),
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_of] = ACTIONS(280),
    [anon_sym_then] = ACTIONS(280),
    [anon_sym__] = ACTIONS(280),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(286),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym__integer_literal] = ACTIONS(280),
    [sym__octal_literal] = ACTIONS(280),
    [sym__hexidecimal_literal] = ACTIONS(280),
  },
  [60] = {
    [anon_sym_EQ] = ACTIONS(254),
    [sym_variable_identifier] = ACTIONS(254),
    [sym_constructor_identifier] = ACTIONS(256),
    [sym_module_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(26),
  },
  [61] = {
    [sym__identifier] = STATE(98),
    [anon_sym_EQ] = ACTIONS(260),
    [sym_variable_identifier] = ACTIONS(50),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(26),
  },
  [62] = {
    [sym_new_constructor] = STATE(100),
    [sym_constructor_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(26),
  },
  [63] = {
    [sym__identifier] = STATE(54),
    [aux_sym_type_synonym_repeat1] = STATE(101),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_module] = ACTIONS(292),
    [anon_sym_where] = ACTIONS(292),
    [anon_sym_import] = ACTIONS(292),
    [anon_sym_data] = ACTIONS(292),
    [anon_sym_newtype] = ACTIONS(292),
    [anon_sym_type] = ACTIONS(292),
    [sym_variable_identifier] = ACTIONS(294),
    [sym_constructor_identifier] = ACTIONS(294),
    [sym_module_identifier] = ACTIONS(294),
    [anon_sym_case] = ACTIONS(292),
    [anon_sym_class] = ACTIONS(292),
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
    [anon_sym_of] = ACTIONS(292),
    [anon_sym_then] = ACTIONS(292),
    [anon_sym__] = ACTIONS(292),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [anon_sym_DQUOTE] = ACTIONS(292),
    [sym__integer_literal] = ACTIONS(292),
    [sym__octal_literal] = ACTIONS(292),
    [sym__hexidecimal_literal] = ACTIONS(292),
  },
  [65] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(296),
  },
  [66] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(298),
  },
  [67] = {
    [sym__cntrl] = STATE(103),
    [anon_sym__] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [68] = {
    [aux_sym__escape_repeat1] = STATE(105),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(302),
  },
  [69] = {
    [aux_sym__escape_repeat2] = STATE(107),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(304),
  },
  [70] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(306),
  },
  [71] = {
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(308),
    [sym__ascii_large] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_1] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [sym__space] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
    [sym__tab] = ACTIONS(308),
    [sym__vertical_tab] = ACTIONS(308),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_PIPE] = ACTIONS(310),
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym__] = ACTIONS(310),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(310),
    [sym__ascii_large] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_DOLLAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(310),
    [anon_sym_1] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [anon_sym_QMARK] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(310),
    [anon_sym_CARET] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_COLON] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_LBRACK] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_BQUOTE] = ACTIONS(310),
    [sym__space] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
    [sym__tab] = ACTIONS(310),
    [sym__vertical_tab] = ACTIONS(310),
  },
  [73] = {
    [sym__cntrl] = STATE(109),
    [anon_sym__] = ACTIONS(312),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(312),
    [anon_sym_BSLASH] = ACTIONS(312),
    [anon_sym_LBRACK] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
  },
  [74] = {
    [aux_sym__escape_repeat1] = STATE(111),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(314),
  },
  [75] = {
    [aux_sym__escape_repeat2] = STATE(113),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(316),
  },
  [76] = {
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_PIPE] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym__] = ACTIONS(318),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(318),
    [sym__ascii_large] = ACTIONS(318),
    [anon_sym_POUND] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(318),
    [anon_sym_AMP] = ACTIONS(318),
    [anon_sym_1] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [anon_sym_SLASH] = ACTIONS(318),
    [anon_sym_LT] = ACTIONS(318),
    [anon_sym_GT] = ACTIONS(318),
    [anon_sym_QMARK] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_CARET] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_TILDE] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(318),
    [anon_sym_BSLASH] = ACTIONS(318),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LBRACK] = ACTIONS(318),
    [anon_sym_RBRACK] = ACTIONS(318),
    [anon_sym_BQUOTE] = ACTIONS(318),
    [sym__space] = ACTIONS(318),
    [sym__newline] = ACTIONS(318),
    [sym__tab] = ACTIONS(318),
    [sym__vertical_tab] = ACTIONS(318),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_EQ] = ACTIONS(320),
    [anon_sym_PIPE] = ACTIONS(320),
    [anon_sym_LBRACE] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(320),
    [anon_sym__] = ACTIONS(320),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(320),
    [anon_sym_DQUOTE] = ACTIONS(320),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(320),
    [sym__ascii_large] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(320),
    [anon_sym_DOLLAR] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(320),
    [anon_sym_AMP] = ACTIONS(320),
    [anon_sym_1] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_SLASH] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(320),
    [anon_sym_GT] = ACTIONS(320),
    [anon_sym_QMARK] = ACTIONS(320),
    [anon_sym_AT] = ACTIONS(320),
    [anon_sym_CARET] = ACTIONS(320),
    [anon_sym_DASH] = ACTIONS(320),
    [anon_sym_TILDE] = ACTIONS(320),
    [anon_sym_COLON] = ACTIONS(320),
    [anon_sym_BSLASH] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [anon_sym_BQUOTE] = ACTIONS(320),
    [sym__space] = ACTIONS(320),
    [sym__newline] = ACTIONS(320),
    [sym__tab] = ACTIONS(320),
    [sym__vertical_tab] = ACTIONS(320),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_module] = ACTIONS(324),
    [anon_sym_where] = ACTIONS(324),
    [anon_sym_import] = ACTIONS(324),
    [anon_sym_data] = ACTIONS(324),
    [anon_sym_newtype] = ACTIONS(324),
    [anon_sym_type] = ACTIONS(324),
    [sym_variable_identifier] = ACTIONS(326),
    [sym_constructor_identifier] = ACTIONS(326),
    [sym_module_identifier] = ACTIONS(326),
    [anon_sym_case] = ACTIONS(324),
    [anon_sym_class] = ACTIONS(324),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(326),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [sym__integer_literal] = ACTIONS(324),
    [sym__octal_literal] = ACTIONS(324),
    [sym__hexidecimal_literal] = ACTIONS(324),
  },
  [79] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [80] = {
    [anon_sym_where] = ACTIONS(330),
    [sym_comment] = ACTIONS(26),
  },
  [81] = {
    [aux_sym_module_exports_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(334),
    [sym_comment] = ACTIONS(26),
  },
  [82] = {
    [anon_sym_LPAREN] = ACTIONS(336),
    [anon_sym_COMMA] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [84] = {
    [sym__identifier] = STATE(119),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(248),
    [sym_module_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_module] = ACTIONS(344),
    [anon_sym_where] = ACTIONS(344),
    [anon_sym_import] = ACTIONS(344),
    [anon_sym_data] = ACTIONS(344),
    [anon_sym_newtype] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [sym_variable_identifier] = ACTIONS(346),
    [sym_constructor_identifier] = ACTIONS(346),
    [sym_module_identifier] = ACTIONS(346),
    [anon_sym_case] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_default] = ACTIONS(344),
    [anon_sym_deriving] = ACTIONS(344),
    [anon_sym_do] = ACTIONS(344),
    [anon_sym_else] = ACTIONS(344),
    [anon_sym_foreign] = ACTIONS(344),
    [anon_sym_if] = ACTIONS(344),
    [anon_sym_in] = ACTIONS(344),
    [anon_sym_infix] = ACTIONS(344),
    [anon_sym_infixl] = ACTIONS(344),
    [anon_sym_infixr] = ACTIONS(344),
    [anon_sym_instance] = ACTIONS(344),
    [anon_sym_let] = ACTIONS(344),
    [anon_sym_of] = ACTIONS(344),
    [anon_sym_then] = ACTIONS(344),
    [anon_sym__] = ACTIONS(344),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym__integer_literal] = ACTIONS(344),
    [sym__octal_literal] = ACTIONS(344),
    [sym__hexidecimal_literal] = ACTIONS(344),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_where] = ACTIONS(350),
    [anon_sym_import] = ACTIONS(350),
    [anon_sym_data] = ACTIONS(350),
    [anon_sym_newtype] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [anon_sym_case] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_default] = ACTIONS(350),
    [anon_sym_deriving] = ACTIONS(350),
    [anon_sym_do] = ACTIONS(350),
    [anon_sym_else] = ACTIONS(350),
    [anon_sym_foreign] = ACTIONS(350),
    [anon_sym_if] = ACTIONS(350),
    [anon_sym_in] = ACTIONS(350),
    [anon_sym_infix] = ACTIONS(350),
    [anon_sym_infixl] = ACTIONS(350),
    [anon_sym_infixr] = ACTIONS(350),
    [anon_sym_instance] = ACTIONS(350),
    [anon_sym_let] = ACTIONS(350),
    [anon_sym_of] = ACTIONS(350),
    [anon_sym_then] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(352),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym__integer_literal] = ACTIONS(350),
    [sym__octal_literal] = ACTIONS(350),
    [sym__hexidecimal_literal] = ACTIONS(350),
  },
  [87] = {
    [aux_sym_import_specification_repeat1] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
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
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [89] = {
    [sym_import_specification] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_module] = ACTIONS(344),
    [anon_sym_where] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(344),
    [anon_sym_hiding] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(344),
    [anon_sym_newtype] = ACTIONS(344),
    [anon_sym_type] = ACTIONS(344),
    [sym_variable_identifier] = ACTIONS(346),
    [sym_constructor_identifier] = ACTIONS(346),
    [sym_module_identifier] = ACTIONS(346),
    [anon_sym_case] = ACTIONS(344),
    [anon_sym_class] = ACTIONS(344),
    [anon_sym_default] = ACTIONS(344),
    [anon_sym_deriving] = ACTIONS(344),
    [anon_sym_do] = ACTIONS(344),
    [anon_sym_else] = ACTIONS(344),
    [anon_sym_foreign] = ACTIONS(344),
    [anon_sym_if] = ACTIONS(344),
    [anon_sym_in] = ACTIONS(344),
    [anon_sym_infix] = ACTIONS(344),
    [anon_sym_infixl] = ACTIONS(344),
    [anon_sym_infixr] = ACTIONS(344),
    [anon_sym_instance] = ACTIONS(344),
    [anon_sym_let] = ACTIONS(344),
    [anon_sym_of] = ACTIONS(344),
    [anon_sym_then] = ACTIONS(344),
    [anon_sym__] = ACTIONS(344),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym__integer_literal] = ACTIONS(344),
    [sym__octal_literal] = ACTIONS(344),
    [sym__hexidecimal_literal] = ACTIONS(344),
  },
  [90] = {
    [sym__identifier] = STATE(125),
    [anon_sym_RPAREN] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [anon_sym_module] = ACTIONS(362),
    [anon_sym_where] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_data] = ACTIONS(362),
    [anon_sym_EQ] = ACTIONS(362),
    [anon_sym_newtype] = ACTIONS(362),
    [anon_sym_type] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(364),
    [sym_constructor_identifier] = ACTIONS(364),
    [sym_module_identifier] = ACTIONS(364),
    [anon_sym_case] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_default] = ACTIONS(362),
    [anon_sym_deriving] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_else] = ACTIONS(362),
    [anon_sym_foreign] = ACTIONS(362),
    [anon_sym_if] = ACTIONS(362),
    [anon_sym_in] = ACTIONS(362),
    [anon_sym_infix] = ACTIONS(362),
    [anon_sym_infixl] = ACTIONS(362),
    [anon_sym_infixr] = ACTIONS(362),
    [anon_sym_instance] = ACTIONS(362),
    [anon_sym_let] = ACTIONS(362),
    [anon_sym_of] = ACTIONS(362),
    [anon_sym_then] = ACTIONS(362),
    [anon_sym__] = ACTIONS(362),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(364),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [sym__integer_literal] = ACTIONS(362),
    [sym__octal_literal] = ACTIONS(362),
    [sym__hexidecimal_literal] = ACTIONS(362),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_module] = ACTIONS(368),
    [anon_sym_where] = ACTIONS(368),
    [anon_sym_import] = ACTIONS(368),
    [anon_sym_data] = ACTIONS(368),
    [anon_sym_newtype] = ACTIONS(368),
    [anon_sym_type] = ACTIONS(368),
    [sym_variable_identifier] = ACTIONS(370),
    [sym_constructor_identifier] = ACTIONS(370),
    [sym_module_identifier] = ACTIONS(370),
    [anon_sym_case] = ACTIONS(368),
    [anon_sym_class] = ACTIONS(368),
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
    [anon_sym_of] = ACTIONS(368),
    [anon_sym_then] = ACTIONS(368),
    [anon_sym__] = ACTIONS(368),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(370),
    [anon_sym_SQUOTE] = ACTIONS(368),
    [anon_sym_DQUOTE] = ACTIONS(368),
    [sym__integer_literal] = ACTIONS(368),
    [sym__octal_literal] = ACTIONS(368),
    [sym__hexidecimal_literal] = ACTIONS(368),
  },
  [93] = {
    [sym_constructor] = STATE(126),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_module] = ACTIONS(374),
    [anon_sym_where] = ACTIONS(374),
    [anon_sym_import] = ACTIONS(374),
    [anon_sym_data] = ACTIONS(374),
    [anon_sym_PIPE] = ACTIONS(376),
    [anon_sym_newtype] = ACTIONS(374),
    [anon_sym_type] = ACTIONS(374),
    [sym_variable_identifier] = ACTIONS(378),
    [sym_constructor_identifier] = ACTIONS(378),
    [sym_module_identifier] = ACTIONS(378),
    [anon_sym_case] = ACTIONS(374),
    [anon_sym_class] = ACTIONS(374),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(378),
    [anon_sym_SQUOTE] = ACTIONS(374),
    [anon_sym_DQUOTE] = ACTIONS(374),
    [sym__integer_literal] = ACTIONS(374),
    [sym__octal_literal] = ACTIONS(374),
    [sym__hexidecimal_literal] = ACTIONS(374),
  },
  [95] = {
    [sym_field] = STATE(129),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [sym__identifier] = STATE(130),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_module] = ACTIONS(384),
    [anon_sym_where] = ACTIONS(384),
    [anon_sym_import] = ACTIONS(384),
    [anon_sym_data] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_newtype] = ACTIONS(384),
    [anon_sym_type] = ACTIONS(384),
    [sym_variable_identifier] = ACTIONS(386),
    [sym_constructor_identifier] = ACTIONS(386),
    [sym_module_identifier] = ACTIONS(386),
    [anon_sym_case] = ACTIONS(384),
    [anon_sym_class] = ACTIONS(384),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(386),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [anon_sym_DQUOTE] = ACTIONS(384),
    [sym__integer_literal] = ACTIONS(384),
    [sym__octal_literal] = ACTIONS(384),
    [sym__hexidecimal_literal] = ACTIONS(384),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(362),
    [sym_variable_identifier] = ACTIONS(362),
    [sym_constructor_identifier] = ACTIONS(364),
    [sym_module_identifier] = ACTIONS(364),
    [sym_comment] = ACTIONS(26),
  },
  [99] = {
    [sym_fields] = STATE(131),
    [sym__identifier] = STATE(131),
    [anon_sym_LBRACE] = ACTIONS(282),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_module] = ACTIONS(390),
    [anon_sym_where] = ACTIONS(390),
    [anon_sym_import] = ACTIONS(390),
    [anon_sym_data] = ACTIONS(390),
    [anon_sym_newtype] = ACTIONS(390),
    [anon_sym_type] = ACTIONS(390),
    [sym_variable_identifier] = ACTIONS(392),
    [sym_constructor_identifier] = ACTIONS(392),
    [sym_module_identifier] = ACTIONS(392),
    [anon_sym_case] = ACTIONS(390),
    [anon_sym_class] = ACTIONS(390),
    [anon_sym_default] = ACTIONS(390),
    [anon_sym_deriving] = ACTIONS(390),
    [anon_sym_do] = ACTIONS(390),
    [anon_sym_else] = ACTIONS(390),
    [anon_sym_foreign] = ACTIONS(390),
    [anon_sym_if] = ACTIONS(390),
    [anon_sym_in] = ACTIONS(390),
    [anon_sym_infix] = ACTIONS(390),
    [anon_sym_infixl] = ACTIONS(390),
    [anon_sym_infixr] = ACTIONS(390),
    [anon_sym_instance] = ACTIONS(390),
    [anon_sym_let] = ACTIONS(390),
    [anon_sym_of] = ACTIONS(390),
    [anon_sym_then] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [sym__integer_literal] = ACTIONS(390),
    [sym__octal_literal] = ACTIONS(390),
    [sym__hexidecimal_literal] = ACTIONS(390),
  },
  [101] = {
    [sym__identifier] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(396),
    [anon_sym_where] = ACTIONS(396),
    [anon_sym_import] = ACTIONS(396),
    [anon_sym_data] = ACTIONS(396),
    [anon_sym_newtype] = ACTIONS(396),
    [anon_sym_type] = ACTIONS(396),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(396),
    [anon_sym_class] = ACTIONS(396),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(398),
    [anon_sym_SQUOTE] = ACTIONS(396),
    [anon_sym_DQUOTE] = ACTIONS(396),
    [sym__integer_literal] = ACTIONS(396),
    [sym__octal_literal] = ACTIONS(396),
    [sym__hexidecimal_literal] = ACTIONS(396),
  },
  [102] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(400),
  },
  [103] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(402),
  },
  [104] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(404),
  },
  [105] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(408),
  },
  [106] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(410),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(410),
  },
  [107] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(406),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(412),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_EQ] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_BANG] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(414),
    [sym__ascii_large] = ACTIONS(414),
    [anon_sym_POUND] = ACTIONS(414),
    [anon_sym_DOLLAR] = ACTIONS(414),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_1] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(414),
    [anon_sym_AT] = ACTIONS(414),
    [anon_sym_CARET] = ACTIONS(414),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_TILDE] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(414),
    [anon_sym_BSLASH] = ACTIONS(414),
    [anon_sym_SEMI] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_RBRACK] = ACTIONS(414),
    [anon_sym_BQUOTE] = ACTIONS(414),
    [sym__space] = ACTIONS(414),
    [sym__newline] = ACTIONS(414),
    [sym__tab] = ACTIONS(414),
    [sym__vertical_tab] = ACTIONS(414),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_EQ] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_BANG] = ACTIONS(416),
    [anon_sym__] = ACTIONS(416),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(416),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(416),
    [sym__ascii_large] = ACTIONS(416),
    [anon_sym_POUND] = ACTIONS(416),
    [anon_sym_DOLLAR] = ACTIONS(416),
    [anon_sym_PERCENT] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_1] = ACTIONS(416),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_QMARK] = ACTIONS(416),
    [anon_sym_AT] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_TILDE] = ACTIONS(416),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_BSLASH] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(416),
    [anon_sym_BQUOTE] = ACTIONS(416),
    [sym__space] = ACTIONS(416),
    [sym__newline] = ACTIONS(416),
    [sym__tab] = ACTIONS(416),
    [sym__vertical_tab] = ACTIONS(416),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_EQ] = ACTIONS(418),
    [anon_sym_PIPE] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_BANG] = ACTIONS(418),
    [anon_sym__] = ACTIONS(418),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(418),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(418),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(418),
    [sym__ascii_large] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(418),
    [anon_sym_DOLLAR] = ACTIONS(418),
    [anon_sym_PERCENT] = ACTIONS(418),
    [anon_sym_AMP] = ACTIONS(418),
    [anon_sym_1] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_SLASH] = ACTIONS(418),
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_QMARK] = ACTIONS(418),
    [anon_sym_AT] = ACTIONS(418),
    [anon_sym_CARET] = ACTIONS(418),
    [anon_sym_DASH] = ACTIONS(418),
    [anon_sym_TILDE] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(418),
    [anon_sym_BSLASH] = ACTIONS(418),
    [anon_sym_SEMI] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(418),
    [anon_sym_BQUOTE] = ACTIONS(418),
    [sym__space] = ACTIONS(418),
    [sym__newline] = ACTIONS(418),
    [sym__tab] = ACTIONS(418),
    [sym__vertical_tab] = ACTIONS(418),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(418),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym__] = ACTIONS(420),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [anon_sym_DQUOTE] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(420),
    [sym__ascii_large] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_DOLLAR] = ACTIONS(420),
    [anon_sym_PERCENT] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_1] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_QMARK] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(420),
    [anon_sym_CARET] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_BSLASH] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_BQUOTE] = ACTIONS(420),
    [sym__space] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
    [sym__tab] = ACTIONS(420),
    [sym__vertical_tab] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(422),
  },
  [112] = {
    [anon_sym_LPAREN] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_EQ] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_RBRACE] = ACTIONS(424),
    [anon_sym_BANG] = ACTIONS(424),
    [anon_sym__] = ACTIONS(424),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(424),
    [anon_sym_DQUOTE] = ACTIONS(424),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(424),
    [sym__ascii_large] = ACTIONS(424),
    [anon_sym_POUND] = ACTIONS(424),
    [anon_sym_DOLLAR] = ACTIONS(424),
    [anon_sym_PERCENT] = ACTIONS(424),
    [anon_sym_AMP] = ACTIONS(424),
    [anon_sym_1] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_QMARK] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(424),
    [anon_sym_CARET] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(424),
    [anon_sym_BSLASH] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_RBRACK] = ACTIONS(424),
    [anon_sym_BQUOTE] = ACTIONS(424),
    [sym__space] = ACTIONS(424),
    [sym__newline] = ACTIONS(424),
    [sym__tab] = ACTIONS(424),
    [sym__vertical_tab] = ACTIONS(424),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(424),
  },
  [113] = {
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_EQ] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym__] = ACTIONS(420),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [anon_sym_DQUOTE] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(420),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(420),
    [sym__ascii_large] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_DOLLAR] = ACTIONS(420),
    [anon_sym_PERCENT] = ACTIONS(420),
    [anon_sym_AMP] = ACTIONS(420),
    [anon_sym_1] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_SLASH] = ACTIONS(420),
    [anon_sym_LT] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_QMARK] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(420),
    [anon_sym_CARET] = ACTIONS(420),
    [anon_sym_DASH] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_BSLASH] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_RBRACK] = ACTIONS(420),
    [anon_sym_BQUOTE] = ACTIONS(420),
    [sym__space] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
    [sym__tab] = ACTIONS(420),
    [sym__vertical_tab] = ACTIONS(420),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(426),
  },
  [114] = {
    [sym_export] = STATE(136),
    [sym__identifier] = STATE(82),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [anon_sym_where] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_comment] = ACTIONS(26),
  },
  [117] = {
    [sym__identifier] = STATE(140),
    [anon_sym_DOT_DOT] = ACTIONS(434),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [118] = {
    [sym__statement] = STATE(45),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(15),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [119] = {
    [sym_import_specification] = STATE(141),
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(138),
    [anon_sym_import] = ACTIONS(440),
    [anon_sym_hiding] = ACTIONS(142),
    [anon_sym_data] = ACTIONS(440),
    [anon_sym_newtype] = ACTIONS(440),
    [anon_sym_type] = ACTIONS(440),
    [sym_variable_identifier] = ACTIONS(442),
    [sym_constructor_identifier] = ACTIONS(442),
    [sym_module_identifier] = ACTIONS(442),
    [anon_sym_case] = ACTIONS(440),
    [anon_sym_class] = ACTIONS(440),
    [anon_sym_default] = ACTIONS(440),
    [anon_sym_deriving] = ACTIONS(440),
    [anon_sym_do] = ACTIONS(440),
    [anon_sym_else] = ACTIONS(440),
    [anon_sym_foreign] = ACTIONS(440),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_in] = ACTIONS(440),
    [anon_sym_infix] = ACTIONS(440),
    [anon_sym_infixl] = ACTIONS(440),
    [anon_sym_infixr] = ACTIONS(440),
    [anon_sym_instance] = ACTIONS(440),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_of] = ACTIONS(440),
    [anon_sym_then] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(442),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [sym__integer_literal] = ACTIONS(440),
    [sym__octal_literal] = ACTIONS(440),
    [sym__hexidecimal_literal] = ACTIONS(440),
  },
  [120] = {
    [sym__identifier] = STATE(143),
    [anon_sym_DOT_DOT] = ACTIONS(444),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [121] = {
    [sym__identifier] = STATE(144),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(446),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_where] = ACTIONS(448),
    [anon_sym_import] = ACTIONS(448),
    [anon_sym_data] = ACTIONS(448),
    [anon_sym_newtype] = ACTIONS(448),
    [anon_sym_type] = ACTIONS(448),
    [sym_variable_identifier] = ACTIONS(450),
    [sym_constructor_identifier] = ACTIONS(450),
    [sym_module_identifier] = ACTIONS(450),
    [anon_sym_case] = ACTIONS(448),
    [anon_sym_class] = ACTIONS(448),
    [anon_sym_default] = ACTIONS(448),
    [anon_sym_deriving] = ACTIONS(448),
    [anon_sym_do] = ACTIONS(448),
    [anon_sym_else] = ACTIONS(448),
    [anon_sym_foreign] = ACTIONS(448),
    [anon_sym_if] = ACTIONS(448),
    [anon_sym_in] = ACTIONS(448),
    [anon_sym_infix] = ACTIONS(448),
    [anon_sym_infixl] = ACTIONS(448),
    [anon_sym_infixr] = ACTIONS(448),
    [anon_sym_instance] = ACTIONS(448),
    [anon_sym_let] = ACTIONS(448),
    [anon_sym_of] = ACTIONS(448),
    [anon_sym_then] = ACTIONS(448),
    [anon_sym__] = ACTIONS(448),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(448),
    [sym__integer_literal] = ACTIONS(448),
    [sym__octal_literal] = ACTIONS(448),
    [sym__hexidecimal_literal] = ACTIONS(448),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(438),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_where] = ACTIONS(440),
    [anon_sym_import] = ACTIONS(440),
    [anon_sym_data] = ACTIONS(440),
    [anon_sym_newtype] = ACTIONS(440),
    [anon_sym_type] = ACTIONS(440),
    [sym_variable_identifier] = ACTIONS(442),
    [sym_constructor_identifier] = ACTIONS(442),
    [sym_module_identifier] = ACTIONS(442),
    [anon_sym_case] = ACTIONS(440),
    [anon_sym_class] = ACTIONS(440),
    [anon_sym_default] = ACTIONS(440),
    [anon_sym_deriving] = ACTIONS(440),
    [anon_sym_do] = ACTIONS(440),
    [anon_sym_else] = ACTIONS(440),
    [anon_sym_foreign] = ACTIONS(440),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_in] = ACTIONS(440),
    [anon_sym_infix] = ACTIONS(440),
    [anon_sym_infixl] = ACTIONS(440),
    [anon_sym_infixr] = ACTIONS(440),
    [anon_sym_instance] = ACTIONS(440),
    [anon_sym_let] = ACTIONS(440),
    [anon_sym_of] = ACTIONS(440),
    [anon_sym_then] = ACTIONS(440),
    [anon_sym__] = ACTIONS(440),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(442),
    [anon_sym_SQUOTE] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(440),
    [sym__integer_literal] = ACTIONS(440),
    [sym__octal_literal] = ACTIONS(440),
    [sym__hexidecimal_literal] = ACTIONS(440),
  },
  [125] = {
    [aux_sym_import_specification_repeat1] = STATE(148),
    [anon_sym_LPAREN] = ACTIONS(456),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_where] = ACTIONS(460),
    [anon_sym_import] = ACTIONS(460),
    [anon_sym_data] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(460),
    [anon_sym_newtype] = ACTIONS(460),
    [anon_sym_type] = ACTIONS(460),
    [sym_variable_identifier] = ACTIONS(462),
    [sym_constructor_identifier] = ACTIONS(462),
    [sym_module_identifier] = ACTIONS(462),
    [anon_sym_case] = ACTIONS(460),
    [anon_sym_class] = ACTIONS(460),
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
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [sym__integer_literal] = ACTIONS(460),
    [sym__octal_literal] = ACTIONS(460),
    [sym__hexidecimal_literal] = ACTIONS(460),
  },
  [127] = {
    [sym_constructor] = STATE(149),
    [sym__identifier] = STATE(59),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [128] = {
    [aux_sym_field_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_COLON_COLON] = ACTIONS(466),
    [sym_comment] = ACTIONS(26),
  },
  [129] = {
    [aux_sym_fields_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_RBRACE] = ACTIONS(470),
    [sym_comment] = ACTIONS(26),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_module] = ACTIONS(474),
    [anon_sym_where] = ACTIONS(474),
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_import] = ACTIONS(474),
    [anon_sym_data] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_newtype] = ACTIONS(474),
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_type] = ACTIONS(474),
    [sym_variable_identifier] = ACTIONS(476),
    [sym_constructor_identifier] = ACTIONS(476),
    [sym_module_identifier] = ACTIONS(476),
    [anon_sym_case] = ACTIONS(474),
    [anon_sym_class] = ACTIONS(474),
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
    [anon_sym_of] = ACTIONS(474),
    [anon_sym_then] = ACTIONS(474),
    [anon_sym__] = ACTIONS(474),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(474),
    [sym__integer_literal] = ACTIONS(474),
    [sym__octal_literal] = ACTIONS(474),
    [sym__hexidecimal_literal] = ACTIONS(474),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_module] = ACTIONS(480),
    [anon_sym_where] = ACTIONS(480),
    [anon_sym_import] = ACTIONS(480),
    [anon_sym_data] = ACTIONS(480),
    [anon_sym_newtype] = ACTIONS(480),
    [anon_sym_type] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(482),
    [sym_constructor_identifier] = ACTIONS(482),
    [sym_module_identifier] = ACTIONS(482),
    [anon_sym_case] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [anon_sym_deriving] = ACTIONS(480),
    [anon_sym_do] = ACTIONS(480),
    [anon_sym_else] = ACTIONS(480),
    [anon_sym_foreign] = ACTIONS(480),
    [anon_sym_if] = ACTIONS(480),
    [anon_sym_in] = ACTIONS(480),
    [anon_sym_infix] = ACTIONS(480),
    [anon_sym_infixl] = ACTIONS(480),
    [anon_sym_infixr] = ACTIONS(480),
    [anon_sym_instance] = ACTIONS(480),
    [anon_sym_let] = ACTIONS(480),
    [anon_sym_of] = ACTIONS(480),
    [anon_sym_then] = ACTIONS(480),
    [anon_sym__] = ACTIONS(480),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(482),
    [anon_sym_SQUOTE] = ACTIONS(480),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [sym__integer_literal] = ACTIONS(480),
    [sym__octal_literal] = ACTIONS(480),
    [sym__hexidecimal_literal] = ACTIONS(480),
  },
  [132] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(484),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(484),
  },
  [133] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(486),
  },
  [134] = {
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_LBRACE] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [anon_sym_BANG] = ACTIONS(488),
    [anon_sym__] = ACTIONS(488),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(488),
    [anon_sym_DQUOTE] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(488),
    [sym__ascii_large] = ACTIONS(488),
    [anon_sym_POUND] = ACTIONS(488),
    [anon_sym_DOLLAR] = ACTIONS(488),
    [anon_sym_PERCENT] = ACTIONS(488),
    [anon_sym_AMP] = ACTIONS(488),
    [anon_sym_1] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_LT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(488),
    [anon_sym_TILDE] = ACTIONS(488),
    [anon_sym_COLON] = ACTIONS(488),
    [anon_sym_BSLASH] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [anon_sym_BQUOTE] = ACTIONS(488),
    [sym__space] = ACTIONS(488),
    [sym__newline] = ACTIONS(488),
    [sym__tab] = ACTIONS(488),
    [sym__vertical_tab] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(488),
  },
  [135] = {
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_EQ] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_BANG] = ACTIONS(490),
    [anon_sym__] = ACTIONS(490),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(490),
    [anon_sym_DQUOTE] = ACTIONS(490),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(490),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(490),
    [sym__ascii_large] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(490),
    [anon_sym_DOLLAR] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [anon_sym_1] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_DOT] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(490),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_QMARK] = ACTIONS(490),
    [anon_sym_AT] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_TILDE] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(490),
    [anon_sym_BSLASH] = ACTIONS(490),
    [anon_sym_SEMI] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [anon_sym_BQUOTE] = ACTIONS(490),
    [sym__space] = ACTIONS(490),
    [sym__newline] = ACTIONS(490),
    [sym__tab] = ACTIONS(490),
    [sym__vertical_tab] = ACTIONS(490),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(490),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym_comment] = ACTIONS(26),
  },
  [137] = {
    [sym_export] = STATE(156),
    [sym__identifier] = STATE(82),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [anon_sym_where] = ACTIONS(494),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [aux_sym_export_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(496),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_module] = ACTIONS(502),
    [anon_sym_where] = ACTIONS(502),
    [anon_sym_import] = ACTIONS(502),
    [anon_sym_data] = ACTIONS(502),
    [anon_sym_newtype] = ACTIONS(502),
    [anon_sym_type] = ACTIONS(502),
    [sym_variable_identifier] = ACTIONS(504),
    [sym_constructor_identifier] = ACTIONS(504),
    [sym_module_identifier] = ACTIONS(504),
    [anon_sym_case] = ACTIONS(502),
    [anon_sym_class] = ACTIONS(502),
    [anon_sym_default] = ACTIONS(502),
    [anon_sym_deriving] = ACTIONS(502),
    [anon_sym_do] = ACTIONS(502),
    [anon_sym_else] = ACTIONS(502),
    [anon_sym_foreign] = ACTIONS(502),
    [anon_sym_if] = ACTIONS(502),
    [anon_sym_in] = ACTIONS(502),
    [anon_sym_infix] = ACTIONS(502),
    [anon_sym_infixl] = ACTIONS(502),
    [anon_sym_infixr] = ACTIONS(502),
    [anon_sym_instance] = ACTIONS(502),
    [anon_sym_let] = ACTIONS(502),
    [anon_sym_of] = ACTIONS(502),
    [anon_sym_then] = ACTIONS(502),
    [anon_sym__] = ACTIONS(502),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [sym__integer_literal] = ACTIONS(502),
    [sym__octal_literal] = ACTIONS(502),
    [sym__hexidecimal_literal] = ACTIONS(502),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(506),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [aux_sym_export_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(506),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [sym__identifier] = STATE(163),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_module] = ACTIONS(514),
    [anon_sym_where] = ACTIONS(514),
    [anon_sym_import] = ACTIONS(514),
    [anon_sym_data] = ACTIONS(514),
    [anon_sym_newtype] = ACTIONS(514),
    [anon_sym_type] = ACTIONS(514),
    [sym_variable_identifier] = ACTIONS(516),
    [sym_constructor_identifier] = ACTIONS(516),
    [sym_module_identifier] = ACTIONS(516),
    [anon_sym_case] = ACTIONS(514),
    [anon_sym_class] = ACTIONS(514),
    [anon_sym_default] = ACTIONS(514),
    [anon_sym_deriving] = ACTIONS(514),
    [anon_sym_do] = ACTIONS(514),
    [anon_sym_else] = ACTIONS(514),
    [anon_sym_foreign] = ACTIONS(514),
    [anon_sym_if] = ACTIONS(514),
    [anon_sym_in] = ACTIONS(514),
    [anon_sym_infix] = ACTIONS(514),
    [anon_sym_infixl] = ACTIONS(514),
    [anon_sym_infixr] = ACTIONS(514),
    [anon_sym_instance] = ACTIONS(514),
    [anon_sym_let] = ACTIONS(514),
    [anon_sym_of] = ACTIONS(514),
    [anon_sym_then] = ACTIONS(514),
    [anon_sym__] = ACTIONS(514),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(516),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [sym__integer_literal] = ACTIONS(514),
    [sym__octal_literal] = ACTIONS(514),
    [sym__hexidecimal_literal] = ACTIONS(514),
  },
  [147] = {
    [sym__identifier] = STATE(165),
    [anon_sym_DOT_DOT] = ACTIONS(518),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_comment] = ACTIONS(26),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(522),
    [anon_sym_module] = ACTIONS(524),
    [anon_sym_where] = ACTIONS(524),
    [anon_sym_import] = ACTIONS(524),
    [anon_sym_data] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_newtype] = ACTIONS(524),
    [anon_sym_type] = ACTIONS(524),
    [sym_variable_identifier] = ACTIONS(526),
    [sym_constructor_identifier] = ACTIONS(526),
    [sym_module_identifier] = ACTIONS(526),
    [anon_sym_case] = ACTIONS(524),
    [anon_sym_class] = ACTIONS(524),
    [anon_sym_default] = ACTIONS(524),
    [anon_sym_deriving] = ACTIONS(524),
    [anon_sym_do] = ACTIONS(524),
    [anon_sym_else] = ACTIONS(524),
    [anon_sym_foreign] = ACTIONS(524),
    [anon_sym_if] = ACTIONS(524),
    [anon_sym_in] = ACTIONS(524),
    [anon_sym_infix] = ACTIONS(524),
    [anon_sym_infixl] = ACTIONS(524),
    [anon_sym_infixr] = ACTIONS(524),
    [anon_sym_instance] = ACTIONS(524),
    [anon_sym_let] = ACTIONS(524),
    [anon_sym_of] = ACTIONS(524),
    [anon_sym_then] = ACTIONS(524),
    [anon_sym__] = ACTIONS(524),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(524),
    [anon_sym_DQUOTE] = ACTIONS(524),
    [sym__integer_literal] = ACTIONS(524),
    [sym__octal_literal] = ACTIONS(524),
    [sym__hexidecimal_literal] = ACTIONS(524),
  },
  [150] = {
    [sym_variable_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [sym_strict] = STATE(168),
    [sym__identifier] = STATE(168),
    [anon_sym_BANG] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_COLON_COLON] = ACTIONS(532),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [sym_field] = STATE(171),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_module] = ACTIONS(536),
    [anon_sym_where] = ACTIONS(536),
    [anon_sym_import] = ACTIONS(536),
    [anon_sym_data] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(536),
    [anon_sym_newtype] = ACTIONS(536),
    [anon_sym_type] = ACTIONS(536),
    [sym_variable_identifier] = ACTIONS(538),
    [sym_constructor_identifier] = ACTIONS(538),
    [sym_module_identifier] = ACTIONS(538),
    [anon_sym_case] = ACTIONS(536),
    [anon_sym_class] = ACTIONS(536),
    [anon_sym_default] = ACTIONS(536),
    [anon_sym_deriving] = ACTIONS(536),
    [anon_sym_do] = ACTIONS(536),
    [anon_sym_else] = ACTIONS(536),
    [anon_sym_foreign] = ACTIONS(536),
    [anon_sym_if] = ACTIONS(536),
    [anon_sym_in] = ACTIONS(536),
    [anon_sym_infix] = ACTIONS(536),
    [anon_sym_infixl] = ACTIONS(536),
    [anon_sym_infixr] = ACTIONS(536),
    [anon_sym_instance] = ACTIONS(536),
    [anon_sym_let] = ACTIONS(536),
    [anon_sym_of] = ACTIONS(536),
    [anon_sym_then] = ACTIONS(536),
    [anon_sym__] = ACTIONS(536),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(536),
    [sym__integer_literal] = ACTIONS(536),
    [sym__octal_literal] = ACTIONS(536),
    [sym__hexidecimal_literal] = ACTIONS(536),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(542),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [sym__identifier] = STATE(174),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [aux_sym_import_specification_repeat1] = STATE(178),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(552),
    [sym_comment] = ACTIONS(26),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [sym__identifier] = STATE(181),
    [anon_sym_DOT_DOT] = ACTIONS(556),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [anon_sym_LPAREN] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(560),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [aux_sym_export_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(562),
    [anon_sym_module] = ACTIONS(564),
    [anon_sym_where] = ACTIONS(564),
    [anon_sym_import] = ACTIONS(564),
    [anon_sym_data] = ACTIONS(564),
    [anon_sym_newtype] = ACTIONS(564),
    [anon_sym_type] = ACTIONS(564),
    [sym_variable_identifier] = ACTIONS(566),
    [sym_constructor_identifier] = ACTIONS(566),
    [sym_module_identifier] = ACTIONS(566),
    [anon_sym_case] = ACTIONS(564),
    [anon_sym_class] = ACTIONS(564),
    [anon_sym_default] = ACTIONS(564),
    [anon_sym_deriving] = ACTIONS(564),
    [anon_sym_do] = ACTIONS(564),
    [anon_sym_else] = ACTIONS(564),
    [anon_sym_foreign] = ACTIONS(564),
    [anon_sym_if] = ACTIONS(564),
    [anon_sym_in] = ACTIONS(564),
    [anon_sym_infix] = ACTIONS(564),
    [anon_sym_infixl] = ACTIONS(564),
    [anon_sym_infixr] = ACTIONS(564),
    [anon_sym_instance] = ACTIONS(564),
    [anon_sym_let] = ACTIONS(564),
    [anon_sym_of] = ACTIONS(564),
    [anon_sym_then] = ACTIONS(564),
    [anon_sym__] = ACTIONS(564),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(566),
    [anon_sym_SQUOTE] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(564),
    [sym__integer_literal] = ACTIONS(564),
    [sym__octal_literal] = ACTIONS(564),
    [sym__hexidecimal_literal] = ACTIONS(564),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_COLON_COLON] = ACTIONS(568),
    [sym_comment] = ACTIONS(26),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(570),
    [anon_sym_RBRACE] = ACTIONS(570),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [sym_variable_identifier] = ACTIONS(572),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [sym_strict] = STATE(185),
    [sym__identifier] = STATE(185),
    [anon_sym_BANG] = ACTIONS(284),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [sym_comment] = ACTIONS(26),
  },
  [172] = {
    [sym_field] = STATE(186),
    [sym_variable_identifier] = ACTIONS(380),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_module] = ACTIONS(578),
    [anon_sym_where] = ACTIONS(578),
    [anon_sym_import] = ACTIONS(578),
    [anon_sym_data] = ACTIONS(578),
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_newtype] = ACTIONS(578),
    [anon_sym_type] = ACTIONS(578),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_constructor_identifier] = ACTIONS(580),
    [sym_module_identifier] = ACTIONS(580),
    [anon_sym_case] = ACTIONS(578),
    [anon_sym_class] = ACTIONS(578),
    [anon_sym_default] = ACTIONS(578),
    [anon_sym_deriving] = ACTIONS(578),
    [anon_sym_do] = ACTIONS(578),
    [anon_sym_else] = ACTIONS(578),
    [anon_sym_foreign] = ACTIONS(578),
    [anon_sym_if] = ACTIONS(578),
    [anon_sym_in] = ACTIONS(578),
    [anon_sym_infix] = ACTIONS(578),
    [anon_sym_infixl] = ACTIONS(578),
    [anon_sym_infixr] = ACTIONS(578),
    [anon_sym_instance] = ACTIONS(578),
    [anon_sym_let] = ACTIONS(578),
    [anon_sym_of] = ACTIONS(578),
    [anon_sym_then] = ACTIONS(578),
    [anon_sym__] = ACTIONS(578),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [sym__integer_literal] = ACTIONS(578),
    [sym__octal_literal] = ACTIONS(578),
    [sym__hexidecimal_literal] = ACTIONS(578),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [sym__identifier] = STATE(187),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_module] = ACTIONS(588),
    [anon_sym_where] = ACTIONS(588),
    [anon_sym_import] = ACTIONS(588),
    [anon_sym_data] = ACTIONS(588),
    [anon_sym_newtype] = ACTIONS(588),
    [anon_sym_type] = ACTIONS(588),
    [sym_variable_identifier] = ACTIONS(590),
    [sym_constructor_identifier] = ACTIONS(590),
    [sym_module_identifier] = ACTIONS(590),
    [anon_sym_case] = ACTIONS(588),
    [anon_sym_class] = ACTIONS(588),
    [anon_sym_default] = ACTIONS(588),
    [anon_sym_deriving] = ACTIONS(588),
    [anon_sym_do] = ACTIONS(588),
    [anon_sym_else] = ACTIONS(588),
    [anon_sym_foreign] = ACTIONS(588),
    [anon_sym_if] = ACTIONS(588),
    [anon_sym_in] = ACTIONS(588),
    [anon_sym_infix] = ACTIONS(588),
    [anon_sym_infixl] = ACTIONS(588),
    [anon_sym_infixr] = ACTIONS(588),
    [anon_sym_instance] = ACTIONS(588),
    [anon_sym_let] = ACTIONS(588),
    [anon_sym_of] = ACTIONS(588),
    [anon_sym_then] = ACTIONS(588),
    [anon_sym__] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [sym__integer_literal] = ACTIONS(588),
    [sym__octal_literal] = ACTIONS(588),
    [sym__hexidecimal_literal] = ACTIONS(588),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [aux_sym_import_specification_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [aux_sym_export_repeat1] = STATE(191),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(594),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [sym__identifier] = STATE(193),
    [anon_sym_DOT_DOT] = ACTIONS(596),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_COLON_COLON] = ACTIONS(600),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_RBRACE] = ACTIONS(602),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_RBRACE] = ACTIONS(604),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(608),
    [anon_sym_module] = ACTIONS(610),
    [anon_sym_where] = ACTIONS(610),
    [anon_sym_import] = ACTIONS(610),
    [anon_sym_data] = ACTIONS(610),
    [anon_sym_newtype] = ACTIONS(610),
    [anon_sym_type] = ACTIONS(610),
    [sym_variable_identifier] = ACTIONS(612),
    [sym_constructor_identifier] = ACTIONS(612),
    [sym_module_identifier] = ACTIONS(612),
    [anon_sym_case] = ACTIONS(610),
    [anon_sym_class] = ACTIONS(610),
    [anon_sym_default] = ACTIONS(610),
    [anon_sym_deriving] = ACTIONS(610),
    [anon_sym_do] = ACTIONS(610),
    [anon_sym_else] = ACTIONS(610),
    [anon_sym_foreign] = ACTIONS(610),
    [anon_sym_if] = ACTIONS(610),
    [anon_sym_in] = ACTIONS(610),
    [anon_sym_infix] = ACTIONS(610),
    [anon_sym_infixl] = ACTIONS(610),
    [anon_sym_infixr] = ACTIONS(610),
    [anon_sym_instance] = ACTIONS(610),
    [anon_sym_let] = ACTIONS(610),
    [anon_sym_of] = ACTIONS(610),
    [anon_sym_then] = ACTIONS(610),
    [anon_sym__] = ACTIONS(610),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(612),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [sym__integer_literal] = ACTIONS(610),
    [sym__octal_literal] = ACTIONS(610),
    [sym__hexidecimal_literal] = ACTIONS(610),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(26),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(616),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [aux_sym_export_repeat1] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(618),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [aux_sym_import_specification_repeat1] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(614),
    [sym_comment] = ACTIONS(26),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_module] = ACTIONS(622),
    [anon_sym_where] = ACTIONS(622),
    [anon_sym_import] = ACTIONS(622),
    [anon_sym_data] = ACTIONS(622),
    [anon_sym_newtype] = ACTIONS(622),
    [anon_sym_type] = ACTIONS(622),
    [sym_variable_identifier] = ACTIONS(624),
    [sym_constructor_identifier] = ACTIONS(624),
    [sym_module_identifier] = ACTIONS(624),
    [anon_sym_case] = ACTIONS(622),
    [anon_sym_class] = ACTIONS(622),
    [anon_sym_default] = ACTIONS(622),
    [anon_sym_deriving] = ACTIONS(622),
    [anon_sym_do] = ACTIONS(622),
    [anon_sym_else] = ACTIONS(622),
    [anon_sym_foreign] = ACTIONS(622),
    [anon_sym_if] = ACTIONS(622),
    [anon_sym_in] = ACTIONS(622),
    [anon_sym_infix] = ACTIONS(622),
    [anon_sym_infixl] = ACTIONS(622),
    [anon_sym_infixr] = ACTIONS(622),
    [anon_sym_instance] = ACTIONS(622),
    [anon_sym_let] = ACTIONS(622),
    [anon_sym_of] = ACTIONS(622),
    [anon_sym_then] = ACTIONS(622),
    [anon_sym__] = ACTIONS(622),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym__integer_literal] = ACTIONS(622),
    [sym__octal_literal] = ACTIONS(622),
    [sym__hexidecimal_literal] = ACTIONS(622),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(626),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_comment] = ACTIONS(26),
  },
  [197] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(628),
    [sym_comment] = ACTIONS(26),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_comment] = ACTIONS(26),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_comment] = ACTIONS(26),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(634),
    [anon_sym_module] = ACTIONS(636),
    [anon_sym_where] = ACTIONS(636),
    [anon_sym_import] = ACTIONS(636),
    [anon_sym_data] = ACTIONS(636),
    [anon_sym_newtype] = ACTIONS(636),
    [anon_sym_type] = ACTIONS(636),
    [sym_variable_identifier] = ACTIONS(638),
    [sym_constructor_identifier] = ACTIONS(638),
    [sym_module_identifier] = ACTIONS(638),
    [anon_sym_case] = ACTIONS(636),
    [anon_sym_class] = ACTIONS(636),
    [anon_sym_default] = ACTIONS(636),
    [anon_sym_deriving] = ACTIONS(636),
    [anon_sym_do] = ACTIONS(636),
    [anon_sym_else] = ACTIONS(636),
    [anon_sym_foreign] = ACTIONS(636),
    [anon_sym_if] = ACTIONS(636),
    [anon_sym_in] = ACTIONS(636),
    [anon_sym_infix] = ACTIONS(636),
    [anon_sym_infixl] = ACTIONS(636),
    [anon_sym_infixr] = ACTIONS(636),
    [anon_sym_instance] = ACTIONS(636),
    [anon_sym_let] = ACTIONS(636),
    [anon_sym_of] = ACTIONS(636),
    [anon_sym_then] = ACTIONS(636),
    [anon_sym__] = ACTIONS(636),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [sym__integer_literal] = ACTIONS(636),
    [sym__octal_literal] = ACTIONS(636),
    [sym__hexidecimal_literal] = ACTIONS(636),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(8),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(24),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(29),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(31),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [242] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [248] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 1),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .fragile = true, .alias_sequence_id = 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1, .fragile = true),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [312] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 3),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [346] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [364] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_synonym_repeat1, 2),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [378] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [386] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [418] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(134),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(135),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 4),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [476] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [482] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [590] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [624] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
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
